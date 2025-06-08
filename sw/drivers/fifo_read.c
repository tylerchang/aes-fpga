/* 
 * Device driver for reading from the output FIFO
 *
 * A Platform device implemented using the misc subsystem
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
#include <linux/moduleparam.h>
#include "fifo_read.h"

#define DRIVER_NAME "fifo_read"

/* Uses Big endian, reverse word order (config_mode 2) by default */

/* Device registers - FIFO is 8 bytes (64 bits) */
#define FIFO_DATA(x) (x)
#define FIFO_STATUS_REG(x) ((x)+0x4)    /* Status register (i_status) */

/* Status register bit definitions */
#define FIFO_EMPTY_BIT   1

/*
 * Information about our device
 */
struct fifo_read_dev {
	struct resource res; /* Resource: our registers */
	void __iomem *virtbase; /* Where registers can be accessed in memory */
	void __iomem *csr_virtbase; /* Control and Status Register base */
	unsigned int last_read;    /* Last value read from FIFO */
} dev;

/*
 * Read the status register and return its value
 */
static u32 read_fifo_status(void)
{
	return ioread32(FIFO_STATUS_REG(dev.csr_virtbase));
}

/*
 * Check if the FIFO is empty
 */
static int is_fifo_empty(void)
{
	u32 status = read_fifo_status();
	return (status & (1 << FIFO_EMPTY_BIT)) ? 1 : 0;
}

/*
 * Read data from the FIFO
 * Returns the data read on success, negative error code on failure
 * Uses Big endian, reverse word order (config_mode 2) by default 
 */
static int read_from_fifo(void)
{
	unsigned int data;
	
	/* Check if the FIFO is empty before reading */
	if (is_fifo_empty()) {
		pr_info("FIFO is empty, cannot read data\n");
		return -EAGAIN; /* Resource temporarily unavailable */
	}

	/* Read 32-bit data from the FIFO */
	unsigned int raw_data = ioread32(FIFO_DATA(dev.virtbase));
	
	/* Process data using Big endian, reverse word order (config_mode 2) */
	data = ((raw_data & 0xFF000000) >> 24) |
	      ((raw_data & 0x00FF0000) >> 8) |
	      ((raw_data & 0x0000FF00) << 8) |
	      ((raw_data & 0x000000FF) << 24);
	      
	dev.last_read = data;
	return dev.last_read;
}

/*
 * Handle ioctl() calls from userspace
 */
static long fifo_read_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
{
	fifo_read_arg_t fra;
	int ret;

	switch (cmd) {
	case FIFO_READ_READ_DATA:
		ret = read_from_fifo();
		if (ret < 0)
			return ret; /* Return error from read_from_fifo */
			
		fra.data = ret;
		if (copy_to_user((fifo_read_arg_t *) arg, &fra,
				 sizeof(fifo_read_arg_t)))
			return -EACCES;
		break;

	default:
		return -EINVAL;
	}

	return 0;
}

/* The operations our device knows how to do */
static const struct file_operations fifo_read_fops = {
	.owner		= THIS_MODULE,
	.unlocked_ioctl = fifo_read_ioctl,
};

/* Information about our device for the "misc" framework */
static struct miscdevice fifo_read_misc_device = {
	.minor		= MISC_DYNAMIC_MINOR,
	.name		= DRIVER_NAME,
	.fops		= &fifo_read_fops,
};

/*
 * Initialization code: get resources and set up device
 */
static int __init fifo_read_probe(struct platform_device *pdev)
{
	int ret;
	const char *node_name;
	struct resource *res_data, *res_csr;

	/* Check if this is the correct FIFO device (fifo_1) */
	node_name = pdev->dev.of_node->name;
	pr_info(DRIVER_NAME ": Probing node name=%s\n", node_name ? node_name : "NULL");
	
	/* Check for exact fifo name first, fallback to checking if it contains "fifo" */
	if (node_name && ((strcmp(node_name, "fifo@0x100000140") == 0) || 
	                 (strcmp(node_name, "fifo_1") == 0) ||
	                 strstr(node_name, "fifo") != NULL)) {
		const __be32 *reg = of_get_property(pdev->dev.of_node, "reg", NULL);
		/* For fifo_1, the first register region has offset 0x40 at index 1 in the reg array */
		if (reg && (be32_to_cpu(reg[1]) == 0x140)) {
			/* This is fifo_1, which is the one we want for reading */
			pr_info(DRIVER_NAME ": Found output FIFO at offset 0x%x\n", be32_to_cpu(reg[1]));
		} else {
			/* This is not fifo_1 */
			pr_info(DRIVER_NAME ": Not the output FIFO\n");
			return -ENODEV;
		}
	} else {
		/* Not a FIFO node */
		pr_info(DRIVER_NAME ": Not a FIFO node\n");
		return -ENODEV;
	}

	/* Register ourselves as a misc device: creates /dev/fifo_read */
	ret = misc_register(&fifo_read_misc_device);
	if (ret) {
		pr_err(DRIVER_NAME ": Couldn't register misc device\n");
		return ret;
	}

	/* Get the data port and CSR addresses */
	res_data = platform_get_resource_byname(pdev, IORESOURCE_MEM, "out");
	res_csr = platform_get_resource_byname(pdev, IORESOURCE_MEM, "out_csr");

	if (!res_data || !res_csr) {
		pr_err(DRIVER_NAME ": Could not get FIFO resources\n");
		ret = -ENOENT;
		goto out_deregister;
	}

	/* Make sure we can use these registers */
	if (request_mem_region(res_data->start, resource_size(res_data), DRIVER_NAME) == NULL) {
		ret = -EBUSY;
		goto out_deregister;
	}

	if (request_mem_region(res_csr->start, resource_size(res_csr), DRIVER_NAME) == NULL) {
		ret = -EBUSY;
		goto out_release_data_mem_region;
	}

	/* Arrange access to data registers */
	dev.virtbase = ioremap(res_data->start, resource_size(res_data));
	if (dev.virtbase == NULL) {
		ret = -ENOMEM;
		goto out_release_csr_mem_region;
	}

	/* Arrange access to CSR registers */
	dev.csr_virtbase = ioremap(res_csr->start, resource_size(res_csr));
	if (dev.csr_virtbase == NULL) {
		ret = -ENOMEM;
		goto out_unmap_data;
	}

	return 0;

out_unmap_data:
	iounmap(dev.virtbase);
out_release_csr_mem_region:
	release_mem_region(res_csr->start, resource_size(res_csr));
out_release_data_mem_region:
	release_mem_region(res_data->start, resource_size(res_data));
out_deregister:
	misc_deregister(&fifo_read_misc_device);
	return ret;
}

/* Clean-up code: release resources */
static int fifo_read_remove(struct platform_device *pdev)
{
	struct resource *res_data, *res_csr;
	
	/* Get the resources again to release them properly */
	res_data = platform_get_resource_byname(pdev, IORESOURCE_MEM, "out");
	res_csr = platform_get_resource_byname(pdev, IORESOURCE_MEM, "out_csr");
	
	/* Unmap the virtual memory */
	iounmap(dev.virtbase);
	iounmap(dev.csr_virtbase);
	
	/* Release the memory regions */
	if (res_data)
		release_mem_region(res_data->start, resource_size(res_data));
	if (res_csr)
		release_mem_region(res_csr->start, resource_size(res_csr));
	
	/* Deregister the misc device */
	misc_deregister(&fifo_read_misc_device);
	return 0;
}

/* Which "compatible" string(s) to search for in the Device Tree */
#ifdef CONFIG_OF
static const struct of_device_id fifo_read_of_match[] = {
	{ .compatible = "ALTR,fifo-21.1" },
	{},
};
MODULE_DEVICE_TABLE(of, fifo_read_of_match);
#endif

/* Information for registering ourselves as a "platform" driver */
static struct platform_driver fifo_read_driver = {
	.driver	= {
		.name	= DRIVER_NAME,
		.owner	= THIS_MODULE,
		.of_match_table = of_match_ptr(fifo_read_of_match),
	},
	.probe = fifo_read_probe,
	.remove	= __exit_p(fifo_read_remove),
};

/* Called when the module is loaded: set things up */
static int __init fifo_read_init(void)
{
	pr_info(DRIVER_NAME ": init\n");
	return platform_driver_register(&fifo_read_driver);
}

/* Called when the module is unloaded: release resources */
static void __exit fifo_read_exit(void)
{
	platform_driver_unregister(&fifo_read_driver);
	pr_info(DRIVER_NAME ": exit\n");
}

module_init(fifo_read_init);
module_exit(fifo_read_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("FIFO read driver"); 