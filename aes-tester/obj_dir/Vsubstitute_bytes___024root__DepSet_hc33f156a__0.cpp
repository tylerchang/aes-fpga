// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsubstitute_bytes.h for the primary calling header

#include "Vsubstitute_bytes__pch.h"
#include "Vsubstitute_bytes___024root.h"

void Vsubstitute_bytes___024root___ico_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf);

void Vsubstitute_bytes___024root___eval_ico(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_ico\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsubstitute_bytes___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsubstitute_bytes___024root___ico_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___ico_sequent__TOP__0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.substitute_bytes__DOT__in_bytes[0U] = 
        (vlSelfRef.in[3U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[0U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [0U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[1U] = 
        (0xffU & (vlSelfRef.in[3U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[1U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [1U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[2U] = 
        (0xffU & (vlSelfRef.in[3U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[2U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [2U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[3U] = 
        (0xffU & vlSelfRef.in[3U]);
    vlSelfRef.substitute_bytes__DOT__addr[3U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [3U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[4U] = 
        (vlSelfRef.in[2U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[4U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [4U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[5U] = 
        (0xffU & (vlSelfRef.in[2U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[5U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [5U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[6U] = 
        (0xffU & (vlSelfRef.in[2U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[6U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [6U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[7U] = 
        (0xffU & vlSelfRef.in[2U]);
    vlSelfRef.substitute_bytes__DOT__addr[7U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [7U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[8U] = 
        (vlSelfRef.in[1U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[8U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [8U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[9U] = 
        (0xffU & (vlSelfRef.in[1U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[9U] = (((IData)(vlSelfRef.mode) 
                                                  << 8U) 
                                                 | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                 [9U]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.in[1U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[0xaU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xaU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.in[1U]);
    vlSelfRef.substitute_bytes__DOT__addr[0xbU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xbU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.in[0U] >> 0x18U);
    vlSelfRef.substitute_bytes__DOT__addr[0xcU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xcU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.in[0U] >> 0x10U));
    vlSelfRef.substitute_bytes__DOT__addr[0xdU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xdU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.in[0U] >> 8U));
    vlSelfRef.substitute_bytes__DOT__addr[0xeU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xeU]);
    vlSelfRef.substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.in[0U]);
    vlSelfRef.substitute_bytes__DOT__addr[0xfU] = (
                                                   ((IData)(vlSelfRef.mode) 
                                                    << 8U) 
                                                   | vlSelfRef.substitute_bytes__DOT__in_bytes
                                                   [0xfU]);
}

void Vsubstitute_bytes___024root___eval_triggers__ico(Vsubstitute_bytes___024root* vlSelf);

bool Vsubstitute_bytes___024root___eval_phase__ico(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_phase__ico\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsubstitute_bytes___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsubstitute_bytes___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsubstitute_bytes___024root___eval_act(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_act\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsubstitute_bytes___024root___nba_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf);

void Vsubstitute_bytes___024root___eval_nba(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_nba\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsubstitute_bytes___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vsubstitute_bytes___024root___nba_sequent__TOP__0(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___nba_sequent__TOP__0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[1U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[2U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[3U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[4U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[5U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[6U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[7U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[8U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[9U]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xaU]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xbU]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xcU]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xdU]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xeU]];
    vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data 
        = vlSelfRef.substitute_bytes__DOT__genblk1__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.substitute_bytes__DOT__addr[0xfU]];
    vlSelfRef.substitute_bytes__DOT__out_bytes[0U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[1U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[2U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[3U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[4U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[5U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[6U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[7U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[8U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[9U] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xaU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xbU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xcU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xdU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xeU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data;
    vlSelfRef.substitute_bytes__DOT__out_bytes[0xfU] 
        = vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data;
    vlSelfRef.out[3U] = ((0xffU & vlSelfRef.out[3U]) 
                         | (0xffffff00U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [0U] << 0x18U) 
                                           | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [1U] 
                                               << 0x10U) 
                                              | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                 [2U] 
                                                 << 8U)))));
    vlSelfRef.out[2U] = ((0xffffU & vlSelfRef.out[2U]) 
                         | (0xffff0000U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [4U] << 0x18U) 
                                           | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                              [5U] 
                                              << 0x10U))));
    vlSelfRef.out[3U] = ((0xffffff00U & vlSelfRef.out[3U]) 
                         | (0xffffU & ((0xffffU & vlSelfRef.substitute_bytes__DOT__out_bytes
                                        [3U]) | ((0xffffU 
                                                  & (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                     [4U] 
                                                     >> 8U)) 
                                                 | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                    [5U] 
                                                    >> 0x10U)))));
    vlSelfRef.out[1U] = ((0xffffffU & vlSelfRef.out[1U]) 
                         | (vlSelfRef.substitute_bytes__DOT__out_bytes
                            [8U] << 0x18U));
    vlSelfRef.out[2U] = ((0xffff0000U & vlSelfRef.out[2U]) 
                         | (0xffffffU & ((0xffff00U 
                                          & (vlSelfRef.substitute_bytes__DOT__out_bytes
                                             [6U] << 8U)) 
                                         | ((0xffffffU 
                                             & vlSelfRef.substitute_bytes__DOT__out_bytes
                                             [7U]) 
                                            | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [8U] 
                                               >> 8U)))));
    vlSelfRef.out[1U] = ((0xff000000U & vlSelfRef.out[1U]) 
                         | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                             [9U] << 0x10U) | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                                [0xaU] 
                                                << 8U) 
                                               | vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [0xbU])));
    vlSelfRef.out[0U] = ((0xffU & vlSelfRef.out[0U]) 
                         | (0xffffff00U & ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                            [0xcU] 
                                            << 0x18U) 
                                           | ((vlSelfRef.substitute_bytes__DOT__out_bytes
                                               [0xdU] 
                                               << 0x10U) 
                                              | (vlSelfRef.substitute_bytes__DOT__out_bytes
                                                 [0xeU] 
                                                 << 8U)))));
    vlSelfRef.out[0U] = ((0xffffff00U & vlSelfRef.out[0U]) 
                         | vlSelfRef.substitute_bytes__DOT__out_bytes
                         [0xfU]);
}

void Vsubstitute_bytes___024root___eval_triggers__act(Vsubstitute_bytes___024root* vlSelf);

bool Vsubstitute_bytes___024root___eval_phase__act(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_phase__act\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsubstitute_bytes___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsubstitute_bytes___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsubstitute_bytes___024root___eval_phase__nba(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_phase__nba\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsubstitute_bytes___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__ico(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__nba(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__act(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG

void Vsubstitute_bytes___024root___eval(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsubstitute_bytes___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/substitute_bytes.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsubstitute_bytes___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsubstitute_bytes___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/substitute_bytes.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsubstitute_bytes___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/../hw/substitute_bytes.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsubstitute_bytes___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsubstitute_bytes___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsubstitute_bytes___024root___eval_debug_assertions(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_debug_assertions\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
