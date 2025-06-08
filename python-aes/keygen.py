"""
Simple AES-128 Key Generator

This script generates a random 16-byte (128-bit) key suitable for AES-128 encryption
and writes it to a file.
"""

import os
import sys

# Generate a random 16-byte key
key = os.urandom(16)

# Print key in hexadecimal format
print(f"Generated AES-128 key (hex): {key.hex()}")

# Write key to file if filename provided
if len(sys.argv) > 1:
    filename = sys.argv[1]
    with open(filename, 'wb') as f:
        f.write(key)
    print(f"Key saved to {filename}")
else:
    print("No filename provided. Key was not saved.")