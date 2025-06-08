# Makefile for AES Control driver and userspace program

ifneq (${KERNELRELEASE},)

# KERNELRELEASE defined: we are being compiled as part of the Kernel
obj-m := aes_ctl.o

else

# We are being compiled as a module: use the Kernel build system
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)
PWD := $(shell pwd)

# Default target: build everything
default: modules userspace install

# Target to build kernel modules
modules:
	@echo "Building kernel modules..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

# Target to build userspace programs
userspace: aes_control verify_aes_ctl

# Compile the control program
aes_control: aes_control.c aes_ctl.h
	@echo "Building aes_control..."
	$(CC) -Wall -o aes_control aes_control.c

# Compile the verification program
verify_aes_ctl: verify_aes_ctl.c aes_ctl.h
	@echo "Building verify_aes_ctl..."
	$(CC) -Wall -o verify_aes_ctl verify_aes_ctl.c

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
	rm -f aes_control verify_aes_ctl

# Install the module
install:
	@echo "Installing kernel module..."
	insmod aes_ctl.ko
	@echo "Module installed successfully"

# Remove the module
uninstall:
	@echo "Removing kernel module..."
	rmmod aes_ctl || echo "Module not loaded"
	@echo "Module removed successfully if it was loaded"

# Restart: uninstall then install
restart: uninstall install

# Verify current state
verify: verify_aes_ctl
	@echo "Verifying AES control register state"
	./verify_aes_ctl

# Full test: write then verify
full-test: aes_control verify_aes_ctl
	@echo "===== STEP 1: Writing test value $(TEST_VALUE) ====="
	./aes_control $(TEST_VALUE)
	@echo ""
	@echo "===== STEP 2: Verifying control register ====="
	./verify_aes_ctl

# Phony targets (not files)
.PHONY: default modules userspace clean install uninstall restart test verify full-test

endif 