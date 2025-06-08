/* 
 * Device driver for controlling the AES hardware
 *
 * A Platform device implemented using the misc subsystem with hardcoded address
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
#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/types.h>
#include "aes_ctl.h"

#define DRIVER_NAME "aes_ctl"

/* The memory address of the AES control register */
#define AES_CTL_PHYS_BASE 0xFF200150
#define AES_CTL_SIZE      4

/*
 * Information about our device
 */
struct aes_ctl_dev {
	void __iomem *virtbase; /* Where registers can be accessed in memory */
} dev;

/*
 * Write data to the AES control register
 */
static int write_to_aes_ctl(unsigned int data)
{
	pr_info(DRIVER_NAME ": Writing value %u to register\n", data);

	/* Write 32-bit data directly to the control register */
	iowrite32(data, dev.virtbase);
	return 0;
}

/*
 * Read data from the AES control register
 */
static int read_from_aes_ctl(unsigned int *data)
{
	/* Read 32-bit data directly from the control register */
	*data = ioread32(dev.virtbase);
	pr_info(DRIVER_NAME ": Read value %u from register\n", *data);
	return 0;
}

/*
 * Handle ioctl() calls from userspace
 */
static long aes_ctl_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
{
	aes_ctl_arg_t ctrl_arg;

	switch (cmd) {
	case AES_CTL_WRITE_DATA:
		if (copy_from_user(&ctrl_arg, (aes_ctl_arg_t *) arg,
				   sizeof(aes_ctl_arg_t)))
			return -EACCES;
		
		return write_to_aes_ctl(ctrl_arg.data);

	case AES_CTL_READ_DATA:
		if (read_from_aes_ctl(&ctrl_arg.data) != 0)
			return -EIO;
		
		if (copy_to_user((aes_ctl_arg_t *) arg, &ctrl_arg,
				 sizeof(aes_ctl_arg_t)))
			return -EACCES;
		
		return 0;

	default:
		return -EINVAL;
	}

	return 0;
}

/* The operations our device knows how to do */
static const struct file_operations aes_ctl_fops = {
	.owner		= THIS_MODULE,
	.unlocked_ioctl = aes_ctl_ioctl,
};

/* Information about our device for the "misc" framework */
static struct miscdevice aes_ctl_misc_device = {
	.minor		= MISC_DYNAMIC_MINOR,
	.name		= DRIVER_NAME,
	.fops		= &aes_ctl_fops,
};

/* Called when the module is loaded: set things up */
static int __init aes_ctl_init(void)
{
	int ret;
	
	pr_info(DRIVER_NAME ": init\n");
	
	/* Map the AES control register directly using hardcoded address */
	if (!request_mem_region(AES_CTL_PHYS_BASE, AES_CTL_SIZE, DRIVER_NAME)) {
		pr_err(DRIVER_NAME ": Resources unavailable\n");
		return -EBUSY;
	}
	
	dev.virtbase = ioremap(AES_CTL_PHYS_BASE, AES_CTL_SIZE);
	if (!dev.virtbase) {
		pr_err(DRIVER_NAME ": ioremap failed\n");
		ret = -ENOMEM;
		goto out_release_mem_region;
	}
	
	/* Register ourselves as a misc device: creates /dev/aes_ctl */
	ret = misc_register(&aes_ctl_misc_device);
	if (ret) {
		pr_err(DRIVER_NAME ": Couldn't register misc device\n");
		goto out_unmap;
	}
	
	pr_info(DRIVER_NAME ": Device registered successfully at 0x%lx\n", 
		(unsigned long)AES_CTL_PHYS_BASE);
	
	return 0;

out_unmap:
	pr_err(DRIVER_NAME ": Failed at iounmap\n");
	iounmap(dev.virtbase);
out_release_mem_region:
	pr_err(DRIVER_NAME ": Failed at release_mem_region\n");
	release_mem_region(AES_CTL_PHYS_BASE, AES_CTL_SIZE);
	return ret;
}

/* Called when the module is unloaded: release resources */
static void __exit aes_ctl_exit(void)
{
	/* Unmap virtual memory */
	iounmap(dev.virtbase);
	
	/* Release memory region */
	release_mem_region(AES_CTL_PHYS_BASE, AES_CTL_SIZE);
	
	/* Deregister misc device */
	misc_deregister(&aes_ctl_misc_device);
	
	pr_info(DRIVER_NAME ": exit\n");
}

module_init(aes_ctl_init);
module_exit(aes_ctl_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("AES control driver"); 