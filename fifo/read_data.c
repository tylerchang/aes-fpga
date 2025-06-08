/*
 * Userspace program that communicates with the fifo_read device driver
 * through ioctls to read data from the FIFO
 * Modified to write raw bytes to an output file
 */

#include <stdio.h>
#include "fifo_read.h"
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdbool.h>
#include <errno.h>

int fifo_read_fd;
FILE *output_file = NULL;
bool running = true;
int total_reads = 0;

/* Signal handler to gracefully exit */
void handle_signal(int sig) {
    printf("\nReceived signal %d. Stopping...\n", sig);
    running = false;
}

/* Read a 32-bit value from the FIFO */
int read_value_from_fifo(unsigned int *value)
{
	fifo_read_arg_t fra;
	int ret;
	
	// Clear errno before ioctl call
	errno = 0;
	
	ret = ioctl(fifo_read_fd, FIFO_READ_READ_DATA, &fra);
	
	if (ret < 0) {
		if (errno == EAGAIN) {
			// FIFO is empty
			return -EAGAIN;
		} else {
			// Some other error
			return -EIO;
		}
	}
	
	// Get the full 32-bit value
	*value = (unsigned int)fra.data;
	return 0;
}

int main(int argc, char *argv[])
{
	static const char filename[] = "/dev/fifo_read";
	int ret;
	unsigned int value;
	const int delay_us = 1000; // Fixed delay between reads
	int config_mode = 0; // Default: don't change configuration
	
	printf("FIFO Read Userspace program started\n");

	if (argc < 2 || argc > 3) {
		printf("Usage: %s <output_file> [config_mode]\n", argv[0]);
		printf("  <output_file>: File to write the read values to\n");
		printf("  [config_mode]: Endianness and word order (1-4):\n");
		printf("    1 = Big endian, normal word order\n");
		printf("    2 = Big endian, reverse word order\n");
		printf("    3 = Little endian, normal word order\n");
		printf("    4 = Little endian, reverse word order\n");
		printf("\nPress Ctrl+C to stop reading\n");
		return -1;
	}

	// Open the output file in binary mode
	output_file = fopen(argv[1], "wb");
	if (!output_file) {
		perror("Failed to open output file");
		return -1;
	}
	
	// Get optional config_mode
	if (argc == 3) {
		config_mode = atoi(argv[2]);
		if (config_mode < 1 || config_mode > 4) {
			printf("Error: config_mode must be between 1 and 4\n");
			fclose(output_file);
			return -1;
		}
	}

	if ((fifo_read_fd = open(filename, O_RDWR)) == -1) {
		fprintf(stderr, "could not open %s\n", filename);
		fclose(output_file);
		return -1;
	}
	
	// Set configuration mode if specified
	if (config_mode > 0) {
		if (ioctl(fifo_read_fd, FIFO_READ_SET_CONFIG, &config_mode) < 0) {
			perror("Error setting configuration mode");
			close(fifo_read_fd);
			fclose(output_file);
			return -1;
		}
		printf("Set config mode to %d\n", config_mode);
	}

	// Set up signal handler for Ctrl+C
	signal(SIGINT, handle_signal);
	
	printf("Reading continuously from FIFO until Ctrl+C, writing to %s\n", argv[1]);
	
	// Read loop - continues until Ctrl+C is pressed
	while (running) {
		ret = read_value_from_fifo(&value);
		
		if (ret < 0) {
			if (ret == -EAGAIN) {
				// FIFO is empty, wait a bit and try again
				usleep(delay_us);
				continue;
			} else {
				// Some other error occurred, but we'll keep trying
				fprintf(stderr, "Error reading from FIFO: %d, continuing...\n", ret);
				usleep(delay_us * 10);  // Wait a bit longer on error
				continue;
			}
		}
		
		// Write full 32-bit value directly to the file
		fwrite(&value, sizeof(unsigned int), 1, output_file);
		
		// Flush to ensure data is written immediately
		fflush(output_file);
		
		total_reads++;
		
		// Fixed delay between reads
		usleep(delay_us);
	}
	
	fclose(output_file);
	printf("FIFO Read complete - wrote %d values (%d bytes) to %s\n", 
	       total_reads, total_reads * sizeof(unsigned int), argv[1]);
	printf("FIFO Read Userspace program terminating\n");
	return 0;
} 