// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaes_scheduler__Syms.h"


void Vaes_scheduler___024root__trace_chg_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaes_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_chg_0\n"); );
    // Init
    Vaes_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_scheduler___024root*>(voidSelf);
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaes_scheduler___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaes_scheduler___024root__trace_chg_0_sub_0(Vaes_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_chg_0_sub_0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.aes_scheduler__DOT__we_r));
        bufp->chgBit(oldp+1,(vlSelfRef.aes_scheduler__DOT__we_w));
        bufp->chgCData(oldp+2,(vlSelfRef.aes_scheduler__DOT__next_state),2);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_2[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 0x10U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                            | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_2[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 8U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                            | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                        >> 8U))));
        __Vtemp_2[2U] = (IData)((((QData)((IData)((
                                                   ((0xff000000U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                                    | (0xff0000U 
                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                          >> 8U))) 
                                                   | ((0xff00U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                                      | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 0x18U))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0xff000000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                | (0xff0000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                               | ((0xff00U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                  | (0xffU 
                                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                        >> 0x10U))))))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+5,(__Vtemp_2),128);
        bufp->chgWData(oldp+9,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+40,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+65,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+67,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+68,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+69,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+70,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+71,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+72,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+73,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+76,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+79,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+80,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+81,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0U]),9);
        bufp->chgSData(oldp+82,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xaU]),9);
        bufp->chgSData(oldp+83,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xbU]),9);
        bufp->chgSData(oldp+84,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xcU]),9);
        bufp->chgSData(oldp+85,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xdU]),9);
        bufp->chgSData(oldp+86,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xeU]),9);
        bufp->chgSData(oldp+87,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [0xfU]),9);
        bufp->chgSData(oldp+88,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [1U]),9);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [2U]),9);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [3U]),9);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [4U]),9);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [5U]),9);
        bufp->chgSData(oldp+93,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [6U]),9);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [7U]),9);
        bufp->chgSData(oldp+95,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [8U]),9);
        bufp->chgSData(oldp+96,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                [9U]),9);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_4[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 0x10U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                            | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_4[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 8U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                            | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                        >> 8U))));
        __Vtemp_4[2U] = (IData)((((QData)((IData)((
                                                   ((0xff000000U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                                    | (0xff0000U 
                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                          >> 8U))) 
                                                   | ((0xff00U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                                      | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 0x18U))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0xff000000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                | (0xff0000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                               | ((0xff00U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                  | (0xffU 
                                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                        >> 0x10U))))))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+99,(__Vtemp_4),128);
        bufp->chgWData(oldp+103,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+155,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+159,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+160,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+161,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+162,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+163,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+164,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+165,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+166,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+167,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+168,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+169,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+170,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+171,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+172,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+173,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+174,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+175,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+176,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+177,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+178,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+179,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+180,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+181,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+182,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+183,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+184,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+185,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+186,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+187,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+188,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+189,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+190,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+192,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_6[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 0x10U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                            | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_6[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 8U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                            | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                        >> 8U))));
        __Vtemp_6[2U] = (IData)((((QData)((IData)((
                                                   ((0xff000000U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                                    | (0xff0000U 
                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                          >> 8U))) 
                                                   | ((0xff00U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                                      | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 0x18U))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0xff000000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                | (0xff0000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                               | ((0xff00U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                  | (0xffU 
                                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                        >> 0x10U))))))));
        __Vtemp_6[3U] = (IData)(((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+193,(__Vtemp_6),128);
        bufp->chgWData(oldp+197,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+201,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+202,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+203,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+205,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+206,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+207,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+209,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+214,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+217,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+221,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+222,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+224,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+225,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+226,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+227,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+228,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+229,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+230,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+231,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+232,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+237,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+238,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+239,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+240,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+241,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+242,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+244,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+245,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+246,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+247,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+252,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+254,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+255,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+256,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+257,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+258,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+259,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+260,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+261,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+262,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+263,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+264,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+265,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+266,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+267,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+268,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+269,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+270,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+271,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+272,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+273,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+274,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+275,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+276,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+277,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+278,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+279,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+280,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+281,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+282,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+283,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+284,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_8[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 0x10U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                            | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_8[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                          | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                          << 8U))) 
                         | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                            | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                        >> 8U))));
        __Vtemp_8[2U] = (IData)((((QData)((IData)((
                                                   ((0xff000000U 
                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                                    | (0xff0000U 
                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                          >> 8U))) 
                                                   | ((0xff00U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                                      | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                         >> 0x18U))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0xff000000U 
                                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                | (0xff0000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                               | ((0xff00U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                  | (0xffU 
                                                                     & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                        >> 0x10U))))))));
        __Vtemp_8[3U] = (IData)(((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+287,(__Vtemp_8),128);
        bufp->chgWData(oldp+291,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+301,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+302,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+303,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+305,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+306,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+307,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+310,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+312,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+313,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+315,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+316,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+318,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+319,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+320,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+321,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+322,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+324,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+325,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+326,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+345,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+347,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+348,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+349,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+350,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+351,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+352,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+353,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+354,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+355,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+356,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+357,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+358,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+359,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+360,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+361,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+362,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+363,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+364,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+365,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+366,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+367,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+368,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+369,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+370,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+371,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+372,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+373,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+374,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+375,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+376,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+377,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+378,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+379,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+380,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_10[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_10[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_10[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_10[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+381,(__Vtemp_10),128);
        bufp->chgWData(oldp+385,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+389,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+390,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+400,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+401,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+402,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+403,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+404,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+406,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+409,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+410,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+411,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+412,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+413,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+414,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+416,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+417,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+419,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+421,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+423,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+424,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+425,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+426,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+427,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+428,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+429,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+430,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+432,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+433,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+437,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+439,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+441,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+442,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+443,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+444,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+445,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+446,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+447,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+448,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+449,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+450,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+451,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+452,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+453,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+454,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+455,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+456,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+457,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+458,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+459,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+460,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+461,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+462,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+463,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+464,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+465,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+466,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+467,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+468,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+469,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+470,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+471,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+472,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+473,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_12[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_12[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_12[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_12[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+475,(__Vtemp_12),128);
        bufp->chgWData(oldp+479,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+486,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+488,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+489,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+490,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+492,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+495,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+496,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+497,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+498,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+500,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+504,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+512,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+514,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+532,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+533,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+535,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+536,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+537,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+538,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+539,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+540,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+541,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+542,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+543,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+544,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+545,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+546,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+547,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+548,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+549,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+550,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+551,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+552,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+553,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+554,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+555,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+556,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+557,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+558,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+559,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+560,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+561,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+562,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+563,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+564,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+565,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+566,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+567,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+568,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_14[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_14[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_14[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_14[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+569,(__Vtemp_14),128);
        bufp->chgWData(oldp+573,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+578,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+579,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+580,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+581,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+582,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+583,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+584,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+590,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+591,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+596,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+597,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+598,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+599,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+600,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+601,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+608,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+609,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+610,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+611,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+612,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+613,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+616,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+624,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+626,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+629,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+630,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+631,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+632,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+633,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+634,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+635,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+636,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+637,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+638,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+639,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+640,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+641,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+642,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+643,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+644,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+645,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+646,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+647,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+648,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+649,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+650,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+651,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+652,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+653,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+654,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+655,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+656,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+657,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+658,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+659,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+660,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_16[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_16[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_16[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_16[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+663,(__Vtemp_16),128);
        bufp->chgWData(oldp+667,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+672,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+673,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+674,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+676,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+677,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+681,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+682,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+686,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+690,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+694,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+695,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+697,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+698,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+702,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+723,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+724,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+725,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+726,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+727,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+728,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+729,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+730,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+731,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+732,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+733,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+734,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+735,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+736,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+737,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+738,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+739,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+740,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+741,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+742,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+743,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+744,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+745,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+746,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+747,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+748,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+749,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+750,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+751,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+752,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+753,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+754,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_18[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_18[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_18[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_18[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+757,(__Vtemp_18),128);
        bufp->chgWData(oldp+761,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+766,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+767,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+768,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+770,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+785,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+787,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+790,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+796,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+798,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+806,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+807,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+808,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+817,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+818,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+819,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+820,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+821,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+822,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+823,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+824,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+825,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+826,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+827,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+828,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+829,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+830,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+831,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+832,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+833,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+834,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+835,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+836,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+837,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+838,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+839,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+840,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+841,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+842,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+843,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+844,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+845,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+846,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+847,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+848,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__select),3);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__next_state),3);
        __Vtemp_20[0U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 0x10U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                             | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3)));
        __Vtemp_20[1U] = (((0xff000000U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                           | (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                           << 8U))) 
                          | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                             | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                         >> 8U))));
        __Vtemp_20[2U] = (IData)((((QData)((IData)(
                                                   (((0xff000000U 
                                                      & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                                     | (0xff0000U 
                                                        & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                           >> 8U))) 
                                                    | ((0xff00U 
                                                        & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                                       | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                          >> 0x18U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((0xff000000U 
                                                                  & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                 | (0xff0000U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                | ((0xff00U 
                                                                    & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                   | (0xffU 
                                                                      & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                         >> 0x10U))))))));
        __Vtemp_20[3U] = (IData)(((((QData)((IData)(
                                                    (((0xff000000U 
                                                       & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                                      | (0xff0000U 
                                                         & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1 
                                                            >> 8U))) 
                                                     | ((0xff00U 
                                                         & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                                        | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                           >> 0x18U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((0xff000000U 
                                                                   & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U]) 
                                                                  | (0xff0000U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                                                 | ((0xff00U 
                                                                     & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U]) 
                                                                    | (0xffU 
                                                                       & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3 
                                                                          >> 0x10U))))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+851,(__Vtemp_20),128);
        bufp->chgWData(oldp+855,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__out_mix),128);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__in_bytes[15]),8);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+882,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+884,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__out_bytes[15]),8);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row1),32);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_shift_rows__DOT__shifted_row3),32);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[0]),8);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[1]),8);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[2]),8);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[3]),8);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[4]),8);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[5]),8);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[6]),8);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[7]),8);
        bufp->chgCData(oldp+903,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[8]),8);
        bufp->chgCData(oldp+904,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[9]),8);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[10]),8);
        bufp->chgCData(oldp+906,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[11]),8);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[12]),8);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[13]),8);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[14]),8);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__in_bytes[15]),8);
        bufp->chgSData(oldp+911,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[0]),9);
        bufp->chgSData(oldp+912,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[1]),9);
        bufp->chgSData(oldp+913,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[2]),9);
        bufp->chgSData(oldp+914,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[3]),9);
        bufp->chgSData(oldp+915,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[4]),9);
        bufp->chgSData(oldp+916,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[5]),9);
        bufp->chgSData(oldp+917,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[6]),9);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[7]),9);
        bufp->chgSData(oldp+919,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[8]),9);
        bufp->chgSData(oldp+920,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[9]),9);
        bufp->chgSData(oldp+921,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[10]),9);
        bufp->chgSData(oldp+922,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[11]),9);
        bufp->chgSData(oldp+923,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[12]),9);
        bufp->chgSData(oldp+924,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[13]),9);
        bufp->chgSData(oldp+925,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[14]),9);
        bufp->chgSData(oldp+926,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr[15]),9);
        bufp->chgSData(oldp+927,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0U]),9);
        bufp->chgSData(oldp+928,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xaU]),9);
        bufp->chgSData(oldp+929,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xbU]),9);
        bufp->chgSData(oldp+930,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xcU]),9);
        bufp->chgSData(oldp+931,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xdU]),9);
        bufp->chgSData(oldp+932,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xeU]),9);
        bufp->chgSData(oldp+933,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [0xfU]),9);
        bufp->chgSData(oldp+934,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [1U]),9);
        bufp->chgSData(oldp+935,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [2U]),9);
        bufp->chgSData(oldp+936,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [3U]),9);
        bufp->chgSData(oldp+937,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [4U]),9);
        bufp->chgSData(oldp+938,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [5U]),9);
        bufp->chgSData(oldp+939,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [6U]),9);
        bufp->chgSData(oldp+940,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [7U]),9);
        bufp->chgSData(oldp+941,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [8U]),9);
        bufp->chgSData(oldp+942,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__addr
                                 [9U]),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+943,(vlSelfRef.aes_scheduler__DOT__in_text[0]),128);
        bufp->chgWData(oldp+947,(vlSelfRef.aes_scheduler__DOT__in_text[1]),128);
        bufp->chgWData(oldp+951,(vlSelfRef.aes_scheduler__DOT__in_text[2]),128);
        bufp->chgWData(oldp+955,(vlSelfRef.aes_scheduler__DOT__in_text[3]),128);
        bufp->chgWData(oldp+959,(vlSelfRef.aes_scheduler__DOT__in_text[4]),128);
        bufp->chgWData(oldp+963,(vlSelfRef.aes_scheduler__DOT__in_text[5]),128);
        bufp->chgWData(oldp+967,(vlSelfRef.aes_scheduler__DOT__in_text[6]),128);
        bufp->chgWData(oldp+971,(vlSelfRef.aes_scheduler__DOT__in_text[7]),128);
        bufp->chgWData(oldp+975,(vlSelfRef.aes_scheduler__DOT__in_text[8]),128);
        bufp->chgWData(oldp+979,(vlSelfRef.aes_scheduler__DOT__in_text[9]),128);
        bufp->chgWData(oldp+983,(vlSelfRef.aes_scheduler__DOT__out_text[0]),128);
        bufp->chgWData(oldp+987,(vlSelfRef.aes_scheduler__DOT__out_text[1]),128);
        bufp->chgWData(oldp+991,(vlSelfRef.aes_scheduler__DOT__out_text[2]),128);
        bufp->chgWData(oldp+995,(vlSelfRef.aes_scheduler__DOT__out_text[3]),128);
        bufp->chgWData(oldp+999,(vlSelfRef.aes_scheduler__DOT__out_text[4]),128);
        bufp->chgWData(oldp+1003,(vlSelfRef.aes_scheduler__DOT__out_text[5]),128);
        bufp->chgWData(oldp+1007,(vlSelfRef.aes_scheduler__DOT__out_text[6]),128);
        bufp->chgWData(oldp+1011,(vlSelfRef.aes_scheduler__DOT__out_text[7]),128);
        bufp->chgWData(oldp+1015,(vlSelfRef.aes_scheduler__DOT__out_text[8]),128);
        bufp->chgWData(oldp+1019,(vlSelfRef.aes_scheduler__DOT__out_text[9]),128);
        bufp->chgCData(oldp+1023,(vlSelfRef.aes_scheduler__DOT__r_cnt),8);
        bufp->chgBit(oldp+1024,(vlSelfRef.aes_scheduler__DOT__we_core));
        bufp->chgBit(oldp+1025,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[0]));
        bufp->chgBit(oldp+1026,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[1]));
        bufp->chgBit(oldp+1027,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[2]));
        bufp->chgBit(oldp+1028,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[3]));
        bufp->chgBit(oldp+1029,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[4]));
        bufp->chgBit(oldp+1030,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[5]));
        bufp->chgBit(oldp+1031,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[6]));
        bufp->chgBit(oldp+1032,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[7]));
        bufp->chgBit(oldp+1033,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[8]));
        bufp->chgBit(oldp+1034,(vlSelfRef.aes_scheduler__DOT__wr_en_sched[9]));
        bufp->chgIData(oldp+1035,(vlSelfRef.aes_scheduler__DOT__r_reg[0]),32);
        bufp->chgIData(oldp+1036,(vlSelfRef.aes_scheduler__DOT__r_reg[1]),32);
        bufp->chgIData(oldp+1037,(vlSelfRef.aes_scheduler__DOT__r_reg[2]),32);
        bufp->chgIData(oldp+1038,(vlSelfRef.aes_scheduler__DOT__r_reg[3]),32);
        bufp->chgCData(oldp+1039,(vlSelfRef.aes_scheduler__DOT__c_cnt),6);
        bufp->chgCData(oldp+1040,(vlSelfRef.aes_scheduler__DOT__round),4);
        bufp->chgBit(oldp+1041,((2U == (IData)(vlSelfRef.aes_scheduler__DOT__state))));
        bufp->chgCData(oldp+1042,(vlSelfRef.aes_scheduler__DOT__w_cnt),8);
        bufp->chgIData(oldp+1043,(vlSelfRef.aes_scheduler__DOT__core_out[0]),32);
        bufp->chgIData(oldp+1044,(vlSelfRef.aes_scheduler__DOT__core_out[1]),32);
        bufp->chgIData(oldp+1045,(vlSelfRef.aes_scheduler__DOT__core_out[2]),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.aes_scheduler__DOT__core_out[3]),32);
        bufp->chgCData(oldp+1047,(vlSelfRef.aes_scheduler__DOT__state),2);
        bufp->chgCData(oldp+1048,((3U & (IData)(vlSelfRef.aes_scheduler__DOT__r_cnt))),2);
        bufp->chgCData(oldp+1049,((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__r_cnt) 
                                           >> 2U))),4);
        bufp->chgCData(oldp+1050,((3U & (IData)(vlSelfRef.aes_scheduler__DOT__w_cnt))),2);
        bufp->chgCData(oldp+1051,((0xfU & ((IData)(vlSelfRef.aes_scheduler__DOT__w_cnt) 
                                           >> 2U))),4);
        bufp->chgIData(oldp+1052,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1053,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1054,(vlSelfRef.aes_scheduler__DOT__core_input_comb__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+1055,(vlSelfRef.aes_scheduler__DOT__core_input_seq__DOT__unnamedblk4__DOT__next_round),4);
        bufp->chgWData(oldp+1056,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [0U]),128);
        bufp->chgBit(oldp+1060,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [0U]));
        bufp->chgWData(oldp+1061,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1067,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1071,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1072,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1073,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1074,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1075,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1090,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1104,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1105,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1108,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [1U]),128);
        bufp->chgBit(oldp+1112,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [1U]));
        bufp->chgWData(oldp+1113,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1117,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1119,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1123,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1124,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1125,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1126,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1127,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1128,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1129,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1145,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1146,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1147,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1148,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1149,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1151,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1154,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1156,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1157,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1159,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1160,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [2U]),128);
        bufp->chgBit(oldp+1164,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [2U]));
        bufp->chgWData(oldp+1165,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1171,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1175,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1176,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1177,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1178,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1179,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1199,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1212,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [3U]),128);
        bufp->chgBit(oldp+1216,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [3U]));
        bufp->chgWData(oldp+1217,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1223,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1227,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1228,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1229,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1230,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1231,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1264,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [4U]),128);
        bufp->chgBit(oldp+1268,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [4U]));
        bufp->chgWData(oldp+1269,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1273,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1275,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1279,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1280,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1281,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1282,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1283,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1291,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1316,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [5U]),128);
        bufp->chgBit(oldp+1320,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [5U]));
        bufp->chgWData(oldp+1321,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1327,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1331,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1332,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1333,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1334,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1335,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1336,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1337,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1345,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1347,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1348,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1349,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1354,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1355,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1356,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1363,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1365,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1366,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1368,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [6U]),128);
        bufp->chgBit(oldp+1372,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [6U]));
        bufp->chgWData(oldp+1373,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1379,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1383,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1384,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1385,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1386,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1387,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1388,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1389,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1413,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1415,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1416,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1420,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [7U]),128);
        bufp->chgBit(oldp+1424,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [7U]));
        bufp->chgWData(oldp+1425,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1431,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1435,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1436,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1437,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1438,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1439,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1444,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1446,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1447,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1448,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1449,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1450,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1451,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1452,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1453,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1454,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1455,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1458,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1459,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1463,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1465,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1467,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1468,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1469,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1470,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1471,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1472,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [8U]),128);
        bufp->chgBit(oldp+1476,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [8U]));
        bufp->chgWData(oldp+1477,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1481,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1483,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1487,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1488,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1489,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1490,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1491,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1492,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1496,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1497,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1498,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1499,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1501,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1507,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1509,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1510,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1511,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1513,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1514,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1515,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1516,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1520,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1521,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1522,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1523,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
        bufp->chgWData(oldp+1524,(vlSelfRef.aes_scheduler__DOT__in_text
                                  [9U]),128);
        bufp->chgBit(oldp+1528,(vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                [9U]));
        bufp->chgWData(oldp+1529,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r),128);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state),3);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__counter),6);
        bufp->chgWData(oldp+1535,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__out_sub),128);
        bufp->chgIData(oldp+1539,((((0xff000000U & 
                                     vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                    | (0xff0000U & 
                                       (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                        >> 8U))) | 
                                   ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                                >> 0x10U)) 
                                    | (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                       >> 0x18U)))),32);
        bufp->chgIData(oldp+1540,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 8U)) | (0xff0000U 
                                                 & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U])) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                                  >> 8U)) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 0x10U))))),32);
        bufp->chgIData(oldp+1541,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                                  >> 8U))))),32);
        bufp->chgIData(oldp+1542,((((vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                                     << 0x18U) | (0xff0000U 
                                                  & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                     << 0x10U))) 
                                   | ((0xff00U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                                  << 8U)) 
                                      | (0xffU & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U])))),32);
        bufp->chgIData(oldp+1543,((((0xff000000U & 
                                     (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                                      << 0x10U)) | 
                                    (0xff0000U & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                                                  << 8U))) 
                                   | ((0xff00U & vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U]) 
                                      | (0xffU & (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                                                  >> 8U))))),32);
        bufp->chgCData(oldp+1544,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[0]),8);
        bufp->chgCData(oldp+1545,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[1]),8);
        bufp->chgCData(oldp+1546,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[2]),8);
        bufp->chgCData(oldp+1547,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[3]),8);
        bufp->chgCData(oldp+1548,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[4]),8);
        bufp->chgCData(oldp+1549,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[5]),8);
        bufp->chgCData(oldp+1550,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[6]),8);
        bufp->chgCData(oldp+1551,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[7]),8);
        bufp->chgCData(oldp+1552,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[8]),8);
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[9]),8);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[10]),8);
        bufp->chgCData(oldp+1555,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[11]),8);
        bufp->chgCData(oldp+1556,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[12]),8);
        bufp->chgCData(oldp+1557,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[13]),8);
        bufp->chgCData(oldp+1558,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[14]),8);
        bufp->chgCData(oldp+1559,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__m_substitute_bytes__DOT__out_bytes[15]),8);
        bufp->chgCData(oldp+1560,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1566,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1567,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1572,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data),8);
    }
    bufp->chgBit(oldp+1576,(vlSelfRef.clk));
    bufp->chgBit(oldp+1577,(vlSelfRef.reset));
    bufp->chgBit(oldp+1578,(vlSelfRef.start));
    bufp->chgBit(oldp+1579,(vlSelfRef.mode));
    bufp->chgWData(oldp+1580,(vlSelfRef.round_key),128);
    bufp->chgCData(oldp+1584,(vlSelfRef.round_key_addr),4);
    bufp->chgBit(oldp+1585,(vlSelfRef.sink_valid));
    bufp->chgIData(oldp+1586,(vlSelfRef.sink_data),32);
    bufp->chgBit(oldp+1587,(vlSelfRef.sink_ready));
    bufp->chgBit(oldp+1588,(vlSelfRef.source_valid));
    bufp->chgIData(oldp+1589,(vlSelfRef.source_data),32);
    bufp->chgBit(oldp+1590,(vlSelfRef.source_ready));
    bufp->chgBit(oldp+1591,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [0U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [0U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [0U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [0U]))))));
    __Vtemp_21[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_21[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_21[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_21[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1592,(__Vtemp_21),128);
    bufp->chgBit(oldp+1596,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [1U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [1U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [1U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [1U]))))));
    __Vtemp_22[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_22[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_22[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_22[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1597,(__Vtemp_22),128);
    bufp->chgBit(oldp+1601,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [2U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [2U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [2U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [2U]))))));
    __Vtemp_23[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_23[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_23[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_23[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1602,(__Vtemp_23),128);
    bufp->chgBit(oldp+1606,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [3U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [3U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [3U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [3U]))))));
    __Vtemp_24[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_24[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_24[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_24[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1607,(__Vtemp_24),128);
    bufp->chgBit(oldp+1611,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [4U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [4U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [4U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [4U]))))));
    __Vtemp_25[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_25[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_25[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_25[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1612,(__Vtemp_25),128);
    bufp->chgBit(oldp+1616,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [5U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [5U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [5U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [5U]))))));
    __Vtemp_26[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_26[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_26[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_26[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1617,(__Vtemp_26),128);
    bufp->chgBit(oldp+1621,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [6U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [6U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [6U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [6U]))))));
    __Vtemp_27[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_27[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_27[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_27[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1622,(__Vtemp_27),128);
    bufp->chgBit(oldp+1626,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [7U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [7U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [7U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [7U]))))));
    __Vtemp_28[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_28[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_28[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_28[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1627,(__Vtemp_28),128);
    bufp->chgBit(oldp+1631,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [8U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [8U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [8U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [8U]))))));
    __Vtemp_29[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_29[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_29[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_29[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1632,(__Vtemp_29),128);
    bufp->chgBit(oldp+1636,(((IData)(vlSelfRef.mode)
                              ? ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [9U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [9U])))
                              : ((4U & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state))
                                  ? ((1U & (~ ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                               >> 1U))) 
                                     || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                     [9U]) : ((1U & 
                                               ((IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state) 
                                                >> 1U)) 
                                              || ((1U 
                                                   & (IData)(vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__state)) 
                                                  || vlSelfRef.aes_scheduler__DOT__wr_en_sched
                                                  [9U]))))));
    __Vtemp_30[0U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[0U] 
                      ^ vlSelfRef.round_key[0U]);
    __Vtemp_30[1U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[1U] 
                      ^ vlSelfRef.round_key[1U]);
    __Vtemp_30[2U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[2U] 
                      ^ vlSelfRef.round_key[2U]);
    __Vtemp_30[3U] = (vlSymsp->TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__PVT__r[3U] 
                      ^ vlSelfRef.round_key[3U]);
    bufp->chgWData(oldp+1637,(__Vtemp_30),128);
}

void Vaes_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_scheduler___024root__trace_cleanup\n"); );
    // Init
    Vaes_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_scheduler___024root*>(voidSelf);
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
