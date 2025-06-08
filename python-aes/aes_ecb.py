import os
import wave
import argparse
import struct
import base64
import time

# AES S-box
SBOX = [
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
]

# AES Inverse S-box
INV_SBOX = [
    0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
    0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
    0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
    0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
    0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
    0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
    0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
    0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
    0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
    0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
    0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
    0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
    0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
    0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
    0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
    0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d
]

# Round constants for key schedule
RCON = [0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36]

# Galois Field multiplication
def gmul(a, b):
    p = 0
    for _ in range(8):
        if b & 1:           # If the lowest bit of b is set
            p ^= a          # XOR the current value of a into the product
        high_bit_set = a & 0x80  # Check if the highest bit (x^7) is set
        a <<= 1             # Double a (equivalent to multiplying by x)
        if high_bit_set:    # If we would overflow to x^8
            a ^= 0x1b       # XOR with 0x1b (the irreducible polynomial without x^8)
        b >>= 1             # Shift b right to check the next bit
    return p & 0xff         # Ensure the result fits in a byte

# Convert bytes to state matrix
def bytes_to_state(data):
    state = [[0 for _ in range(4)] for _ in range(4)]
    for i in range(4):
        for j in range(4):
            state[j][i] = data[i * 4 + j]
    return state

# Convert state matrix to bytes
def state_to_bytes(state):
    output = bytearray(16)
    for i in range(4):
        for j in range(4):
            output[i * 4 + j] = state[j][i]
    return output

# SubBytes transformation
def sub_bytes(state):
    for i in range(4):
        for j in range(4):
            state[i][j] = SBOX[state[i][j]]
    return state

# InvSubBytes transformation
def inv_sub_bytes(state):
    for i in range(4):
        for j in range(4):
            state[i][j] = INV_SBOX[state[i][j]]
    return state

# ShiftRows transformation
def shift_rows(state):
    state[1] = state[1][1:] + state[1][:1]
    state[2] = state[2][2:] + state[2][:2]
    state[3] = state[3][3:] + state[3][:3]
    return state

# InvShiftRows transformation
def inv_shift_rows(state):
    state[1] = state[1][3:] + state[1][:3]
    state[2] = state[2][2:] + state[2][:2]
    state[3] = state[3][1:] + state[3][:1]
    return state

# MixColumns transformation
def mix_columns(state):
    for i in range(4):
        s0 = state[0][i]
        s1 = state[1][i]
        s2 = state[2][i]
        s3 = state[3][i]
        
        state[0][i] = gmul(0x02, s0) ^ gmul(0x03, s1) ^ s2 ^ s3
        state[1][i] = s0 ^ gmul(0x02, s1) ^ gmul(0x03, s2) ^ s3
        state[2][i] = s0 ^ s1 ^ gmul(0x02, s2) ^ gmul(0x03, s3)
        state[3][i] = gmul(0x03, s0) ^ s1 ^ s2 ^ gmul(0x02, s3)
    return state

# InvMixColumns transformation
def inv_mix_columns(state):
    for i in range(4):
        s0 = state[0][i]
        s1 = state[1][i]
        s2 = state[2][i]
        s3 = state[3][i]
        
        state[0][i] = gmul(0x0e, s0) ^ gmul(0x0b, s1) ^ gmul(0x0d, s2) ^ gmul(0x09, s3)
        state[1][i] = gmul(0x09, s0) ^ gmul(0x0e, s1) ^ gmul(0x0b, s2) ^ gmul(0x0d, s3)
        state[2][i] = gmul(0x0d, s0) ^ gmul(0x09, s1) ^ gmul(0x0e, s2) ^ gmul(0x0b, s3)
        state[3][i] = gmul(0x0b, s0) ^ gmul(0x0d, s1) ^ gmul(0x09, s2) ^ gmul(0x0e, s3)
    return state

# AddRoundKey transformation
def add_round_key(state, round_key):
    for i in range(4):
        for j in range(4):
            state[i][j] ^= round_key[i][j]
    return state

# Key schedule core function
def key_schedule_core(word, iteration):
    # Rotate left by one byte
    word = word[1:] + word[:1]
    
    # Apply S-box to all bytes
    for i in range(len(word)):
        word[i] = SBOX[word[i]]
    
    # XOR with round constant on the first byte
    word[0] ^= RCON[iteration]
    
    return word

# Expand key for all rounds
def expand_key(key, rounds=10):
    # Convert key to words (4-byte chunks)
    key_words = [key[i:i+4] for i in range(0, len(key), 4)]
    
    # Expand to get words for all rounds
    expanded_key_words = list(key_words)
    for i in range(len(key_words), 4 * (rounds + 1)):
        temp = list(expanded_key_words[i-1])
        
        if i % len(key_words) == 0:
            temp = key_schedule_core(temp, i // len(key_words) - 1)
        
        for j in range(4):
            temp[j] ^= expanded_key_words[i-len(key_words)][j]
        
        expanded_key_words.append(temp)
    
    # Convert expanded key words to round keys (4x4 matrices)
    round_keys = []
    for i in range(0, len(expanded_key_words), 4):
        round_key = [[] for _ in range(4)]
        for j in range(4):
            for k in range(4):
                round_key[k].append(expanded_key_words[i+j][k])
        round_keys.append(round_key)
    
    return round_keys

# AES Encryption function
def aes_encrypt_block(data, key):
    state = bytes_to_state(data)
    
    # Generate round keys
    round_keys = expand_key(key)
    
    # Initial round key addition
    state = add_round_key(state, round_keys[0])
    
    # Main rounds
    for i in range(1, 10):
        state = sub_bytes(state)
        state = shift_rows(state)
        state = mix_columns(state)
        state = add_round_key(state, round_keys[i])
    
    # Final round (no MixColumns)
    state = sub_bytes(state)
    state = shift_rows(state)
    state = add_round_key(state, round_keys[10])
    
    return state_to_bytes(state)

# AES Decryption function
def aes_decrypt_block(data, key):
    state = bytes_to_state(data)
    
    # Generate round keys
    round_keys = expand_key(key)
    
    # Initial round key addition
    state = add_round_key(state, round_keys[10])
    
    # Main rounds
    for i in range(9, 0, -1):
        state = inv_shift_rows(state)
        state = inv_sub_bytes(state)
        state = add_round_key(state, round_keys[i])
        state = inv_mix_columns(state)
    
    # Final round (no MixColumns)
    state = inv_shift_rows(state)
    state = inv_sub_bytes(state)
    state = add_round_key(state, round_keys[0])
    
    return state_to_bytes(state)

# ECB Mode encryption
def encrypt_ecb(data, key):
    # Split data into blocks of 16 bytes
    blocks = [data[i:i+16] for i in range(0, len(data), 16)]
    
    # Pad the last block if necessary (PKCS#7 padding)
    last_block_len = len(blocks[-1])
    if last_block_len < 16:
        padding_length = 16 - last_block_len
        blocks[-1] = blocks[-1] + bytes([padding_length]) * padding_length
    
    # Encrypt each block independently
    encrypted_blocks = []
    for block in blocks:
        encrypted_block = aes_encrypt_block(block, key)
        encrypted_blocks.append(encrypted_block)
    
    # Concatenate all encrypted blocks
    return b''.join(encrypted_blocks)

# ECB Mode decryption
def decrypt_ecb(data, key):
    # Split data into blocks of 16 bytes
    blocks = [data[i:i+16] for i in range(0, len(data), 16)]
    
    # Decrypt each block independently
    decrypted_blocks = []
    for block in blocks:
        decrypted_block = aes_decrypt_block(block, key)
        decrypted_blocks.append(decrypted_block)
    
    # Concatenate all decrypted blocks
    result = b''.join(decrypted_blocks)
    
    # Remove padding
    padding_length = result[-1]
    if padding_length > 0 and padding_length <= 16:
        # Verify padding (all padding bytes should be the same)
        padding = result[-padding_length:]
        if all(p == padding_length for p in padding):
            return result[:-padding_length]
    
    # Return the result without removing padding if padding is invalid
    return result

# Validate and convert a hexadecimal key string to bytes
def validate_and_convert_key(key_hex):
    if len(key_hex) != 32:
        raise ValueError(f"AES-128 requires a 32-character hex key. Got {len(key_hex)} characters instead.")
    
    try:
        # Convert hex string to bytes
        key_bytes = bytes.fromhex(key_hex)
        return key_bytes
    except ValueError:
        raise ValueError("Invalid hexadecimal key. Key must contain only hexadecimal characters (0-9, a-f).")

# Function to encrypt a WAV file using ECB mode
def encrypt_wav(input_file, output_file, key_hex):
    total_start_time = time.time()
    
    # Validate and convert the hex key
    key = validate_and_convert_key(key_hex)
    
    # Read the WAV file
    with wave.open(input_file, 'rb') as wav_file:
        params = wav_file.getparams()
        frames = wav_file.readframes(wav_file.getnframes())
    
    # Encrypt the audio data using ECB mode
    encryption_start_time = time.time()
    encrypted_data = encrypt_ecb(frames, key)
    encryption_end_time = time.time()
    
    # Create a new WAV file with the same parameters but encrypted audio data
    with wave.open(output_file, 'wb') as wav_file:
        wav_file.setparams(params)
        wav_file.writeframes(encrypted_data)
    
    total_end_time = time.time()
    
    # Calculate and print timing information
    encryption_time = encryption_end_time - encryption_start_time
    total_time = total_end_time - total_start_time
    
    print(f"File encrypted successfully: {output_file}")
    print(f"Encryption time: {encryption_time:.4f} seconds")
    print(f"Total processing time (including I/O): {total_time:.4f} seconds")
    print(f"File size: {len(frames) / 1024:.2f} KB")
    print(f"Encryption speed: {(len(frames) / 1024) / encryption_time:.2f} KB/s")

# Function to decrypt a WAV file
def decrypt_wav(input_file, output_file, key_hex):
    total_start_time = time.time()
    
    # Validate and convert the hex key
    key = validate_and_convert_key(key_hex)
    
    # Read the encrypted WAV file
    with wave.open(input_file, 'rb') as wav_file:
        params = wav_file.getparams()
        encrypted_data = wav_file.readframes(wav_file.getnframes())
    
    # Decrypt the audio data using ECB mode
    decryption_start_time = time.time()
    decrypted_data = decrypt_ecb(encrypted_data, key)
    decryption_end_time = time.time()
    
    # Create a new WAV file with the original parameters and decrypted audio data
    with wave.open(output_file, 'wb') as wav_file:
        wav_file.setparams(params)
        wav_file.writeframes(decrypted_data)
    
    total_end_time = time.time()
    
    # Calculate and print timing information
    decryption_time = decryption_end_time - decryption_start_time
    total_time = total_end_time - total_start_time
    
    print(f"File decrypted successfully: {output_file}")
    print(f"Decryption time: {decryption_time:.4f} seconds")
    print(f"Total processing time (including I/O): {total_time:.4f} seconds")
    print(f"File size: {len(encrypted_data) / 1024:.2f} KB")
    print(f"Decryption speed: {(len(encrypted_data) / 1024) / decryption_time:.2f} KB/s")

def main():
    parser = argparse.ArgumentParser(description='Encrypt or decrypt WAV files using AES-128 in ECB mode from scratch.')
    parser.add_argument('action', choices=['encrypt', 'decrypt'], help='Action to perform')
    parser.add_argument('input_file', help='Path to the input file')
    parser.add_argument('output_file', help='Path to the output file')
    parser.add_argument('key', help='Hexadecimal key (32 characters / 16 bytes)')
    
    args = parser.parse_args()
    
    if args.action == 'encrypt':
        encrypt_wav(args.input_file, args.output_file, args.key)
    else:
        decrypt_wav(args.input_file, args.output_file, args.key)

if __name__ == '__main__':
    main()