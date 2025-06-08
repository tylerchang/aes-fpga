// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_rows__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshift_rows::Vshift_rows(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshift_rows__Syms(contextp(), _vcname__, this)}
    , mode{vlSymsp->TOP.mode}
    , in_text{vlSymsp->TOP.in_text}
    , out_text{vlSymsp->TOP.out_text}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vshift_rows::Vshift_rows(const char* _vcname__)
    : Vshift_rows(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshift_rows::~Vshift_rows() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshift_rows___024root___eval_debug_assertions(Vshift_rows___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift_rows___024root___eval_static(Vshift_rows___024root* vlSelf);
void Vshift_rows___024root___eval_initial(Vshift_rows___024root* vlSelf);
void Vshift_rows___024root___eval_settle(Vshift_rows___024root* vlSelf);
void Vshift_rows___024root___eval(Vshift_rows___024root* vlSelf);

void Vshift_rows::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_rows::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_rows___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshift_rows___024root___eval_static(&(vlSymsp->TOP));
        Vshift_rows___024root___eval_initial(&(vlSymsp->TOP));
        Vshift_rows___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshift_rows___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshift_rows::eventsPending() { return false; }

uint64_t Vshift_rows::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshift_rows::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshift_rows___024root___eval_final(Vshift_rows___024root* vlSelf);

VL_ATTR_COLD void Vshift_rows::final() {
    Vshift_rows___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshift_rows::hierName() const { return vlSymsp->name(); }
const char* Vshift_rows::modelName() const { return "Vshift_rows"; }
unsigned Vshift_rows::threads() const { return 1; }
void Vshift_rows::prepareClone() const { contextp()->prepareClone(); }
void Vshift_rows::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vshift_rows::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vshift_rows___024root__trace_decl_types(VerilatedVcd* tracep);

void Vshift_rows___024root__trace_init_top(Vshift_rows___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshift_rows___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_rows___024root*>(voidSelf);
    Vshift_rows__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vshift_rows___024root__trace_decl_types(tracep);
    Vshift_rows___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vshift_rows___024root__trace_register(Vshift_rows___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshift_rows::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshift_rows::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshift_rows___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
