// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd_round_key.h for the primary calling header

#ifndef VERILATED_VADD_ROUND_KEY___024ROOT_H_
#define VERILATED_VADD_ROUND_KEY___024ROOT_H_  // guard

#include "verilated.h"


class Vadd_round_key__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadd_round_key___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_INW(in_text,127,0,4);
    VL_INW(round_key,127,0,4);
    VL_OUTW(out_text,127,0,4);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vadd_round_key__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadd_round_key___024root(Vadd_round_key__Syms* symsp, const char* v__name);
    ~Vadd_round_key___024root();
    VL_UNCOPYABLE(Vadd_round_key___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
