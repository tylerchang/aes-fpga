// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_rows.h for the primary calling header

#include "Vshift_rows__pch.h"
#include "Vshift_rows___024root.h"

void Vshift_rows___024root___ico_sequent__TOP__0(Vshift_rows___024root* vlSelf);

void Vshift_rows___024root___eval_ico(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_ico\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vshift_rows___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vshift_rows___024root___ico_sequent__TOP__0(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___ico_sequent__TOP__0\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_17 
        = ((0xff00U & vlSelfRef.in_text[1U]) | (0xffU 
                                                & (vlSelfRef.in_text[0U] 
                                                   >> 8U)));
    vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_16 
        = ((0xff0000U & vlSelfRef.in_text[2U]) | ((0xff00U 
                                                   & (vlSelfRef.in_text[1U] 
                                                      >> 8U)) 
                                                  | (0xffU 
                                                     & (vlSelfRef.in_text[0U] 
                                                        >> 0x10U))));
    vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_18 
        = ((0xff0000U & (vlSelfRef.in_text[2U] << 0x10U)) 
           | ((0xff00U & (vlSelfRef.in_text[1U] << 8U)) 
              | (0xffU & vlSelfRef.in_text[0U])));
    if (vlSelfRef.mode) {
        vlSelfRef.shift_rows__DOT__shifted_row1 = (
                                                   ((0xff000000U 
                                                     & (vlSelfRef.in_text[0U] 
                                                        << 8U)) 
                                                    | (0xff0000U 
                                                       & vlSelfRef.in_text[3U])) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.in_text[2U] 
                                                          >> 8U)) 
                                                      | (0xffU 
                                                         & (vlSelfRef.in_text[1U] 
                                                            >> 0x10U))));
        vlSelfRef.shift_rows__DOT__shifted_row3 = (
                                                   (vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_18 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.in_text[3U]));
    } else {
        vlSelfRef.shift_rows__DOT__shifted_row1 = (
                                                   (vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_16 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelfRef.in_text[3U] 
                                                         >> 0x10U)));
        vlSelfRef.shift_rows__DOT__shifted_row3 = (
                                                   ((vlSelfRef.in_text[0U] 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & (vlSelfRef.in_text[3U] 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.in_text[2U] 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSelfRef.in_text[1U])));
    }
    vlSelfRef.out_text[0U] = (((0xff000000U & vlSelfRef.in_text[0U]) 
                               | (0xff0000U & (vlSelfRef.shift_rows__DOT__shifted_row1 
                                               << 0x10U))) 
                              | ((0xff00U & vlSelfRef.in_text[2U]) 
                                 | (0xffU & vlSelfRef.shift_rows__DOT__shifted_row3)));
    vlSelfRef.out_text[1U] = (((0xff000000U & vlSelfRef.in_text[1U]) 
                               | (0xff0000U & (vlSelfRef.shift_rows__DOT__shifted_row1 
                                               << 8U))) 
                              | ((0xff00U & vlSelfRef.in_text[3U]) 
                                 | (0xffU & (vlSelfRef.shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.out_text[2U] = (((0xff000000U & vlSelfRef.in_text[2U]) 
                               | (0xff0000U & vlSelfRef.shift_rows__DOT__shifted_row1)) 
                              | ((0xff00U & vlSelfRef.in_text[0U]) 
                                 | (0xffU & (vlSelfRef.shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.out_text[3U] = (((0xff000000U & vlSelfRef.in_text[3U]) 
                               | (0xff0000U & (vlSelfRef.shift_rows__DOT__shifted_row1 
                                               >> 8U))) 
                              | ((0xff00U & vlSelfRef.in_text[1U]) 
                                 | (vlSelfRef.shift_rows__DOT__shifted_row3 
                                    >> 0x18U)));
}

void Vshift_rows___024root___eval_triggers__ico(Vshift_rows___024root* vlSelf);

bool Vshift_rows___024root___eval_phase__ico(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_phase__ico\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vshift_rows___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vshift_rows___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vshift_rows___024root___eval_act(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_act\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vshift_rows___024root___eval_nba(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_nba\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vshift_rows___024root___eval_triggers__act(Vshift_rows___024root* vlSelf);

bool Vshift_rows___024root___eval_phase__act(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_phase__act\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vshift_rows___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vshift_rows___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vshift_rows___024root___eval_phase__nba(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_phase__nba\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vshift_rows___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__ico(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__nba(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__act(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_rows___024root___eval(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vshift_rows___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/shift_rows.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vshift_rows___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vshift_rows___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/shift_rows.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vshift_rows___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/../hw/shift_rows.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vshift_rows___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vshift_rows___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vshift_rows___024root___eval_debug_assertions(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_debug_assertions\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
