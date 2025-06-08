#ifndef _FIFO_READ_H
#define _FIFO_READ_H

#include <linux/ioctl.h>
#include <linux/types.h>

typedef struct {
	unsigned int data;
} fifo_read_arg_t;

#define FIFO_READ_MAGIC 'r'

#define FIFO_READ_READ_DATA _IOR(FIFO_READ_MAGIC, 0, fifo_read_arg_t)
#define FIFO_READ_GET_LEVEL _IOR(FIFO_READ_MAGIC, 1, fifo_read_arg_t *)
#define FIFO_READ_SET_CONFIG _IOW(FIFO_READ_MAGIC, 2, int)

#endif