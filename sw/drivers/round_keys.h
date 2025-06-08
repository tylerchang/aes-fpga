#ifndef _ROUND_KEYS_H
#define _ROUND_KEYS_H

#include <linux/ioctl.h>

#define ROUND_KEYS_SIZE 176 // 11 round keys * 16 bytes each

typedef struct {
    unsigned char data[ROUND_KEYS_SIZE];
} round_keys_data_t;

/* IOCTL commands */
#define ROUND_KEYS_MAGIC 'r'
#define ROUND_KEYS_WRITE_DATA _IOW(ROUND_KEYS_MAGIC, 0, round_keys_data_t)
#define ROUND_KEYS_READ_DATA _IOR(ROUND_KEYS_MAGIC, 1, round_keys_data_t)

#endif 