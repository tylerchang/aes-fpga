// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_scheduler.h for the primary calling header

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler__Syms.h"
#include "Vaes_scheduler_aes_core.h"

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))) {
        if ((0x32U != (IData)(vlSelfRef.__PVT__counter))) {
            vlSelfRef.__PVT__counter = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__counter)));
        }
    } else {
        vlSelfRef.__PVT__counter = 0U;
    }
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [1U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [2U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [3U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [4U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [5U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [6U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [7U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [8U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [9U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xaU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xbU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xcU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xdU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xeU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xfU]];
    if (((IData)(vlSymsp->TOP.mode) ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__state) 
                                                   >> 1U))) 
                                           || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                           [1U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [1U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [1U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [1U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [1U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [1U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [1U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [1U][3U];
        } else if ((1U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_add[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_add[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_add[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_add[3U];
        } else if ((2U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_sub[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_sub[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_sub[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_sub[3U];
        } else if ((3U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_shift[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_shift[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_shift[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_shift[3U];
        } else if ((4U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_mix[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_mix[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_mix[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_mix[3U];
        } else {
            vlSelfRef.__PVT__r[0U] = 0U;
            vlSelfRef.__PVT__r[1U] = 0U;
            vlSelfRef.__PVT__r[2U] = 0U;
            vlSelfRef.__PVT__r[3U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[1U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[2U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[3U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[4U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[5U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[6U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[7U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[8U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[9U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xaU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xbU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xcU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xdU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xeU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xfU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__state = vlSelfRef.__PVT__next_state;
    vlSelfRef.__PVT__out_add[0U] = (vlSelfRef.__PVT__r[0U] 
                                    ^ vlSymsp->TOP.round_key[0U]);
    vlSelfRef.__PVT__out_add[1U] = (vlSelfRef.__PVT__r[1U] 
                                    ^ vlSymsp->TOP.round_key[1U]);
    vlSelfRef.__PVT__out_add[2U] = (vlSelfRef.__PVT__r[2U] 
                                    ^ vlSymsp->TOP.round_key[2U]);
    vlSelfRef.__PVT__out_add[3U] = (vlSelfRef.__PVT__r[3U] 
                                    ^ vlSymsp->TOP.round_key[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[1U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[2U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[3U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[4U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [4U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[5U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [5U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[6U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [6U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[7U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [7U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[8U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [8U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[9U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [9U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xaU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xaU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xbU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xbU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xcU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xcU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xdU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xdU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xeU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xeU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xfU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xfU]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[0U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[3U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[2U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[1U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[2U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[1U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[3U])));
    } else {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[2U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[1U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[0U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[3U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[0U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[3U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[2U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[1U])));
    }
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__77__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__78__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__79__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__76__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__81__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__82__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__83__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__80__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__85__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__86__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__87__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__84__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__89__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__90__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__91__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__88__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__93__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__94__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__95__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__92__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__97__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__98__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__99__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__96__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__101__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__102__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__103__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__100__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__105__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__106__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__107__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__104__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__109__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__110__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__111__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__108__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__113__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__114__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__115__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__112__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__117__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__118__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__119__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__116__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__121__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__122__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__123__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__120__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__125__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__126__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__127__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__124__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__129__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__130__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__131__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__128__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__133__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__134__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__135__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__132__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__137__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__138__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__139__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__136__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__140__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__142__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__141__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__143__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__145__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__144__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__146__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__148__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__147__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__150__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__149__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__151__Vfuncout)));
    }
    vlSelfRef.__PVT__select = ((IData)(vlSymsp->TOP.mode)
                                ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U)))
                                : ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffU & vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffffU & vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xffffffU & vlSelfRef.__PVT__out_mix[1U]) 
                                    | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_mix[1U]) 
                                    | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffU & vlSelfRef.__PVT__out_mix[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[0U]) 
                                    | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_sub[3U] = ((0xffU & vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffffU & vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_sub[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xffffffU & vlSelfRef.__PVT__out_sub[1U]) 
                                    | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_sub[1U]) 
                                    | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffU & vlSelfRef.__PVT__out_sub[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[0U]) 
                                    | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_shift[0U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[0U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 0x10U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[2U]) 
                                         | (0xffU & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3)));
    vlSelfRef.__PVT__out_shift[1U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[1U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[3U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.__PVT__out_shift[2U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[2U]) 
                                       | (0xff0000U 
                                          & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[0U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.__PVT__out_shift[3U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[3U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             >> 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[1U]) 
                                         | (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                            >> 0x18U)));
}

VL_INLINE_OPT void Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___ico_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_add[0U] = (vlSelfRef.__PVT__r[0U] 
                                    ^ vlSymsp->TOP.round_key[0U]);
    vlSelfRef.__PVT__out_add[1U] = (vlSelfRef.__PVT__r[1U] 
                                    ^ vlSymsp->TOP.round_key[1U]);
    vlSelfRef.__PVT__out_add[2U] = (vlSelfRef.__PVT__r[2U] 
                                    ^ vlSymsp->TOP.round_key[2U]);
    vlSelfRef.__PVT__out_add[3U] = (vlSelfRef.__PVT__r[3U] 
                                    ^ vlSymsp->TOP.round_key[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[1U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[2U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[3U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[4U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [4U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[5U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [5U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[6U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [6U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[7U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [7U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[8U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [8U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[9U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [9U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xaU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xaU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xbU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xbU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xcU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xcU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xdU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xdU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xeU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xeU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xfU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xfU]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    if (vlSymsp->TOP.mode) {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 0U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((2U 
                                                 == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                 ? 1U
                                                 : 0U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 4U;
                vlSelfRef.__PVT__next_state = (7U & 4U);
            } else {
                vlSelfRef.__PVT__select = 3U;
                vlSelfRef.__PVT__next_state = (7U & 2U);
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 2U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__state))
                                                  ? 1U
                                                  : 3U));
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 1U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  == (IData)(vlSelfRef.__PVT__counter))
                                                  ? 4U
                                                  : 
                                                 ((0x32U 
                                                   == (IData)(vlSelfRef.__PVT__counter))
                                                   ? 0U
                                                   : 5U)));
        } else {
            vlSelfRef.__PVT__select = 0U;
            vlSelfRef.__PVT__next_state = (7U & ((2U 
                                                  == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                  ? 1U
                                                  : 0U));
        }
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[0U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[3U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[2U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[1U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[2U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[1U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[3U])));
    } else {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 0U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((2U 
                                                 == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                 ? 1U
                                                 : 0U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__select = 4U;
                vlSelfRef.__PVT__next_state = (7U & 1U);
            } else {
                vlSelfRef.__PVT__select = 3U;
                vlSelfRef.__PVT__next_state = (7U & 
                                               ((0x31U 
                                                 == (IData)(vlSelfRef.__PVT__counter))
                                                 ? 1U
                                                 : 5U));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 2U;
            vlSelfRef.__PVT__next_state = (7U & ((1U 
                                                  & (IData)(vlSelfRef.__PVT__state))
                                                  ? 4U
                                                  : 3U));
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__select = 1U;
            vlSelfRef.__PVT__next_state = (7U & ((0x32U 
                                                  == (IData)(vlSelfRef.__PVT__counter))
                                                  ? 0U
                                                  : 2U));
        } else {
            vlSelfRef.__PVT__select = 0U;
            vlSelfRef.__PVT__next_state = (7U & ((2U 
                                                  == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))
                                                  ? 1U
                                                  : 0U));
        }
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[2U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[1U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[0U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[3U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[0U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[3U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[2U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[1U])));
    }
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
    }
    vlSelfRef.__PVT__out_mix[3U] = ((0xffU & vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffffU & vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xffffffU & vlSelfRef.__PVT__out_mix[1U]) 
                                    | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_mix[1U]) 
                                    | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffU & vlSelfRef.__PVT__out_mix[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[0U]) 
                                    | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_shift[0U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[0U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 0x10U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[2U]) 
                                         | (0xffU & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3)));
    vlSelfRef.__PVT__out_shift[1U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[1U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[3U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.__PVT__out_shift[2U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[2U]) 
                                       | (0xff0000U 
                                          & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[0U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.__PVT__out_shift[3U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[3U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             >> 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[1U]) 
                                         | (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                            >> 0x18U)));
}

VL_INLINE_OPT void Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0(Vaes_scheduler_aes_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_scheduler_aes_core___nba_sequent__TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst__0\n"); );
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.aes_scheduler__DOT__state))) {
        if ((0x32U != (IData)(vlSelfRef.__PVT__counter))) {
            vlSelfRef.__PVT__counter = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__counter)));
        }
    } else {
        vlSelfRef.__PVT__counter = 0U;
    }
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [1U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [2U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [3U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [4U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [5U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [6U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [7U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [8U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [9U]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xaU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xbU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xcU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xdU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xeU]];
    vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data 
        = vlSelfRef.__PVT__m_substitute_bytes__DOT__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__DOT__rom_data
        [vlSelfRef.__PVT__m_substitute_bytes__DOT__addr
        [0xfU]];
    if (((IData)(vlSymsp->TOP.mode) ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__state) 
                                                   >> 1U))) 
                                           || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                           [2U]) : 
                                       ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                               >> 1U)) 
                                        || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                            || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                            [2U])))
          : ((4U & (IData)(vlSelfRef.__PVT__state))
              ? ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                           >> 1U))) || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                 [2U]) : ((1U & ((IData)(vlSelfRef.__PVT__state) 
                                 >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__state)) 
                                             || vlSymsp->TOP.aes_scheduler__DOT__wr_en_sched
                                             [2U]))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [2U][0U];
            vlSelfRef.__PVT__r[1U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [2U][1U];
            vlSelfRef.__PVT__r[2U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [2U][2U];
            vlSelfRef.__PVT__r[3U] = vlSymsp->TOP.aes_scheduler__DOT__in_text
                [2U][3U];
        } else if ((1U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_add[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_add[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_add[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_add[3U];
        } else if ((2U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_sub[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_sub[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_sub[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_sub[3U];
        } else if ((3U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_shift[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_shift[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_shift[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_shift[3U];
        } else if ((4U == (IData)(vlSelfRef.__PVT__select))) {
            vlSelfRef.__PVT__r[0U] = vlSelfRef.__PVT__out_mix[0U];
            vlSelfRef.__PVT__r[1U] = vlSelfRef.__PVT__out_mix[1U];
            vlSelfRef.__PVT__r[2U] = vlSelfRef.__PVT__out_mix[2U];
            vlSelfRef.__PVT__r[3U] = vlSelfRef.__PVT__out_mix[3U];
        } else {
            vlSelfRef.__PVT__r[0U] = 0U;
            vlSelfRef.__PVT__r[1U] = 0U;
            vlSelfRef.__PVT__r[2U] = 0U;
            vlSelfRef.__PVT__r[3U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__0__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[1U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__1__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[2U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__2__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[3U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__3__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[4U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__4__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[5U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__5__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[6U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__6__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[7U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__7__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[8U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__8__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[9U] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__9__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xaU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__10__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xbU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__11__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xcU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__12__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xdU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__13__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xeU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__14__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes[0xfU] 
        = vlSelfRef.m_substitute_bytes__DOT____Vcellout__gen_rom_instances__BRA__15__KET____DOT__simple_rom_j__data;
    vlSelfRef.__PVT__state = vlSelfRef.__PVT__next_state;
    vlSelfRef.__PVT__out_add[0U] = (vlSelfRef.__PVT__r[0U] 
                                    ^ vlSymsp->TOP.round_key[0U]);
    vlSelfRef.__PVT__out_add[1U] = (vlSelfRef.__PVT__r[1U] 
                                    ^ vlSymsp->TOP.round_key[1U]);
    vlSelfRef.__PVT__out_add[2U] = (vlSelfRef.__PVT__r[2U] 
                                    ^ vlSymsp->TOP.round_key[2U]);
    vlSelfRef.__PVT__out_add[3U] = (vlSelfRef.__PVT__r[3U] 
                                    ^ vlSymsp->TOP.round_key[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[1U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[2U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[3U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [3U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[4U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [4U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[5U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [5U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[6U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [6U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[7U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [7U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[8U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [8U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[9U] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [9U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xaU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xaU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xbU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xbU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xcU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xcU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xdU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xdU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xeU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xeU]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    vlSelfRef.__PVT__m_substitute_bytes__DOT__addr[0xfU] 
        = (((IData)(vlSymsp->TOP.mode) << 8U) | vlSelfRef.__PVT__m_substitute_bytes__DOT__in_bytes
           [0xfU]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0U] 
        = (vlSelfRef.__PVT__r[3U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[1U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[2U] 
        = (0xffU & (vlSelfRef.__PVT__r[3U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[3U] 
        = (0xffU & vlSelfRef.__PVT__r[3U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[4U] 
        = (vlSelfRef.__PVT__r[2U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[5U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[6U] 
        = (0xffU & (vlSelfRef.__PVT__r[2U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[7U] 
        = (0xffU & vlSelfRef.__PVT__r[2U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[8U] 
        = (vlSelfRef.__PVT__r[1U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[9U] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xaU] 
        = (0xffU & (vlSelfRef.__PVT__r[1U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xbU] 
        = (0xffU & vlSelfRef.__PVT__r[1U]);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xcU] 
        = (vlSelfRef.__PVT__r[0U] >> 0x18U);
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xdU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 0x10U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xeU] 
        = (0xffU & (vlSelfRef.__PVT__r[0U] >> 8U));
    vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes[0xfU] 
        = (0xffU & vlSelfRef.__PVT__r[0U]);
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[0U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[3U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[2U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[1U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[2U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[1U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[3U])));
    } else {
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
            = (((0xff000000U & (vlSelfRef.__PVT__r[2U] 
                                << 8U)) | (0xff0000U 
                                           & vlSelfRef.__PVT__r[1U])) 
               | ((0xff00U & (vlSelfRef.__PVT__r[0U] 
                              >> 8U)) | (0xffU & (vlSelfRef.__PVT__r[3U] 
                                                  >> 0x10U))));
        vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
            = (((vlSelfRef.__PVT__r[0U] << 0x18U) | 
                (0xff0000U & (vlSelfRef.__PVT__r[3U] 
                              << 0x10U))) | ((0xff00U 
                                              & (vlSelfRef.__PVT__r[2U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.__PVT__r[1U])));
    }
    if (vlSymsp->TOP.mode) {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__153__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__154__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__155__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__152__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__157__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__158__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__159__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__156__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__161__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__162__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__163__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__160__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__165__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__166__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__167__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a8) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__164__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__169__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__170__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__171__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__168__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__173__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__174__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__175__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__a2));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__172__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__177__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__178__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__179__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a2)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__176__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__181__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__182__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__183__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__180__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__185__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__186__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__187__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__184__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__189__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__190__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__191__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a8) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__188__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__193__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__194__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__195__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a8) 
                                ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a4)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__a2));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__192__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__197__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__198__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__199__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a2)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__196__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__201__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__202__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__203__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a2)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime11__200__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__205__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a2;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__206__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__a))
                                                ? 0x1bU
                                                : 0U)));
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8 
                                = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__207__Vfuncout;
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a8) 
                                    ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a4)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime13__204__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__209__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a2;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__210__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a4;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__a))
                                            ? 0x1bU
                                            : 0U)));
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8 
                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__211__Vfuncout;
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a8) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime9__208__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__213__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__214__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__a))
                                        ? 0x1bU : 0U)));
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8 
                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__215__Vfuncout;
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a8) 
                            ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a4)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__a2));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime14__212__Vfuncout)));
    } else {
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[1U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [1U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [3U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[2U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [2U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[3U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [1U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [2U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [3U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[4U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[5U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [5U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [7U]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[6U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [4U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [6U];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[7U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [4U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [5U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [6U]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [7U];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[8U] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[9U] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [9U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xbU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xaU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [8U] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xaU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xbU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [8U];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [9U]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xaU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xbU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xcU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__216__Vfuncout)) 
                 ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__218__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__217__Vfuncout))) 
                ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xdU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ ([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xdU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__219__Vfuncout))) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a 
                                        = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a;
                                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__221__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__a));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__220__Vfuncout))) 
               ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
               [0xfU]);
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xeU] 
            = (((vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xcU] ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ ([&]() {
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a 
                            = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                            [0xeU];
                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__222__Vfuncout))) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a 
                                    = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a;
                                vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__224__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__a));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__223__Vfuncout)));
        vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes[0xfU] 
            = (((([&]() {
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a 
                                = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                                [0xcU];
                            vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a 
                                            = vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a;
                                        vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout 
                                            = (0xffU 
                                               & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a), 1U) 
                                                  ^ 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__a))
                                                    ? 0x1bU
                                                    : 0U)));
                                    }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__226__Vfuncout)) 
                                   ^ (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__a));
                        }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime3__225__Vfuncout)) 
                 ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                 [0xdU]) ^ vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                [0xeU]) ^ ([&]() {
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a 
                        = vlSelfRef.__PVT__m_mix_columns__DOT__in_bytes
                        [0xfU];
                    vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_m_mix_columns__DOT__xtime2__227__Vfuncout)));
    }
    vlSelfRef.__PVT__select = ((IData)(vlSymsp->TOP.mode)
                                ? ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U)))
                                : ((4U & (IData)(vlSelfRef.__PVT__state))
                                    ? ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 4U
                                                 : 3U))
                                    : ((2U & (IData)(vlSelfRef.__PVT__state))
                                        ? 2U : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__state))
                                                 ? 1U
                                                 : 0U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffU & vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffffU & vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_mix[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xffffffU & vlSelfRef.__PVT__out_mix[1U]) 
                                    | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_mix[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_mix[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_mix[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_mix[1U]) 
                                    | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffU & vlSelfRef.__PVT__out_mix[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_mix[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_mix[0U]) 
                                    | vlSelfRef.__PVT__m_mix_columns__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_sub[3U] = ((0xffU & vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0U] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [2U] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffffU & vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffff0000U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [4U] << 0x18U) 
                                          | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                             [5U] << 0x10U))));
    vlSelfRef.__PVT__out_sub[3U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[3U]) 
                                    | (0xffffU & ((0xffffU 
                                                   & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                   [3U]) 
                                                  | ((0xffffU 
                                                      & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                         [4U] 
                                                         >> 8U)) 
                                                     | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                        [5U] 
                                                        >> 0x10U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xffffffU & vlSelfRef.__PVT__out_sub[1U]) 
                                    | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                       [8U] << 0x18U));
    vlSelfRef.__PVT__out_sub[2U] = ((0xffff0000U & 
                                     vlSelfRef.__PVT__out_sub[2U]) 
                                    | (0xffffffU & 
                                       ((0xffff00U 
                                         & (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [6U] << 8U)) 
                                        | ((0xffffffU 
                                            & vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [7U]) | 
                                           (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                            [8U] >> 8U)))));
    vlSelfRef.__PVT__out_sub[1U] = ((0xff000000U & 
                                     vlSelfRef.__PVT__out_sub[1U]) 
                                    | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                        [9U] << 0x10U) 
                                       | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xaU] << 8U) 
                                          | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                          [0xbU])));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffU & vlSelfRef.__PVT__out_sub[0U]) 
                                    | (0xffffff00U 
                                       & ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                           [0xcU] << 0x18U) 
                                          | ((vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                              [0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                                [0xeU] 
                                                << 8U)))));
    vlSelfRef.__PVT__out_sub[0U] = ((0xffffff00U & 
                                     vlSelfRef.__PVT__out_sub[0U]) 
                                    | vlSelfRef.__PVT__m_substitute_bytes__DOT__out_bytes
                                    [0xfU]);
    vlSelfRef.__PVT__out_shift[0U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[0U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 0x10U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[2U]) 
                                         | (0xffU & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3)));
    vlSelfRef.__PVT__out_shift[1U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[1U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             << 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[3U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 8U))));
    vlSelfRef.__PVT__out_shift[2U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[2U]) 
                                       | (0xff0000U 
                                          & vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1)) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[0U]) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                             >> 0x10U))));
    vlSelfRef.__PVT__out_shift[3U] = (((0xff000000U 
                                        & vlSelfRef.__PVT__r[3U]) 
                                       | (0xff0000U 
                                          & (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row1 
                                             >> 8U))) 
                                      | ((0xff00U & 
                                          vlSelfRef.__PVT__r[1U]) 
                                         | (vlSelfRef.__PVT__m_shift_rows__DOT__shifted_row3 
                                            >> 0x18U)));
}
