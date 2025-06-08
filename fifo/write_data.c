/*
 * Userspace program that communicates with the fifo_write device driver
 * through ioctls to write data to the FIFO
 * Modified to read raw bytes from a file
 */

#include <stdio.h>
#include "fifo_write.h"
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int fifo_write_fd;

/* Write a 32-bit value to the FIFO */
int write_value_to_fifo(unsigned int value)
{
	fifo_write_arg_t fwa;
	int ret;
	
	// Put the 32-bit value into the data field
	fwa.data = value;
	
	ret = ioctl(fifo_write_fd, FIFO_WRITE_WRITE_DATA, &fwa);
	if (ret) {
		if (ret == -EBUSY) {
			printf("FIFO is full. Waiting for space...\n");
			return -EBUSY;
		} else {
			perror("ioctl(FIFO_WRITE_WRITE_DATA) failed");
			return -EIO;
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	static const char filename[] = "/dev/fifo_write";
	FILE *input_file;
	int count = 0;
	const int delay_us = 1000; // Fixed delay between writes in microseconds
	int ret;
	int config_mode = 0; // Default: don't change configuration
	unsigned int value;
	
	printf("FIFO Write Userspace program started\n");

	if (argc < 2 || argc > 3) {
		printf("Usage: %s <input_file> [config_mode]\n", argv[0]);
		printf("  <input_file>: Path to file containing data to write\n");
		printf("  [config_mode]: Endianness and word order (1-4):\n");
		printf("    1 = Big endian, normal word order\n");
		printf("    2 = Big endian, reverse word order\n");
		printf("    3 = Little endian, normal word order\n");
		printf("    4 = Little endian, reverse word order\n");
		return -1;
	}
	
	// Open the input file in binary mode
	input_file = fopen(argv[1], "rb");
	if (!input_file) {
		perror("Failed to open input file");
		return -1;
	}
	
	// Get optional config_mode parameter
	if (argc == 3) {
		config_mode = atoi(argv[2]);
		if (config_mode < 1 || config_mode > 4) {
			printf("Error: config_mode must be between 1 and 4\n");
			fclose(input_file);
			return -1;
		}
	}

	if ((fifo_write_fd = open(filename, O_RDWR)) == -1) {
		fprintf(stderr, "could not open %s\n", filename);
		fclose(input_file);
		return -1;
	}
	
	// Set configuration mode if specified
	if (config_mode > 0) {
		if (ioctl(fifo_write_fd, FIFO_WRITE_SET_CONFIG, &config_mode) < 0) {
			perror("Error setting configuration mode");
			close(fifo_write_fd);
			fclose(input_file);
			return -1;
		}
		printf("Set config mode to %d\n", config_mode);
	}

	printf("Reading values from %s and writing to FIFO (delay: %d us)\n", argv[1], delay_us);
	
	// Read the file 32 bits at a time
	while (fread(&value, sizeof(unsigned int), 1, input_file) == 1) {
		// Write to FIFO with retry on full
		while (1) {
			ret = write_value_to_fifo(value);
			if (ret == 0) {
				// Success
				count++;
				break;
			} else if (ret == -EBUSY) {
				// FIFO is full, wait a bit and retry
				usleep(delay_us);
				continue;
			} else {
				// Some other error
				fprintf(stderr, "Error writing to FIFO\n");
				break;
			}
		}
		
		// Fixed delay between writes
		usleep(delay_us);
	}
	
	fclose(input_file);
	
	printf("FIFO Write complete - wrote %d values (%d bytes)\n", 
	       count, count * sizeof(unsigned int));
	printf("FIFO Write Userspace program terminating\n");
	return 0;
} 