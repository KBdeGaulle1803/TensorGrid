// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_tb::Vspi_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vspi_tb::Vspi_tb(const char* _vcname__)
    : Vspi_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_tb::~Vspi_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_tb___024root___eval_debug_assertions(Vspi_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_tb___024root___eval_static(Vspi_tb___024root* vlSelf);
void Vspi_tb___024root___eval_initial(Vspi_tb___024root* vlSelf);
void Vspi_tb___024root___eval_settle(Vspi_tb___024root* vlSelf);
void Vspi_tb___024root___eval(Vspi_tb___024root* vlSelf);

void Vspi_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_tb___024root___eval_static(&(vlSymsp->TOP));
        Vspi_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vspi_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vspi_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vspi_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vspi_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vspi_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_tb___024root___eval_final(Vspi_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_tb::final() {
    Vspi_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_tb::hierName() const { return vlSymsp->name(); }
const char* Vspi_tb::modelName() const { return "Vspi_tb"; }
unsigned Vspi_tb::threads() const { return 1; }
void Vspi_tb::prepareClone() const { contextp()->prepareClone(); }
void Vspi_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vspi_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vspi_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vspi_tb___024root__trace_init_top(Vspi_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_tb___024root*>(voidSelf);
    Vspi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_tb___024root__trace_decl_types(tracep);
    Vspi_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_tb___024root__trace_register(Vspi_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
