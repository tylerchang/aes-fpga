/*
 * Utility to check the fill level of the FIFO devices
 * 
 * Usage: ./fifo_check [fifo_num] [config_mode]
 *   where fifo_num is 0 for input FIFO, 1 for output FIFO
 *   config_mode (optional) is 1-4 for different endianness and word ordering:
 *     1 = Big endian, normal word order
 *     2 = Big endian, reverse word order
 *     3 = Little endian, normal word order
 *     4 = Little endian, reverse word order
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "fifo_write.h"
#include "fifo_read.h"

int main(int argc, char *argv[]) {
    int fd;
    int fifo_num;
    int level;
    int config_mode = 0; /* 0 means don't change the current setting */
    
    /* Check command line arguments */
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Usage: %s [0|1] [config_mode]\n", argv[0]);
        fprintf(stderr, "  0: Check input FIFO level\n");
        fprintf(stderr, "  1: Check output FIFO level\n");
        fprintf(stderr, "  config_mode (optional): Set endianness and word order (1-4):\n");
        fprintf(stderr, "    1 = Big endian, normal word order\n");
        fprintf(stderr, "    2 = Big endian, reverse word order\n");
        fprintf(stderr, "    3 = Little endian, normal word order\n");
        fprintf(stderr, "    4 = Little endian, reverse word order\n");
        return EXIT_FAILURE;
    }
    
    /* Parse FIFO number */
    fifo_num = atoi(argv[1]);
    if (fifo_num != 0 && fifo_num != 1) {
        fprintf(stderr, "Error: FIFO number must be 0 or 1\n");
        return EXIT_FAILURE;
    }
    
    /* Parse config mode if provided */
    if (argc == 3) {
        config_mode = atoi(argv[2]);
        if (config_mode < 1 || config_mode > 4) {
            fprintf(stderr, "Error: config_mode must be between 1 and 4\n");
            return EXIT_FAILURE;
        }
    }
    
    /* Open the appropriate device file */
    if (fifo_num == 0) {
        /* Input FIFO (fifo_0) */
        fd = open("/dev/fifo_write", O_RDWR);
        if (fd < 0) {
            perror("Error opening /dev/fifo_write");
            return EXIT_FAILURE;
        }
        
        /* Set config mode if specified */
        if (config_mode > 0) {
            if (ioctl(fd, FIFO_WRITE_SET_CONFIG, &config_mode) < 0) {
                perror("Error setting configuration mode");
                close(fd);
                return EXIT_FAILURE;
            }
            printf("Set FIFO 0 config mode to %d\n", config_mode);
        }
        
        /* Get the fill level */
        fifo_write_arg_t fwa;
        if (ioctl(fd, FIFO_WRITE_GET_LEVEL, &fwa) < 0) {
            perror("Error getting FIFO level");
            close(fd);
            return EXIT_FAILURE;
        }
        level = fwa.data;
    } else {
        /* Output FIFO (fifo_1) */
        fd = open("/dev/fifo_read", O_RDWR);
        if (fd < 0) {
            perror("Error opening /dev/fifo_read");
            return EXIT_FAILURE;
        }
        
        /* Set config mode if specified */
        if (config_mode > 0) {
            if (ioctl(fd, FIFO_READ_SET_CONFIG, &config_mode) < 0) {
                perror("Error setting configuration mode");
                close(fd);
                return EXIT_FAILURE;
            }
            printf("Set FIFO 1 config mode to %d\n", config_mode);
        }
        
        /* Get the fill level */
        fifo_read_arg_t fra;
        if (ioctl(fd, FIFO_READ_GET_LEVEL, &fra) < 0) {
            perror("Error getting FIFO level");
            close(fd);
            return EXIT_FAILURE;
        }
        level = fra.data;
    }
    
    /* Close the device */
    close(fd);
    
    /* Print the result */
    printf("FIFO %d fill level: %d\n", fifo_num, level);
    
    return EXIT_SUCCESS;
} 