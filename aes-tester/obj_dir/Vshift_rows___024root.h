// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_rows.h for the primary calling header

#ifndef VERILATED_VSHIFT_ROWS___024ROOT_H_
#define VERILATED_VSHIFT_ROWS___024ROOT_H_  // guard

#include "verilated.h"


class Vshift_rows__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_rows___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(mode,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ shift_rows__DOT____VdfgRegularize_hb80202b3_0_17;
    VL_INW(in_text,127,0,4);
    VL_OUTW(out_text,127,0,4);
    IData/*31:0*/ shift_rows__DOT__shifted_row1;
    IData/*31:0*/ shift_rows__DOT__shifted_row3;
    IData/*23:0*/ shift_rows__DOT____VdfgRegularize_hb80202b3_0_16;
    IData/*23:0*/ shift_rows__DOT____VdfgRegularize_hb80202b3_0_18;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_rows__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshift_rows___024root(Vshift_rows__Syms* symsp, const char* v__name);
    ~Vshift_rows___024root();
    VL_UNCOPYABLE(Vshift_rows___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
