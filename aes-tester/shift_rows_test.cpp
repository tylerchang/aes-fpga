#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "Vshift_rows.h"
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
            int idx = col * 4 + row;
            std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)block[idx] << " ";
        }
        std::cout << std::endl;
    }
}

// Compare two 128-bit blocks
bool compare_blocks(const uint8_t* actual, const uint8_t* expected) {
    return (memcmp(actual, expected, 16) == 0);
}

// Convert byte array to 128-bit value in standard format
void bytes_to_wide(const uint8_t* bytes, VlWide<4>& result) {
    // Clear the result
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
    }
    
    // Pack the bytes into the wide value
    for (int i = 0; i < 16; i++) {
        int word = i / 4;
        int byte_pos = 3 - (i % 4);
        result[3-word] |= (static_cast<vluint32_t>(bytes[i]) << (8 * byte_pos));
    }
}

// Extract 128-bit wide value to byte array
void wide_to_bytes(const VlWide<4>& wide, uint8_t* bytes) {
    for (int i = 0; i < 16; i++) {
        int word = i / 4;
        int byte_pos = 3 - (i % 4);
        bytes[i] = (wide[(3-word)] >> (8 * byte_pos)) & 0xFF;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create test vector (encryption)
    TestVector test_encrypt;
    test_encrypt.mode = 0; // encrypt
    
    // Sample input for encryption (column-major format)
    uint8_t input_encrypt[16] = {
        0xD4, 0x27, 0x11, 0xAE,
        0xE0, 0xBF, 0x98, 0xF1,
        0xB8, 0xB4, 0x5D, 0xE5,
        0x1E, 0x41, 0x52, 0x30
    };
    memcpy(test_encrypt.input, input_encrypt, sizeof(input_encrypt));
    
    // Expected output after ShiftRows (encryption) - column-major format
    uint8_t output_encrypt[16] = {
        0xD4, 0xBF, 0x5D, 0x30,
        0xE0, 0xB4, 0x52, 0xAE,
        0xB8, 0x41, 0x11, 0xF1,
        0x1E, 0x27, 0x98, 0xE5
    };
    memcpy(test_encrypt.output, output_encrypt, sizeof(output_encrypt));

    // Create test vector (decryption)
    TestVector test_decrypt;
    test_decrypt.mode = 1; // decrypt
    
    // Sample input for decryption (column-major format)
    uint8_t input_decrypt[16] = {
        // col 0       col 1        col 2        col 3
        0xD4, 0xBF, 0x5D, 0x30,
        0xE0, 0xB4, 0x52, 0xAE,
        0xB8, 0x41, 0x11, 0xF1,
        0x1E, 0x27, 0x98, 0xE5
    };
    memcpy(test_decrypt.input, input_decrypt, sizeof(input_decrypt));
    
    // Expected output after InvShiftRows (decryption) - column-major format
    uint8_t output_decrypt[16] = {
        // col 0       col 1        col 2        col 3
        0xD4, 0x27, 0x11, 0xAE,
        0xE0, 0xBF, 0x98, 0xF1,
        0xB8, 0xB4, 0x5D, 0xE5,
        0x1E, 0x41, 0x52, 0x30
    };
    memcpy(test_decrypt.output, output_decrypt, sizeof(output_decrypt));

    // Create an instance of the module
    Vshift_rows* dut = new Vshift_rows;
    
    // Test vectors
    TestVector tests[2] = {test_encrypt, test_decrypt};
    bool all_passed = true;
    
    for (int t = 0; t < 2; t++) {
        const TestVector& test = tests[t];
        
        std::cout << "\nTest " << (t + 1) << " (mode = " << (test.mode == 0 ? "encrypt" : "decrypt") << "):\n";
        print_block(test.input, "Input (flat)");
        print_block_matrix(test.input, "Input (matrix)");
        
        // Set the mode (encrypt/decrypt)
        dut->mode = test.mode;
        
        // Feed the input block to the DUT
        VlWide<4> wide_in;
        bytes_to_wide(test.input, wide_in);
        dut->in_text = wide_in;
        
        // Evaluate the design
        dut->eval();
        
        // Extract the output
        uint8_t actual[16];
        wide_to_bytes(dut->out_text, actual);
        
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