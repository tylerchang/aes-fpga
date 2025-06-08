#ifndef _AES_CTL_H
#define _AES_CTL_H

#include <linux/ioctl.h>

typedef struct {
	unsigned int data;
} aes_ctl_arg_t;

#define AES_CTL_MAGIC 'a'
#define AES_CTL_WRITE_DATA _IOW(AES_CTL_MAGIC, 0, aes_ctl_arg_t)
#define AES_CTL_READ_DATA _IOR(AES_CTL_MAGIC, 1, aes_ctl_arg_t *)

#endif 