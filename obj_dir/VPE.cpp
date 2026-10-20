// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPE__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPE::VPE(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPE__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_valid{vlSymsp->TOP.in_valid}
    , load_slot{vlSymsp->TOP.load_slot}
    , compute_slot{vlSymsp->TOP.compute_slot}
    , en{vlSymsp->TOP.en}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , a_out{vlSymsp->TOP.a_out}
    , b_out{vlSymsp->TOP.b_out}
    , above_result{vlSymsp->TOP.above_result}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VPE::VPE(const char* _vcname__)
    : VPE(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPE::~VPE() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPE___024root___eval_debug_assertions(VPE___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPE___024root___eval_static(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_initial(VPE___024root* vlSelf);
VL_ATTR_COLD bool VPE___024root___eval_stl(VPE___024root* vlSelf, CData/*0:0*/ firstIteration);
void VPE___024root___eval_sample(VPE___024root* vlSelf);
bool VPE___024root___eval_ico(VPE___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VPE___024root___eval_act(VPE___024root* vlSelf);
bool VPE___024root___eval_inact(VPE___024root* vlSelf);
bool VPE___024root___eval_nba(VPE___024root* vlSelf);
bool VPE___024root___eval_obs(VPE___024root* vlSelf);
bool VPE___024root___eval_react(VPE___024root* vlSelf);
void VPE___024root___eval_postponed(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_final(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__stl(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__ico(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__act(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__nba(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__obs(VPE___024root* vlSelf);
VL_ATTR_COLD void VPE___024root___eval_dump_triggers__react(VPE___024root* vlSelf);

void VPE::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPE::eval_step\n"); );
    m_evalLoop.eval();
}

void VPE::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VPE___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VPE::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VPE::evalStatic() {
    VPE___024root___eval_static(&(vlSymsp->TOP));
}

void VPE::evalInitial() {
    VPE___024root___eval_initial(&(vlSymsp->TOP));
}

bool VPE::evalStl(bool firstIteration) {
    return VPE___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VPE::evalSample() {
    VPE___024root___eval_sample(&(vlSymsp->TOP));
}

bool VPE::evalIco(bool firstIteration) {
    return VPE___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VPE::evalAct() {
    return VPE___024root___eval_act(&(vlSymsp->TOP));
}

bool VPE::evalInact() {
    return VPE___024root___eval_inact(&(vlSymsp->TOP));
}

bool VPE::evalNba() {
    return VPE___024root___eval_nba(&(vlSymsp->TOP));
}

bool VPE::evalObs() {
    return VPE___024root___eval_obs(&(vlSymsp->TOP));
}

bool VPE::evalReact() {
    return VPE___024root___eval_react(&(vlSymsp->TOP));
}

void VPE::evalPostponed() {
    VPE___024root___eval_postponed(&(vlSymsp->TOP));
}

void VPE::evalFinal() {
    VPE___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersStl() {
    VPE___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersIco() {
    VPE___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersAct() {
    VPE___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersNba() {
    VPE___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersObs() {
    VPE___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VPE::dumpTriggersReact() {
    VPE___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool VPE::eventsPending() { return false; }

uint64_t VPE::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPE::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPE::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPE::hierName() const { return vlSymsp->name(); }
const char* VPE::modelName() const { return "VPE"; }
unsigned VPE::threads() const { return 1; }
void VPE::prepareClone() const { contextp()->prepareClone(); }
void VPE::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPE::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VPE___024root__trace_decl_types(VerilatedVcd* tracep);

void VPE___024root__trace_init_top(VPE___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VPE___024root__trace_decl_types(tracep);
    VPE___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPE___024root__trace_register(VPE___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPE::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPE::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 17);
    VPE___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
