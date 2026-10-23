// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSA_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSA_tb::VSA_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSA_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VSA_tb::VSA_tb(const char* _vcname__)
    : VSA_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSA_tb::~VSA_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSA_tb___024root___eval_debug_assertions(VSA_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___eval_static(VSA_tb___024root* vlSelf);
void VSA_tb___024root___eval_initial(VSA_tb___024root* vlSelf);
VL_ATTR_COLD bool VSA_tb___024root___eval_stl(VSA_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void VSA_tb___024root___eval_sample(VSA_tb___024root* vlSelf);
bool VSA_tb___024root___eval_ico(VSA_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VSA_tb___024root___eval_act(VSA_tb___024root* vlSelf);
bool VSA_tb___024root___eval_inact(VSA_tb___024root* vlSelf);
bool VSA_tb___024root___eval_nba(VSA_tb___024root* vlSelf);
bool VSA_tb___024root___eval_obs(VSA_tb___024root* vlSelf);
bool VSA_tb___024root___eval_react(VSA_tb___024root* vlSelf);
void VSA_tb___024root___eval_postponed(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_final(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__stl(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__ico(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__act(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__nba(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__obs(VSA_tb___024root* vlSelf);
VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__react(VSA_tb___024root* vlSelf);

void VSA_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSA_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void VSA_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VSA_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VSA_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void VSA_tb::evalStatic() {
    VSA_tb___024root___eval_static(&(vlSymsp->TOP));
}

void VSA_tb::evalInitial() {
    VSA_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool VSA_tb::evalStl(bool firstIteration) {
    return VSA_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VSA_tb::evalSample() {
    VSA_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool VSA_tb::evalIco(bool firstIteration) {
    return VSA_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VSA_tb::evalAct() {
    return VSA_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool VSA_tb::evalInact() {
    return VSA_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool VSA_tb::evalNba() {
    return VSA_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool VSA_tb::evalObs() {
    return VSA_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool VSA_tb::evalReact() {
    return VSA_tb___024root___eval_react(&(vlSymsp->TOP));
}

void VSA_tb::evalPostponed() {
    VSA_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void VSA_tb::evalFinal() {
    VSA_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersStl() {
    VSA_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersIco() {
    VSA_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersAct() {
    VSA_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersNba() {
    VSA_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersObs() {
    VSA_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSA_tb::dumpTriggersReact() {
    VSA_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void VSA_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VSA_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VSA_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VSA_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VSA_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSA_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSA_tb::hierName() const { return vlSymsp->name(); }
const char* VSA_tb::modelName() const { return "VSA_tb"; }
unsigned VSA_tb::threads() const { return 1; }
void VSA_tb::prepareClone() const { contextp()->prepareClone(); }
void VSA_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSA_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VSA_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VSA_tb___024root__trace_init_top(VSA_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSA_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSA_tb___024root*>(voidSelf);
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VSA_tb___024root__trace_decl_types(tracep);
    VSA_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSA_tb___024root__trace_register(VSA_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSA_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSA_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 230);
    VSA_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
