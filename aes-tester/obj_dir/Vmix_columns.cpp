// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmix_columns__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmix_columns::Vmix_columns(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmix_columns__Syms(contextp(), _vcname__, this)}
    , mode{vlSymsp->TOP.mode}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmix_columns::Vmix_columns(const char* _vcname__)
    : Vmix_columns(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmix_columns::~Vmix_columns() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmix_columns___024root___eval_debug_assertions(Vmix_columns___024root* vlSelf);
#endif  // VL_DEBUG
void Vmix_columns___024root___eval_static(Vmix_columns___024root* vlSelf);
void Vmix_columns___024root___eval_initial(Vmix_columns___024root* vlSelf);
void Vmix_columns___024root___eval_settle(Vmix_columns___024root* vlSelf);
void Vmix_columns___024root___eval(Vmix_columns___024root* vlSelf);

void Vmix_columns::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmix_columns::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmix_columns___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmix_columns___024root___eval_static(&(vlSymsp->TOP));
        Vmix_columns___024root___eval_initial(&(vlSymsp->TOP));
        Vmix_columns___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmix_columns___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmix_columns::eventsPending() { return false; }

uint64_t Vmix_columns::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmix_columns::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmix_columns___024root___eval_final(Vmix_columns___024root* vlSelf);

VL_ATTR_COLD void Vmix_columns::final() {
    Vmix_columns___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmix_columns::hierName() const { return vlSymsp->name(); }
const char* Vmix_columns::modelName() const { return "Vmix_columns"; }
unsigned Vmix_columns::threads() const { return 1; }
void Vmix_columns::prepareClone() const { contextp()->prepareClone(); }
void Vmix_columns::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmix_columns::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmix_columns___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmix_columns___024root__trace_init_top(Vmix_columns___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmix_columns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmix_columns___024root*>(voidSelf);
    Vmix_columns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmix_columns___024root__trace_decl_types(tracep);
    Vmix_columns___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmix_columns___024root__trace_register(Vmix_columns___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmix_columns::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmix_columns::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmix_columns___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
