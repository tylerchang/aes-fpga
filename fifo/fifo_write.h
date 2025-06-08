#ifndef _FIFO_WRITE_H
#define _FIFO_WRITE_H

#include <linux/ioctl.h>
#include <linux/types.h>

typedef struct {
	unsigned int data;
} fifo_write_arg_t;

#define FIFO_WRITE_MAGIC 'f'

#define FIFO_WRITE_WRITE_DATA _IOW(FIFO_WRITE_MAGIC, 0, fifo_write_arg_t)
#define FIFO_WRITE_GET_LEVEL  _IOR(FIFO_WRITE_MAGIC, 1, fifo_write_arg_t *)
#define FIFO_WRITE_SET_CONFIG _IOW(FIFO_WRITE_MAGIC, 2, int)

#endif 