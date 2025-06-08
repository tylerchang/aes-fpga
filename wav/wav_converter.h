#ifndef WAV_CONVERTER_H
#define WAV_CONVERTER_H

// WAV header structure
typedef struct {
    // RIFF header
    char riff_header[4];      // Contains "RIFF"
    unsigned int wav_size;    // Size of the WAV file
    char wave_header[4];      // Contains "WAVE"
    
    // Format chunk
    char fmt_header[4];       // Contains "fmt "
    unsigned int fmt_chunk_size;  // Size of the format chunk
    unsigned short audio_format;    // Audio format (1 for PCM)
    unsigned short num_channels;    // Number of channels
    unsigned int sample_rate;     // Sample rate
    unsigned int byte_rate;       // Byte rate
    unsigned short block_align;     // Block alignment
    unsigned short bits_per_sample; // Bits per sample
    
    // Data chunk
    char data_header[4];      // Contains "data"
    unsigned int data_size;       // Size of the data chunk
} WAVHeader;

// Function prototypes
int read_wav_file(const char* input_file, WAVHeader* header, unsigned char** audio_data, unsigned int* audio_data_size);
unsigned char* apply_padding(unsigned char* data, unsigned int data_size, unsigned int* padded_size);
int save_files(const char* output_prefix, WAVHeader* header, unsigned char* padded_data, unsigned int padded_size);

#endif /* WAV_CONVERTER_H */ 