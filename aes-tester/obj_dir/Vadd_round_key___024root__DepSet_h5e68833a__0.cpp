// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_round_key.h for the primary calling header

#include "Vadd_round_key__pch.h"
#include "Vadd_round_key___024root.h"

void Vadd_round_key___024root___ico_sequent__TOP__0(Vadd_round_key___024root* vlSelf);

void Vadd_round_key___024root___eval_ico(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_ico\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vadd_round_key___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vadd_round_key___024root___ico_sequent__TOP__0(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___ico_sequent__TOP__0\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_text[0U] = (vlSelfRef.in_text[0U] 
                              ^ vlSelfRef.round_key[0U]);
    vlSelfRef.out_text[1U] = (vlSelfRef.in_text[1U] 
                              ^ vlSelfRef.round_key[1U]);
    vlSelfRef.out_text[2U] = (vlSelfRef.in_text[2U] 
                              ^ vlSelfRef.round_key[2U]);
    vlSelfRef.out_text[3U] = (vlSelfRef.in_text[3U] 
                              ^ vlSelfRef.round_key[3U]);
}

void Vadd_round_key___024root___eval_triggers__ico(Vadd_round_key___024root* vlSelf);

bool Vadd_round_key___024root___eval_phase__ico(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_phase__ico\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vadd_round_key___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vadd_round_key___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vadd_round_key___024root___eval_act(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_act\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vadd_round_key___024root___eval_nba(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_nba\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vadd_round_key___024root___eval_triggers__act(Vadd_round_key___024root* vlSelf);

bool Vadd_round_key___024root___eval_phase__act(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_phase__act\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vadd_round_key___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vadd_round_key___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vadd_round_key___024root___eval_phase__nba(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_phase__nba\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vadd_round_key___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_round_key___024root___dump_triggers__ico(Vadd_round_key___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_round_key___024root___dump_triggers__nba(Vadd_round_key___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_round_key___024root___dump_triggers__act(Vadd_round_key___024root* vlSelf);
#endif  // VL_DEBUG

void Vadd_round_key___024root___eval(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vadd_round_key___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/aes_core/add_round_key.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vadd_round_key___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vadd_round_key___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/aes_core/add_round_key.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vadd_round_key___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/aes_core/add_round_key.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vadd_round_key___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vadd_round_key___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vadd_round_key___024root___eval_debug_assertions(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_debug_assertions\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
