// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADD_ROUND_KEY__SYMS_H_
#define VERILATED_VADD_ROUND_KEY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vadd_round_key.h"

// INCLUDE MODULE CLASSES
#include "Vadd_round_key___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vadd_round_key__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vadd_round_key* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vadd_round_key___024root       TOP;

    // CONSTRUCTORS
    Vadd_round_key__Syms(VerilatedContext* contextp, const char* namep, Vadd_round_key* modelp);
    ~Vadd_round_key__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
