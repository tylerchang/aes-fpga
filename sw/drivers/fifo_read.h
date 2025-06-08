#ifndef _FIFO_READ_H
#define _FIFO_READ_H

#include <linux/ioctl.h>
#include <linux/types.h>

typedef struct {
	unsigned int data;
} fifo_read_arg_t;

#define FIFO_READ_MAGIC 'r'

#define FIFO_READ_READ_DATA _IOR(FIFO_READ_MAGIC, 0, fifo_read_arg_t)

#endif 