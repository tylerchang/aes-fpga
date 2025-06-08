// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_SCHEDULER__SYMS_H_
#define VERILATED_VAES_SCHEDULER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_scheduler.h"

// INCLUDE MODULE CLASSES
#include "Vaes_scheduler___024root.h"
#include "Vaes_scheduler_aes_core.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaes_scheduler__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_scheduler* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_scheduler___024root       TOP;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst;
    Vaes_scheduler_aes_core        TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst;

    // CONSTRUCTORS
    Vaes_scheduler__Syms(VerilatedContext* contextp, const char* namep, Vaes_scheduler* modelp);
    ~Vaes_scheduler__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
