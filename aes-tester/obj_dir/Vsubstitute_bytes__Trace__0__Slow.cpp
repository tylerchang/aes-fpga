// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsubstitute_bytes__Syms.h"


VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_init_sub__TOP__0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_init_sub__TOP__0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+81,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+85,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+87,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("substitute_bytes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+81,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+85,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+87,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("in_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+65,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+66,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+67,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+68,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+69,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+70,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+71,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+72,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+73,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+74,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+75,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+76,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+77,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+78,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+79,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("simple_rom_j", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+80,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_init_top(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_init_top\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsubstitute_bytes___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsubstitute_bytes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsubstitute_bytes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_register(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_register\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsubstitute_bytes___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsubstitute_bytes___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsubstitute_bytes___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsubstitute_bytes___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_const_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_const_0\n"); );
    // Init
    Vsubstitute_bytes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubstitute_bytes___024root*>(voidSelf);
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsubstitute_bytes___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_const_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_const_0_sub_0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+91,(0x10U),32);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_full_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_full_0\n"); );
    // Init
    Vsubstitute_bytes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubstitute_bytes___024root*>(voidSelf);
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsubstitute_bytes___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_full_0_sub_0(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubstitute_bytes___024root__trace_full_0_sub_0\n"); );
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.substitute_bytes__DOT__in_bytes[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.substitute_bytes__DOT__in_bytes[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.substitute_bytes__DOT__in_bytes[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.substitute_bytes__DOT__in_bytes[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.substitute_bytes__DOT__in_bytes[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.substitute_bytes__DOT__in_bytes[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.substitute_bytes__DOT__in_bytes[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.substitute_bytes__DOT__in_bytes[7]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.substitute_bytes__DOT__in_bytes[8]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.substitute_bytes__DOT__in_bytes[9]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.substitute_bytes__DOT__in_bytes[10]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.substitute_bytes__DOT__in_bytes[11]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.substitute_bytes__DOT__in_bytes[12]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.substitute_bytes__DOT__in_bytes[13]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.substitute_bytes__DOT__in_bytes[14]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.substitute_bytes__DOT__in_bytes[15]),8);
    bufp->fullSData(oldp+17,(vlSelfRef.substitute_bytes__DOT__addr[0]),9);
    bufp->fullSData(oldp+18,(vlSelfRef.substitute_bytes__DOT__addr[1]),9);
    bufp->fullSData(oldp+19,(vlSelfRef.substitute_bytes__DOT__addr[2]),9);
    bufp->fullSData(oldp+20,(vlSelfRef.substitute_bytes__DOT__addr[3]),9);
    bufp->fullSData(oldp+21,(vlSelfRef.substitute_bytes__DOT__addr[4]),9);
    bufp->fullSData(oldp+22,(vlSelfRef.substitute_bytes__DOT__addr[5]),9);
    bufp->fullSData(oldp+23,(vlSelfRef.substitute_bytes__DOT__addr[6]),9);
    bufp->fullSData(oldp+24,(vlSelfRef.substitute_bytes__DOT__addr[7]),9);
    bufp->fullSData(oldp+25,(vlSelfRef.substitute_bytes__DOT__addr[8]),9);
    bufp->fullSData(oldp+26,(vlSelfRef.substitute_bytes__DOT__addr[9]),9);
    bufp->fullSData(oldp+27,(vlSelfRef.substitute_bytes__DOT__addr[10]),9);
    bufp->fullSData(oldp+28,(vlSelfRef.substitute_bytes__DOT__addr[11]),9);
    bufp->fullSData(oldp+29,(vlSelfRef.substitute_bytes__DOT__addr[12]),9);
    bufp->fullSData(oldp+30,(vlSelfRef.substitute_bytes__DOT__addr[13]),9);
    bufp->fullSData(oldp+31,(vlSelfRef.substitute_bytes__DOT__addr[14]),9);
    bufp->fullSData(oldp+32,(vlSelfRef.substitute_bytes__DOT__addr[15]),9);
    bufp->fullSData(oldp+33,(vlSelfRef.substitute_bytes__DOT__addr
                             [0U]),9);
    bufp->fullSData(oldp+34,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xaU]),9);
    bufp->fullSData(oldp+35,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xbU]),9);
    bufp->fullSData(oldp+36,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xcU]),9);
    bufp->fullSData(oldp+37,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xdU]),9);
    bufp->fullSData(oldp+38,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xeU]),9);
    bufp->fullSData(oldp+39,(vlSelfRef.substitute_bytes__DOT__addr
                             [0xfU]),9);
    bufp->fullSData(oldp+40,(vlSelfRef.substitute_bytes__DOT__addr
                             [1U]),9);
    bufp->fullSData(oldp+41,(vlSelfRef.substitute_bytes__DOT__addr
                             [2U]),9);
    bufp->fullSData(oldp+42,(vlSelfRef.substitute_bytes__DOT__addr
                             [3U]),9);
    bufp->fullSData(oldp+43,(vlSelfRef.substitute_bytes__DOT__addr
                             [4U]),9);
    bufp->fullSData(oldp+44,(vlSelfRef.substitute_bytes__DOT__addr
                             [5U]),9);
    bufp->fullSData(oldp+45,(vlSelfRef.substitute_bytes__DOT__addr
                             [6U]),9);
    bufp->fullSData(oldp+46,(vlSelfRef.substitute_bytes__DOT__addr
                             [7U]),9);
    bufp->fullSData(oldp+47,(vlSelfRef.substitute_bytes__DOT__addr
                             [8U]),9);
    bufp->fullSData(oldp+48,(vlSelfRef.substitute_bytes__DOT__addr
                             [9U]),9);
    bufp->fullCData(oldp+49,(vlSelfRef.substitute_bytes__DOT__out_bytes[0]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.substitute_bytes__DOT__out_bytes[1]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.substitute_bytes__DOT__out_bytes[2]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.substitute_bytes__DOT__out_bytes[3]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.substitute_bytes__DOT__out_bytes[4]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.substitute_bytes__DOT__out_bytes[5]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.substitute_bytes__DOT__out_bytes[6]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.substitute_bytes__DOT__out_bytes[7]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.substitute_bytes__DOT__out_bytes[8]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.substitute_bytes__DOT__out_bytes[9]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.substitute_bytes__DOT__out_bytes[10]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.substitute_bytes__DOT__out_bytes[11]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.substitute_bytes__DOT__out_bytes[12]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.substitute_bytes__DOT__out_bytes[13]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.substitute_bytes__DOT__out_bytes[14]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.substitute_bytes__DOT__out_bytes[15]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__0__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+66,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__10__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+67,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__11__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+68,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__12__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+69,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__13__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+70,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__14__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+71,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__15__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+72,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__1__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+73,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__2__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+74,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__3__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+75,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__4__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+76,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__5__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+77,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__6__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+78,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__7__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+79,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__8__KET____DOT__simple_rom_j__data),8);
    bufp->fullCData(oldp+80,(vlSelfRef.substitute_bytes__DOT____Vcellout__genblk1__BRA__9__KET____DOT__simple_rom_j__data),8);
    bufp->fullWData(oldp+81,(vlSelfRef.in),128);
    bufp->fullBit(oldp+85,(vlSelfRef.mode));
    bufp->fullBit(oldp+86,(vlSelfRef.clk));
    bufp->fullWData(oldp+87,(vlSelfRef.out),128);
}
