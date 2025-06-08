// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_rows__Syms.h"


VL_ATTR_COLD void Vshift_rows___024root__trace_init_sub__TOP__0(Vshift_rows___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_init_sub__TOP__0\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+1,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+5,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+6,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("shift_rows", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1,0,"in_text",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+5,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+6,0,"out_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+10,0,"row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"shifted_row0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"shifted_row1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"shifted_row2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"shifted_row3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vshift_rows___024root__trace_init_top(Vshift_rows___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_init_top\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vshift_rows___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshift_rows___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vshift_rows___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_rows___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_rows___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshift_rows___024root__trace_register(Vshift_rows___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_register\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vshift_rows___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vshift_rows___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vshift_rows___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vshift_rows___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshift_rows___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_const_0\n"); );
    // Init
    Vshift_rows___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_rows___024root*>(voidSelf);
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vshift_rows___024root__trace_full_0_sub_0(Vshift_rows___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshift_rows___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_full_0\n"); );
    // Init
    Vshift_rows___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_rows___024root*>(voidSelf);
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshift_rows___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshift_rows___024root__trace_full_0_sub_0(Vshift_rows___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_rows___024root__trace_full_0_sub_0\n"); );
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelfRef.in_text),128);
    bufp->fullBit(oldp+5,(vlSelfRef.mode));
    bufp->fullWData(oldp+6,(vlSelfRef.out_text),128);
    bufp->fullIData(oldp+10,((((0xff000000U & vlSelfRef.in_text[3U]) 
                               | (0xff0000U & (vlSelfRef.in_text[2U] 
                                               >> 8U))) 
                              | ((0xff00U & (vlSelfRef.in_text[1U] 
                                             >> 0x10U)) 
                                 | (vlSelfRef.in_text[0U] 
                                    >> 0x18U)))),32);
    bufp->fullIData(oldp+11,(((0xff000000U & (vlSelfRef.in_text[3U] 
                                              << 8U)) 
                              | vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_16)),32);
    bufp->fullIData(oldp+12,(((0xff000000U & (vlSelfRef.in_text[3U] 
                                              << 0x10U)) 
                              | ((0xff0000U & (vlSelfRef.in_text[2U] 
                                               << 8U)) 
                                 | (IData)(vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_17)))),32);
    bufp->fullIData(oldp+13,(((vlSelfRef.in_text[3U] 
                               << 0x18U) | vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_18)),32);
    bufp->fullIData(oldp+14,(vlSelfRef.shift_rows__DOT__shifted_row1),32);
    bufp->fullIData(oldp+15,((((IData)(vlSelfRef.shift_rows__DOT____VdfgRegularize_hb80202b3_0_17) 
                               << 0x10U) | ((0xff00U 
                                             & vlSelfRef.in_text[3U]) 
                                            | (0xffU 
                                               & (vlSelfRef.in_text[2U] 
                                                  >> 8U))))),32);
    bufp->fullIData(oldp+16,(vlSelfRef.shift_rows__DOT__shifted_row3),32);
}
