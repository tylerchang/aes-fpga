// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__ico(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_scheduler___024root___eval_triggers__ico(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_triggers__ico\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_scheduler___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler___024root___ico_sequent__TOP__0(Vaes_scheduler___024root* vlSelf);

void Vaes_scheduler___024root___eval_ico(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_ico\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst));
        Vaes_scheduler___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__act(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_scheduler___024root___eval_triggers__act(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_triggers__act\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_scheduler___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf);
void Vaes_scheduler___024root___nba_sequent__TOP__0(Vaes_scheduler___024root* vlSelf);
void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1(Vaes_scheduler_aes_core* vlSelf);

void Vaes_scheduler___024root___eval_nba(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_nba\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst__0((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst));
        Vaes_scheduler___024root___nba_sequent__TOP__0(vlSelf);
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst));
        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst__1((&vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst));
    }
}

VL_INLINE_OPT void Vaes_scheduler___024root___nba_sequent__TOP__0(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___nba_sequent__TOP__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vdly__aes_scheduler__DOT__c_cnt;
    __Vdly__aes_scheduler__DOT__c_cnt = 0;
    IData/*31:0*/ __VdlyVal__aes_scheduler__DOT__r_reg__v0;
    __VdlyVal__aes_scheduler__DOT__r_reg__v0 = 0;
    CData/*1:0*/ __VdlyDim0__aes_scheduler__DOT__r_reg__v0;
    __VdlyDim0__aes_scheduler__DOT__r_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__aes_scheduler__DOT__r_reg__v0;
    __VdlySet__aes_scheduler__DOT__r_reg__v0 = 0;
    // Body
    __VdlySet__aes_scheduler__DOT__r_reg__v0 = 0U;
    __Vdly__aes_scheduler__DOT__c_cnt = vlSelfRef.aes_scheduler__DOT__c_cnt;
    vlSelfRef.aes_scheduler__DOT__out_text[0U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[0U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[1U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[2U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[3U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[4U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[5U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[6U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[7U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[8U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][0U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][1U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][2U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U];
    vlSelfRef.aes_scheduler__DOT__out_text[9U][3U] 
        = vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U];
    if ((2U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.aes_scheduler__DOT__round)));
        __Vdly__aes_scheduler__DOT__c_cnt = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.aes_scheduler__DOT__c_cnt)));
        if ((1U == VL_MODDIV_III(32, (IData)(vlSelfRef.aes_scheduler__DOT__c_cnt), (IData)(5U)))) {
            vlSelfRef.aes_scheduler__DOT__round = vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round;
        } else if ((0U == VL_MODDIV_III(32, (IData)(vlSelfRef.aes_scheduler__DOT__c_cnt), (IData)(5U)))) {
            vlSelfRef.round_key_addr = (0xfU & ((IData)(vlSelfRef.mode)
                                                 ? 
                                                ((IData)(0xbU) 
                                                 - (IData)(vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round))
                                                 : (IData)(vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round)));
        }
    } else {
        __Vdly__aes_scheduler__DOT__c_cnt = 0U;
        vlSelfRef.aes_scheduler__DOT__round = 0U;
        vlSelfRef.round_key_addr = 0U;
    }
    if ((1U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        if (vlSelfRef.aes_scheduler__DOT__we_r) {
            vlSelfRef.aes_scheduler__DOT__r_cnt = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt)));
            __VdlyVal__aes_scheduler__DOT__r_reg__v0 
                = vlSelfRef.sink_data;
            __VdlyDim0__aes_scheduler__DOT__r_reg__v0 
                = vlSelfRef.aes_scheduler__DOT__r_reg_word_sel;
            __VdlySet__aes_scheduler__DOT__r_reg__v0 = 1U;
        }
    } else {
        vlSelfRef.aes_scheduler__DOT__r_cnt = 0U;
    }
    if (__VdlySet__aes_scheduler__DOT__r_reg__v0) {
        vlSelfRef.aes_scheduler__DOT__r_reg[__VdlyDim0__aes_scheduler__DOT__r_reg__v0] 
            = __VdlyVal__aes_scheduler__DOT__r_reg__v0;
    }
    vlSelfRef.aes_scheduler__DOT__c_cnt = __Vdly__aes_scheduler__DOT__c_cnt;
    vlSelfRef.aes_scheduler__DOT__r_reg_word_sel = 
        (3U & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt));
    if ((3U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        if (vlSelfRef.aes_scheduler__DOT__we_w) {
            vlSelfRef.aes_scheduler__DOT__w_cnt = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt)));
        }
    } else {
        vlSelfRef.aes_scheduler__DOT__w_cnt = 0U;
    }
    vlSelfRef.aes_scheduler__DOT__state = vlSelfRef.aes_scheduler__DOT__next_state;
    if ((3U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.source_valid = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_w = ((IData)(vlSelfRef.source_valid) 
                                              & (IData)(vlSelfRef.source_ready));
        if ((9U >= (0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                            >> 2U)))) {
            vlSelfRef.aes_scheduler__DOT__core_out[0U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][3U];
            vlSelfRef.aes_scheduler__DOT__core_out[1U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][2U];
            vlSelfRef.aes_scheduler__DOT__core_out[2U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][1U];
            vlSelfRef.aes_scheduler__DOT__core_out[3U] 
                = vlSelfRef.aes_scheduler__DOT__out_text
                [(0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                          >> 2U))][0U];
        } else {
            vlSelfRef.aes_scheduler__DOT__core_out[0U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[1U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[2U] = 0U;
            vlSelfRef.aes_scheduler__DOT__core_out[3U] = 0U;
        }
        vlSelfRef.source_data = vlSelfRef.aes_scheduler__DOT__core_out
            [(3U & (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))];
    } else {
        vlSelfRef.source_valid = 0U;
        vlSelfRef.aes_scheduler__DOT__we_w = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[0U] = 0U;
        vlSelfRef.source_data = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__core_out[3U] = 0U;
    }
    if ((1U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[0U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[1U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[2U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[3U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[4U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[5U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[6U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[7U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[8U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[3U];
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [2U]))));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelfRef.aes_scheduler__DOT__r_reg
                                          [2U]))) >> 0x20U));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U] 
            = vlSelfRef.aes_scheduler__DOT__r_reg[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[0U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[1U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[2U];
        vlSelfRef.aes_scheduler__DOT__in_text[9U][3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_hcdbb857e__0[3U];
        vlSelfRef.sink_ready = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_r = ((IData)(vlSelfRef.sink_valid) 
                                              & (IData)(vlSelfRef.sink_ready));
        vlSelfRef.aes_scheduler__DOT__we_core = ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt))) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt)));
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (0U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[0U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (1U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[1U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (2U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[2U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (3U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[3U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (4U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[4U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (5U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[5U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (6U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[6U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (7U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[7U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (8U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[8U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
        vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0 
            = ((IData)(vlSelfRef.aes_scheduler__DOT__we_core) 
               & (9U == ((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                  >> 2U)) - (IData)(1U))));
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[9U] 
            = vlSelfRef.aes_scheduler__DOT____Vlvbound_ha9de3603__0;
    } else {
        vlSelfRef.aes_scheduler__DOT__in_text[0U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[0U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[1U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[2U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[3U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[4U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[5U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[6U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[7U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[8U][3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__in_text[9U][3U] = 0U;
        vlSelfRef.sink_ready = 0U;
        vlSelfRef.aes_scheduler__DOT__we_r = 0U;
        vlSelfRef.aes_scheduler__DOT__we_core = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[0U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[1U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[2U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[3U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[4U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[5U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[6U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[7U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[8U] = 0U;
        vlSelfRef.aes_scheduler__DOT__wr_en_sched[9U] = 0U;
    }
    if ((1U != (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i = 0xaU;
    }
    if ((3U != (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlSelfRef.aes_scheduler__DOT__next_state = ((2U 
                                                 & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                  ? 
                                                 ((0x27U 
                                                   == (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((0x32U 
                                                   == (IData)(vlSelfRef.aes_scheduler__DOT__c_cnt))
                                                   ? 3U
                                                   : 2U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.aes_scheduler__DOT__state))
                                                  ? 
                                                 (vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [9U]
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelfRef.start)
                                                   ? 1U
                                                   : 0U)));
    if ((1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.start))))) {
        vlSelfRef.aes_scheduler__DOT__next_state = 0U;
    }
}
