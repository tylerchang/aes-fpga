// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadd_round_key__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadd_round_key::Vadd_round_key(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vadd_round_key__Syms(contextp(), _vcname__, this)}
    , in_text{vlSymsp->TOP.in_text}
    , round_key{vlSymsp->TOP.round_key}
    , out_text{vlSymsp->TOP.out_text}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vadd_round_key::Vadd_round_key(const char* _vcname__)
    : Vadd_round_key(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vadd_round_key::~Vadd_round_key() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vadd_round_key___024root___eval_debug_assertions(Vadd_round_key___024root* vlSelf);
#endif  // VL_DEBUG
void Vadd_round_key___024root___eval_static(Vadd_round_key___024root* vlSelf);
void Vadd_round_key___024root___eval_initial(Vadd_round_key___024root* vlSelf);
void Vadd_round_key___024root___eval_settle(Vadd_round_key___024root* vlSelf);
void Vadd_round_key___024root___eval(Vadd_round_key___024root* vlSelf);

void Vadd_round_key::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadd_round_key::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadd_round_key___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vadd_round_key___024root___eval_static(&(vlSymsp->TOP));
        Vadd_round_key___024root___eval_initial(&(vlSymsp->TOP));
        Vadd_round_key___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vadd_round_key___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vadd_round_key::eventsPending() { return false; }

uint64_t Vadd_round_key::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vadd_round_key::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vadd_round_key___024root___eval_final(Vadd_round_key___024root* vlSelf);

VL_ATTR_COLD void Vadd_round_key::final() {
    Vadd_round_key___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vadd_round_key::hierName() const { return vlSymsp->name(); }
const char* Vadd_round_key::modelName() const { return "Vadd_round_key"; }
unsigned Vadd_round_key::threads() const { return 1; }
void Vadd_round_key::prepareClone() const { contextp()->prepareClone(); }
void Vadd_round_key::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vadd_round_key::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vadd_round_key___024root__trace_decl_types(VerilatedVcd* tracep);

void Vadd_round_key___024root__trace_init_top(Vadd_round_key___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadd_round_key___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_round_key___024root*>(voidSelf);
    Vadd_round_key__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vadd_round_key___024root__trace_decl_types(tracep);
    Vadd_round_key___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadd_round_key___024root__trace_register(Vadd_round_key___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadd_round_key::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vadd_round_key::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vadd_round_key___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
