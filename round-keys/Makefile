# Makefile for Round Keys driver and userspace programs

ifneq (${KERNELRELEASE},)

# KERNELRELEASE defined: we are being compiled as part of the Kernel
obj-m := round_keys.o

else

# We are being compiled as a module: use the Kernel build system
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)
PWD := $(shell pwd)
TEST_KEY = 2B7E151628AED2A6ABF7158809CF4F3C

# Default target: build everything
default: modules userspace install

# Target to build kernel modules
modules:
	@echo "Building kernel module..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

# Target to build userspace programs
userspace: load_round_keys verify_keys

# Compile the load program
load_round_keys: load_round_keys.c round_keys.h
	@echo "Building load_round_keys..."
	$(CC) -Wall -o load_round_keys load_round_keys.c

# Compile the verify program
verify_keys: verify_keys.c round_keys.h
	@echo "Building verify_keys..."
	$(CC) -Wall -o verify_keys verify_keys.c

# Test loading round keys with a sample key
test: load_round_keys
	@echo "Running test with key $(TEST_KEY)"
	./load_round_keys $(TEST_KEY)

# Test verifying round keys with a sample key
verify: verify_keys
	@echo "Verifying round keys with key $(TEST_KEY)"
	./verify_keys $(TEST_KEY)

# Run a full test cycle (load and verify)
full-test: load_round_keys verify_keys
	@echo "===== STEP 1: Writing round keys ====="
	./load_round_keys $(TEST_KEY)
	@echo ""
	@echo "===== STEP 2: Verifying round keys ====="
	./verify_keys $(TEST_KEY)

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
	rm -f load_round_keys verify_keys

# Install the module
install:
	@echo "Installing kernel module..."
	insmod round_keys.ko
	@echo "Module installed successfully"

# Remove the module
uninstall:
	@echo "Removing kernel module..."
	rmmod round_keys || echo "Module not loaded"
	@echo "Module removed successfully if it was loaded"

# Restart: uninstall then install
restart: uninstall install

# Phony targets (not files)
.PHONY: default modules userspace clean install uninstall restart test verify full-test

endif 