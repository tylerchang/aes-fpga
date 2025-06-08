// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vshift_rows__pch.h"
#include "Vshift_rows.h"
#include "Vshift_rows___024root.h"

// FUNCTIONS
Vshift_rows__Syms::~Vshift_rows__Syms()
{
}

Vshift_rows__Syms::Vshift_rows__Syms(VerilatedContext* contextp, const char* namep, Vshift_rows* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
