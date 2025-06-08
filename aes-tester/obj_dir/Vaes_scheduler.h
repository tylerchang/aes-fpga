// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAES_SCHEDULER_H_
#define VERILATED_VAES_SCHEDULER_H_  // guard

#include "verilated.h"

class Vaes_scheduler__Syms;
class Vaes_scheduler___024root;
class VerilatedVcdC;
class Vaes_scheduler_aes_core;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vaes_scheduler VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaes_scheduler__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&mode,0,0);
    VL_OUT8(&round_key_addr,3,0);
    VL_IN8(&sink_valid,0,0);
    VL_OUT8(&sink_ready,0,0);
    VL_OUT8(&source_valid,0,0);
    VL_IN8(&source_ready,0,0);
    VL_INW(&round_key,127,0,4);
    VL_IN(&sink_data,31,0);
    VL_OUT(&source_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* const __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaes_scheduler___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaes_scheduler(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaes_scheduler(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaes_scheduler();
  private:
    VL_UNCOPYABLE(Vaes_scheduler);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
