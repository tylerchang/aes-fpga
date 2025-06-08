// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd_round_key__Syms.h"


VL_ATTR_COLD void Vadd_round_key___024root__trace_init_sub__TOP__0(Vadd_round_key___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_init_sub__TOP__0\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+1,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+5,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+9,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("add_round_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+5,0,"round_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+9,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_init_top(Vadd_round_key___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_init_top\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadd_round_key___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vadd_round_key___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd_round_key___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd_round_key___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadd_round_key___024root__trace_register(Vadd_round_key___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_register\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vadd_round_key___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vadd_round_key___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vadd_round_key___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vadd_round_key___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_const_0\n"); );
    // Init
    Vadd_round_key___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_round_key___024root*>(voidSelf);
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_full_0_sub_0(Vadd_round_key___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadd_round_key___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_full_0\n"); );
    // Init
    Vadd_round_key___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_round_key___024root*>(voidSelf);
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadd_round_key___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_full_0_sub_0(Vadd_round_key___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_round_key___024root__trace_full_0_sub_0\n"); );
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelfRef.in_text),128);
    bufp->fullWData(oldp+5,(vlSelfRef.round_key),128);
    bufp->fullWData(oldp+9,(vlSelfRef.out_text),128);
}
