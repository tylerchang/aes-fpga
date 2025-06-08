#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "Vmix_columns.h"
#include "verilated.h"

// Test vector
struct TestVector {
    uint8_t mode;        // 0 for encrypt, 1 for decrypt
    uint8_t input[16];   // 128-bit input block (in bytes)
    uint8_t output[16];  // Expected 128-bit output (in bytes)
};

// Print a 128-bit block in hex format
void print_block(const uint8_t* block, const std::string& label) {
    std::cout << label << ": ";
    for (int i = 0; i < 16; i++) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)block[i] << " ";
    }
    std::cout << std::endl;
}

// Print a 128-bit block in hex format in a 4x4 column-major matrix
void print_block_matrix(const uint8_t* block, const std::string& label) {
    std::cout << label << ":\n";
    for (int row = 0; row < 4; row++) {
        std::cout << "  ";
        for (int col = 0; col < 4; col++) {
            // column-major format
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
    Vmix_columns* dut = new Vmix_columns;

    // Test vectors for encryption
    TestVector encrypt_test;
    encrypt_test.mode = 0;
    
    // Sample input for encryption (column-major format)
    uint8_t input_encrypt[16] = {
        0xD4, 0xBF, 0x5D, 0x30,
        0xE0, 0xB4, 0x52, 0xAE,
        0xB8, 0x41, 0x11, 0xF1,
        0x1E, 0x27, 0x98, 0xE5
    };
    memcpy(encrypt_test.input, input_encrypt, sizeof(input_encrypt));
    
    // Expected output after MixColumns (encryption)
    // These values are from FIPS 197 Appendix B
    uint8_t output_encrypt[16] = {
        0x04, 0x66, 0x81, 0xE5,
        0xE0, 0xCB, 0x19, 0x9A,
        0x48, 0xF8, 0xD3, 0x7A,
        0x28, 0x06, 0x26, 0x4C
    };
    memcpy(encrypt_test.output, output_encrypt, sizeof(output_encrypt));

    // Test vectors for decryption
    TestVector decrypt_test;
    decrypt_test.mode = 1; 
    
    // Sample input for decryption (use the encrypt output as input)
    memcpy(decrypt_test.input, output_encrypt, sizeof(output_encrypt));
    
    // Expected output after InvMixColumns (decryption) - should be the encrypt input
    memcpy(decrypt_test.output, input_encrypt, sizeof(input_encrypt));

    // Run tests
    TestVector tests[2] = {encrypt_test, decrypt_test};
    bool all_passed = true;
    
    for (int t = 0; t < 2; t++) {
        const TestVector& test = tests[t];
        
        std::cout << "\nTest " << (t + 1) << " (mode = " << (test.mode == 0 ? "encrypt" : "decrypt") << "):\n";
        print_block(test.input, "Input (flat)");
        print_block_matrix(test.input, "Input (matrix)");
        
        // Set the mode (encrypt/decrypt)
        dut->mode = test.mode;
        
        // Feed the input block to the DUT
        VlWide<4> in_wide;
        bytes_to_vlwide(test.input, in_wide);
        
        // Set the input to the DUT
        for (int i = 0; i < 4; i++) {
            dut->in[i] = in_wide[i];
        }
        
        // Evaluate the design
        dut->eval();
        
        // Extract the output
        uint8_t actual[16];
        vlwide_to_bytes(dut->out, actual);
        
        print_block(actual, "Actual output (flat)");
        print_block_matrix(actual, "Actual output (matrix)");
        print_block(test.output, "Expected output (flat)");
        print_block_matrix(test.output, "Expected output (matrix)");
        
        if (compare_blocks(actual, test.output)) {
            std::cout << "TEST PASSED\n";
        } else {
            std::cout << "TEST FAILED\n";
            all_passed = false;
            
            // Detailed comparison to show which bytes are incorrect
            std::cout << "Detailed comparison:\n";
            for (int i = 0; i < 16; i++) {
                if (actual[i] != test.output[i]) {
                    int row = i % 4;
                    int col = i / 4;
                    std::cout << "Position [" << row << "," << col << "]: Actual = 0x" 
                            << std::hex << std::setw(2) << std::setfill('0') << (int)actual[i]
                            << ", Expected = 0x" 
                            << std::hex << std::setw(2) << std::setfill('0') << (int)test.output[i]
                            << std::endl;
                }
            }
        }
    }
    
    dut->final();
    delete dut;
    
    return all_passed ? 0 : 1;
} 