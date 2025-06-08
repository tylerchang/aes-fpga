// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler___024root.h"

VL_ATTR_COLD void Vaes_scheduler___024root___eval_static(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_static\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vaes_scheduler___024root___eval_final(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_final\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__stl(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaes_scheduler___024root___eval_phase__stl(Vaes_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vaes_scheduler___024root___eval_settle(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_settle\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaes_scheduler___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../hw/../hw/aes_scheduler.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaes_scheduler___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__stl(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___dump_triggers__stl\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vaes_scheduler___024root___eval_triggers__stl(Vaes_scheduler___024root* vlSelf);
VL_ATTR_COLD void Vaes_scheduler___024root___eval_stl(Vaes_scheduler___024root* vlSelf);

VL_ATTR_COLD bool Vaes_scheduler___024root___eval_phase__stl(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___eval_phase__stl\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaes_scheduler___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vaes_scheduler___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__ico(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___dump_triggers__ico\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__act(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___dump_triggers__act\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_scheduler___024root___dump_triggers__nba(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___dump_triggers__nba\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_scheduler___024root____Vm_traceActivitySetAll(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root____Vm_traceActivitySetAll\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vaes_scheduler___024root___ctor_var_reset(Vaes_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root___ctor_var_reset\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->mode = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->round_key);
    vlSelf->round_key_addr = VL_RAND_RESET_I(4);
    vlSelf->sink_valid = VL_RAND_RESET_I(1);
    vlSelf->sink_data = VL_RAND_RESET_I(32);
    vlSelf->sink_ready = VL_RAND_RESET_I(1);
    vlSelf->source_valid = VL_RAND_RESET_I(1);
    vlSelf->source_data = VL_RAND_RESET_I(32);
    vlSelf->source_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->aes_scheduler__DOT__in_text[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->aes_scheduler__DOT__out_text[__Vi0]);
    }
    vlSelf->aes_scheduler__DOT__r_cnt = VL_RAND_RESET_I(8);
    vlSelf->aes_scheduler__DOT__we_r = VL_RAND_RESET_I(1);
    vlSelf->aes_scheduler__DOT__we_core = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->aes_scheduler__DOT__wr_en_sched[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->aes_scheduler__DOT__r_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->aes_scheduler__DOT__c_cnt = VL_RAND_RESET_I(6);
    vlSelf->aes_scheduler__DOT__round = VL_RAND_RESET_I(4);
    vlSelf->aes_scheduler__DOT__w_cnt = VL_RAND_RESET_I(8);
    vlSelf->aes_scheduler__DOT__we_w = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->aes_scheduler__DOT__core_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->aes_scheduler__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->aes_scheduler__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->aes_scheduler__DOT__r_reg_word_sel = VL_RAND_RESET_I(2);
    vlSelf->aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->aes_scheduler__DOT____Vlvbound_hcdbb857e__0);
    vlSelf->aes_scheduler__DOT____Vlvbound_ha9de3603__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
