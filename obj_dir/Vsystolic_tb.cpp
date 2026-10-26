// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystolic_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsystolic_tb::Vsystolic_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsystolic_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsystolic_tb::Vsystolic_tb(const char* _vcname__)
    : Vsystolic_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsystolic_tb::~Vsystolic_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsystolic_tb___024root___eval_debug_assertions(Vsystolic_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___eval_static(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___eval_initial(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD bool Vsystolic_tb___024root___eval_stl(Vsystolic_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vsystolic_tb___024root___eval_sample(Vsystolic_tb___024root* vlSelf);
bool Vsystolic_tb___024root___eval_ico(Vsystolic_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vsystolic_tb___024root___eval_act(Vsystolic_tb___024root* vlSelf);
bool Vsystolic_tb___024root___eval_inact(Vsystolic_tb___024root* vlSelf);
bool Vsystolic_tb___024root___eval_nba(Vsystolic_tb___024root* vlSelf);
bool Vsystolic_tb___024root___eval_obs(Vsystolic_tb___024root* vlSelf);
bool Vsystolic_tb___024root___eval_react(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___eval_postponed(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_final(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__stl(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__ico(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__act(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__nba(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__obs(Vsystolic_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__react(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vsystolic_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vsystolic_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vsystolic_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vsystolic_tb::evalStatic() {
    Vsystolic_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vsystolic_tb::evalInitial() {
    Vsystolic_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalStl(bool firstIteration) {
    return Vsystolic_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vsystolic_tb::evalSample() {
    Vsystolic_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalIco(bool firstIteration) {
    return Vsystolic_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vsystolic_tb::evalAct() {
    return Vsystolic_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalInact() {
    return Vsystolic_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalNba() {
    return Vsystolic_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalObs() {
    return Vsystolic_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vsystolic_tb::evalReact() {
    return Vsystolic_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vsystolic_tb::evalPostponed() {
    Vsystolic_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vsystolic_tb::evalFinal() {
    Vsystolic_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersStl() {
    Vsystolic_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersIco() {
    Vsystolic_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersAct() {
    Vsystolic_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersNba() {
    Vsystolic_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersObs() {
    Vsystolic_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vsystolic_tb::dumpTriggersReact() {
    Vsystolic_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void Vsystolic_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsystolic_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsystolic_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vsystolic_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsystolic_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsystolic_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsystolic_tb::hierName() const { return vlSymsp->name(); }
const char* Vsystolic_tb::modelName() const { return "Vsystolic_tb"; }
unsigned Vsystolic_tb::threads() const { return 1; }
void Vsystolic_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsystolic_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsystolic_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vsystolic_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsystolic_tb___024root__trace_init_top(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystolic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_tb___024root*>(voidSelf);
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsystolic_tb___024root__trace_decl_types(tracep);
    Vsystolic_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_register(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsystolic_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsystolic_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 361);
    Vsystolic_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
