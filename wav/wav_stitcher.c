/*
 * WAV file stitcher
 * Combines a WAV header and audio data (possibly encrypted) into a playable WAV file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wav_converter.h"

// Function to read binary file into memory
unsigned char* read_file(const char* filename, size_t* size) {
    FILE* file = fopen(filename, "rb");
    if (!file) {
        fprintf(stderr, "Error: Cannot open file %s\n", filename);
        return NULL;
    }
    
    // Get file size
    fseek(file, 0, SEEK_END);
    *size = ftell(file);
    fseek(file, 0, SEEK_SET);
    
    // Allocate memory for file content
    unsigned char* buffer = (unsigned char*)malloc(*size);
    if (!buffer) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        fclose(file);
        return NULL;
    }
    
    // Read file content
    if (fread(buffer, 1, *size, file) != *size) {
        fprintf(stderr, "Error: Failed to read file %s\n", filename);
        free(buffer);
        fclose(file);
        return NULL;
    }
    
    fclose(file);
    return buffer;
}

// Function to create a WAV file from header and data
int create_wav_file(const char* header_file, const char* data_file, const char* output_file) {
    size_t header_size, data_size;
    unsigned char* header_buffer;
    unsigned char* data_buffer;
    
    // Read header file
    header_buffer = read_file(header_file, &header_size);
    if (!header_buffer) {
        return -1;
    }
    
    // Read data file
    data_buffer = read_file(data_file, &data_size);
    if (!data_buffer) {
        free(header_buffer);
        return -1;
    }
    
    // Ensure the header size is what we expect
    if (header_size != sizeof(WAVHeader)) {
        fprintf(stderr, "Error: Header file size does not match expected size\n");
        fprintf(stderr, "Expected: %lu bytes, Got: %lu bytes\n", 
                (unsigned long)sizeof(WAVHeader), (unsigned long)header_size);
        free(header_buffer);
        free(data_buffer);
        return -1;
    }
    
    // Update header with correct sizes
    WAVHeader* header = (WAVHeader*)header_buffer;
    header->data_size = data_size;     // Size of the data chunk
    header->wav_size = 36 + data_size; // Total file size - 8 (RIFF chunk header size)
    
    // Create output file
    FILE* output = fopen(output_file, "wb");
    if (!output) {
        fprintf(stderr, "Error: Cannot create output file %s\n", output_file);
        free(header_buffer);
        free(data_buffer);
        return -1;
    }
    
    // Write RIFF header
    if (fwrite(header->riff_header, 1, 4, output) != 4 ||
        fwrite(&header->wav_size, 4, 1, output) != 1 ||
        fwrite(header->wave_header, 1, 4, output) != 4) {
        fprintf(stderr, "Error: Failed to write RIFF header\n");
        fclose(output);
        free(header_buffer);
        free(data_buffer);
        return -1;
    }
    
    // Write fmt chunk
    if (fwrite(header->fmt_header, 1, 4, output) != 4 ||
        fwrite(&header->fmt_chunk_size, 4, 1, output) != 1 ||
        fwrite(&header->audio_format, 2, 1, output) != 1 ||
        fwrite(&header->num_channels, 2, 1, output) != 1 ||
        fwrite(&header->sample_rate, 4, 1, output) != 1 ||
        fwrite(&header->byte_rate, 4, 1, output) != 1 ||
        fwrite(&header->block_align, 2, 1, output) != 1 ||
        fwrite(&header->bits_per_sample, 2, 1, output) != 1) {
        fprintf(stderr, "Error: Failed to write fmt chunk\n");
        fclose(output);
        free(header_buffer);
        free(data_buffer);
        return -1;
    }
    
    // Write data chunk
    if (fwrite(header->data_header, 1, 4, output) != 4 ||
        fwrite(&header->data_size, 4, 1, output) != 1 ||
        fwrite(data_buffer, 1, data_size, output) != data_size) {
        fprintf(stderr, "Error: Failed to write data chunk\n");
        fclose(output);
        free(header_buffer);
        free(data_buffer);
        return -1;
    }
    
    // Clean up
    fclose(output);
    free(header_buffer);
    free(data_buffer);
    
    printf("WAV file created successfully: %s\n", output_file);
    printf("  Total size: %lu bytes\n", 44 + data_size); // 44 = standard WAV header size
    
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Usage: %s <header_file> <data_file> <output_wav_file>\n", argv[0]);
        printf("  <header_file>: WAV header file (e.g., output_header.bin)\n");
        printf("  <data_file>: Audio data file (e.g., output_data.bin), possibly encrypted\n");
        printf("  <output_wav_file>: Output WAV file to create\n");
        return 1;
    }
    
    const char* header_file = argv[1];
    const char* data_file = argv[2];
    const char* output_file = argv[3];
    
    return create_wav_file(header_file, data_file, output_file);
} 