# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaes_scheduler.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vaes_scheduler \
	Vaes_scheduler___024root__DepSet_hc710d7a1__0 \
	Vaes_scheduler___024root__DepSet_h7a533de8__0 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__0 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__1 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__2 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__3 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__4 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__5 \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaes_scheduler___024root__Slow \
	Vaes_scheduler___024root__DepSet_hc710d7a1__0__Slow \
	Vaes_scheduler___024root__DepSet_h7a533de8__0__Slow \
	Vaes_scheduler_aes_core__Slow \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__0__Slow \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__1__Slow \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__2__Slow \
	Vaes_scheduler_aes_core__DepSet_hdc1ab2a9__3__Slow \
	Vaes_scheduler_aes_core__DepSet_h815960e0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vaes_scheduler__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaes_scheduler__Syms \
	Vaes_scheduler__Trace__0__Slow \
	Vaes_scheduler__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
