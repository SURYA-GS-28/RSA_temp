// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestbench_full__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtestbench_full::Vtestbench_full(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestbench_full__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtestbench_full::Vtestbench_full(const char* _vcname__)
    : Vtestbench_full(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestbench_full::~Vtestbench_full() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestbench_full___024root___eval_debug_assertions(Vtestbench_full___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench_full___024root___eval_static(Vtestbench_full___024root* vlSelf);
void Vtestbench_full___024root___eval_initial(Vtestbench_full___024root* vlSelf);
void Vtestbench_full___024root___eval_settle(Vtestbench_full___024root* vlSelf);
void Vtestbench_full___024root___eval(Vtestbench_full___024root* vlSelf);

void Vtestbench_full::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestbench_full::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestbench_full___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestbench_full___024root___eval_static(&(vlSymsp->TOP));
        Vtestbench_full___024root___eval_initial(&(vlSymsp->TOP));
        Vtestbench_full___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestbench_full___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtestbench_full::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtestbench_full::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtestbench_full::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestbench_full::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestbench_full::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestbench_full___024root___eval_final(Vtestbench_full___024root* vlSelf);

VL_ATTR_COLD void Vtestbench_full::final() {
    Vtestbench_full___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestbench_full::hierName() const { return vlSymsp->name(); }
const char* Vtestbench_full::modelName() const { return "Vtestbench_full"; }
unsigned Vtestbench_full::threads() const { return 1; }
void Vtestbench_full::prepareClone() const { contextp()->prepareClone(); }
void Vtestbench_full::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtestbench_full::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtestbench_full___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtestbench_full___024root__trace_init_top(Vtestbench_full___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtestbench_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench_full___024root*>(voidSelf);
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtestbench_full___024root__trace_decl_types(tracep);
    Vtestbench_full___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench_full___024root__trace_register(Vtestbench_full___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtestbench_full::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestbench_full::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtestbench_full___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
