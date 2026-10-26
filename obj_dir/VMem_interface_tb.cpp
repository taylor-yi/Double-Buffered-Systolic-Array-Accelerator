// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMem_interface_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMem_interface_tb::VMem_interface_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMem_interface_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VMem_interface_tb::VMem_interface_tb(const char* _vcname__)
    : VMem_interface_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMem_interface_tb::~VMem_interface_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMem_interface_tb___024root___eval_debug_assertions(VMem_interface_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___eval_static(VMem_interface_tb___024root* vlSelf);
void VMem_interface_tb___024root___eval_initial(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD bool VMem_interface_tb___024root___eval_stl(VMem_interface_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void VMem_interface_tb___024root___eval_sample(VMem_interface_tb___024root* vlSelf);
bool VMem_interface_tb___024root___eval_ico(VMem_interface_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VMem_interface_tb___024root___eval_act(VMem_interface_tb___024root* vlSelf);
bool VMem_interface_tb___024root___eval_inact(VMem_interface_tb___024root* vlSelf);
bool VMem_interface_tb___024root___eval_nba(VMem_interface_tb___024root* vlSelf);
bool VMem_interface_tb___024root___eval_obs(VMem_interface_tb___024root* vlSelf);
bool VMem_interface_tb___024root___eval_react(VMem_interface_tb___024root* vlSelf);
void VMem_interface_tb___024root___eval_postponed(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_final(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__stl(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__ico(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__act(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__nba(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__obs(VMem_interface_tb___024root* vlSelf);
VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__react(VMem_interface_tb___024root* vlSelf);

void VMem_interface_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMem_interface_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void VMem_interface_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VMem_interface_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VMem_interface_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void VMem_interface_tb::evalStatic() {
    VMem_interface_tb___024root___eval_static(&(vlSymsp->TOP));
}

void VMem_interface_tb::evalInitial() {
    VMem_interface_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalStl(bool firstIteration) {
    return VMem_interface_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VMem_interface_tb::evalSample() {
    VMem_interface_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalIco(bool firstIteration) {
    return VMem_interface_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VMem_interface_tb::evalAct() {
    return VMem_interface_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalInact() {
    return VMem_interface_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalNba() {
    return VMem_interface_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalObs() {
    return VMem_interface_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool VMem_interface_tb::evalReact() {
    return VMem_interface_tb___024root___eval_react(&(vlSymsp->TOP));
}

void VMem_interface_tb::evalPostponed() {
    VMem_interface_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void VMem_interface_tb::evalFinal() {
    VMem_interface_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersStl() {
    VMem_interface_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersIco() {
    VMem_interface_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersAct() {
    VMem_interface_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersNba() {
    VMem_interface_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersObs() {
    VMem_interface_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VMem_interface_tb::dumpTriggersReact() {
    VMem_interface_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void VMem_interface_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VMem_interface_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VMem_interface_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VMem_interface_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VMem_interface_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMem_interface_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMem_interface_tb::hierName() const { return vlSymsp->name(); }
const char* VMem_interface_tb::modelName() const { return "VMem_interface_tb"; }
unsigned VMem_interface_tb::threads() const { return 1; }
void VMem_interface_tb::prepareClone() const { contextp()->prepareClone(); }
void VMem_interface_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMem_interface_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VMem_interface_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VMem_interface_tb___024root__trace_init_top(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMem_interface_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMem_interface_tb___024root*>(voidSelf);
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VMem_interface_tb___024root__trace_decl_types(tracep);
    VMem_interface_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_register(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMem_interface_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMem_interface_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 191);
    VMem_interface_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
