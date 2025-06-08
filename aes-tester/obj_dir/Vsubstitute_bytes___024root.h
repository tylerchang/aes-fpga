// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsubstitute_bytes.h for the primary calling header

#ifndef VERILATED_VSUBSTITUTE_BYTES___024ROOT_H_
#define VERILATED_VSUBSTITUTE_BYTES___024ROOT_H_  // guard

#include "verilated.h"


class Vsubstitute_bytes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsubstitute_bytes___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(mode,0,0);
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data;
    CData/*7:0*/ substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(in,127,0,4);
    VL_OUTW(out,127,0,4);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> substitute_bytes__DOT__in_bytes;
    VlUnpacked<CData/*7:0*/, 16> substitute_bytes__DOT__out_bytes;
    VlUnpacked<SData/*8:0*/, 16> substitute_bytes__DOT__addr;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 512> substitute_bytes__DOT__genblk1__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsubstitute_bytes__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsubstitute_bytes___024root(Vsubstitute_bytes__Syms* symsp, const char* v__name);
    ~Vsubstitute_bytes___024root();
    VL_UNCOPYABLE(Vsubstitute_bytes___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
