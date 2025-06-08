// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_scheduler.h for the primary calling header

#ifndef VERILATED_VAES_SCHEDULER___024ROOT_H_
#define VERILATED_VAES_SCHEDULER___024ROOT_H_  // guard

#include "verilated.h"
class Vaes_scheduler_aes_core;


class Vaes_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_scheduler___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst;
    Vaes_scheduler_aes_core* __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start,0,0);
    VL_IN8(mode,0,0);
    VL_OUT8(round_key_addr,3,0);
    VL_IN8(sink_valid,0,0);
    VL_OUT8(sink_ready,0,0);
    VL_OUT8(source_valid,0,0);
    VL_IN8(source_ready,0,0);
    CData/*7:0*/ aes_scheduler__DOT__r_cnt;
    CData/*0:0*/ aes_scheduler__DOT__we_r;
    CData/*0:0*/ aes_scheduler__DOT__we_core;
    CData/*5:0*/ aes_scheduler__DOT__c_cnt;
    CData/*3:0*/ aes_scheduler__DOT__round;
    CData/*7:0*/ aes_scheduler__DOT__w_cnt;
    CData/*0:0*/ aes_scheduler__DOT__we_w;
    CData/*1:0*/ aes_scheduler__DOT__state;
    CData/*1:0*/ aes_scheduler__DOT__next_state;
    CData/*1:0*/ aes_scheduler__DOT__r_reg_word_sel;
    CData/*3:0*/ aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round;
    CData/*0:0*/ aes_scheduler__DOT____Vlvbound_ha9de3603__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(round_key,127,0,4);
    VL_IN(sink_data,31,0);
    VL_OUT(source_data,31,0);
    IData/*31:0*/ aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i;
    VlWide<4>/*127:0*/ aes_scheduler__DOT____Vlvbound_hcdbb857e__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<4>/*127:0*/, 10> aes_scheduler__DOT__in_text;
    VlUnpacked<VlWide<4>/*127:0*/, 10> aes_scheduler__DOT__out_text;
    VlUnpacked<CData/*0:0*/, 10> aes_scheduler__DOT__wr_en_sched;
    VlUnpacked<IData/*31:0*/, 4> aes_scheduler__DOT__r_reg;
    VlUnpacked<IData/*31:0*/, 4> aes_scheduler__DOT__core_out;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaes_scheduler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_scheduler___024root(Vaes_scheduler__Syms* symsp, const char* v__name);
    ~Vaes_scheduler___024root();
    VL_UNCOPYABLE(Vaes_scheduler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
