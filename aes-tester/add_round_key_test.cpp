#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "Vadd_round_key.h"
#include "verilated.h"

// Print a 128-bit block in hex format
void print_block(const uint8_t* block, const std::string& label) {
    std::cout << label << ": ";
    for (int i = 0; i < 16; i++) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)block[i] << " ";
    }
    std::cout << std::endl;
}

// Print a 128-bit block in hex format in a 4x4 matrix
void print_block_matrix(const uint8_t* block, const std::string& label) {
    std::cout << label << ":\n";
    for (int row = 0; row < 4; row++) {
        std::cout << "  ";
        for (int col = 0; col < 4; col++) {
            int idx = row + col * 4;
            std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)block[idx] << " ";
        }
        std::cout << std::endl;
    }
}

// Compare two 128-bit blocks
bool compare_blocks(const uint8_t* actual, const uint8_t* expected) {
    return (memcmp(actual, expected, 16) == 0);
}

// Pack byte array into VlWide<4> 128-bit value
void bytes_to_vlwide(const uint8_t* bytes, VlWide<4>& result) {
    // Clear the result
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
    }
    
    // Pack the bytes into the wide value (4 words x 32 bits = 128 bits)
    for (int i = 0; i < 16; i++) {
        int word_idx = i / 4;        // Which 32-bit word (0-3)
        int byte_pos = 3 - (i % 4);  // Position within word (0-3), in big-endian order
        result[3-word_idx] |= (static_cast<uint32_t>(bytes[i]) << (8 * byte_pos));
    }
}

// Extract VlWide<4> 128-bit value to byte array
void vlwide_to_bytes(const VlWide<4>& value, uint8_t* bytes) {
    for (int i = 0; i < 16; i++) {
        int word_idx = i / 4;        // Which 32-bit word (0-3)
        int byte_pos = 3 - (i % 4);  // Position within word (0-3), in big-endian order
        bytes[i] = (value[3-word_idx] >> (8 * byte_pos)) & 0xFF;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the module
    Vadd_round_key* dut = new Vadd_round_key;
    
    // Test vectors in column-major order
    uint8_t input_text[16] = {
        0x32, 0x43, 0xF6, 0xA8,   // first column
        0x88, 0x5A, 0x30, 0x8D,   // second column
        0x31, 0x31, 0x98, 0xA2,   // third column
        0xE0, 0x37, 0x07, 0x34    // fourth column
    };

    uint8_t round_key[16] = {
        0x2B, 0x7E, 0x15, 0x16,   // first column
        0x28, 0xAE, 0xD2, 0xA6,   // second column
        0xAB, 0xF7, 0x15, 0x88,   // third column
        0x09, 0xCF, 0x4F, 0x3C    // fourth column
    };

    uint8_t expected_output[16] = {
        0x19, 0x3d, 0xe3, 0xbe,
        0xa0, 0xf4, 0xe2, 0x2b,
        0x9a, 0xc6, 0x8d, 0x2a,
        0xe9, 0xf8, 0x48, 0x08
    };

    
    // Convert byte arrays to VlWide<4> values for the module
    VlWide<4> in_text_wide;
    VlWide<4> round_key_wide;
    bytes_to_vlwide(input_text, in_text_wide);
    bytes_to_vlwide(round_key, round_key_wide);
    
    // Print test inputs
    std::cout << "Testing AddRoundKey operation:" << std::endl;
    print_block(input_text, "Input Text");
    print_block_matrix(input_text, "Input Text (matrix)");
    print_block(round_key, "Round Key");
    print_block_matrix(round_key, "Round Key (matrix)");
    print_block(expected_output, "Expected Output");
    print_block_matrix(expected_output, "Expected Output (matrix)");
    
    // Set the inputs to the module
    for (int i = 0; i < 4; i++) {
        dut->in_text[i] = in_text_wide[i];
        dut->round_key[i] = round_key_wide[i];
    }
    
    // Evaluate the design
    dut->eval();
    
    // Get the output
    uint8_t actual_output[16];
    vlwide_to_bytes(dut->out_text, actual_output);
    
    // Print and check results
    print_block(actual_output, "Actual Output");
    print_block_matrix(actual_output, "Actual Output (matrix)");
    
    bool passed = compare_blocks(actual_output, expected_output);
    if (passed) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
        
        // Show detailed comparison
        std::cout << "Detailed comparison:" << std::endl;
        for (int i = 0; i < 16; i++) {
            if (actual_output[i] != expected_output[i]) {
                int row = i % 4;
                int col = i / 4;
                std::cout << "Position [" << row << "," << col << "]: Actual = 0x" 
                        << std::hex << std::setw(2) << std::setfill('0') << (int)actual_output[i]
                        << ", Expected = 0x" 
                        << std::hex << std::setw(2) << std::setfill('0') << (int)expected_output[i]
                        << std::endl;
            }
        }
    }
    
    // Also verify that AddRoundKey is its own inverse
    // Applying AddRoundKey twice with the same key should result in the original input
    
    std::cout << "\nVerifying AddRoundKey is its own inverse:" << std::endl;
    
    // Use the output from the first operation as input to the second
    // No need to convert back and forth, just use the output directly
    for (int i = 0; i < 4; i++) {
        dut->in_text[i] = dut->out_text[i];
        // Keep the same round key
        dut->round_key[i] = round_key_wide[i];
    }
    
    // Evaluate the design again
    dut->eval();
    
    // Get the output
    uint8_t inverse_output[16];
    vlwide_to_bytes(dut->out_text, inverse_output);
    
    // Print and check results
    print_block(inverse_output, "Output after applying AddRoundKey twice");
    
    bool inverse_passed = compare_blocks(inverse_output, input_text);
    if (inverse_passed) {
        std::cout << "INVERSE TEST PASSED" << std::endl;
    } else {
        std::cout << "INVERSE TEST FAILED" << std::endl;
    }
    
    dut->final();
    delete dut;
    
    return (passed && inverse_passed) ? 0 : 1;
} 