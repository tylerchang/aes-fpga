#!/bin/bash
# FIFO system startup script

echo "=== FIFO System Startup ==="
echo 

# Check if running as root
if [ "$(id -u)" -ne 0 ]; then
    echo "Error: This script must be run as root (use sudo)" >&2
    exit 1
fi

# Make sure old modules are removed
echo "Cleaning up any previous modules..."
rmmod fifo_read 2>/dev/null
rmmod fifo_write 2>/dev/null

# Build everything
echo "Building kernel modules and userspace programs..."
make clean
make default

# Load the kernel modules
echo "Loading kernel modules..."
insmod fifo_write.ko
if [ $? -ne 0 ]; then
    echo "Error: Failed to load fifo_write.ko module" >&2
    exit 1
fi

insmod fifo_read.ko
if [ $? -ne 0 ]; then
    echo "Error: Failed to load fifo_read.ko module" >&2
    rmmod fifo_write
    exit 1
fi

# Check if modules are loaded
echo "Checking loaded modules:"
lsmod | grep fifo

# Display help information
echo
echo "=== FIFO System Ready ==="
echo "Sample commands:"
echo "  # Write data to FIFO:"
echo "  ./write_data input.txt"
echo
echo "  # Read data from FIFO:"
echo "  ./read_data output.txt 5"
echo
echo "  # Read continuously until Ctrl+C:"
echo "  ./read_data output.txt"
echo
echo "  # When finished, run cleanup script:"
echo "  ./fifo_cleanup.sh"
echo "=================================" 