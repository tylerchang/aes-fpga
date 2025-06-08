// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler___024root.h"

VL_INLINE_OPT void Vaes_scheduler___024root___ico_sequent__TOP__0(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___ico_sequent__TOP__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.source_valid = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_w = ((IData)(vlSelfRef.source_valid) 
                                              & (IData)(vlSelfRef.source_ready));
    } else {
        vlSelfRef.source_valid = 0U;
        vlSelfRef.aes_scheduler__DOT__we_w = 0U;
    }
    if ((1U == (IData)(vlSelfRef.aes_scheduler__DOT__state))) {
        vlSelfRef.sink_ready = vlSelfRef.start;
        vlSelfRef.aes_scheduler__DOT__we_r = ((IData)(vlSelfRef.sink_valid) 
                                              & (IData)(vlSelfRef.sink_ready));
    } else {
        vlSelfRef.sink_ready = 0U;
        vlSelfRef.aes_scheduler__DOT__we_r = 0U;
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

void Vaes_scheduler___024root___eval_triggers__ico(Vaes_scheduler___024root* vlSelf);
void Vaes_scheduler___024root___eval_ico(Vaes_scheduler___024root* vlSelf);

bool Vaes_scheduler___024root___eval_phase__ico(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_phase__ico\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaes_scheduler___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vaes_scheduler___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vaes_scheduler___024root___eval_act(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_act\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaes_scheduler___024root___eval_triggers__act(Vaes_scheduler___024root* vlSelf);

bool Vaes_scheduler___024root___eval_phase__act(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_phase__act\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaes_scheduler___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaes_scheduler___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaes_scheduler___024root___eval_nba(Vaes_scheduler___024root* vlSelf);

bool Vaes_scheduler___024root___eval_phase__nba(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_phase__nba\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaes_scheduler___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__ico(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__nba(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__act(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_scheduler___024root___eval(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vaes_scheduler___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/aes_scheduler.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaes_scheduler___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes_scheduler___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/aes_scheduler.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes_scheduler___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/../hw/aes_scheduler.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaes_scheduler___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaes_scheduler___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaes_scheduler___024root___eval_debug_assertions(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_debug_assertions\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY(((vlSelfRef.sink_valid & 0xfeU)))) {
        Verilated::overWidthError("sink_valid");}
    if (VL_UNLIKELY(((vlSelfRef.source_ready & 0xfeU)))) {
        Verilated::overWidthError("source_ready");}
}
#endif  // VL_DEBUG
