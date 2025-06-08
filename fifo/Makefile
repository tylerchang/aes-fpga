# Makefile for FIFO drivers and userspace programs

ifneq (${KERNELRELEASE},)

# KERNELRELEASE defined: we are being compiled as part of the Kernel
obj-m := fifo_write.o fifo_read.o

else

# We are being compiled as a module: use the Kernel build system
KERNEL_SOURCE := /usr/src/linux-headers-$(shell uname -r)
PWD := $(shell pwd)

# Default target: build everything
default: modules userspace

# Target to build kernel modules
modules:
	@echo "Building kernel modules..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

# Target to build userspace programs
userspace: write_data read_data fifo_check

# Compile the writer program
write_data: write_data.c fifo_write.h
	@echo "Building write_data..."
	$(CC) -Wall -o write_data write_data.c

# Compile the reader program
read_data: read_data.c fifo_read.h
	@echo "Building read_data..."
	$(CC) -Wall -o read_data read_data.c

# Compile the FIFO check utility
fifo_check: fifo_check.c fifo_write.h fifo_read.h
	@echo "Building fifo_check..."
	$(CC) -Wall -o fifo_check fifo_check.c

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
	rm -f write_data read_data fifo_check

# Install the modules
install:
	@echo "Installing kernel modules..."
	insmod fifo_write.ko
	insmod fifo_read.ko
	@echo "Modules installed successfully"

# Remove the modules
uninstall:
	@echo "Removing kernel modules..."
	-rmmod fifo_read
	-rmmod fifo_write
	@echo "Modules removed successfully"

TARFILES = Makefile fifo_write.h fifo_write.c fifo_read.h fifo_read.c write_data.c read_data.c fifo_check.c fifo_start.sh fifo_cleanup.sh
TARFILE = fifo-drivers.tar.gz
.PHONY: tar
tar: $(TARFILE)

$(TARFILE): $(TARFILES)
	tar zcfC $(TARFILE) .. $(TARFILES:%=sw/%)

# Phony targets (not files)
.PHONY: default modules userspace clean install uninstall

endif 