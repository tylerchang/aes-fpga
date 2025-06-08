/*
 * Userspace program that reads the current value from the AES control register
 */

#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "aes_ctl.h"

/* Function to read value from AES control register */
int read_from_aes_ctl(int fd, unsigned int *value) 
{
    aes_ctl_arg_t ctrl_arg;
    int ret;
    
    ret = ioctl(fd, AES_CTL_READ_DATA, &ctrl_arg);
    if (ret) {
        perror("ioctl(AES_CTL_READ_DATA) failed");
        return -EIO;
    }
    
    *value = ctrl_arg.data;
    return 0;
}

int main(int argc, char *argv[]) 
{
    int aes_ctl_fd;
    unsigned int current_value = 0;
    static const char filename[] = "/dev/aes_ctl";
    
    printf("AES Control Verification Utility\n");
    
    // Open the device
    if ((aes_ctl_fd = open(filename, O_RDWR)) == -1) {
        fprintf(stderr, "Could not open %s\n", filename);
        return -1;
    }
    
    printf("Successfully opened AES control device\n");
    
    // Try to read the current value
    if (read_from_aes_ctl(aes_ctl_fd, &current_value) == 0) {
        printf("Current AES control register value: %u (0x%08X)\n", 
               current_value, current_value);
    }
    
    // Test writing a value and report success
    if (argc > 1) {
        unsigned int test_value = atoi(argv[1]);
        aes_ctl_arg_t ctrl_arg;
        
        // Set the control value
        ctrl_arg.data = test_value;
        
        printf("Writing test value %u (0x%08X) to AES control register\n", 
               test_value, test_value);
        
        if (ioctl(aes_ctl_fd, AES_CTL_WRITE_DATA, &ctrl_arg) != 0) {
            perror("ioctl(AES_CTL_WRITE_DATA) failed");
            close(aes_ctl_fd);
            return -1;
        }
        
        printf("Value written successfully\n");
    }
    
    close(aes_ctl_fd);
    return 0;
} 