#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include "Vaes_scheduler.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // For VCD tracing

// TODO: Change the interface to the dut to use ready/valid logic

// Print a byte in hex format
void print_byte(uint8_t byte) {
    std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)byte;
}

// Print a 128-bit block in hex format
void print_block(const uint8_t* block, const std::string& label) {
    std::cout << label << ": ";
    for (int i = 0; i < 16; i++) {
        print_byte(block[i]);
        std::cout << " ";
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
            print_byte(block[idx]);
            std::cout << " ";
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

// Pack 4 bytes into a 32-bit word (big-endian)
uint32_t bytes_to_word(const uint8_t* bytes) {
    return (static_cast<uint32_t>(bytes[0]) << 24) |
           (static_cast<uint32_t>(bytes[1]) << 16) |
           (static_cast<uint32_t>(bytes[2]) << 8) |
            static_cast<uint32_t>(bytes[3]);
}

// Unpack a 32-bit word into 4 bytes (big-endian)
void word_to_bytes(uint32_t word, uint8_t* bytes) {
    bytes[0] = (word >> 24) & 0xFF;
    bytes[1] = (word >> 16) & 0xFF;
    bytes[2] = (word >> 8) & 0xFF;
    bytes[3] = word & 0xFF;
}

// Run one negative edge of the clock
void negedge(Vaes_scheduler* dut, VerilatedVcdC* tfp, int& time_counter) {
    dut->clk = 0;
    dut->eval();
    tfp->dump(time_counter);
    time_counter += 5;  // Half period
}

// Run one positive edge of the clock
void posedge(Vaes_scheduler* dut, VerilatedVcdC* tfp, int& time_counter) {
    dut->clk = 1;
    dut->eval();
    tfp->dump(time_counter);
    time_counter += 5;  // Half period
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the AES Scheduler module
    Vaes_scheduler* dut = new Vaes_scheduler();
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("aes_scheduler_sim.vcd");  // Output VCD file name
    
    // Test vectors in column-major order (same as in aes_core_test.cpp)
    // Sample plaintext from FIPS-197 Appendix B
    uint8_t plaintext[160] = {0}; // 10 blocks of 16 bytes each
    
    // First block of plaintext
    uint8_t expected_ciphertext[16] = {
        0x32, 0x43, 0xF6, 0xA8,   // first column
        0x88, 0x5A, 0x30, 0x8D,   // second column
        0x31, 0x31, 0x98, 0xA2,   // third column
        0xE0, 0x37, 0x07, 0x34    // fourth column
    };

    // Expected ciphertext for the given plaintext and key (from FIPS-197)
    uint8_t block0[16] = {
        0x39, 0x25, 0x84, 0x1D,   // first column
        0x02, 0xDC, 0x09, 0xFB,   // second column
        0xDC, 0x11, 0x85, 0x97,   // third column
        0x19, 0x6A, 0x0B, 0x32    // fourth column
    };
    
    // Copy block0 into all 10 plaintext blocks for testing
    for (int i = 0; i < 10; i++) {
        memcpy(&plaintext[i*16], block0, 16);
    }

    // AES-128 key from FIPS-197 Appendix A.1
    uint8_t key[16] = {
        0x2B, 0x7E, 0x15, 0x16,   // first column
        0x28, 0xAE, 0xD2, 0xA6,   // second column
        0xAB, 0xF7, 0x15, 0x88,   // third column
        0x09, 0xCF, 0x4F, 0x3C    // fourth column
    };
    
    
    // Round keys for all rounds (pre-computed for the AES-128 key)
    // In a real implementation, you might compute these dynamically
    uint8_t round_keys[11][16] = {
        // Round 0 (initial key)
        {
            0x2B, 0x7E, 0x15, 0x16,
            0x28, 0xAE, 0xD2, 0xA6,
            0xAB, 0xF7, 0x15, 0x88,
            0x09, 0xCF, 0x4F, 0x3C
        },
        // Round 1
        {
            0xA0, 0xFA, 0xFE, 0x17,
            0x88, 0x54, 0x2C, 0xB1,
            0x23, 0xA3, 0x39, 0x39,
            0x2A, 0x6C, 0x76, 0x05
        },
        // Round 2
        {
            0xF2, 0xC2, 0x95, 0xF2,
            0x7A, 0x96, 0xB9, 0x43,
            0x59, 0x35, 0x80, 0x7A,
            0x73, 0x59, 0xF6, 0x7F
        },
        // Round 3
        {
            0x3D, 0x80, 0x47, 0x7D,
            0x47, 0x16, 0xFE, 0x3E,
            0x1E, 0x23, 0x7E, 0x44,
            0x6D, 0x7A, 0x88, 0x3B
        },
        // Round 4
        {
            0xEF, 0x44, 0xA5, 0x41,
            0xA8, 0x52, 0x5B, 0x7F,
            0xB6, 0x71, 0x25, 0x3B,
            0xDB, 0x0B, 0xAD, 0x00
        },
        // Round 5
        {
            0xD4, 0xD1, 0xC6, 0xF8,
            0x7C, 0x83, 0x9D, 0x87,
            0xCA, 0xF2, 0xB8, 0xBC,
            0x11, 0xF9, 0x15, 0xBC
        },
        // Round 6
        {
            0x6D, 0x88, 0xA3, 0x7A,
            0x11, 0x0B, 0x3E, 0xFD,
            0xDB, 0xF9, 0x86, 0x41,
            0xCA, 0x00, 0x93, 0xFD
        },
        // Round 7
        {
            0x4E, 0x54, 0xF7, 0x0E,
            0x5F, 0x5F, 0xC9, 0xF3,
            0x84, 0xA6, 0x4F, 0xB2,
            0x4E, 0xA6, 0xDC, 0x4F
        },
        // Round 8
        {
            0xEA, 0xD2, 0x73, 0x21,
            0xB5, 0x8D, 0xBA, 0xD2,
            0x31, 0x2B, 0xF5, 0x60,
            0x7F, 0x8D, 0x29, 0x2F
        },
        // Round 9
        {
            0xAC, 0x77, 0x66, 0xF3,
            0x19, 0xFA, 0xDC, 0x21,
            0x28, 0xD1, 0x29, 0x41,
            0x57, 0x5C, 0x00, 0x6E
        },
        // Round 10 (final)
        {
            0xD0, 0x14, 0xF9, 0xA8,
            0xC9, 0xEE, 0x25, 0x89,
            0xE1, 0x3F, 0x0C, 0xC8,
            0xB6, 0x63, 0x0C, 0xA6
        }
    };

    // Create input/output FIFOs with 32-bit words instead of bytes
    std::vector<uint32_t> input_fifo_words;
    for (int i = 0; i < 40; i++) {  // 10 blocks * 4 words per block
        input_fifo_words.push_back(bytes_to_word(&plaintext[i*4]));
    }
    
    std::vector<uint32_t> output_fifo_words;
    
    // Time counter for VCD dumping
    int time_counter = 0;
    
    // Print test information
    std::cout << "Testing AES Scheduler with 10 blocks:" << std::endl;
    print_block(block0, "Sample Input Block");
    print_block_matrix(block0, "Sample Input Block (matrix)");
    print_block(expected_ciphertext, "Expected Ciphertext for each block");
    
    // Initialize the scheduler signals
    dut->start = 0;                // Initialize in idle state
    dut->mode = 1;                 // Encryption mode
    dut->sink_valid = 0;        // No valid input initially
    dut->source_ready = 1;       // Output ready to receive
    dut->sink_data = 0;              // No input data yet
    
    // Initial clock cycle
    negedge(dut, tfp, time_counter);
    posedge(dut, tfp, time_counter);
    
    // Convert the round key to VlWide<4> format for the module
    VlWide<4> round_key_wide;
    
    std::cout << "\nStarting AES Scheduler test:" << std::endl;
    
    // Start the AES process - set up for the next posedge
    negedge(dut, tfp, time_counter);
    dut->start = 1;
    posedge(dut, tfp, time_counter);
    
    std::cout << "Running AES Scheduler to process 10 blocks:" << std::endl;
    
    // Input FIFO index
    int input_idx = 0;
    // Output FIFO count
    int output_count = 0;

    // RK address
    int round_key_addr = 0;
    
    // Run simulation until all 10 blocks are processed (or timeout)
    for (int cycle = 0; cycle < 1000; cycle++) {
        std::cout << "Cycle " << std::dec << cycle << ": ";
        
        // Begin with negedge
        negedge(dut, tfp, time_counter);
        
        // Handle FIFO input (ready/valid handshake) - prepare for next posedge
        if (dut->source_ready && input_idx < input_fifo_words.size()) {
            dut->sink_valid = 1;
            dut->sink_data = input_fifo_words[input_idx];
            std::cout << "FIFO input: 0x" << std::hex << dut->sink_data << " ";
            // Only increment input_idx if the handshake was successful
            if (dut->sink_ready) {
                input_idx++;
            }
        } else {
            dut->sink_valid = 0;
        }

        // Set up next cycles round key request - prepare for next posedge
        round_key_addr = dut->round_key_addr;
        
        // Process the positive edge
        posedge(dut, tfp, time_counter);

        // Handle round key request - after posedge
        std::cout << "round_key_addr: " << round_key_addr << " ";
        if (round_key_addr < 11) {
            bytes_to_vlwide(round_keys[round_key_addr], round_key_wide);
            for (int i = 0; i < 4; i++) {
                dut->round_key[i] = round_key_wide[i];
            }
            std::cout << "Providing round key " << round_key_addr << " ";
        }

        // Handle FIFO output (ready/valid handshake) - after posedge
        if (dut->source_valid && dut->source_ready) {
            output_fifo_words.push_back(dut->source_data);
            output_count++;
            std::cout << "FIFO output: 0x" << std::hex << dut->source_data << " ";
        }
        
        std::cout << std::endl;
        
        // Check if we've processed all 40 words (10 blocks * 4 words per block)
        // if ((output_count >= 40) && (input_idx >= 40)) {
        //     std::cout << "output_count: " << std::dec << output_count << std::endl;
        //     std::cout << "input_idx: " << std::dec << input_idx << std::endl;
        //     std::cout << "All blocks processed! Breaking simulation." << std::endl;
        //     break;
        // }

        std::cout << "output count: " << std::dec << output_count << std::endl;
        std::cout << "input idx: " << std::dec << input_idx << std::endl;
        

        // Error case - if we've run too many cycles
        if (cycle == 200) {
            break;
        }
    }
    
    // Convert output words back to bytes for verification
    std::vector<uint8_t> output_bytes;
    for (uint32_t word : output_fifo_words) {
        uint8_t bytes[4];
        word_to_bytes(word, bytes);
        for (int i = 0; i < 4; i++) {
            output_bytes.push_back(bytes[i]);
        }
    }
    
    // Verify the output data
    std::cout << "\nVerification Results:" << std::endl;
    
    bool all_blocks_correct = true;
    
    // Check each of the 10 output blocks
    for (int block = 0; block < 10 && (block * 16 + 15) < output_bytes.size(); block++) {
        uint8_t* output_block = &output_bytes[block * 16];
        
        std::cout << "Block " << block << ":" << std::endl;
        print_block(output_block, "  Output");
        
        bool block_correct = compare_blocks(output_block, expected_ciphertext);
        all_blocks_correct &= block_correct;
        
        std::cout << "  " << (block_correct ? "CORRECT" : "INCORRECT") << std::endl;
        
        if (!block_correct) {
            std::cout << "  Expected:" << std::endl;
            print_block(expected_ciphertext, "  ");
            
            // Detailed comparison for debugging
            std::cout << "  Detailed comparison:" << std::endl;
            for (int i = 0; i < 16; i++) {
                if (output_block[i] != expected_ciphertext[i]) {
                    int row = i % 4;
                    int col = i / 4;
                    std::cout << "  Position [" << row << "," << col << "]: Actual = 0x" 
                            << std::hex << std::setw(2) << std::setfill('0') << (int)output_block[i]
                            << ", Expected = 0x" 
                            << std::hex << std::setw(2) << std::setfill('0') << (int)expected_ciphertext[i]
                            << std::endl;
                }
            }
        }
    }
    
    // Overall test result
    if (all_blocks_correct) {
        std::cout << "\nTEST PASSED - All blocks match expected ciphertext" << std::endl;
    } else {
        std::cout << "\nTEST FAILED - Some blocks do not match expected ciphertext" << std::endl;
    }
    
    // Close the VCD trace file
    tfp->close();
    
    // Cleanup
    dut->final();
    delete dut;
    delete tfp;
    
    return all_blocks_correct ? 0 : 1;
} 