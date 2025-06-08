/* 
 * Device driver for accessing AES round keys RAM
 *
 * A kernel module implemented using the misc subsystem with hardcoded address
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/errno.h>
#include <linux/version.h>
#include <linux/kernel.h>
#include <linux/platform_device.h>
#include <linux/miscdevice.h>
#include <linux/slab.h>
#include <linux/io.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/types.h>
#include "round_keys.h"

#define DRIVER_NAME "round_keys"

/* The memory address of the round keys RAM */
#define ROUND_KEYS_PHYS_BASE 0xFF200000

/* Uses Big endian, reverse word order (config_mode 2) by default */

/*
 * Information about our device
 */
struct round_keys_dev {
	void __iomem *virtbase; /* Where registers can be accessed in memory */
} dev;

/*
 * Write data to the round keys RAM using Big endian, reverse word order (mode 2)
 */
static int write_round_keys(const unsigned char *data)
{
	int i;
	int words = ROUND_KEYS_SIZE / 4; /* Number of 32-bit words */
	u32 word;
	
	pr_info(DRIVER_NAME ": Writing %d bytes of round keys data (%d words)\n", 
		ROUND_KEYS_SIZE, words);

	/* Write all the round keys, 32 bits at a time */
	for (i = 0; i < words; i++) {
		/* Reverse word order within each round key (mode 2) */
		int target_idx = (i / 4) * 4 + (3 - (i % 4));

		/* Pack 4 bytes into a 32-bit word (big endian) */
		word = (data[i*4] << 24) | 
		       (data[i*4+1] << 16) | 
		       (data[i*4+2] << 8) | 
		       (data[i*4+3] << 0);
		
		iowrite32(word, dev.virtbase + (target_idx * 4));
	}
	
	return 0;
}

/*
 * Read data from the round keys RAM using Big endian, reverse word order (mode 2)
 */
static int read_round_keys(unsigned char *data)
{
	int i;
	int words = ROUND_KEYS_SIZE / 4; /* Number of 32-bit words */
	u32 word;
	
	pr_info(DRIVER_NAME ": Reading %d bytes of round keys data (%d words)\n", 
		ROUND_KEYS_SIZE, words);

	/* Read all the round keys, 32 bits at a time */
	for (i = 0; i < words; i++) {
		/* Reverse word order within each round key (mode 2) */
		int source_idx = (i / 4) * 4 + (3 - (i % 4));
		
		word = ioread32(dev.virtbase + (source_idx * 4));
		
		/* Unpack 32-bit word into 4 bytes (big endian) */
		data[i*4]   = (word >> 24) & 0xFF;
		data[i*4+1] = (word >> 16) & 0xFF;
		data[i*4+2] = (word >> 8) & 0xFF;
		data[i*4+3] = word & 0xFF;
	}
	
	return 0;
}

/*
 * Handle ioctl() calls from userspace
 */
static long round_keys_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
{
	round_keys_data_t rk_data;

	switch (cmd) {
	case ROUND_KEYS_WRITE_DATA:
		if (copy_from_user(&rk_data, (round_keys_data_t *) arg,
				   sizeof(round_keys_data_t)))
			return -EACCES;
		
		return write_round_keys(rk_data.data);

	case ROUND_KEYS_READ_DATA:
		memset(&rk_data, 0, sizeof(round_keys_data_t));
		
		read_round_keys(rk_data.data);
		
		if (copy_to_user((round_keys_data_t *) arg, &rk_data,
				 sizeof(round_keys_data_t)))
			return -EACCES;
		
		return 0;
		
	default:
		return -EINVAL;
	}

	return 0;
}

/* The operations our device knows how to do */
static const struct file_operations round_keys_fops = {
	.owner		= THIS_MODULE,
	.unlocked_ioctl = round_keys_ioctl,
};

/* Information about our device for the "misc" framework */
static struct miscdevice round_keys_misc_device = {
	.minor		= MISC_DYNAMIC_MINOR,
	.name		= DRIVER_NAME,
	.fops		= &round_keys_fops,
};

/* Called when the module is loaded: set things up */
static int __init round_keys_init(void)
{
	int ret;
	
	pr_info(DRIVER_NAME ": init\n");
	
	/* Map the round keys RAM directly using hardcoded address */
	if (!request_mem_region(ROUND_KEYS_PHYS_BASE, ROUND_KEYS_SIZE, DRIVER_NAME)) {
		pr_err(DRIVER_NAME ": Resources unavailable\n");
		return -EBUSY;
	}
	
	dev.virtbase = ioremap(ROUND_KEYS_PHYS_BASE, ROUND_KEYS_SIZE);
	if (!dev.virtbase) {
		pr_err(DRIVER_NAME ": ioremap failed\n");
		ret = -ENOMEM;
		goto out_release_mem_region;
	}
	
	/* Register ourselves as a misc device: creates /dev/round_keys */
	ret = misc_register(&round_keys_misc_device);
	if (ret) {
		pr_err(DRIVER_NAME ": Couldn't register misc device\n");
		goto out_unmap;
	}
	
	pr_info(DRIVER_NAME ": Device registered successfully at 0x%lx\n", 
		(unsigned long)ROUND_KEYS_PHYS_BASE);
	
	return 0;

out_unmap:
	pr_err(DRIVER_NAME ": Failed at iounmap\n");
	iounmap(dev.virtbase);
out_release_mem_region:
	pr_err(DRIVER_NAME ": Failed at release_mem_region\n");
	release_mem_region(ROUND_KEYS_PHYS_BASE, ROUND_KEYS_SIZE);
	return ret;
}

/* Called when the module is unloaded: release resources */
static void __exit round_keys_exit(void)
{
	/* Unmap virtual memory */
	iounmap(dev.virtbase);
	
	/* Release memory region */
	release_mem_region(ROUND_KEYS_PHYS_BASE, ROUND_KEYS_SIZE);
	
	/* Deregister misc device */
	misc_deregister(&round_keys_misc_device);
	
	pr_info(DRIVER_NAME ": exit\n");
}

module_init(round_keys_init);
module_exit(round_keys_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("AES round keys RAM driver"); 