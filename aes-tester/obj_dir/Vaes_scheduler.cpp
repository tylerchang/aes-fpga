// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_scheduler__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaes_scheduler::Vaes_scheduler(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaes_scheduler__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , start{vlSymsp->TOP.start}
    , mode{vlSymsp->TOP.mode}
    , round_key_addr{vlSymsp->TOP.round_key_addr}
    , sink_valid{vlSymsp->TOP.sink_valid}
    , sink_ready{vlSymsp->TOP.sink_ready}
    , source_valid{vlSymsp->TOP.source_valid}
    , source_ready{vlSymsp->TOP.source_ready}
    , round_key{vlSymsp->TOP.round_key}
    , sink_data{vlSymsp->TOP.sink_data}
    , source_data{vlSymsp->TOP.source_data}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__0__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__1__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__2__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__3__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__4__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__5__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__6__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__7__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__8__KET____DOT__core_inst}
    , __PVT__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst{vlSymsp->TOP.__PVT__aes_scheduler__DOT__gen_aes_cores__BRA__9__KET____DOT__core_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vaes_scheduler::Vaes_scheduler(const char* _vcname__)
    : Vaes_scheduler(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaes_scheduler::~Vaes_scheduler() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaes_scheduler___024root___eval_debug_assertions(Vaes_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_scheduler___024root___eval_static(Vaes_scheduler___024root* vlSelf);
void Vaes_scheduler___024root___eval_initial(Vaes_scheduler___024root* vlSelf);
void Vaes_scheduler___024root___eval_settle(Vaes_scheduler___024root* vlSelf);
void Vaes_scheduler___024root___eval(Vaes_scheduler___024root* vlSelf);

void Vaes_scheduler::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_scheduler::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_scheduler___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaes_scheduler___024root___eval_static(&(vlSymsp->TOP));
        Vaes_scheduler___024root___eval_initial(&(vlSymsp->TOP));
        Vaes_scheduler___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaes_scheduler___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaes_scheduler::eventsPending() { return false; }

uint64_t Vaes_scheduler::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaes_scheduler::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaes_scheduler___024root___eval_final(Vaes_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vaes_scheduler::final() {
    Vaes_scheduler___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaes_scheduler::hierName() const { return vlSymsp->name(); }
const char* Vaes_scheduler::modelName() const { return "Vaes_scheduler"; }
unsigned Vaes_scheduler::threads() const { return 1; }
void Vaes_scheduler::prepareClone() const { contextp()->prepareClone(); }
void Vaes_scheduler::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaes_scheduler::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaes_scheduler___024root__trace_decl_types(VerilatedVcd* tracep);

void Vaes_scheduler___024root__trace_init_top(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaes_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_scheduler___024root*>(voidSelf);
    Vaes_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_scheduler___024root__trace_decl_types(tracep);
    Vaes_scheduler___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_scheduler___024root__trace_register(Vaes_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes_scheduler::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaes_scheduler::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaes_scheduler___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
