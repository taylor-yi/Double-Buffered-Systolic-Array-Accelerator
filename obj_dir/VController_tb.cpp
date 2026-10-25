// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VController_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VController_tb::VController_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VController_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VController_tb::VController_tb(const char* _vcname__)
    : VController_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VController_tb::~VController_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VController_tb___024root___eval_debug_assertions(VController_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___eval_static(VController_tb___024root* vlSelf);
void VController_tb___024root___eval_initial(VController_tb___024root* vlSelf);
VL_ATTR_COLD bool VController_tb___024root___eval_stl(VController_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void VController_tb___024root___eval_sample(VController_tb___024root* vlSelf);
bool VController_tb___024root___eval_ico(VController_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VController_tb___024root___eval_act(VController_tb___024root* vlSelf);
bool VController_tb___024root___eval_inact(VController_tb___024root* vlSelf);
bool VController_tb___024root___eval_nba(VController_tb___024root* vlSelf);
bool VController_tb___024root___eval_obs(VController_tb___024root* vlSelf);
bool VController_tb___024root___eval_react(VController_tb___024root* vlSelf);
void VController_tb___024root___eval_postponed(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_final(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__stl(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__ico(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__act(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__nba(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__obs(VController_tb___024root* vlSelf);
VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__react(VController_tb___024root* vlSelf);

void VController_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VController_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void VController_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VController_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VController_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void VController_tb::evalStatic() {
    VController_tb___024root___eval_static(&(vlSymsp->TOP));
}

void VController_tb::evalInitial() {
    VController_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool VController_tb::evalStl(bool firstIteration) {
    return VController_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VController_tb::evalSample() {
    VController_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool VController_tb::evalIco(bool firstIteration) {
    return VController_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VController_tb::evalAct() {
    return VController_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool VController_tb::evalInact() {
    return VController_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool VController_tb::evalNba() {
    return VController_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool VController_tb::evalObs() {
    return VController_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool VController_tb::evalReact() {
    return VController_tb___024root___eval_react(&(vlSymsp->TOP));
}

void VController_tb::evalPostponed() {
    VController_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void VController_tb::evalFinal() {
    VController_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersStl() {
    VController_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersIco() {
    VController_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersAct() {
    VController_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersNba() {
    VController_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersObs() {
    VController_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VController_tb::dumpTriggersReact() {
    VController_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void VController_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VController_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VController_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VController_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VController_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VController_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VController_tb::hierName() const { return vlSymsp->name(); }
const char* VController_tb::modelName() const { return "VController_tb"; }
unsigned VController_tb::threads() const { return 1; }
void VController_tb::prepareClone() const { contextp()->prepareClone(); }
void VController_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VController_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VController_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VController_tb___024root__trace_init_top(VController_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VController_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VController_tb___024root*>(voidSelf);
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VController_tb___024root__trace_decl_types(tracep);
    VController_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VController_tb___024root__trace_register(VController_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VController_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VController_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 479);
    VController_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
