// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPE_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPE_tb::VPE_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPE_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VPE_tb::VPE_tb(const char* _vcname__)
    : VPE_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPE_tb::~VPE_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPE_tb___024root___eval_debug_assertions(VPE_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPE_tb___024root___eval_static(VPE_tb___024root* vlSelf);
void VPE_tb___024root___eval_initial(VPE_tb___024root* vlSelf);
VL_ATTR_COLD bool VPE_tb___024root___eval_stl(VPE_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void VPE_tb___024root___eval_sample(VPE_tb___024root* vlSelf);
bool VPE_tb___024root___eval_ico(VPE_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VPE_tb___024root___eval_act(VPE_tb___024root* vlSelf);
bool VPE_tb___024root___eval_inact(VPE_tb___024root* vlSelf);
bool VPE_tb___024root___eval_nba(VPE_tb___024root* vlSelf);
bool VPE_tb___024root___eval_obs(VPE_tb___024root* vlSelf);
bool VPE_tb___024root___eval_react(VPE_tb___024root* vlSelf);
void VPE_tb___024root___eval_postponed(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_final(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__stl(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__ico(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__act(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__nba(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__obs(VPE_tb___024root* vlSelf);
VL_ATTR_COLD void VPE_tb___024root___eval_dump_triggers__react(VPE_tb___024root* vlSelf);

void VPE_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPE_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void VPE_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VPE_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VPE_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void VPE_tb::evalStatic() {
    VPE_tb___024root___eval_static(&(vlSymsp->TOP));
}

void VPE_tb::evalInitial() {
    VPE_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool VPE_tb::evalStl(bool firstIteration) {
    return VPE_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VPE_tb::evalSample() {
    VPE_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool VPE_tb::evalIco(bool firstIteration) {
    return VPE_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VPE_tb::evalAct() {
    return VPE_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool VPE_tb::evalInact() {
    return VPE_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool VPE_tb::evalNba() {
    return VPE_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool VPE_tb::evalObs() {
    return VPE_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool VPE_tb::evalReact() {
    return VPE_tb___024root___eval_react(&(vlSymsp->TOP));
}

void VPE_tb::evalPostponed() {
    VPE_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void VPE_tb::evalFinal() {
    VPE_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersStl() {
    VPE_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersIco() {
    VPE_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersAct() {
    VPE_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersNba() {
    VPE_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersObs() {
    VPE_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE_tb::dumpTriggersReact() {
    VPE_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void VPE_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VPE_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VPE_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VPE_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VPE_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPE_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPE_tb::hierName() const { return vlSymsp->name(); }
const char* VPE_tb::modelName() const { return "VPE_tb"; }
unsigned VPE_tb::threads() const { return 1; }
void VPE_tb::prepareClone() const { contextp()->prepareClone(); }
void VPE_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPE_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VPE_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VPE_tb___024root__trace_init_top(VPE_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPE_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE_tb___024root*>(voidSelf);
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VPE_tb___024root__trace_decl_types(tracep);
    VPE_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPE_tb___024root__trace_register(VPE_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPE_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPE_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 23);
    VPE_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
