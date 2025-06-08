// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsubstitute_bytes.h for the primary calling header

#include "Vsubstitute_bytes__pch.h"
#include "Vsubstitute_bytes__Syms.h"
#include "Vsubstitute_bytes___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubstitute_bytes___024root___dump_triggers__stl(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsubstitute_bytes___024root___eval_triggers__stl(Vsubstitute_bytes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root___eval_triggers__stl\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsubstitute_bytes___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
