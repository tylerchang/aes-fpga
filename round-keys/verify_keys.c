/**
 * Verify AES Round Keys loaded into true_mixed_dual_port_ram using the kernel driver
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdint.h>
#include <errno.h>
#include "round_keys.h"

void print_usage(const char* progname) {
    printf("Usage: %s <key_hex>\n", progname);
    printf("  <key_hex>: 32 hex characters representing the 16-byte initial key\n");
    printf("Example: %s 2B7E151628AED2A6ABF7158809CF4F3C\n", progname);
}

// AES S-box
static const uint8_t SBOX[256] = {
    0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
    0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
    0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
    0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
    0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
    0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
    0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
    0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
    0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
    0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
    0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
    0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
    0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
    0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
    0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
    0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16
};

// Round constants for key schedule
static const uint8_t RCON[10] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36};

// Key schedule functions
static void sub_word(uint8_t* word) {
    for (int i = 0; i < 4; i++) {
        word[i] = SBOX[word[i]];
    }
}

static void rot_word(uint8_t* word) {
    uint8_t temp = word[0];
    word[0] = word[1];
    word[1] = word[2];
    word[2] = word[3];
    word[3] = temp;
}

static void key_schedule_core(uint8_t* word, int iteration) {
    rot_word(word);
    sub_word(word);
    word[0] ^= RCON[iteration];
}

void expand_key(uint8_t* key, uint8_t round_keys[11][16]) {
    // Copy the initial key to round 0
    memcpy(round_keys[0], key, 16);
    
    // Convert key into 32-bit words (4 words total for AES-128)
    uint32_t w[44]; // 11 rounds * 4 words per round
    
    // Initialize first four words with the initial key
    for (int i = 0; i < 4; i++) {
        w[i] = (key[4*i] << 24) | (key[4*i+1] << 16) | (key[4*i+2] << 8) | key[4*i+3];
    }
    
    // Expand the key
    for (int i = 4; i < 44; i++) {
        // Extract the previous word as bytes
        uint8_t temp[4];
        temp[0] = (w[i-1] >> 24) & 0xFF;
        temp[1] = (w[i-1] >> 16) & 0xFF;
        temp[2] = (w[i-1] >> 8) & 0xFF;
        temp[3] = w[i-1] & 0xFF;
        
        if (i % 4 == 0) {
            // Apply key schedule core for the first word of each round
            key_schedule_core(temp, (i/4)-1);
        }
        
        // Convert bytes back to word
        uint32_t temp_word = (temp[0] << 24) | (temp[1] << 16) | (temp[2] << 8) | temp[3];
        
        // XOR with word 4 positions back
        w[i] = w[i-4] ^ temp_word;
    }
    
    // Convert words back to bytes in the round keys
    for (int round = 0; round < 11; round++) {
        for (int word = 0; word < 4; word++) {
            int idx = round * 4 + word;
            round_keys[round][word*4]   = (w[idx] >> 24) & 0xFF;
            round_keys[round][word*4+1] = (w[idx] >> 16) & 0xFF;
            round_keys[round][word*4+2] = (w[idx] >> 8) & 0xFF;
            round_keys[round][word*4+3] = w[idx] & 0xFF;
        }
    }
}

// Function to convert hex string to bytes
int hex_to_bytes(const char* hex_str, uint8_t* bytes, size_t bytes_len) {
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

// Print round keys (for debugging)
void print_round_keys(uint8_t round_keys[11][16]) {
    for (int i = 0; i < 11; i++) {
        printf("Round %2d: ", i);
        for (int j = 0; j < 16; j++) {
            printf("%02x", round_keys[i][j]);
            if (j % 4 == 3 && j < 15) printf(" ");
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    int fd;
    uint8_t initial_key[16];
    uint8_t round_keys[11][16];
    round_keys_data_t rk_data;
    
    if (argc != 2) {
        print_usage(argv[0]);
        return 1;
    }
    
    // Parse the key
    if (!hex_to_bytes(argv[1], initial_key, 16)) {
        printf("Error: Invalid key format. Must be 32 hex characters.\n");
        return 1;
    }
    
    // Generate all round keys
    expand_key(initial_key, round_keys);
    
    // Print the expected round keys
    printf("Expected AES-128 Round Keys:\n");
    print_round_keys(round_keys);
    
    // Open the round keys device
    fd = open("/dev/round_keys", O_RDWR);
    if (fd < 0) {
        perror("Error opening /dev/round_keys");
        return 1;
    }
    
    printf("Successfully opened /dev/round_keys\n");
    
    // Read the round keys from the device
    if (ioctl(fd, ROUND_KEYS_READ_DATA, &rk_data) < 0) {
        perror("Error reading round keys");
        close(fd);
        return 1;
    }
    
    printf("\nVerifying round keys in RAM:\n");
    
    // Check if the keys match
    int errors = 0;
    for (int round = 0; round < 11; round++) {
        for (int byte = 0; byte < 16; byte++) {
            int offset = round * 16 + byte;
            uint8_t expected = round_keys[round][byte];
            uint8_t actual = rk_data.data[offset];
            
            if (actual != expected) {
                printf("Mismatch at round %d, byte %d: expected 0x%02x, got 0x%02x\n",
                       round, byte, expected, actual);
                errors++;
            }
        }
    }
    
    if (errors == 0) {
        printf("Verification successful! All round keys match expected values.\n");
    } else {
        printf("Verification failed with %d errors.\n", errors);
    }
    
    // Clean up
    close(fd);
    
    return (errors == 0) ? 0 : 1;
} 