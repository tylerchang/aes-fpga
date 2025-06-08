// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmix_columns.h for the primary calling header

#include "Vmix_columns__pch.h"
#include "Vmix_columns___024root.h"

VL_ATTR_COLD void Vmix_columns___024root___eval_static(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_static\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmix_columns___024root___eval_initial(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_initial\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmix_columns___024root___eval_final(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_final\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__stl(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmix_columns___024root___eval_phase__stl(Vmix_columns___024root* vlSelf);

VL_ATTR_COLD void Vmix_columns___024root___eval_settle(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_settle\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmix_columns___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../hw/aes_core/mix_columns.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmix_columns___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__stl(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___dump_triggers__stl\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vmix_columns___024root___ico_sequent__TOP__0(Vmix_columns___024root* vlSelf);
VL_ATTR_COLD void Vmix_columns___024root____Vm_traceActivitySetAll(Vmix_columns___024root* vlSelf);

VL_ATTR_COLD void Vmix_columns___024root___eval_stl(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_stl\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmix_columns___024root___ico_sequent__TOP__0(vlSelf);
        Vmix_columns___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vmix_columns___024root___eval_triggers__stl(Vmix_columns___024root* vlSelf);

VL_ATTR_COLD bool Vmix_columns___024root___eval_phase__stl(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___eval_phase__stl\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmix_columns___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmix_columns___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__ico(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___dump_triggers__ico\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__act(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___dump_triggers__act\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmix_columns___024root___dump_triggers__nba(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___dump_triggers__nba\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmix_columns___024root____Vm_traceActivitySetAll(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root____Vm_traceActivitySetAll\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vmix_columns___024root___ctor_var_reset(Vmix_columns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root___ctor_var_reset\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(128, vlSelf->in);
    vlSelf->mode = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->out);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mix_columns__DOT__in_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mix_columns__DOT__out_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mix_columns__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mix_columns__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__0__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__1__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__2__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__2__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__3__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__3__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__4__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__4__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__5__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__5__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__6__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__6__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__7__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__7__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__8__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__8__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__9__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime3__9__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__10__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__10__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__11__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__11__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__12__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__12__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__12__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__12__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__12__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__13__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__13__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__14__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__14__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__15__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__15__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__16__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__16__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__16__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__16__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__16__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__17__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__17__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__18__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__18__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__19__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__19__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__20__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__20__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__20__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__20__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__20__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__21__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__21__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__22__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__22__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__23__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__23__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__24__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__24__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__24__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__24__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__24__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__25__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__25__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__26__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__26__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__27__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__27__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__28__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__28__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__28__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__28__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__28__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__29__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__29__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__30__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__30__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__31__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__31__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__32__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__32__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__32__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__32__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__32__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__33__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__33__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__34__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__34__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__35__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__35__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__36__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__36__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__36__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__36__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__36__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__37__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__37__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__38__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__38__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__39__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__39__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__40__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__40__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__40__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__40__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__40__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__41__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__41__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__42__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__42__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__43__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__43__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__44__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__44__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__44__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__44__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__44__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__45__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__45__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__46__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__46__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__47__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__47__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__48__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__48__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__48__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__48__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__48__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__49__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__49__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__50__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__50__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__51__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__51__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__52__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__52__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__52__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__52__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__52__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__53__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__53__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__54__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__54__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__55__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__55__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__56__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__56__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__56__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__56__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__56__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__57__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__57__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__58__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__58__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__59__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__59__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__60__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__60__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__60__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__60__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime11__60__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__61__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__61__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__62__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__62__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__63__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__63__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__64__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__64__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__64__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__64__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime13__64__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__65__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__65__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__66__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__66__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__67__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__67__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__68__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__68__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__68__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__68__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime9__68__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__69__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__69__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__70__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__70__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__71__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__71__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__72__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__72__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__72__a2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__72__a4 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime14__72__a8 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__73__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__73__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__74__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__74__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__75__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_mix_columns__DOT__xtime2__75__a = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
