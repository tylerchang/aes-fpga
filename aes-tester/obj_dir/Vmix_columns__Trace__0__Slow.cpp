// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmix_columns__Syms.h"


VL_ATTR_COLD void Vmix_columns___024root__trace_init_sub__TOP__0(Vmix_columns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_init_sub__TOP__0\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+35,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+39,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+40,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("mix_columns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+35,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+39,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+40,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmix_columns___024root__trace_init_top(Vmix_columns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_init_top\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmix_columns___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmix_columns___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmix_columns___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmix_columns___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmix_columns___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmix_columns___024root__trace_register(Vmix_columns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_register\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmix_columns___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmix_columns___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmix_columns___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmix_columns___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmix_columns___024root__trace_const_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmix_columns___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_const_0\n"); );
    // Init
    Vmix_columns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmix_columns___024root*>(voidSelf);
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmix_columns___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmix_columns___024root__trace_const_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_const_0_sub_0\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+44,(0x10U),32);
}

VL_ATTR_COLD void Vmix_columns___024root__trace_full_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmix_columns___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_full_0\n"); );
    // Init
    Vmix_columns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmix_columns___024root*>(voidSelf);
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmix_columns___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmix_columns___024root__trace_full_0_sub_0(Vmix_columns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmix_columns___024root__trace_full_0_sub_0\n"); );
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.mix_columns__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.mix_columns__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.mix_columns__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.mix_columns__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.mix_columns__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.mix_columns__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.mix_columns__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.mix_columns__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.mix_columns__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.mix_columns__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.mix_columns__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.mix_columns__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.mix_columns__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.mix_columns__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.mix_columns__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.mix_columns__DOT__in_bytes[15]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.mix_columns__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.mix_columns__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.mix_columns__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.mix_columns__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.mix_columns__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.mix_columns__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.mix_columns__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.mix_columns__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.mix_columns__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.mix_columns__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.mix_columns__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.mix_columns__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.mix_columns__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.mix_columns__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.mix_columns__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.mix_columns__DOT__out_bytes[15]),8);
    bufp->fullIData(oldp+33,(vlSelfRef.mix_columns__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelfRef.mix_columns__DOT__unnamedblk3__DOT__i),32);
    bufp->fullWData(oldp+35,(vlSelfRef.in),128);
    bufp->fullBit(oldp+39,(vlSelfRef.mode));
    bufp->fullWData(oldp+40,(vlSelfRef.out),128);
}
