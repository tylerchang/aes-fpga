#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include "Vaes_core.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // Add VCD tracing support

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

// Run one clock cycle with VCD tracing
void tick(Vaes_core* dut, VerilatedVcdC* tfp, int& time_counter) {
    dut->clk = 0;
    dut->eval();
    tfp->dump(time_counter);
    time_counter += 5;  // Half period
    
    dut->clk = 1;
    dut->eval();
    tfp->dump(time_counter);
    time_counter += 5;  // Half period
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the AES Core module
    Vaes_core* dut = new Vaes_core();
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("aes_core_sim.vcd");  // Output VCD file name
    
    // Test vectors in column-major order
    // Sample plaintext from FIPS-197 Appendix B
    uint8_t plaintext[16] = {
        0x32, 0x43, 0xF6, 0xA8,   // first column
        0x88, 0x5A, 0x30, 0x8D,   // second column
        0x31, 0x31, 0x98, 0xA2,   // third column
        0xE0, 0x37, 0x07, 0x34    // fourth column
    };

    // AES-128 key from FIPS-197 Appendix A.1
    uint8_t key[16] = {
        0x2B, 0x7E, 0x15, 0x16,   // first column
        0x28, 0xAE, 0xD2, 0xA6,   // second column
        0xAB, 0xF7, 0x15, 0x88,   // third column
        0x09, 0xCF, 0x4F, 0x3C    // fourth column
    };

    // Expected ciphertext for the given plaintext and key (from FIPS-197)
    uint8_t expected_ciphertext[16] = {
        0x39, 0x25, 0x84, 0x1D,   // first column
        0x02, 0xDC, 0x09, 0xFB,   // second column
        0xDC, 0x11, 0x85, 0x97,   // third column
        0x19, 0x6A, 0x0B, 0x32    // fourth column
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

    // Convert input plaintext to VlWide<4> for the module
    VlWide<4> in_text_wide;
    bytes_to_vlwide(plaintext, in_text_wide);
    
    // Print test inputs
    std::cout << "Testing AES Core Full Encryption:" << std::endl;
    print_block(plaintext, "Input Plaintext");
    print_block_matrix(plaintext, "Input Plaintext (matrix)");
    print_block(key, "Initial Key");
    print_block_matrix(key, "Initial Key (matrix)");
    print_block(expected_ciphertext, "Expected Ciphertext");
    print_block_matrix(expected_ciphertext, "Expected Ciphertext (matrix)");
    
    // Time counter for VCD dumping
    int time_counter = 0;
    
    // Initialize the AES core with plaintext
    for (int i = 0; i < 4; i++) {
        dut->in_text[i] = in_text_wide[i];
    }
    
    // Begin testing
    dut->start = 0;       // Initialize in idle state
    dut->mode = 0;        // Encryption mode
    dut->wr_en_sched = 1; // Enable writing
    
    // Set initial round key
    VlWide<4> round_key_wide;
    bytes_to_vlwide(round_keys[0], round_key_wide);
    for (int i = 0; i < 4; i++) {
        dut->round_key[i] = round_key_wide[i];
    }
    
    std::cout << "Providing initial round key (round 0)" << std::endl;
    
    // Initial tick
    tick(dut, tfp, time_counter);
    
    // Start the AES process
    dut->start = 1;
    tick(dut, tfp, time_counter);
    
    std::cout << "\nRunning AES Core for full encryption (50 cycles):" << std::endl;
    
    // AES round key scheduling based on FSM analysis
    // Key k is needed at the start of the cycle where the ADD state for round k begins.
    // Key 0: Loaded before the loop.
    // Key 1: Needed for ADD starting cycle 5. Load at cycle 5.
    // Key 2: Needed for ADD starting cycle 10. Load at cycle 10.
    // ...
    // Key 9: Needed for ADD starting cycle 45. Load at cycle 45.
    // Key 10: Needed for final ADD starting cycle 49. Load at cycle 49.
    
    // Run for 50 cycles (0 to 49), sufficient for 10 rounds + initial AddKey
    for (int cycle = 0; cycle < 50; cycle++) {
        // Load appropriate round key at the beginning of the cycle where it's first needed
        int key_idx_to_load = -1;
        if (cycle == 5)  key_idx_to_load = 1;
        else if (cycle == 10) key_idx_to_load = 2;
        else if (cycle == 15) key_idx_to_load = 3;
        else if (cycle == 20) key_idx_to_load = 4;
        else if (cycle == 25) key_idx_to_load = 5;
        else if (cycle == 30) key_idx_to_load = 6;
        else if (cycle == 35) key_idx_to_load = 7;
        else if (cycle == 40) key_idx_to_load = 8;
        else if (cycle == 45) key_idx_to_load = 9;  // Key 9 needed for ADD starting cycle 45
        else if (cycle == 49) key_idx_to_load = 10; // Key 10 needed for final ADD starting cycle 49

        if (key_idx_to_load != -1) {
            bytes_to_vlwide(round_keys[key_idx_to_load], round_key_wide);
            for (int i = 0; i < 4; i++) {
                dut->round_key[i] = round_key_wide[i];
            }
            std::cout << "Cycle " << std::dec << cycle << ": Loading round key " << key_idx_to_load << std::endl;
        }

        // Print cycle number before ticking
        std::cout << "Cycle " << std::dec << cycle << ": "; 

        // Run one clock cycle with VCD tracing
        tick(dut, tfp, time_counter);

        std::cout << "Tick completed." << std::endl << std::endl; 
    }
    
    // Encryption is complete after the tick in cycle 49.
    std::cout << "\nEncryption completed after 50 cycles (0-49)." << std::endl;

    // Get the final output
    uint8_t final_output[16];
    vlwide_to_bytes(dut->out_text, final_output);
    
    // Print and check results
    std::cout << "\nFinal Results:" << std::endl;
    print_block(final_output, "Actual Ciphertext");
    print_block_matrix(final_output, "Actual Ciphertext (matrix)");
    
    bool passed = compare_blocks(final_output, expected_ciphertext);
    if (passed) {
        std::cout << "TEST PASSED - Ciphertext matches expected value" << std::endl;
    } else {
        std::cout << "TEST FAILED - Ciphertext does not match expected value" << std::endl;
        
        // Show detailed comparison
        std::cout << "Detailed comparison:" << std::endl;
        for (int i = 0; i < 16; i++) {
            if (final_output[i] != expected_ciphertext[i]) {
                int row = i % 4;
                int col = i / 4;
                std::cout << "Position [" << row << "," << col << "]: Actual = 0x" 
                        << std::hex << std::setw(2) << std::setfill('0') << (int)final_output[i]
                        << ", Expected = 0x" 
                        << std::hex << std::setw(2) << std::setfill('0') << (int)expected_ciphertext[i]
                        << std::endl;
            }
        }
    }
    
    // Close the VCD trace file
    tfp->close();
    
    // Cleanup
    dut->final();
    delete dut;
    delete tfp;
    
    return passed ? 0 : 1;
} 