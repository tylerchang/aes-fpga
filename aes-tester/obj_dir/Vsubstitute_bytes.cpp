// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsubstitute_bytes__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsubstitute_bytes::Vsubstitute_bytes(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsubstitute_bytes__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
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

Vsubstitute_bytes::Vsubstitute_bytes(const char* _vcname__)
    : Vsubstitute_bytes(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsubstitute_bytes::~Vsubstitute_bytes() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsubstitute_bytes___024root___eval_debug_assertions(Vsubstitute_bytes___024root* vlSelf);
#endif  // VL_DEBUG
void Vsubstitute_bytes___024root___eval_static(Vsubstitute_bytes___024root* vlSelf);
void Vsubstitute_bytes___024root___eval_initial(Vsubstitute_bytes___024root* vlSelf);
void Vsubstitute_bytes___024root___eval_settle(Vsubstitute_bytes___024root* vlSelf);
void Vsubstitute_bytes___024root___eval(Vsubstitute_bytes___024root* vlSelf);

void Vsubstitute_bytes::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsubstitute_bytes::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsubstitute_bytes___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsubstitute_bytes___024root___eval_static(&(vlSymsp->TOP));
        Vsubstitute_bytes___024root___eval_initial(&(vlSymsp->TOP));
        Vsubstitute_bytes___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsubstitute_bytes___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsubstitute_bytes::eventsPending() { return false; }

uint64_t Vsubstitute_bytes::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsubstitute_bytes::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsubstitute_bytes___024root___eval_final(Vsubstitute_bytes___024root* vlSelf);

VL_ATTR_COLD void Vsubstitute_bytes::final() {
    Vsubstitute_bytes___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsubstitute_bytes::hierName() const { return vlSymsp->name(); }
const char* Vsubstitute_bytes::modelName() const { return "Vsubstitute_bytes"; }
unsigned Vsubstitute_bytes::threads() const { return 1; }
void Vsubstitute_bytes::prepareClone() const { contextp()->prepareClone(); }
void Vsubstitute_bytes::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsubstitute_bytes::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsubstitute_bytes___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsubstitute_bytes___024root__trace_init_top(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsubstitute_bytes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubstitute_bytes___024root*>(voidSelf);
    Vsubstitute_bytes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsubstitute_bytes___024root__trace_decl_types(tracep);
    Vsubstitute_bytes___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsubstitute_bytes___024root__trace_register(Vsubstitute_bytes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsubstitute_bytes::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsubstitute_bytes::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsubstitute_bytes___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
