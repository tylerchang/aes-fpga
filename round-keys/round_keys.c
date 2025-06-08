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
#include <linux/moduleparam.h>
#include "round_keys.h"

#define DRIVER_NAME "round_keys"

/* Module parameter for endianness and word order configuration
 * 1 = Big endian, normal word order
 * 2 = Big endian, reverse word order
 * 3 = Little endian, normal word order
 * 4 = Little endian, reverse word order
 */
static int config_mode = 2; /* Default: Big endian, reverse word order (matches test code) */
module_param(config_mode, int, 0644);
MODULE_PARM_DESC(config_mode, "Endianness and word order: 1=BE+normal, 2=BE+reverse, 3=LE+normal, 4=LE+reverse");

/* The memory address of the round keys RAM */
#define ROUND_KEYS_PHYS_BASE 0xFF200000
/* 11 round keys * 16 bytes each = 176 bytes, defined in round_keys.h */

/*
 * Information about our device
 */
struct round_keys_dev {
	void __iomem *virtbase; /* Where registers can be accessed in memory */
} dev;

/*
 * Write data to the round keys RAM
 */
static int write_round_keys(const unsigned char *data)
{
	int i;
	int words = ROUND_KEYS_SIZE / 4; /* Number of 32-bit words */
	u32 word;
	
	pr_info(DRIVER_NAME ": Writing %d bytes of round keys data (%d words) with config_mode=%d\n", 
		ROUND_KEYS_SIZE, words, config_mode);

	/* Write all the round keys, 32 bits at a time */
	for (i = 0; i < words; i++) {
		/* Determine word index based on word order configuration */
		int target_idx = i;
		if (config_mode == 2 || config_mode == 4) {
			/* Reverse word order within each round key */
			target_idx = (i / 4) * 4 + (3 - (i % 4));
		}

		/* Pack 4 bytes into a 32-bit word based on endianness */
		if (config_mode == 1 || config_mode == 2) {
			/* Big endian */
			word = (data[i*4] << 24) | 
			       (data[i*4+1] << 16) | 
			       (data[i*4+2] << 8) | 
			       (data[i*4+3] << 0);
		} else {
			/* Little endian */
			word = (data[i*4] << 0) | 
			       (data[i*4+1] << 8) | 
			       (data[i*4+2] << 16) | 
			       (data[i*4+3] << 24);
		}
		
		iowrite32(word, dev.virtbase + (target_idx * 4));
	}
	
	return 0;
}

/*
 * Read data from the round keys RAM
 */
static int read_round_keys(unsigned char *data)
{
	int i;
	int words = ROUND_KEYS_SIZE / 4; /* Number of 32-bit words */
	u32 word;
	
	pr_info(DRIVER_NAME ": Reading %d bytes of round keys data (%d words) with config_mode=%d\n", 
		ROUND_KEYS_SIZE, words, config_mode);

	/* Read all the round keys, 32 bits at a time */
	for (i = 0; i < words; i++) {
		/* Determine source index based on word order configuration */
		int source_idx = i;
		if (config_mode == 2 || config_mode == 4) {
			/* Reverse word order within each round key */
			source_idx = (i / 4) * 4 + (3 - (i % 4));
		}
		
		word = ioread32(dev.virtbase + (source_idx * 4));
		
		/* Unpack 32-bit word into 4 bytes based on endianness */
		if (config_mode == 1 || config_mode == 2) {
			/* Big endian */
			data[i*4]   = (word >> 24) & 0xFF;
			data[i*4+1] = (word >> 16) & 0xFF;
			data[i*4+2] = (word >> 8) & 0xFF;
			data[i*4+3] = word & 0xFF;
		} else {
			/* Little endian */
			data[i*4]   = (word >> 0) & 0xFF;
			data[i*4+1] = (word >> 8) & 0xFF;
			data[i*4+2] = (word >> 16) & 0xFF;
			data[i*4+3] = (word >> 24) & 0xFF;
		}
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
		/* Initialize rk_data before using it */
		memset(&rk_data, 0, sizeof(round_keys_data_t));
		
		read_round_keys(rk_data.data);
		
		if (copy_to_user((round_keys_data_t *) arg, &rk_data,
				 sizeof(round_keys_data_t)))
			return -EACCES;
		
		return 0;
        
    case ROUND_KEYS_SET_CONFIG:
        if (get_user(config_mode, (int __user *)arg))
            return -EACCES;
        
        /* Validate config_mode */
        if (config_mode < 1 || config_mode > 4) {
            pr_err(DRIVER_NAME ": Invalid config_mode %d. Must be 1-4\n", config_mode);
            return -EINVAL;
        }
        
        pr_info(DRIVER_NAME ": Config mode set to %d\n", config_mode);
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