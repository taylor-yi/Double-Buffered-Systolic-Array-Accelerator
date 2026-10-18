// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcessing_Element__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VProcessing_Element::VProcessing_Element(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcessing_Element__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VProcessing_Element::VProcessing_Element(const char* _vcname__)
    : VProcessing_Element(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcessing_Element::~VProcessing_Element() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcessing_Element___024root___eval_debug_assertions(VProcessing_Element___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___eval_static(VProcessing_Element___024root* vlSelf);
void VProcessing_Element___024root___eval_initial(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD bool VProcessing_Element___024root___eval_stl(VProcessing_Element___024root* vlSelf, CData/*0:0*/ firstIteration);
void VProcessing_Element___024root___eval_sample(VProcessing_Element___024root* vlSelf);
bool VProcessing_Element___024root___eval_ico(VProcessing_Element___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VProcessing_Element___024root___eval_act(VProcessing_Element___024root* vlSelf);
bool VProcessing_Element___024root___eval_inact(VProcessing_Element___024root* vlSelf);
bool VProcessing_Element___024root___eval_nba(VProcessing_Element___024root* vlSelf);
bool VProcessing_Element___024root___eval_obs(VProcessing_Element___024root* vlSelf);
bool VProcessing_Element___024root___eval_react(VProcessing_Element___024root* vlSelf);
void VProcessing_Element___024root___eval_postponed(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_final(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__stl(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__ico(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__act(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__nba(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__obs(VProcessing_Element___024root* vlSelf);
VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__react(VProcessing_Element___024root* vlSelf);

void VProcessing_Element::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcessing_Element::eval_step\n"); );
    m_evalLoop.eval();
}

void VProcessing_Element::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VProcessing_Element___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VProcessing_Element::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void VProcessing_Element::evalStatic() {
    VProcessing_Element___024root___eval_static(&(vlSymsp->TOP));
}

void VProcessing_Element::evalInitial() {
    VProcessing_Element___024root___eval_initial(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalStl(bool firstIteration) {
    return VProcessing_Element___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VProcessing_Element::evalSample() {
    VProcessing_Element___024root___eval_sample(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalIco(bool firstIteration) {
    return VProcessing_Element___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VProcessing_Element::evalAct() {
    return VProcessing_Element___024root___eval_act(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalInact() {
    return VProcessing_Element___024root___eval_inact(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalNba() {
    return VProcessing_Element___024root___eval_nba(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalObs() {
    return VProcessing_Element___024root___eval_obs(&(vlSymsp->TOP));
}

bool VProcessing_Element::evalReact() {
    return VProcessing_Element___024root___eval_react(&(vlSymsp->TOP));
}

void VProcessing_Element::evalPostponed() {
    VProcessing_Element___024root___eval_postponed(&(vlSymsp->TOP));
}

void VProcessing_Element::evalFinal() {
    VProcessing_Element___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersStl() {
    VProcessing_Element___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersIco() {
    VProcessing_Element___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersAct() {
    VProcessing_Element___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersNba() {
    VProcessing_Element___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersObs() {
    VProcessing_Element___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VProcessing_Element::dumpTriggersReact() {
    VProcessing_Element___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void VProcessing_Element::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VProcessing_Element::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VProcessing_Element::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VProcessing_Element::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VProcessing_Element::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VProcessing_Element::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcessing_Element::hierName() const { return vlSymsp->name(); }
const char* VProcessing_Element::modelName() const { return "VProcessing_Element"; }
unsigned VProcessing_Element::threads() const { return 1; }
void VProcessing_Element::prepareClone() const { contextp()->prepareClone(); }
void VProcessing_Element::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VProcessing_Element::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VProcessing_Element___024root__trace_decl_types(VerilatedVcd* tracep);

void VProcessing_Element___024root__trace_init_top(VProcessing_Element___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VProcessing_Element___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcessing_Element___024root*>(voidSelf);
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VProcessing_Element___024root__trace_decl_types(tracep);
    VProcessing_Element___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_register(VProcessing_Element___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VProcessing_Element::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VProcessing_Element::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 15);
    VProcessing_Element___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
