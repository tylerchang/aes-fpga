# Makefile for AES WAV processing project
CC := gcc
CFLAGS := -Wall -Werror -O2
LDFLAGS := -lm

# Userspace programs
USERSPACE_PROGS := aes_wav load_round_keys

# Kernel module directories
KERNEL_MODULES := drivers

# Default target
all: userspace modules

# Build userspace programs
userspace: $(USERSPACE_PROGS)
	@echo "Userspace programs built successfully"

aes_wav: aes_wav.c
	@echo "Building aes_wav..."
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

load_round_keys: load_round_keys.c
	@echo "Building load_round_keys..."
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# Build kernel modules
modules:
	@echo "Building kernel modules..."
	$(MAKE) -C $(KERNEL_MODULES)

# Clean everything
clean:
	@echo "Cleaning userspace programs..."
	rm -f $(USERSPACE_PROGS)
	@echo "Cleaning kernel modules..."
	$(MAKE) -C $(KERNEL_MODULES) clean

# Install kernel modules
install:
	@echo "Installing kernel modules..."
	$(MAKE) -C $(KERNEL_MODULES) install

# Uninstall kernel modules
uninstall:
	@echo "Uninstalling kernel modules..."
	$(MAKE) -C $(KERNEL_MODULES) uninstall

# Restart: uninstall then install 
restart: uninstall install
	@echo "Kernel modules restarted"

# Run full test
test: all
	@echo "Running full test suite..."
	# Add your test commands here

.PHONY: all userspace modules clean install uninstall restart test 