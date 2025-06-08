/*
 * WAV file converter for encryption
 * Extracts audio data from a WAV file, applies PKCS#7 padding,
 * and saves the result in a format ready for encryption.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wav_converter.h"

#define BLOCK_SIZE 160  // Padding block size

// RIFF chunk ID 
#define RIFF_CHUNK_ID "RIFF"
#define WAVE_FORMAT "WAVE"
#define FMT_CHUNK_ID "fmt "
#define DATA_CHUNK_ID "data"

// Function to read a WAV file and extract its header and audio data
int read_wav_file(const char* input_file, WAVHeader* header, unsigned char** audio_data, unsigned int* audio_data_size) {
    FILE* file = fopen(input_file, "rb");
    if (!file) {
        fprintf(stderr, "Error: Cannot open input file %s\n", input_file);
        return -1;
    }
    
    // Variables to store chunk information
    char chunk_id[5] = {0};  // +1 for null terminator
    unsigned int chunk_size = 0;
    char format[5] = {0};    // For WAVE format
    
    // Read RIFF header
    if (fread(chunk_id, 1, 4, file) != 4 || 
        fread(&chunk_size, 4, 1, file) != 1 ||
        fread(format, 1, 4, file) != 4) {
        fprintf(stderr, "Error: Cannot read RIFF header\n");
        fclose(file);
        return -1;
    }
    
    // Check RIFF header
    if (strncmp(chunk_id, RIFF_CHUNK_ID, 4) != 0 || strncmp(format, WAVE_FORMAT, 4) != 0) {
        fprintf(stderr, "Error: Not a valid RIFF/WAVE file\n");
        fclose(file);
        return -1;
    }
    
    // Initialize header with RIFF information
    memcpy(header->riff_header, chunk_id, 4);
    header->wav_size = chunk_size;
    memcpy(header->wave_header, format, 4);
    
    // Variables for tracking fmt chunk and data chunk
    int found_fmt = 0;
    int found_data = 0;
    
    // Read chunks until we find both fmt and data chunks
    while (!found_data) {
        // Read chunk ID and size
        if (fread(chunk_id, 1, 4, file) != 4 || 
            fread(&chunk_size, 4, 1, file) != 1) {
            if (feof(file)) {
                fprintf(stderr, "Error: Reached end of file without finding data chunk\n");
            } else {
                fprintf(stderr, "Error: Cannot read chunk header\n");
            }
            fclose(file);
            return -1;
        }
        
        // Process fmt chunk
        if (strncmp(chunk_id, FMT_CHUNK_ID, 4) == 0) {
            found_fmt = 1;
            
            // Save fmt chunk info in header
            memcpy(header->fmt_header, chunk_id, 4);
            header->fmt_chunk_size = chunk_size;
            
            // Read fmt chunk data
            if (fread(&header->audio_format, 2, 1, file) != 1 ||
                fread(&header->num_channels, 2, 1, file) != 1 ||
                fread(&header->sample_rate, 4, 1, file) != 1 ||
                fread(&header->byte_rate, 4, 1, file) != 1 ||
                fread(&header->block_align, 2, 1, file) != 1 ||
                fread(&header->bits_per_sample, 2, 1, file) != 1) {
                fprintf(stderr, "Error: Cannot read fmt chunk data\n");
                fclose(file);
                return -1;
            }
            
            // Skip any extra fmt data if chunk_size > 16
            if (chunk_size > 16) {
                if (fseek(file, chunk_size - 16, SEEK_CUR) != 0) {
                    fprintf(stderr, "Error: Cannot seek past extra fmt data\n");
                    fclose(file);
                    return -1;
                }
            }
        }
        // Process data chunk
        else if (strncmp(chunk_id, DATA_CHUNK_ID, 4) == 0) {
            found_data = 1;
            
            // Save data chunk info in header
            memcpy(header->data_header, chunk_id, 4);
            header->data_size = chunk_size;
            
            // Allocate memory for audio data
            *audio_data_size = chunk_size;
            *audio_data = (unsigned char*)malloc(*audio_data_size);
            if (!*audio_data) {
                fprintf(stderr, "Error: Memory allocation failed\n");
                fclose(file);
                return -1;
            }
            
            // Read audio data
            if (fread(*audio_data, 1, *audio_data_size, file) != *audio_data_size) {
                fprintf(stderr, "Error: Cannot read audio data\n");
                free(*audio_data);
                fclose(file);
                return -1;
            }
        }
        // Skip other chunks
        else {
            if (fseek(file, chunk_size, SEEK_CUR) != 0) {
                fprintf(stderr, "Error: Cannot seek past chunk\n");
                fclose(file);
                return -1;
            }
        }
    }
    
    // Verify that we found both fmt and data chunks
    if (!found_fmt) {
        fprintf(stderr, "Error: fmt chunk not found\n");
        if (found_data) {
            free(*audio_data);
        }
        fclose(file);
        return -1;
    }
    
    fclose(file);
    return 0;
}

// Apply PKCS#7 padding to make the data a multiple of BLOCK_SIZE
unsigned char* apply_padding(unsigned char* data, unsigned int data_size, unsigned int* padded_size) {
    // Calculate padding length
    unsigned int padding_length = BLOCK_SIZE - (data_size % BLOCK_SIZE);
    if (padding_length == 0) {
        padding_length = BLOCK_SIZE; // If data is already a multiple of BLOCK_SIZE, add a full block
    }
    
    *padded_size = data_size + padding_length;
    
    // Allocate memory for padded data
    unsigned char* padded_data = (unsigned char*)malloc(*padded_size);
    if (!padded_data) {
        fprintf(stderr, "Error: Memory allocation failed for padding\n");
        return NULL;
    }
    
    // Copy original data
    memcpy(padded_data, data, data_size);
    
    // Add padding bytes (PKCS#7)
    for (unsigned int i = 0; i < padding_length; i++) {
        padded_data[data_size + i] = (unsigned char)padding_length;
    }
    
    return padded_data;
}

// Save WAV header and audio data to separate files
int save_files(const char* output_prefix, WAVHeader* header, unsigned char* padded_data, unsigned int padded_size) {
    char header_file[256];
    char data_file[256];
    
    snprintf(header_file, sizeof(header_file), "%s_header.bin", output_prefix);
    snprintf(data_file, sizeof(data_file), "%s_data.bin", output_prefix);
    
    // Save header
    FILE* hdr_file = fopen(header_file, "wb");
    if (!hdr_file) {
        fprintf(stderr, "Error: Cannot create header file %s\n", header_file);
        return -1;
    }
    
    if (fwrite(header, sizeof(WAVHeader), 1, hdr_file) != 1) {
        fprintf(stderr, "Error: Cannot write header file\n");
        fclose(hdr_file);
        return -1;
    }
    fclose(hdr_file);
    
    // Save padded audio data
    FILE* data_file_ptr = fopen(data_file, "wb");
    if (!data_file_ptr) {
        fprintf(stderr, "Error: Cannot create data file %s\n", data_file);
        return -1;
    }
    
    if (fwrite(padded_data, 1, padded_size, data_file_ptr) != padded_size) {
        fprintf(stderr, "Error: Cannot write data file\n");
        fclose(data_file_ptr);
        return -1;
    }
    fclose(data_file_ptr);
    
    printf("Files created successfully:\n");
    printf("  Header: %s\n", header_file);
    printf("  Padded Data: %s (%d bytes)\n", data_file, padded_size);
    
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <input_wav_file> <output_prefix>\n", argv[0]);
        return 1;
    }
    
    const char* input_file = argv[1];
    const char* output_prefix = argv[2];
    
    WAVHeader header;
    memset(&header, 0, sizeof(WAVHeader)); // Initialize to zeros
    
    unsigned char* audio_data = NULL;
    unsigned int audio_data_size = 0;
    
    // Read WAV file
    if (read_wav_file(input_file, &header, &audio_data, &audio_data_size) != 0) {
        return 1;
    }
    
    printf("WAV file info:\n");
    printf("  Channels: %d\n", header.num_channels);
    printf("  Sample Rate: %d Hz\n", header.sample_rate);
    printf("  Bits per Sample: %d\n", header.bits_per_sample);
    printf("  Data Size: %d bytes\n", header.data_size);
    
    // Apply padding
    unsigned int padded_size = 0;
    unsigned char* padded_data = apply_padding(audio_data, audio_data_size, &padded_size);
    if (!padded_data) {
        free(audio_data);
        return 1;
    }
    
    // Save files
    int result = save_files(output_prefix, &header, padded_data, padded_size);
    
    // Clean up
    free(audio_data);
    free(padded_data);
    
    return result;
} 