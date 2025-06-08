// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_round_key.h for the primary calling header

#include "Vadd_round_key__pch.h"
#include "Vadd_round_key__Syms.h"
#include "Vadd_round_key___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_round_key___024root___dump_triggers__stl(Vadd_round_key___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadd_round_key___024root___eval_triggers__stl(Vadd_round_key___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root___eval_triggers__stl\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadd_round_key___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
