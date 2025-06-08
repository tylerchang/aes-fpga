# Makefile for AES kernel modules
ifneq (${KERNELRELEASE},)

# KERNELRELEASE defined: we are being compiled as part of the Kernel
obj-m := aes_ctl.o fifo_read.o fifo_write.o round_keys.o

else

# We are being compiled as a module: use the Kernel build system
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)
PWD := $(shell pwd)

# Default target: build everything
default: modules install

# Target to build kernel modules
modules:
	@echo "Building kernel modules..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean

# Install the modules
install:
	@echo "Installing kernel modules..."
	-insmod aes_ctl.ko
	-insmod fifo_read.ko
	-insmod fifo_write.ko
	-insmod round_keys.ko
	@echo "Modules installed successfully"

# Remove the modules
uninstall:
	@echo "Removing kernel modules..."
	-rmmod aes_ctl
	-rmmod fifo_read
	-rmmod fifo_write
	-rmmod round_keys
	@echo "Modules removed successfully if they were loaded"

# Restart: uninstall then install
restart: uninstall install

# Phony targets (not files)
.PHONY: default modules clean install uninstall restart

endif 