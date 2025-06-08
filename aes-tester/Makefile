.PHONY: all clean shiftrows mixcols addroundkey subbytes aescore aesscheduler wave
CFLAGS += -std=c++14

# --- Configuration ---
# Tool paths
VERILATOR = verilator
CXX = g++
GTKWAVE = gtkwave

# Directories - now relative from aes-tester
HW_DIR = ../hw
HW_AESCORE_DIR = $(HW_DIR)
OBJ_DIR = obj_dir

# Source files: SystemVerilog modules (paths from aes-tester)
HW_SHIFTROWS = $(HW_DIR)/shift_rows.sv
HW_MIXCOLS = $(HW_DIR)/mix_columns.sv
HW_ADDROUNDKEY = $(HW_DIR)/add_round_key.sv
HW_SUBBYTES = $(HW_DIR)/substitute_bytes.sv
HW_AESCORE = $(HW_AESCORE_DIR)/aes_core.sv
HW_AESSCHEDULER = $(HW_AESCORE_DIR)/aes_scheduler.sv

# Source files: C++ test benches (paths relative to Makefile)
TEST_SHIFTROWS = shift_rows_test.cpp
TEST_MIXCOLS = mix_columns_test.cpp
TEST_ADDROUNDKEY = add_round_key_test.cpp
TEST_SUBBYTES = substitute_bytes_test.cpp
TEST_AESCORE = aes_core_test.cpp
TEST_AESSCHEDULER = aes_scheduler_test.cpp

# Verilator flags with include paths - removed --build flag
VERILATOR_FLAGS = -Wall --cc --CFLAGS "-std=c++14" --trace -Wno-fatal -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-BLKSEQ -I$(HW_DIR)

# Executable names
EXEC_SHIFTROWS = $(OBJ_DIR)/Vshift_rows
EXEC_MIXCOLS = $(OBJ_DIR)/Vmix_columns
EXEC_ADDROUNDKEY = $(OBJ_DIR)/Vadd_round_key
EXEC_SUBBYTES = $(OBJ_DIR)/Vsubstitute_bytes
EXEC_AESCORE = $(OBJ_DIR)/Vaes_core
EXEC_AESSCHEDULER = $(OBJ_DIR)/Vaes_scheduler

# --- Targets ---
all: shiftrows mixcols addroundkey subbytes aescore aesscheduler

# Create object directory
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# ShiftRows test
shiftrows: $(EXEC_SHIFTROWS)
	@echo "Running ShiftRows test..."
	./$(EXEC_SHIFTROWS) && echo "ShiftRows test PASSED" || echo "ShiftRows test FAILED"

$(EXEC_SHIFTROWS): $(HW_SHIFTROWS) $(TEST_SHIFTROWS) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_SHIFTROWS) $(HW_SHIFTROWS) --top-module shift_rows --Mdir $(OBJ_DIR) -o Vshift_rows --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vshift_rows ] || cp $(OBJ_DIR)/Vshift_rows.* $(OBJ_DIR)/Vshift_rows 2>/dev/null || true

# MixColumns test
mixcols: $(EXEC_MIXCOLS)
	@echo "Running MixColumns test..."
	./$(EXEC_MIXCOLS) && echo "MixColumns test PASSED" || echo "MixColumns test FAILED"

$(EXEC_MIXCOLS): $(HW_MIXCOLS) $(TEST_MIXCOLS) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_MIXCOLS) $(HW_MIXCOLS) --top-module mix_columns --Mdir $(OBJ_DIR) -o Vmix_columns --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vmix_columns ] || cp $(OBJ_DIR)/Vmix_columns.* $(OBJ_DIR)/Vmix_columns 2>/dev/null || true

# AddRoundKey test
addroundkey: $(EXEC_ADDROUNDKEY)
	@echo "Running AddRoundKey test..."
	./$(EXEC_ADDROUNDKEY) && echo "AddRoundKey test PASSED" || echo "AddRoundKey test FAILED"

$(EXEC_ADDROUNDKEY): $(HW_ADDROUNDKEY) $(TEST_ADDROUNDKEY) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_ADDROUNDKEY) $(HW_ADDROUNDKEY) --top-module add_round_key --Mdir $(OBJ_DIR) -o Vadd_round_key --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vadd_round_key ] || cp $(OBJ_DIR)/Vadd_round_key.* $(OBJ_DIR)/Vadd_round_key 2>/dev/null || true

# SubBytes test
subbytes: $(EXEC_SUBBYTES)
	@echo "Running SubBytes test..."
	cp $(HW_DIR)/sub_box.hex $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vsubstitute_bytes && echo "SubBytes test PASSED" || (echo "SubBytes test FAILED"; exit 1)

$(EXEC_SUBBYTES): $(HW_SUBBYTES) $(TEST_SUBBYTES) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_SUBBYTES) $(HW_SUBBYTES) --top-module substitute_bytes --Mdir $(OBJ_DIR) -o Vsubstitute_bytes --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vsubstitute_bytes ] || cp $(OBJ_DIR)/Vsubstitute_bytes.* $(OBJ_DIR)/Vsubstitute_bytes 2>/dev/null || true

# AES Core test
aescore: $(EXEC_AESCORE)
	@echo "Running AES Core test..."
	cp $(HW_DIR)/sub_box.hex $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vaes_core && echo "AES Core test PASSED" || (echo "AES Core test FAILED"; exit 1)

# AES Scheduler test
aesscheduler: $(EXEC_AESSCHEDULER)
	@echo "Running AES Scheduler test..."
	cp $(HW_DIR)/sub_box.hex $(OBJ_DIR)/
	cd $(OBJ_DIR) && ./Vaes_scheduler && echo "AES Scheduler test PASSED" || (echo "AES Scheduler test FAILED"; exit 1)

# View AES Core waveform in GTKWave
wave: aescore
	@echo "Opening waveform in GTKWave..."
	$(GTKWAVE) $(OBJ_DIR)/aes_core_sim.vcd &

# View AES Scheduler waveform in GTKWave
wavesched: 
	@echo "Opening waveform in GTKWave..."
	@if [ -f $(OBJ_DIR)/aes_scheduler_sim.vcd ]; then \
		$(GTKWAVE) $(OBJ_DIR)/aes_scheduler_sim.vcd & \
	else \
		echo "VCD file not found. Running aesscheduler target first..."; \
		$(MAKE) aesscheduler; \
		if [ -f $(OBJ_DIR)/aes_scheduler_sim.vcd ]; then \
			$(GTKWAVE) $(OBJ_DIR)/aes_scheduler_sim.vcd & \
		else \
			echo "ERROR: VCD file still not found after running aesscheduler!"; \
			exit 1; \
		fi \
	fi

$(EXEC_AESCORE): $(HW_AESCORE) $(HW_SHIFTROWS) $(HW_MIXCOLS) $(HW_ADDROUNDKEY) $(HW_SUBBYTES) $(TEST_AESCORE) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_AESCORE) $(HW_AESCORE) $(HW_SHIFTROWS) $(HW_MIXCOLS) $(HW_ADDROUNDKEY) $(HW_SUBBYTES) --top-module aes_core --Mdir $(OBJ_DIR) -o Vaes_core --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vaes_core ] || cp $(OBJ_DIR)/Vaes_core.* $(OBJ_DIR)/Vaes_core 2>/dev/null || true

$(EXEC_AESSCHEDULER): $(HW_AESSCHEDULER) $(HW_AESCORE) $(HW_SHIFTROWS) $(HW_MIXCOLS) $(HW_ADDROUNDKEY) $(HW_SUBBYTES) $(TEST_AESSCHEDULER) | $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --exe $(TEST_AESSCHEDULER) $(HW_AESSCHEDULER) $(HW_AESCORE) $(HW_SHIFTROWS) $(HW_MIXCOLS) $(HW_ADDROUNDKEY) $(HW_SUBBYTES) --top-module aes_scheduler --Mdir $(OBJ_DIR) -o Vaes_scheduler --build
	# Copy the executable to the right location if it was built elsewhere
	[ -f $(OBJ_DIR)/Vaes_scheduler ] || cp $(OBJ_DIR)/Vaes_scheduler.* $(OBJ_DIR)/Vaes_scheduler 2>/dev/null || true

# Clean target
clean:
	rm -rf $(OBJ_DIR)

# Help command
help:
	@echo "Available targets:"
	@echo "  all          - Build and run all tests"
	@echo "  shiftrows    - Build and run ShiftRows test"
	@echo "  mixcols      - Build and run MixColumns test"
	@echo "  addroundkey  - Build and run AddRoundKey test"
	@echo "  subbytes     - Build and run SubBytes test"
	@echo "  aescore      - Build and run AES Core test"
	@echo "  aesscheduler - Build and run AES Scheduler test"
	@echo "  wave         - Run AES Core test and view waveform in GTKWave"
	@echo "  wavesched    - Run AES Scheduler test and view waveform in GTKWave"
	@echo "  clean        - Remove build artifacts"
	@echo "  help         - Show this help message" 