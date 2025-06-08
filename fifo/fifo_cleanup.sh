#!/bin/bash
# FIFO system cleanup script

echo "=== FIFO System Cleanup ==="
echo 

# Check if running as root
if [ "$(id -u)" -ne 0 ]; then
    echo "Error: This script must be run as root (use sudo)" >&2
    exit 1
fi

# Check which modules are loaded
echo "Currently loaded FIFO modules:"
lsmod | grep fifo

# Unload modules
echo "Unloading kernel modules..."
if lsmod | grep -q "fifo_read"; then
    echo "Removing fifo_read module..."
    rmmod fifo_read
    if [ $? -ne 0 ]; then
        echo "Warning: Could not remove fifo_read module" >&2
    fi
else
    echo "fifo_read module is not loaded"
fi

if lsmod | grep -q "fifo_write"; then
    echo "Removing fifo_write module..."
    rmmod fifo_write
    if [ $? -ne 0 ]; then
        echo "Warning: Could not remove fifo_write module" >&2
    fi
else
    echo "fifo_write module is not loaded"
fi

# Verify modules are unloaded
if lsmod | grep -q "fifo"; then
    echo "Warning: Some FIFO modules may still be loaded:" >&2
    lsmod | grep fifo
else
    echo "All FIFO modules have been successfully unloaded"
fi

# Optionally clean up compiled files
read -p "Do you want to clean up compiled files? (y/n): " clean_files
if [ "$clean_files" = "y" ] || [ "$clean_files" = "Y" ]; then
    echo "Cleaning up compiled files..."
    make clean
    echo "Compiled files have been removed"
fi

echo
echo "=== FIFO System Cleanup Complete ===" 