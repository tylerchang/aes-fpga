// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_rows.h for the primary calling header

#include "Vshift_rows__pch.h"
#include "Vshift_rows___024root.h"

VL_ATTR_COLD void Vshift_rows___024root___eval_static(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_static\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vshift_rows___024root___eval_initial(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_initial\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vshift_rows___024root___eval_final(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_final\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__stl(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vshift_rows___024root___eval_phase__stl(Vshift_rows___024root* vlSelf);

VL_ATTR_COLD void Vshift_rows___024root___eval_settle(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_settle\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vshift_rows___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/shift_rows.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vshift_rows___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__stl(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___dump_triggers__stl\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vshift_rows___024root___ico_sequent__TOP__0(Vshift_rows___024root* vlSelf);

VL_ATTR_COLD void Vshift_rows___024root___eval_stl(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_stl\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vshift_rows___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vshift_rows___024root___eval_triggers__stl(Vshift_rows___024root* vlSelf);

VL_ATTR_COLD bool Vshift_rows___024root___eval_phase__stl(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___eval_phase__stl\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vshift_rows___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vshift_rows___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__ico(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___dump_triggers__ico\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__act(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___dump_triggers__act\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_rows___024root___dump_triggers__nba(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___dump_triggers__nba\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_rows___024root___ctor_var_reset(Vshift_rows___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root___ctor_var_reset\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(128, vlSelf->in_text);
    vlSelf->mode = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->out_text);
    vlSelf->shift_rows__DOT__shifted_row1 = VL_RAND_RESET_I(32);
    vlSelf->shift_rows__DOT__shifted_row3 = VL_RAND_RESET_I(32);
    vlSelf->shift_rows__DOT____VdfgRegularize_hb80202b3_0_16 = VL_RAND_RESET_I(24);
    vlSelf->shift_rows__DOT____VdfgRegularize_hb80202b3_0_17 = VL_RAND_RESET_I(16);
    vlSelf->shift_rows__DOT____VdfgRegularize_hb80202b3_0_18 = VL_RAND_RESET_I(24);
}
