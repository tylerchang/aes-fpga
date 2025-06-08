/*
 * AES WAV File Encryptor/Decryptor
 * 
 * Userspace program that encrypts or decrypts WAV files using the hardware
 * AES implementation via FIFOs and control registers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <stdint.h>
#include <errno.h>
#include <stdbool.h>
#include <getopt.h>
#include "drivers/fifo_write.h"
#include "drivers/fifo_read.h"
#include "drivers/aes_ctl.h"
#include "drivers/round_keys.h"

// AES is a block cipher with 16-byte (128-bit) blocks
#define AES_BLOCK_SIZE 16

// Default FIFO processing delay in microseconds
#define DEFAULT_FIFO_DELAY 1000

// Buffer for reading/writing data
#define BUFFER_SIZE 4096

// AES Control Values
#define AES_ENCRYPT_MODE 1
#define AES_DECRYPT_MODE 3

// Define WAV header structure
typedef struct {
    // RIFF Header
    char riff_header[4];      // Contains "RIFF"
    uint32_t wav_size;        // Size of the wav portion of the file
    char wave_header[4];      // Contains "WAVE"
    
    // Format Header
    char fmt_header[4];       // Contains "fmt " (note space after fmt)
    uint32_t fmt_chunk_size;  // Should be 16 for PCM
    uint16_t audio_format;    // Should be 1 for PCM
    uint16_t num_channels;    // 1 for mono, 2 for stereo
    uint32_t sample_rate;     // 8000, 44100, etc.
    uint32_t byte_rate;       // SampleRate * NumChannels * BitsPerSample/8
    uint16_t block_align;     // NumChannels * BitsPerSample/8
    uint16_t bits_per_sample; // 8 bits, 16 bits, etc.
    
    // Data Header
    char data_header[4];      // Contains "data"
    uint32_t data_size;       // Size of the data section
} WAVHeader;

// File descriptors for device drivers
int fifo_write_fd = -1;
int fifo_read_fd = -1;
int aes_ctl_fd = -1;
int round_keys_fd = -1;

// Program options and state
typedef struct {
    bool encrypt;
    bool decrypt;
    char *input_file;
    char *output_file;
    char *key_hex;
    int fifo_delay;
} program_options;

// Function prototypes
static void print_usage(const char *program_name);
static int parse_arguments(int argc, char *argv[], program_options *options);
static int initialize_devices(void);
static void cleanup_devices(void);
static int load_round_keys(const char *key_hex);
static int set_aes_mode(int mode);
static int process_wav_file(program_options *options);
static int read_wav_header(FILE *fp, WAVHeader *header);
static int write_to_fifo(uint32_t value);
static int read_from_fifo(uint32_t *value);
static int hex_to_bytes(const char* hex_str, uint8_t* bytes, size_t bytes_len);
static void print_hex(const char* prefix, const uint8_t* data, size_t length);
static uint8_t* apply_padding(uint8_t* data, uint32_t data_size, uint32_t* padded_size);
static uint8_t* remove_padding(uint8_t* data, uint32_t data_size, uint32_t* unpadded_size);
static int process_data_block(uint8_t* input_data, uint32_t input_size, uint8_t** output_data, uint32_t* output_size, bool encrypt, int fifo_delay);

int main(int argc, char *argv[]) {
    program_options options = {
        .encrypt = false,
        .decrypt = false,
        .input_file = NULL,
        .output_file = NULL,
        .key_hex = NULL,
        .fifo_delay = DEFAULT_FIFO_DELAY
    };
    int ret;

    printf("AES WAV File Processor\n");

    // Parse command line arguments
    ret = parse_arguments(argc, argv, &options);
    if (ret != 0) {
        return ret;
    }

    // Initialize device drivers
    ret = initialize_devices();
    if (ret != 0) {
        return ret;
    }

    // Load AES round keys
    ret = load_round_keys(options.key_hex);
    if (ret != 0) {
        cleanup_devices();
        return ret;
    }

    // Set AES mode (encrypt or decrypt)
    if (options.encrypt) {
        ret = set_aes_mode(AES_ENCRYPT_MODE);
    } else if (options.decrypt) {
        ret = set_aes_mode(AES_DECRYPT_MODE);
    }
    
    if (ret != 0) {
        cleanup_devices();
        return ret;
    }

    // Process the WAV file
    ret = process_wav_file(&options);
    if (ret != 0) {
        cleanup_devices();
        return ret;
    }

    // Cleanup and exit
    cleanup_devices();
    printf("\nProcessing complete! Output written to %s\n", options.output_file);
    return 0;
}

// Print program usage information
static void print_usage(const char *program_name) {
    printf("Usage: %s [options]\n\n", program_name);
    printf("Options:\n");
    printf("  -e, --encrypt          Encrypt the input file\n");
    printf("  -d, --decrypt          Decrypt the input file\n");
    printf("  -i, --input FILE       Input WAV file\n");
    printf("  -o, --output FILE      Output WAV file\n");
    printf("  -k, --key HEX          AES key as 32 hex characters (16 bytes)\n");
    printf("  -t, --delay TIME       Delay between FIFO operations in microseconds (default: %d)\n", DEFAULT_FIFO_DELAY);
    printf("  -h, --help             Show this help message\n\n");
    printf("Example (encrypt):\n");
    printf("  %s --encrypt --input input.wav --output encrypted.wav --key 2B7E151628AED2A6ABF7158809CF4F3C\n\n", program_name);
    printf("Example (decrypt):\n");
    printf("  %s --decrypt --input encrypted.wav --output decrypted.wav --key 2B7E151628AED2A6ABF7158809CF4F3C\n", program_name);
}

// Parse command line arguments
static int parse_arguments(int argc, char *argv[], program_options *options) {
    static struct option long_options[] = {
        {"encrypt", no_argument,       0, 'e'},
        {"decrypt", no_argument,       0, 'd'},
        {"input",   required_argument, 0, 'i'},
        {"output",  required_argument, 0, 'o'},
        {"key",     required_argument, 0, 'k'},
        {"delay",   required_argument, 0, 't'},
        {"help",    no_argument,       0, 'h'},
        {0, 0, 0, 0}
    };

    int opt;
    int option_index = 0;

    while ((opt = getopt_long(argc, argv, "edi:o:k:t:h", long_options, &option_index)) != -1) {
        switch (opt) {
            case 'e':
                options->encrypt = true;
                break;
            case 'd':
                options->decrypt = true;
                break;
            case 'i':
                options->input_file = optarg;
                break;
            case 'o':
                options->output_file = optarg;
                break;
            case 'k':
                options->key_hex = optarg;
                break;
            case 't':
                options->fifo_delay = atoi(optarg);
                if (options->fifo_delay < 0) {
                    options->fifo_delay = DEFAULT_FIFO_DELAY;
                }
                break;
            case 'h':
                print_usage(argv[0]);
                return 1;
            default:
                print_usage(argv[0]);
                return 1;
        }
    }

    // Validate arguments
    if (options->encrypt && options->decrypt) {
        printf("Error: Cannot specify both encrypt and decrypt modes\n");
        print_usage(argv[0]);
        return 1;
    }

    if (!options->encrypt && !options->decrypt) {
        printf("Error: Must specify either encrypt or decrypt mode\n");
        print_usage(argv[0]);
        return 1;
    }

    if (options->input_file == NULL) {
        printf("Error: Input file must be specified\n");
        print_usage(argv[0]);
        return 1;
    }

    if (options->output_file == NULL) {
        printf("Error: Output file must be specified\n");
        print_usage(argv[0]);
        return 1;
    }

    if (options->key_hex == NULL) {
        printf("Error: AES key must be specified\n");
        print_usage(argv[0]);
        return 1;
    }

    // Validate key length (16 bytes = 32 hex characters)
    if (strlen(options->key_hex) != 32) {
        printf("Error: AES key must be 32 hex characters (16 bytes)\n");
        print_usage(argv[0]);
        return 1;
    }

    return 0;
}

// Initialize device drivers
static int initialize_devices(void) {
    // Open the FIFO write device
    fifo_write_fd = open("/dev/fifo_write", O_RDWR);
    if (fifo_write_fd < 0) {
        perror("Error opening /dev/fifo_write");
        return 1;
    }

    // Open the FIFO read device
    fifo_read_fd = open("/dev/fifo_read", O_RDWR);
    if (fifo_read_fd < 0) {
        perror("Error opening /dev/fifo_read");
        close(fifo_write_fd);
        return 1;
    }

    // Open the AES control device
    aes_ctl_fd = open("/dev/aes_ctl", O_RDWR);
    if (aes_ctl_fd < 0) {
        perror("Error opening /dev/aes_ctl");
        close(fifo_write_fd);
        close(fifo_read_fd);
        return 1;
    }

    // Open the round keys device
    round_keys_fd = open("/dev/round_keys", O_RDWR);
    if (round_keys_fd < 0) {
        perror("Error opening /dev/round_keys");
        close(fifo_write_fd);
        close(fifo_read_fd);
        close(aes_ctl_fd);
        return 1;
    }

    printf("All devices opened successfully\n");
    return 0;
}

// Clean up device handles
static void cleanup_devices(void) {
    if (fifo_write_fd >= 0) {
        close(fifo_write_fd);
    }
    if (fifo_read_fd >= 0) {
        close(fifo_read_fd);
    }
    if (aes_ctl_fd >= 0) {
        close(aes_ctl_fd);
    }
    if (round_keys_fd >= 0) {
        close(round_keys_fd);
    }
}

// Function to write a 32-bit value to the AES control register
static int set_aes_mode(int mode) {
    aes_ctl_arg_t ctrl_arg;
    
    printf("Setting AES mode to %s\n", mode == AES_ENCRYPT_MODE ? "ENCRYPT" : "DECRYPT");
    
    // Set the control value
    ctrl_arg.data = mode;
    
    if (ioctl(aes_ctl_fd, AES_CTL_WRITE_DATA, &ctrl_arg) != 0) {
        perror("ioctl(AES_CTL_WRITE_DATA) failed");
        return 1;
    }
    
    printf("AES mode set successfully\n");
    return 0;
}

// Load AES round keys into RAM
static int load_round_keys(const char *key_hex) {
    uint8_t initial_key[16];
    
    // Convert hex string to bytes
    if (!hex_to_bytes(key_hex, initial_key, 16)) {
        printf("Error: Invalid key format\n");
        return 1;
    }
    
    printf("Using AES key: ");
    print_hex("", initial_key, 16);
    printf("\n");
    
    // Create a full round keys structure
    // Note: We'll use the existing driver to expand the key and write to RAM
    char load_keys_cmd[200];
    snprintf(load_keys_cmd, sizeof(load_keys_cmd), "./load_round_keys %s", key_hex);
    
    printf("Loading round keys with little endian, reverse word order...\n");
    int result = system(load_keys_cmd);
    if (result != 0) {
        printf("Error: Failed to load round keys (exit code: %d)\n", result);
        return 1;
    }
    
    printf("Round keys loaded successfully\n");
    return 0;
}

// Read the WAV header from a file
static int read_wav_header(FILE *fp, WAVHeader *header) {
    // Read RIFF header
    if (fread(header->riff_header, 1, 4, fp) != 4 ||
        fread(&header->wav_size, 4, 1, fp) != 1 ||
        fread(header->wave_header, 1, 4, fp) != 4) {
        printf("Error: Could not read RIFF header\n");
        return 1;
    }
    
    // Check if file has "RIFF" signature
    if (memcmp(header->riff_header, "RIFF", 4) != 0) {
        printf("Error: Not a valid WAV file (missing RIFF signature)\n");
        return 1;
    }
    
    // Check if file has "WAVE" format
    if (memcmp(header->wave_header, "WAVE", 4) != 0) {
        printf("Error: Not a valid WAV file (missing WAVE format)\n");
        return 1;
    }

    // Read fmt chunk
    if (fread(header->fmt_header, 1, 4, fp) != 4 ||
        fread(&header->fmt_chunk_size, 4, 1, fp) != 1) {
        printf("Error: Could not read fmt chunk header\n");
        return 1;
    }

    // Verify fmt header
    if (memcmp(header->fmt_header, "fmt ", 4) != 0) {
        printf("Error: Missing fmt chunk\n");
        return 1;
    }

    // Read format data
    if (fread(&header->audio_format, 2, 1, fp) != 1 ||
        fread(&header->num_channels, 2, 1, fp) != 1 ||
        fread(&header->sample_rate, 4, 1, fp) != 1 ||
        fread(&header->byte_rate, 4, 1, fp) != 1 ||
        fread(&header->block_align, 2, 1, fp) != 1 ||
        fread(&header->bits_per_sample, 2, 1, fp) != 1) {
        printf("Error: Could not read format data\n");
        return 1;
    }

    // Skip any extra format bytes
    if (header->fmt_chunk_size > 16) {
        if (fseek(fp, header->fmt_chunk_size - 16, SEEK_CUR) != 0) {
            printf("Error: Could not skip extra format bytes\n");
            return 1;
        }
    }

    // Find the data chunk (skip any non-data chunks)
    bool found_data = false;
    char chunk_id[4];
    uint32_t chunk_size;

    while (!found_data) {
        if (fread(chunk_id, 1, 4, fp) != 4 ||
            fread(&chunk_size, 4, 1, fp) != 1) {
            printf("Error: Unexpected end of file before data chunk\n");
            return 1;
        }

        if (memcmp(chunk_id, "data", 4) == 0) {
            found_data = true;
            memcpy(header->data_header, chunk_id, 4);
            header->data_size = chunk_size;
        } else {
            // Skip this non-data chunk
            if (fseek(fp, chunk_size, SEEK_CUR) != 0) {
                printf("Error: Could not skip non-data chunk\n");
                return 1;
            }
        }
    }
    
    printf("WAV header loaded successfully\n");
    printf("  Format: %d\n", header->audio_format);
    printf("  Channels: %d\n", header->num_channels);
    printf("  Sample Rate: %d Hz\n", header->sample_rate);
    printf("  Bits per Sample: %d\n", header->bits_per_sample);
    printf("  Data Size: %u bytes\n", header->data_size);
    
    return 0;
}

// Write a value to the input FIFO
static int write_to_fifo(uint32_t value) {
    fifo_write_arg_t fwa;
    
    // Put the 32-bit value into the data field
    fwa.data = value;
    
    int ret = ioctl(fifo_write_fd, FIFO_WRITE_WRITE_DATA, &fwa);
    if (ret) {
        if (ret == -EBUSY) {
            // FIFO is full, return a special code to handle retry
            return -EBUSY;
        } else {
            perror("ioctl(FIFO_WRITE_WRITE_DATA) failed");
            return -EIO;
        }
    }
    return 0;
}

// Read a value from the output FIFO
static int read_from_fifo(uint32_t *value) {
    fifo_read_arg_t fra;
    
    int ret = ioctl(fifo_read_fd, FIFO_READ_READ_DATA, &fra);
    if (ret < 0) {
        if (errno == EAGAIN) {
            // FIFO is empty, return a special code to handle retry
            return -EAGAIN;
        } else {
            perror("ioctl(FIFO_READ_READ_DATA) failed");
            return -EIO;
        }
    }
    
    *value = fra.data;
    return 0;
}

// Function to convert hex string to bytes
static int hex_to_bytes(const char* hex_str, uint8_t* bytes, size_t bytes_len) {
    size_t hex_len = strlen(hex_str);
    
    // Check if hex string has the right length
    if (hex_len != bytes_len * 2) {
        return 0;
    }
    
    // Convert each pair of hex characters to a byte
    for (size_t i = 0; i < bytes_len; i++) {
        char byte_str[3] = {hex_str[i*2], hex_str[i*2+1], '\0'};
        char* end_ptr;
        bytes[i] = (uint8_t)strtol(byte_str, &end_ptr, 16);
        
        // Check if conversion was successful
        if (*end_ptr != '\0') {
            return 0;
        }
    }
    
    return 1;
}

// Print data in hexadecimal format
static void print_hex(const char* prefix, const uint8_t* data, size_t length) {
    printf("%s", prefix);
    for (size_t i = 0; i < length; i++) {
        printf("%02X", data[i]);
    }
}

// Apply PKCS#7 padding to make data a multiple of AES_BLOCK_SIZE
static uint8_t* apply_padding(uint8_t* data, uint32_t data_size, uint32_t* padded_size) {
    // Calculate padding length (PKCS#7)
    uint32_t padding_length = AES_BLOCK_SIZE - (data_size % AES_BLOCK_SIZE);
    if (padding_length == 0) {
        padding_length = AES_BLOCK_SIZE; // If data is already a multiple, add a full block
    }
    
    *padded_size = data_size + padding_length;
    
    printf("Original data size: %u bytes\n", data_size);
    printf("Adding %u bytes of PKCS#7 padding\n", padding_length);
    printf("Padded data size: %u bytes\n", *padded_size);
    
    // Ensure padded size is a multiple of the hardware block size
    uint32_t remainder = *padded_size % (AES_BLOCK_SIZE * 10); // Hardware processes 10 blocks at once
    if (remainder != 0) {
        uint32_t extra_padding = (AES_BLOCK_SIZE * 10) - remainder;
        printf("Adding %u additional bytes to align with hardware block size\n", extra_padding);
        *padded_size += extra_padding;
    }
    
    // Allocate memory for padded data
    uint8_t* padded_data = (uint8_t*)malloc(*padded_size);
    if (!padded_data) {
        printf("Error: Memory allocation failed for padding\n");
        return NULL;
    }
    
    // Copy original data
    memcpy(padded_data, data, data_size);
    
    // Add padding bytes (PKCS#7)
    for (uint32_t i = 0; i < padding_length; i++) {
        padded_data[data_size + i] = (uint8_t)padding_length;
    }
    
    // If we had to add extra padding to align with hardware, fill with zeros
    if (*padded_size > data_size + padding_length) {
        memset(padded_data + data_size + padding_length, 0, *padded_size - (data_size + padding_length));
    }

    // Verify final padded size is a multiple of AES block size
    if (*padded_size % AES_BLOCK_SIZE != 0) {
        printf("Error: Padded size %u is not a multiple of AES block size %u\n", *padded_size, AES_BLOCK_SIZE);
        free(padded_data);
        return NULL;
    }
    
    return padded_data;
}

// Remove PKCS#7 padding from decrypted data
static uint8_t* remove_padding(uint8_t* data, uint32_t data_size, uint32_t* unpadded_size) {
    if (data_size == 0 || data_size % AES_BLOCK_SIZE != 0) {
        printf("Error: Invalid padded data size (%u), not a multiple of AES block size (%u)\n", 
               data_size, AES_BLOCK_SIZE);
        return NULL;
    }
    
    // Get padding length from the last byte
    uint8_t padding_length = data[data_size - 1];
    
    printf("Detected padding length: %u\n", padding_length);
    
    // Validate padding
    if (padding_length == 0 || padding_length > AES_BLOCK_SIZE) {
        printf("Warning: Invalid padding detected (value %u), keeping all data\n", padding_length);
        // Just copy the data as is
        *unpadded_size = data_size;
        uint8_t* unpadded_data = (uint8_t*)malloc(*unpadded_size);
        if (!unpadded_data) {
            printf("Error: Memory allocation failed\n");
            return NULL;
        }
        memcpy(unpadded_data, data, *unpadded_size);
        return unpadded_data;
    }
    
    // Verify all padding bytes
    bool valid_padding = true;
    for (uint32_t i = data_size - padding_length; i < data_size; i++) {
        if (data[i] != padding_length) {
            valid_padding = false;
            printf("Invalid padding byte at position %u: expected %u, got %u\n", 
                   i, padding_length, data[i]);
            break;
        }
    }
    
    if (!valid_padding) {
        printf("Warning: Padding verification failed, keeping all data\n");
        *unpadded_size = data_size;
        uint8_t* unpadded_data = (uint8_t*)malloc(*unpadded_size);
        if (!unpadded_data) {
            printf("Error: Memory allocation failed\n");
            return NULL;
        }
        memcpy(unpadded_data, data, *unpadded_size);
        return unpadded_data;
    }
    
    // Calculate unpadded size
    *unpadded_size = data_size - padding_length;
    printf("After removing %u bytes of padding, data size is %u bytes\n", 
           padding_length, *unpadded_size);
    
    // Allocate memory for unpadded data
    uint8_t* unpadded_data = (uint8_t*)malloc(*unpadded_size);
    if (!unpadded_data) {
        printf("Error: Memory allocation failed\n");
        return NULL;
    }
    
    // Copy unpadded data
    memcpy(unpadded_data, data, *unpadded_size);
    
    return unpadded_data;
}

// Process data through the AES hardware
static int process_data_block(uint8_t* input_data, uint32_t input_size, uint8_t** output_data, uint32_t* output_size, bool encrypt, int fifo_delay) {
    // Define the hardware block size (160 bytes = 40 32-bit words)
    // AES works on 16-byte blocks, but our hardware processes 10 blocks at once
    #define AES_BLOCK_SIZE_BYTES 16
    #define HARDWARE_BLOCKS_COUNT 10
    #define HARDWARE_BLOCK_SIZE_WORDS (HARDWARE_BLOCKS_COUNT * AES_BLOCK_SIZE_BYTES / 4)
    #define HARDWARE_BLOCK_SIZE_BYTES (HARDWARE_BLOCK_SIZE_WORDS * 4)
    
    // Ensure input size is a multiple of AES block size
    if (input_size % AES_BLOCK_SIZE_BYTES != 0) {
        printf("Error: Input data size (%d) is not a multiple of AES block size (%d)\n", 
               input_size, AES_BLOCK_SIZE_BYTES);
        return 1;
    }
    
    printf("Processing %u bytes of data through AES hardware\n", input_size);
    printf("Using hardware block size: %u bytes (%u words)\n", 
           HARDWARE_BLOCK_SIZE_BYTES, HARDWARE_BLOCK_SIZE_WORDS);
    
    // Output will be the same size as input
    *output_size = input_size;
    *output_data = (uint8_t*)malloc(*output_size);
    if (!*output_data) {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    
    // Word buffers for processing
    uint32_t word_buffer[HARDWARE_BLOCK_SIZE_WORDS];
    uint32_t output_word_buffer[HARDWARE_BLOCK_SIZE_WORDS];
    
    // Process data in hardware-sized blocks
    for (uint32_t offset = 0; offset < input_size; offset += HARDWARE_BLOCK_SIZE_BYTES) {
        // Determine size of current block
        uint32_t block_size = (offset + HARDWARE_BLOCK_SIZE_BYTES <= input_size) ? 
                             HARDWARE_BLOCK_SIZE_BYTES : input_size - offset;
        
        if (offset == 0) {
            printf("Processing first block, size: %u bytes\n", block_size);
        }
        
        // Pad the last block with zeros if it's not a full hardware block
        uint32_t word_count = (block_size + 3) / 4; // Round up to handle partial words
        for (uint32_t i = 0; i < HARDWARE_BLOCK_SIZE_WORDS; i++) {
            if (i < word_count) {
                // Handle the case where we might not have a complete word at the end
                if (i == word_count - 1 && block_size % 4 != 0) {
                    // Last partial word
                    uint32_t value = 0;
                    uint32_t bytes_to_copy = block_size % 4;
                    memcpy(&value, &input_data[offset + (i * 4)], bytes_to_copy);
                    word_buffer[i] = value;
                } else {
                    memcpy(&word_buffer[i], &input_data[offset + (i * 4)], 4);
                }
            } else {
                word_buffer[i] = 0;
            }
        }
        
        // Write words to FIFO
        for (uint32_t i = 0; i < HARDWARE_BLOCK_SIZE_WORDS; i++) {
            int retries = 0;
            while (1) {
                int ret = write_to_fifo(word_buffer[i]);
                if (ret == 0) {
                    break;
                } else if (ret == -EBUSY) {
                    // FIFO is full, wait and retry
                    usleep(fifo_delay);
                    retries++;
                    if (retries > 100) {
                        printf("Warning: FIFO write retry limit exceeded\n");
                        retries = 0;
                    }
                } else {
                    // Other error
                    printf("Error writing to FIFO\n");
                    free(*output_data);
                    *output_data = NULL;
                    return 1;
                }
            }
        }
        
        // Read processed words from FIFO
        for (uint32_t i = 0; i < HARDWARE_BLOCK_SIZE_WORDS; i++) {
            int retries = 0;
            while (1) {
                int ret = read_from_fifo(&output_word_buffer[i]);
                if (ret == 0) {
                    break;
                } else if (ret == -EAGAIN) {
                    // FIFO is empty, wait and retry
                    usleep(fifo_delay);
                    retries++;
                    if (retries > 100) {
                        printf("Warning: FIFO read retry limit exceeded\n");
                        retries = 0;
                    }
                } else {
                    // Other error
                    printf("Error reading from FIFO\n");
                    free(*output_data);
                    *output_data = NULL;
                    return 1;
                }
            }
        }
        
        // Copy processed data to output buffer
        for (uint32_t i = 0; i < word_count && (offset + i * 4) < *output_size; i++) {
            // Handle the case where we might not have a complete word at the end
            if (i == word_count - 1 && block_size % 4 != 0) {
                // Last partial word
                uint32_t bytes_to_copy = block_size % 4;
                memcpy(*output_data + offset + (i * 4), &output_word_buffer[i], bytes_to_copy);
            } else if (offset + (i * 4) + 4 <= *output_size) {
                memcpy(*output_data + offset + (i * 4), &output_word_buffer[i], 4);
            } else {
                // We're at the end of the buffer and don't have room for a full word
                uint32_t bytes_to_copy = *output_size - (offset + (i * 4));
                memcpy(*output_data + offset + (i * 4), &output_word_buffer[i], bytes_to_copy);
            }
        }
        
        // Print progress
        uint32_t processed = offset + block_size;
        if (processed % (1024 * 1024) < HARDWARE_BLOCK_SIZE_BYTES) {
            printf("\rProcessed: %.2f MB", processed / (1024.0 * 1024.0));
            fflush(stdout);
        }
    }
    
    printf("\rProcessed: %.2f MB\n", input_size / (1024.0 * 1024.0));
    return 0;
}

// Process a WAV file (encrypt or decrypt)
static int process_wav_file(program_options *options) {
    FILE *infile = NULL, *outfile = NULL;
    WAVHeader header;
    uint8_t *audio_data = NULL;
    uint8_t *processed_data = NULL;
    uint8_t *final_data = NULL;
    uint32_t audio_data_size, processed_data_size, final_data_size;
    int ret = 1;  // Default to error
    
    printf("\n=====================================================\n");
    printf("Starting WAV file processing\n");
    printf("Mode: %s\n", options->encrypt ? "ENCRYPT" : "DECRYPT");
    printf("Input: %s\n", options->input_file);
    printf("Output: %s\n", options->output_file);
    printf("=====================================================\n\n");
    
    // Open input file
    infile = fopen(options->input_file, "rb");
    if (!infile) {
        perror("Error opening input file");
        return 1;
    }
    
    // Read and validate WAV header
    if (read_wav_header(infile, &header) != 0) {
        fclose(infile);
        return 1;
    }
    
    // Read the audio data
    audio_data_size = header.data_size;
    audio_data = (uint8_t*)malloc(audio_data_size);
    if (!audio_data) {
        printf("Error: Memory allocation failed for audio data\n");
        fclose(infile);
        return 1;
    }
    
    size_t bytes_read = fread(audio_data, 1, audio_data_size, infile);
    if (bytes_read != audio_data_size) {
        printf("Error: Failed to read audio data. Expected %u bytes, got %zu bytes\n", 
               audio_data_size, bytes_read);
        free(audio_data);
        fclose(infile);
        return 1;
    }
    
    printf("Successfully read %u bytes of audio data\n", audio_data_size);
    
    // Close input file
    fclose(infile);
    infile = NULL;
    
    // Process based on mode
    if (options->encrypt) {
        // Apply padding for encryption
        uint8_t *padded_data;
        uint32_t padded_size;
        
        printf("\n--- Encryption Process ---\n");
        printf("Applying PKCS#7 padding for encryption...\n");
        padded_data = apply_padding(audio_data, audio_data_size, &padded_size);
        if (!padded_data) {
            free(audio_data);
            return 1;
        }
        
        printf("Encrypting audio data (%d bytes with padding)...\n", padded_size);
        if (process_data_block(padded_data, padded_size, &processed_data, &processed_data_size, true, options->fifo_delay) != 0) {
            free(audio_data);
            free(padded_data);
            return 1;
        }
        
        // Use the processed data as final data
        final_data = processed_data;
        final_data_size = processed_data_size;
        
        free(padded_data);
        
        printf("Encryption completed successfully\n");
    } else {  // Decrypt
        printf("\n--- Decryption Process ---\n");
        printf("Decrypting audio data (%d bytes)...\n", audio_data_size);
        
        // Verify data size is valid for AES processing (multiple of block size)
        if (audio_data_size % AES_BLOCK_SIZE != 0) {
            printf("Error: Input data size for decryption (%u bytes) is not a multiple of AES block size (%d).\n", 
                   audio_data_size, AES_BLOCK_SIZE);
            printf("This suggests the file was not properly encrypted or is corrupted.\n");
            free(audio_data);
            return 1;
        }
        
        if (process_data_block(audio_data, audio_data_size, &processed_data, &processed_data_size, false, options->fifo_delay) != 0) {
            free(audio_data);
            return 1;
        }
        
        // Remove padding from decrypted data
        printf("Removing PKCS#7 padding...\n");
        final_data = remove_padding(processed_data, processed_data_size, &final_data_size);
        if (!final_data) {
            free(audio_data);
            free(processed_data);
            return 1;
        }
        
        printf("Decryption completed successfully\n");
    }
    
    // Update WAV header with new data size
    printf("\n--- Updating WAV Header ---\n");
    
    WAVHeader original_header = header; // Save original for comparison
    
    header.data_size = final_data_size;
    header.wav_size = 36 + final_data_size;  // Total size - 8 bytes for RIFF header
    
    // Also update byte_rate and block_align which depend on data size
    // byte_rate = SampleRate * NumChannels * BitsPerSample/8
    header.byte_rate = header.sample_rate * header.num_channels * (header.bits_per_sample / 8);
    // block_align = NumChannels * BitsPerSample/8
    header.block_align = header.num_channels * (header.bits_per_sample / 8);

    printf("Original WAV header values:\n");
    printf("  format: %u (1=PCM)\n", original_header.audio_format);
    printf("  channels: %u\n", original_header.num_channels);
    printf("  sample_rate: %u Hz\n", original_header.sample_rate);
    printf("  bits_per_sample: %u\n", original_header.bits_per_sample);
    printf("  data_size: %u bytes\n", original_header.data_size);
    
    printf("\nUpdated WAV header values for output file:\n");
    printf("  format: %u (unchanged)\n", header.audio_format);
    printf("  channels: %u (unchanged)\n", header.num_channels);
    printf("  sample_rate: %u Hz (unchanged)\n", header.sample_rate);
    printf("  bits_per_sample: %u (unchanged)\n", header.bits_per_sample);
    printf("  data_size: %u bytes (%s%d bytes)\n", 
           header.data_size, 
           header.data_size > original_header.data_size ? "+" : "",
           (int)header.data_size - (int)original_header.data_size);
    
    // Open output file
    printf("\n--- Writing Output File ---\n");
    outfile = fopen(options->output_file, "wb");
    if (!outfile) {
        perror("Error opening output file");
        free(audio_data);
        free(processed_data);
        if (final_data != processed_data) {
            free(final_data);
        }
        return 1;
    }
    
    // Write WAV header
    printf("Writing WAV header to output file...\n");
    if (fwrite(header.riff_header, 1, 4, outfile) != 4 ||
        fwrite(&header.wav_size, 4, 1, outfile) != 1 ||
        fwrite(header.wave_header, 1, 4, outfile) != 4 ||
        fwrite(header.fmt_header, 1, 4, outfile) != 4 ||
        fwrite(&header.fmt_chunk_size, 4, 1, outfile) != 1 ||
        fwrite(&header.audio_format, 2, 1, outfile) != 1 ||
        fwrite(&header.num_channels, 2, 1, outfile) != 1 ||
        fwrite(&header.sample_rate, 4, 1, outfile) != 1 ||
        fwrite(&header.byte_rate, 4, 1, outfile) != 1 ||
        fwrite(&header.block_align, 2, 1, outfile) != 1 ||
        fwrite(&header.bits_per_sample, 2, 1, outfile) != 1 ||
        fwrite(header.data_header, 1, 4, outfile) != 4 ||
        fwrite(&header.data_size, 4, 1, outfile) != 1) {
        printf("Error: Failed to write WAV header\n");
        goto cleanup;
    }
    
    // Write processed audio data
    printf("Writing %u bytes of audio data...\n", final_data_size);
    if (fwrite(final_data, 1, final_data_size, outfile) != final_data_size) {
        printf("Error: Failed to write processed audio data\n");
        goto cleanup;
    }
    
    // Verify output file
    fflush(outfile);
    fclose(outfile);
    outfile = NULL;
    
    printf("Verifying output file...\n");
    outfile = fopen(options->output_file, "rb");
    if (!outfile) {
        printf("Error: Could not open output file for verification\n");
        goto cleanup;
    }
    
    // Read header of output file to verify
    WAVHeader check_header;
    if (read_wav_header(outfile, &check_header) != 0) {
        printf("Error: Output file header validation failed\n");
        goto cleanup;
    }
    
    // Check data size matches
    if (check_header.data_size != final_data_size) {
        printf("Warning: Output file data size mismatch. Expected %u, got %u\n", 
               final_data_size, check_header.data_size);
    } else {
        printf("Output file validated successfully\n");
    }
    
    printf("\nSuccessfully wrote %d bytes of %s audio data\n", 
           final_data_size, options->encrypt ? "encrypted" : "decrypted");
    ret = 0;  // Success
    
cleanup:
    if (infile) fclose(infile);
    if (outfile) fclose(outfile);
    if (audio_data) free(audio_data);
    if (processed_data) free(processed_data);
    if (final_data && final_data != processed_data) free(final_data);
    
    if (ret == 0) {
        printf("\n=====================================================\n");
        printf("WAV processing completed successfully\n");
        printf("Output file: %s\n", options->output_file);
        printf("=====================================================\n");
    } else {
        printf("\n=====================================================\n");
        printf("WAV processing failed!\n");
        printf("=====================================================\n");
    }
    
    return ret;
} 