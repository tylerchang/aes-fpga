/*
 * Userspace program that communicates with the aes_ctl device driver
 * through ioctls to write control data
 */

#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "aes_ctl.h"

int aes_ctl_fd;

/* Write a 32-bit value to the AES control register */
int write_value_to_aes_ctl(unsigned int value)
{
    aes_ctl_arg_t ctrl_arg;
    int ret;
    
    // Set the control value
    ctrl_arg.data = value;
    
    ret = ioctl(aes_ctl_fd, AES_CTL_WRITE_DATA, &ctrl_arg);
    if (ret) {
        perror("ioctl(AES_CTL_WRITE_DATA) failed");
        return -EIO;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    static const char filename[] = "/dev/aes_ctl";
    unsigned int value;
    
    printf("AES Control Userspace program started\n");
    
    if (argc != 2) {
        printf("Usage: %s <value>\n", argv[0]);
        printf("  <value>: Value to write to AES control register (0, 1, 2, etc.)\n");
        return -1;
    }
    
    // Just convert the value directly - no special parsing needed
    value = atoi(argv[1]);
    
    // Open the device
    if ((aes_ctl_fd = open(filename, O_RDWR)) == -1) {
        fprintf(stderr, "Could not open %s\n", filename);
        return -1;
    }
    
    printf("Writing value %u to AES control register\n", value);
    
    // Write the value to the control register
    if (write_value_to_aes_ctl(value) != 0) {
        fprintf(stderr, "Error writing to AES control register\n");
        close(aes_ctl_fd);
        return -1;
    }
    
    printf("Value written successfully\n");
    close(aes_ctl_fd);
    
    printf("AES Control Userspace program terminating\n");
    return 0;
} 