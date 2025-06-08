// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaes_scheduler__pch.h"
#include "Vaes_scheduler.h"
#include "Vaes_scheduler___024root.h"
#include "Vaes_scheduler_aes_core.h"

// FUNCTIONS
Vaes_scheduler__Syms::~Vaes_scheduler__Syms()
{
}

Vaes_scheduler__Syms::Vaes_scheduler__Syms(VerilatedContext* contextp, const char* namep, Vaes_scheduler* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[0].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[1].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[2].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[3].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[4].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[5].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[6].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[7].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[8].core_inst")}
    , TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst{this, Verilated::catName(namep, "aes_scheduler.gen_aes_cores[9].core_inst")}
{
        // Check resources
        Verilated::stackCheck(1959);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst;
    TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst = &TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst.__Vconfigure(true);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst.__Vconfigure(false);
    TOP__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst.__Vconfigure(false);
}
