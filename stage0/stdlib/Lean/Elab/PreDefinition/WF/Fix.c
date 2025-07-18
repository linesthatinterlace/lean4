// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Fix
// Imports: Lean.Data.Array Lean.Elab.PreDefinition.Basic Lean.Elab.PreDefinition.WF.Basic Lean.Elab.Tactic.Basic Lean.Meta.ArgsPacker Lean.Meta.ForEachExpr Lean.Meta.Match.MatcherApp.Transform Lean.Meta.Tactic.Cleanup Lean.Util.HasConstCache
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at___Lean_Meta_recordSynthPendingFailure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___boxed(lean_object**);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Option_register___at___Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0;
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___at___Lean_validateDefEqAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2;
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_withInfoTreeContext___at___Lean_Elab_Tactic_evalTactic_eval_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2;
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2;
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
static lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0;
static lean_object* l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at___Lean_Elab_Term_traceAtCmdPos_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object**);
static lean_object* l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1;
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1;
static lean_object* l_Lean_Elab_WF_solveDecreasingGoals___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___Lean_getConstInfo___at___Lean_Meta_mkConstWithFreshMVarLevels_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
static uint64_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0;
lean_object* l_instMonadEIO(lean_object*);
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___at___Lean_Elab_Term_ToDepElimPattern_main_unpack_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
static lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
double lean_float_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__3;
lean_object* l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecAppWithSyntax(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_solveDecreasingGoals___closed__1;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
static lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6;
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___boxed(lean_object**);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object**);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___Lean_Elab_Term_addAutoBoundImplicits_x27_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2;
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1;
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2;
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object**);
static lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2;
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0;
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
uint8_t l_Lean_Option_get___at_____private_Lean_Util_Profile_0__Lean_get__profiler_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4;
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3;
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10;
lean_object* l_Lean_Elab_pushInfoTree___at___Lean_Elab_pushInfoLeaf___at_____private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__0;
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0;
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___Lean_Elab_Term_throwErrorIfErrors_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___at___Lean_Meta_getLevel_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_initFn____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8;
static lean_object* l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
LEAN_EXPORT lean_object* l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__1;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__6;
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
static lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__2;
lean_object* l_Lean_instantiateMVars___at_____private_Lean_Meta_Basic_0__Lean_Meta_mkLevelErrorMessageCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object**);
static lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0;
static lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("debug", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("definition", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("wf", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("replaceRecApps", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_2 = l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_4 = l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Type check every step of the well-founded definition translation", 64, 64);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_2 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Elab", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("WF", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_2 = l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_4 = l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_5 = l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_6 = l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_7 = l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_8 = l_Lean_Name_mkStr7(x_7, x_6, x_5, x_4, x_3, x_2, x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_initFn____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_4 = l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_5 = l_Lean_Option_register___at___Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_4, 5);
lean_inc(x_7);
x_8 = l_Lean_mkRecAppWithSyntax(x_1, x_7);
x_9 = lean_box(0);
lean_inc(x_2);
x_10 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_8, x_9, x_2, x_3, x_4, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_mvarId_x21(x_11);
x_14 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0;
x_15 = lean_box(1);
x_16 = lean_unbox(x_15);
x_17 = l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(x_13, x_14, x_16, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_11);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_11);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0;
x_9 = lean_array_push(x_8, x_1);
x_10 = l_Lean_HasConstCache_containsUnsafe(x_9, x_2, x_6);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_set(x_3, x_12, x_7);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(x_1, x_2, x_3, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_3, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_uget(x_4, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = lean_apply_9(x_1, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_array_uset(x_4, x_3, x_19);
x_21 = 1;
x_22 = lean_usize_add(x_3, x_21);
x_23 = lean_array_uset(x_20, x_3, x_17);
x_3 = x_22;
x_4 = x_23;
x_12 = x_18;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_ctor_get(x_2, 12);
x_6 = l_Lean_checkTraceOption(x_5, x_4, x_1);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg(x_1, x_7, x_9);
return x_10;
}
}
static double _init_l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_5, 5);
x_9 = l_Lean_addMessageContextFull___at___Lean_Meta_recordSynthPendingFailure_spec__3(x_2, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 4);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; double x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
x_23 = lean_box(0);
x_24 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_22);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_22);
x_26 = lean_unbox(x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_26);
x_27 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
x_28 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_10);
lean_ctor_set(x_28, 2, x_27);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_28);
lean_ctor_set(x_12, 0, x_8);
x_29 = l_Lean_PersistentArray_push___redArg(x_21, x_12);
lean_ctor_set(x_14, 0, x_29);
x_30 = lean_st_ref_set(x_6, x_13, x_16);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint64_t x_37; lean_object* x_38; double x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_37 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_38 = lean_ctor_get(x_14, 0);
lean_inc(x_38);
lean_dec(x_14);
x_39 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
x_40 = lean_box(0);
x_41 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_42 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_float(x_42, sizeof(void*)*2, x_39);
lean_ctor_set_float(x_42, sizeof(void*)*2 + 8, x_39);
x_43 = lean_unbox(x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 16, x_43);
x_44 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
x_45 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_10);
lean_ctor_set(x_45, 2, x_44);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_45);
lean_ctor_set(x_12, 0, x_8);
x_46 = l_Lean_PersistentArray_push___redArg(x_38, x_12);
x_47 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_uint64(x_47, sizeof(void*)*1, x_37);
lean_ctor_set(x_13, 4, x_47);
x_48 = lean_st_ref_set(x_6, x_13, x_16);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
x_51 = lean_box(0);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint64_t x_61; lean_object* x_62; lean_object* x_63; double x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_53 = lean_ctor_get(x_13, 0);
x_54 = lean_ctor_get(x_13, 1);
x_55 = lean_ctor_get(x_13, 2);
x_56 = lean_ctor_get(x_13, 3);
x_57 = lean_ctor_get(x_13, 5);
x_58 = lean_ctor_get(x_13, 6);
x_59 = lean_ctor_get(x_13, 7);
x_60 = lean_ctor_get(x_13, 8);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_13);
x_61 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_62 = lean_ctor_get(x_14, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_63 = x_14;
} else {
 lean_dec_ref(x_14);
 x_63 = lean_box(0);
}
x_64 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
x_65 = lean_box(0);
x_66 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_67 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set_float(x_67, sizeof(void*)*2, x_64);
lean_ctor_set_float(x_67, sizeof(void*)*2 + 8, x_64);
x_68 = lean_unbox(x_65);
lean_ctor_set_uint8(x_67, sizeof(void*)*2 + 16, x_68);
x_69 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
x_70 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_10);
lean_ctor_set(x_70, 2, x_69);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_70);
lean_ctor_set(x_12, 0, x_8);
x_71 = l_Lean_PersistentArray_push___redArg(x_62, x_12);
if (lean_is_scalar(x_63)) {
 x_72 = lean_alloc_ctor(0, 1, 8);
} else {
 x_72 = x_63;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set_uint64(x_72, sizeof(void*)*1, x_61);
x_73 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_73, 0, x_53);
lean_ctor_set(x_73, 1, x_54);
lean_ctor_set(x_73, 2, x_55);
lean_ctor_set(x_73, 3, x_56);
lean_ctor_set(x_73, 4, x_72);
lean_ctor_set(x_73, 5, x_57);
lean_ctor_set(x_73, 6, x_58);
lean_ctor_set(x_73, 7, x_59);
lean_ctor_set(x_73, 8, x_60);
x_74 = lean_st_ref_set(x_6, x_73, x_16);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_76 = x_74;
} else {
 lean_dec_ref(x_74);
 x_76 = lean_box(0);
}
x_77 = lean_box(0);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint64_t x_89; lean_object* x_90; lean_object* x_91; double x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_79 = lean_ctor_get(x_12, 1);
lean_inc(x_79);
lean_dec(x_12);
x_80 = lean_ctor_get(x_13, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_13, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_13, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_13, 3);
lean_inc(x_83);
x_84 = lean_ctor_get(x_13, 5);
lean_inc(x_84);
x_85 = lean_ctor_get(x_13, 6);
lean_inc(x_85);
x_86 = lean_ctor_get(x_13, 7);
lean_inc(x_86);
x_87 = lean_ctor_get(x_13, 8);
lean_inc(x_87);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 lean_ctor_release(x_13, 4);
 lean_ctor_release(x_13, 5);
 lean_ctor_release(x_13, 6);
 lean_ctor_release(x_13, 7);
 lean_ctor_release(x_13, 8);
 x_88 = x_13;
} else {
 lean_dec_ref(x_13);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_90 = lean_ctor_get(x_14, 0);
lean_inc(x_90);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_91 = x_14;
} else {
 lean_dec_ref(x_14);
 x_91 = lean_box(0);
}
x_92 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
x_93 = lean_box(0);
x_94 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_95 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_95, 0, x_1);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set_float(x_95, sizeof(void*)*2, x_92);
lean_ctor_set_float(x_95, sizeof(void*)*2 + 8, x_92);
x_96 = lean_unbox(x_93);
lean_ctor_set_uint8(x_95, sizeof(void*)*2 + 16, x_96);
x_97 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
x_98 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_10);
lean_ctor_set(x_98, 2, x_97);
lean_inc(x_8);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_8);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Lean_PersistentArray_push___redArg(x_90, x_99);
if (lean_is_scalar(x_91)) {
 x_101 = lean_alloc_ctor(0, 1, 8);
} else {
 x_101 = x_91;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set_uint64(x_101, sizeof(void*)*1, x_89);
if (lean_is_scalar(x_88)) {
 x_102 = lean_alloc_ctor(0, 9, 0);
} else {
 x_102 = x_88;
}
lean_ctor_set(x_102, 0, x_80);
lean_ctor_set(x_102, 1, x_81);
lean_ctor_set(x_102, 2, x_82);
lean_ctor_set(x_102, 3, x_83);
lean_ctor_set(x_102, 4, x_101);
lean_ctor_set(x_102, 5, x_84);
lean_ctor_set(x_102, 6, x_85);
lean_ctor_set(x_102, 7, x_86);
lean_ctor_set(x_102, 8, x_87);
x_103 = lean_st_ref_set(x_6, x_102, x_79);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_105 = x_103;
} else {
 lean_dec_ref(x_103);
 x_105 = lean_box(0);
}
x_106 = lean_box(0);
if (lean_is_scalar(x_105)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_105;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_104);
return x_107;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(x_1, x_2, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_2 = l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("replaceRecApp: eta-expanding", 28, 28);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = l_Lean_Expr_getAppNumArgs(x_4);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_2, x_27);
x_29 = lean_nat_dec_lt(x_26, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
lean_inc(x_26);
x_31 = lean_mk_array(x_26, x_30);
x_32 = lean_nat_sub(x_26, x_27);
lean_dec(x_26);
x_33 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_4, x_31, x_32);
x_34 = l_Lean_instInhabitedExpr;
x_35 = lean_array_get(x_34, x_33, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_36 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_3);
x_39 = l_Lean_Expr_app___override(x_3, x_37);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_39);
x_40 = lean_infer_type(x_39, x_8, x_9, x_10, x_11, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_43 = lean_whnf(x_41, x_8, x_9, x_10, x_11, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Expr_bindingDomain_x21(x_44);
lean_dec(x_44);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_47 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(x_46, x_8, x_9, x_10, x_11, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; size_t x_54; size_t x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_50, 0, x_1);
lean_closure_set(x_50, 1, x_2);
lean_closure_set(x_50, 2, x_3);
x_51 = lean_array_get_size(x_33);
x_52 = l_Array_toSubarray___redArg(x_33, x_28, x_51);
x_53 = l_Array_ofSubarray___redArg(x_52);
lean_dec(x_52);
x_54 = lean_array_size(x_53);
x_55 = 0;
x_56 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_50, x_54, x_55, x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_49);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = l_Lean_Expr_app___override(x_39, x_48);
x_60 = l_Lean_mkAppN(x_59, x_58);
lean_dec(x_58);
lean_ctor_set(x_56, 0, x_60);
return x_56;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_56, 0);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_56);
x_63 = l_Lean_Expr_app___override(x_39, x_48);
x_64 = l_Lean_mkAppN(x_63, x_61);
lean_dec(x_61);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_48);
lean_dec(x_39);
x_66 = !lean_is_exclusive(x_56);
if (x_66 == 0)
{
return x_56;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_56, 0);
x_68 = lean_ctor_get(x_56, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_56);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_dec(x_39);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_47;
}
}
else
{
lean_dec(x_39);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_43;
}
}
else
{
lean_dec(x_39);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_40;
}
}
else
{
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_36;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
lean_dec(x_28);
lean_dec(x_26);
x_70 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1;
x_71 = l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg(x_70, x_10, x_12);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_unbox(x_72);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_13 = x_5;
x_14 = x_6;
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_10;
x_19 = x_11;
x_20 = x_74;
goto block_25;
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_71);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_76 = lean_ctor_get(x_71, 1);
x_77 = lean_ctor_get(x_71, 0);
lean_dec(x_77);
x_78 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3;
lean_inc(x_4);
x_79 = l_Lean_indentExpr(x_4);
lean_ctor_set_tag(x_71, 7);
lean_ctor_set(x_71, 1, x_79);
lean_ctor_set(x_71, 0, x_78);
x_80 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_81 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(x_70, x_81, x_8, x_9, x_10, x_11, x_76);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_13 = x_5;
x_14 = x_6;
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_10;
x_19 = x_11;
x_20 = x_83;
goto block_25;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_84 = lean_ctor_get(x_71, 1);
lean_inc(x_84);
lean_dec(x_71);
x_85 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3;
lean_inc(x_4);
x_86 = l_Lean_indentExpr(x_4);
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(x_70, x_89, x_8, x_9, x_10, x_11, x_84);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_13 = x_5;
x_14 = x_6;
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_10;
x_19 = x_11;
x_20 = x_91;
goto block_25;
}
}
}
block_25:
{
lean_object* x_21; 
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
x_21 = l_Lean_Meta_etaExpand(x_4, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_22, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_23);
return x_24;
}
else
{
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at___Lean_Meta_recordSynthPendingFailure_spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_2, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg___lam__0), 9, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___redArg(x_2, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Type not preserved transforming", 31, 31);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nto", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nType was", 9, 9);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nand now is", 11, 11);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Type error introduced when transforming", 39, 39);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_95; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_95 = l_Lean_Meta_isTypeCorrect(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_unbox(x_96);
lean_dec(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
x_99 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
x_100 = l_Lean_indentExpr(x_2);
x_101 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
x_103 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = l_Lean_indentExpr(x_1);
x_105 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
x_106 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_107 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_107, x_6, x_7, x_8, x_9, x_98);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_108;
}
else
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_95, 1);
lean_inc(x_109);
lean_dec(x_95);
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_109;
goto block_94;
}
}
else
{
uint8_t x_110; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_95);
if (x_110 == 0)
{
return x_95;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_95, 0);
x_112 = lean_ctor_get(x_95, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_95);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
block_94:
{
lean_object* x_19; 
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_2);
x_19 = lean_infer_type(x_2, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_1);
x_22 = lean_infer_type(x_1, x_14, x_15, x_16, x_17, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_23);
lean_inc(x_20);
x_25 = l_Lean_Meta_isExprDefEq(x_20, x_23, x_14, x_15, x_16, x_17, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_29 = l_Lean_Meta_addPPExplicitToExposeDiff(x_20, x_23, x_14, x_15, x_16, x_17, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 1);
x_35 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
x_36 = l_Lean_indentExpr(x_2);
lean_ctor_set_tag(x_30, 7);
lean_ctor_set(x_30, 1, x_36);
lean_ctor_set(x_30, 0, x_35);
x_37 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_indentExpr(x_1);
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_indentExpr(x_33);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_indentExpr(x_34);
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_50, x_14, x_15, x_16, x_17, x_31);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_52 = lean_ctor_get(x_30, 0);
x_53 = lean_ctor_get(x_30, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_30);
x_54 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
x_55 = l_Lean_indentExpr(x_2);
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_indentExpr(x_1);
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_indentExpr(x_52);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_indentExpr(x_53);
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_70, x_14, x_15, x_16, x_17, x_31);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
return x_71;
}
}
else
{
uint8_t x_72; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_29);
if (x_72 == 0)
{
return x_29;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_29, 0);
x_74 = lean_ctor_get(x_29, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_29);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_25);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_25, 0);
lean_dec(x_77);
x_78 = lean_box(0);
lean_ctor_set(x_25, 0, x_78);
return x_25;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_25, 1);
lean_inc(x_79);
lean_dec(x_25);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_25);
if (x_82 == 0)
{
return x_25;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_25, 0);
x_84 = lean_ctor_get(x_25, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_25);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_22);
if (x_86 == 0)
{
return x_22;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_22, 0);
x_88 = lean_ctor_get(x_22, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_22);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_19);
if (x_90 == 0)
{
return x_19;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_19, 0);
x_92 = lean_ctor_get(x_19, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_19);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
return x_1;
}
}
static uint64_t _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; uint64_t x_3; 
x_1 = lean_box(0);
x_2 = lean_unbox(x_1);
x_3 = l_Lean_Meta_TransparencyMode_toUInt64(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 2);
lean_inc(x_16);
x_17 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0;
x_18 = l_Lean_Option_get___at_____private_Lean_Util_Profile_0__Lean_get__profiler_spec__0(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
else
{
uint8_t x_19; 
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_8);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
uint64_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint8_t x_32; lean_object* x_33; 
x_22 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
lean_inc(x_14);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 10, 2);
lean_closure_set(x_23, 0, x_14);
lean_closure_set(x_23, 1, x_4);
x_24 = lean_box(0);
x_25 = lean_box(0);
x_26 = lean_unbox(x_24);
lean_ctor_set_uint8(x_20, 9, x_26);
x_27 = 2;
x_28 = lean_uint64_shift_right(x_22, x_27);
x_29 = lean_uint64_shift_left(x_28, x_27);
x_30 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1;
x_31 = lean_uint64_lor(x_29, x_30);
lean_ctor_set_uint64(x_8, sizeof(void*)*7, x_31);
x_32 = lean_unbox(x_25);
x_33 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(x_23, x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_14);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_33, 0);
lean_dec(x_39);
lean_ctor_set_tag(x_33, 0);
lean_ctor_set(x_33, 0, x_14);
return x_33;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_dec(x_33);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
x_42 = !lean_is_exclusive(x_33);
if (x_42 == 0)
{
return x_33;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_33, 0);
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_33);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
else
{
uint64_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; uint8_t x_74; lean_object* x_75; 
x_46 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_47 = lean_ctor_get_uint8(x_20, 0);
x_48 = lean_ctor_get_uint8(x_20, 1);
x_49 = lean_ctor_get_uint8(x_20, 2);
x_50 = lean_ctor_get_uint8(x_20, 3);
x_51 = lean_ctor_get_uint8(x_20, 4);
x_52 = lean_ctor_get_uint8(x_20, 5);
x_53 = lean_ctor_get_uint8(x_20, 6);
x_54 = lean_ctor_get_uint8(x_20, 7);
x_55 = lean_ctor_get_uint8(x_20, 8);
x_56 = lean_ctor_get_uint8(x_20, 10);
x_57 = lean_ctor_get_uint8(x_20, 11);
x_58 = lean_ctor_get_uint8(x_20, 12);
x_59 = lean_ctor_get_uint8(x_20, 13);
x_60 = lean_ctor_get_uint8(x_20, 14);
x_61 = lean_ctor_get_uint8(x_20, 15);
x_62 = lean_ctor_get_uint8(x_20, 16);
x_63 = lean_ctor_get_uint8(x_20, 17);
lean_dec(x_20);
lean_inc(x_14);
x_64 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 10, 2);
lean_closure_set(x_64, 0, x_14);
lean_closure_set(x_64, 1, x_4);
x_65 = lean_box(0);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_67, 0, x_47);
lean_ctor_set_uint8(x_67, 1, x_48);
lean_ctor_set_uint8(x_67, 2, x_49);
lean_ctor_set_uint8(x_67, 3, x_50);
lean_ctor_set_uint8(x_67, 4, x_51);
lean_ctor_set_uint8(x_67, 5, x_52);
lean_ctor_set_uint8(x_67, 6, x_53);
lean_ctor_set_uint8(x_67, 7, x_54);
lean_ctor_set_uint8(x_67, 8, x_55);
x_68 = lean_unbox(x_65);
lean_ctor_set_uint8(x_67, 9, x_68);
lean_ctor_set_uint8(x_67, 10, x_56);
lean_ctor_set_uint8(x_67, 11, x_57);
lean_ctor_set_uint8(x_67, 12, x_58);
lean_ctor_set_uint8(x_67, 13, x_59);
lean_ctor_set_uint8(x_67, 14, x_60);
lean_ctor_set_uint8(x_67, 15, x_61);
lean_ctor_set_uint8(x_67, 16, x_62);
lean_ctor_set_uint8(x_67, 17, x_63);
x_69 = 2;
x_70 = lean_uint64_shift_right(x_46, x_69);
x_71 = lean_uint64_shift_left(x_70, x_69);
x_72 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1;
x_73 = lean_uint64_lor(x_71, x_72);
lean_ctor_set(x_8, 0, x_67);
lean_ctor_set_uint64(x_8, sizeof(void*)*7, x_73);
x_74 = lean_unbox(x_66);
x_75 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(x_64, x_74, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_77 = x_75;
} else {
 lean_dec_ref(x_75);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_14);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
else
{
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_75, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_80 = x_75;
} else {
 lean_dec_ref(x_75);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_80;
 lean_ctor_set_tag(x_81, 0);
}
lean_ctor_set(x_81, 0, x_14);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_14);
x_82 = lean_ctor_get(x_75, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_84 = x_75;
} else {
 lean_dec_ref(x_75);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
else
{
lean_object* x_86; uint64_t x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; uint64_t x_120; uint64_t x_121; uint64_t x_122; uint64_t x_123; uint64_t x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; 
x_86 = lean_ctor_get(x_8, 0);
x_87 = lean_ctor_get_uint64(x_8, sizeof(void*)*7);
x_88 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_89 = lean_ctor_get(x_8, 1);
x_90 = lean_ctor_get(x_8, 2);
x_91 = lean_ctor_get(x_8, 3);
x_92 = lean_ctor_get(x_8, 4);
x_93 = lean_ctor_get(x_8, 5);
x_94 = lean_ctor_get(x_8, 6);
x_95 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_96 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_86);
lean_dec(x_8);
x_97 = lean_ctor_get_uint8(x_86, 0);
x_98 = lean_ctor_get_uint8(x_86, 1);
x_99 = lean_ctor_get_uint8(x_86, 2);
x_100 = lean_ctor_get_uint8(x_86, 3);
x_101 = lean_ctor_get_uint8(x_86, 4);
x_102 = lean_ctor_get_uint8(x_86, 5);
x_103 = lean_ctor_get_uint8(x_86, 6);
x_104 = lean_ctor_get_uint8(x_86, 7);
x_105 = lean_ctor_get_uint8(x_86, 8);
x_106 = lean_ctor_get_uint8(x_86, 10);
x_107 = lean_ctor_get_uint8(x_86, 11);
x_108 = lean_ctor_get_uint8(x_86, 12);
x_109 = lean_ctor_get_uint8(x_86, 13);
x_110 = lean_ctor_get_uint8(x_86, 14);
x_111 = lean_ctor_get_uint8(x_86, 15);
x_112 = lean_ctor_get_uint8(x_86, 16);
x_113 = lean_ctor_get_uint8(x_86, 17);
if (lean_is_exclusive(x_86)) {
 x_114 = x_86;
} else {
 lean_dec_ref(x_86);
 x_114 = lean_box(0);
}
lean_inc(x_14);
x_115 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 10, 2);
lean_closure_set(x_115, 0, x_14);
lean_closure_set(x_115, 1, x_4);
x_116 = lean_box(0);
x_117 = lean_box(0);
if (lean_is_scalar(x_114)) {
 x_118 = lean_alloc_ctor(0, 0, 18);
} else {
 x_118 = x_114;
}
lean_ctor_set_uint8(x_118, 0, x_97);
lean_ctor_set_uint8(x_118, 1, x_98);
lean_ctor_set_uint8(x_118, 2, x_99);
lean_ctor_set_uint8(x_118, 3, x_100);
lean_ctor_set_uint8(x_118, 4, x_101);
lean_ctor_set_uint8(x_118, 5, x_102);
lean_ctor_set_uint8(x_118, 6, x_103);
lean_ctor_set_uint8(x_118, 7, x_104);
lean_ctor_set_uint8(x_118, 8, x_105);
x_119 = lean_unbox(x_116);
lean_ctor_set_uint8(x_118, 9, x_119);
lean_ctor_set_uint8(x_118, 10, x_106);
lean_ctor_set_uint8(x_118, 11, x_107);
lean_ctor_set_uint8(x_118, 12, x_108);
lean_ctor_set_uint8(x_118, 13, x_109);
lean_ctor_set_uint8(x_118, 14, x_110);
lean_ctor_set_uint8(x_118, 15, x_111);
lean_ctor_set_uint8(x_118, 16, x_112);
lean_ctor_set_uint8(x_118, 17, x_113);
x_120 = 2;
x_121 = lean_uint64_shift_right(x_87, x_120);
x_122 = lean_uint64_shift_left(x_121, x_120);
x_123 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1;
x_124 = lean_uint64_lor(x_122, x_123);
x_125 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_125, 0, x_118);
lean_ctor_set(x_125, 1, x_89);
lean_ctor_set(x_125, 2, x_90);
lean_ctor_set(x_125, 3, x_91);
lean_ctor_set(x_125, 4, x_92);
lean_ctor_set(x_125, 5, x_93);
lean_ctor_set(x_125, 6, x_94);
lean_ctor_set_uint64(x_125, sizeof(void*)*7, x_124);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 8, x_88);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 9, x_95);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 10, x_96);
x_126 = lean_unbox(x_117);
x_127 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(x_115, x_126, x_5, x_6, x_7, x_125, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_129 = x_127;
} else {
 lean_dec_ref(x_127);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_14);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
else
{
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_127, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_132 = x_127;
} else {
 lean_dec_ref(x_127);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_132;
 lean_ctor_set_tag(x_133, 0);
}
lean_ctor_set(x_133, 0, x_14);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_14);
x_134 = lean_ctor_get(x_127, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_127, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_136 = x_127;
} else {
 lean_dec_ref(x_127);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
}
}
else
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_5, x_6, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg___lam__0), 11, 4);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_6);
lean_closure_set(x_13, 3, x_7);
x_14 = lean_box(1);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_unbox(x_14);
x_18 = lean_unbox(x_15);
x_19 = lean_unbox(x_14);
x_20 = lean_unbox(x_15);
x_21 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(x_1, x_17, x_18, x_19, x_20, x_16, x_13, x_4, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_16);
if (lean_obj_tag(x_21) == 0)
{
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
static lean_object* _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unknown constant '", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_unbox(x_15);
lean_inc(x_1);
x_17 = l_Lean_Environment_find_x3f(x_14, x_1, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_10);
x_18 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1;
x_19 = lean_unbox(x_15);
x_20 = l_Lean_MessageData_ofConstName(x_1, x_19);
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_23, x_5, x_6, x_7, x_8, x_13);
return x_24;
}
else
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
lean_ctor_set(x_10, 0, x_25);
return x_10;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_box(0);
x_30 = lean_unbox(x_29);
lean_inc(x_1);
x_31 = l_Lean_Environment_find_x3f(x_28, x_1, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1;
x_33 = lean_unbox(x_29);
x_34 = l_Lean_MessageData_ofConstName(x_1, x_33);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_37, x_5, x_6, x_7, x_8, x_27);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_1);
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_27);
return x_40;
}
}
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_instMonadEIO(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1), 7, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1), 9, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__1), 11, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0;
x_11 = l_ReaderT_instMonad___redArg(x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 2);
x_18 = lean_ctor_get(x_13, 3);
x_19 = lean_ctor_get(x_13, 4);
x_20 = lean_ctor_get(x_13, 1);
lean_dec(x_20);
x_21 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1;
x_22 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2;
lean_inc(x_16);
x_23 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_23, 0, x_16);
x_24 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_24, 0, x_16);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_26, 0, x_19);
x_27 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_27, 0, x_18);
x_28 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_28, 0, x_17);
lean_ctor_set(x_13, 4, x_26);
lean_ctor_set(x_13, 3, x_27);
lean_ctor_set(x_13, 2, x_28);
lean_ctor_set(x_13, 1, x_21);
lean_ctor_set(x_13, 0, x_25);
lean_ctor_set(x_11, 1, x_22);
x_29 = l_ReaderT_instMonad___redArg(x_11);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_dec(x_32);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 2);
x_36 = lean_ctor_get(x_31, 3);
x_37 = lean_ctor_get(x_31, 4);
x_38 = lean_ctor_get(x_31, 1);
lean_dec(x_38);
x_39 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
x_40 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_inc(x_34);
x_41 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_41, 0, x_34);
x_42 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_42, 0, x_34);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_44, 0, x_37);
x_45 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_45, 0, x_36);
x_46 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_46, 0, x_35);
lean_ctor_set(x_31, 4, x_44);
lean_ctor_set(x_31, 3, x_45);
lean_ctor_set(x_31, 2, x_46);
lean_ctor_set(x_31, 1, x_39);
lean_ctor_set(x_31, 0, x_43);
lean_ctor_set(x_29, 1, x_40);
x_47 = l_ReaderT_instMonad___redArg(x_29);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_dec(x_50);
x_51 = !lean_is_exclusive(x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_52 = lean_ctor_get(x_49, 0);
x_53 = lean_ctor_get(x_49, 2);
x_54 = lean_ctor_get(x_49, 3);
x_55 = lean_ctor_get(x_49, 4);
x_56 = lean_ctor_get(x_49, 1);
lean_dec(x_56);
x_57 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_58 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_52);
x_59 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_59, 0, x_52);
x_60 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_60, 0, x_52);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_62, 0, x_55);
x_63 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_63, 0, x_54);
x_64 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_64, 0, x_53);
lean_ctor_set(x_49, 4, x_62);
lean_ctor_set(x_49, 3, x_63);
lean_ctor_set(x_49, 2, x_64);
lean_ctor_set(x_49, 1, x_57);
lean_ctor_set(x_49, 0, x_61);
lean_ctor_set(x_47, 1, x_58);
x_65 = l_ReaderT_instMonad___redArg(x_47);
x_66 = lean_box(0);
x_67 = l_instInhabitedOfMonad___redArg(x_65, x_66);
x_68 = lean_panic_fn(x_67, x_1);
x_69 = lean_apply_8(x_68, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_70 = lean_ctor_get(x_49, 0);
x_71 = lean_ctor_get(x_49, 2);
x_72 = lean_ctor_get(x_49, 3);
x_73 = lean_ctor_get(x_49, 4);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_49);
x_74 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_75 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_70);
x_76 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_76, 0, x_70);
x_77 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_77, 0, x_70);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_79, 0, x_73);
x_80 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_80, 0, x_72);
x_81 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_81, 0, x_71);
x_82 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_82, 0, x_78);
lean_ctor_set(x_82, 1, x_74);
lean_ctor_set(x_82, 2, x_81);
lean_ctor_set(x_82, 3, x_80);
lean_ctor_set(x_82, 4, x_79);
lean_ctor_set(x_47, 1, x_75);
lean_ctor_set(x_47, 0, x_82);
x_83 = l_ReaderT_instMonad___redArg(x_47);
x_84 = lean_box(0);
x_85 = l_instInhabitedOfMonad___redArg(x_83, x_84);
x_86 = lean_panic_fn(x_85, x_1);
x_87 = lean_apply_8(x_86, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_88 = lean_ctor_get(x_47, 0);
lean_inc(x_88);
lean_dec(x_47);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 2);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 3);
lean_inc(x_91);
x_92 = lean_ctor_get(x_88, 4);
lean_inc(x_92);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 lean_ctor_release(x_88, 2);
 lean_ctor_release(x_88, 3);
 lean_ctor_release(x_88, 4);
 x_93 = x_88;
} else {
 lean_dec_ref(x_88);
 x_93 = lean_box(0);
}
x_94 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_95 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_89);
x_96 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_96, 0, x_89);
x_97 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_97, 0, x_89);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_99, 0, x_92);
x_100 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_100, 0, x_91);
x_101 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_101, 0, x_90);
if (lean_is_scalar(x_93)) {
 x_102 = lean_alloc_ctor(0, 5, 0);
} else {
 x_102 = x_93;
}
lean_ctor_set(x_102, 0, x_98);
lean_ctor_set(x_102, 1, x_94);
lean_ctor_set(x_102, 2, x_101);
lean_ctor_set(x_102, 3, x_100);
lean_ctor_set(x_102, 4, x_99);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_95);
x_104 = l_ReaderT_instMonad___redArg(x_103);
x_105 = lean_box(0);
x_106 = l_instInhabitedOfMonad___redArg(x_104, x_105);
x_107 = lean_panic_fn(x_106, x_1);
x_108 = lean_apply_8(x_107, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_109 = lean_ctor_get(x_31, 0);
x_110 = lean_ctor_get(x_31, 2);
x_111 = lean_ctor_get(x_31, 3);
x_112 = lean_ctor_get(x_31, 4);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_31);
x_113 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
x_114 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_inc(x_109);
x_115 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_115, 0, x_109);
x_116 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_116, 0, x_109);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_118, 0, x_112);
x_119 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_119, 0, x_111);
x_120 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_120, 0, x_110);
x_121 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_121, 0, x_117);
lean_ctor_set(x_121, 1, x_113);
lean_ctor_set(x_121, 2, x_120);
lean_ctor_set(x_121, 3, x_119);
lean_ctor_set(x_121, 4, x_118);
lean_ctor_set(x_29, 1, x_114);
lean_ctor_set(x_29, 0, x_121);
x_122 = l_ReaderT_instMonad___redArg(x_29);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_124 = x_122;
} else {
 lean_dec_ref(x_122);
 x_124 = lean_box(0);
}
x_125 = lean_ctor_get(x_123, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_123, 2);
lean_inc(x_126);
x_127 = lean_ctor_get(x_123, 3);
lean_inc(x_127);
x_128 = lean_ctor_get(x_123, 4);
lean_inc(x_128);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 lean_ctor_release(x_123, 2);
 lean_ctor_release(x_123, 3);
 lean_ctor_release(x_123, 4);
 x_129 = x_123;
} else {
 lean_dec_ref(x_123);
 x_129 = lean_box(0);
}
x_130 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_131 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_125);
x_132 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_132, 0, x_125);
x_133 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_133, 0, x_125);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_135, 0, x_128);
x_136 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_136, 0, x_127);
x_137 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_137, 0, x_126);
if (lean_is_scalar(x_129)) {
 x_138 = lean_alloc_ctor(0, 5, 0);
} else {
 x_138 = x_129;
}
lean_ctor_set(x_138, 0, x_134);
lean_ctor_set(x_138, 1, x_130);
lean_ctor_set(x_138, 2, x_137);
lean_ctor_set(x_138, 3, x_136);
lean_ctor_set(x_138, 4, x_135);
if (lean_is_scalar(x_124)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_124;
}
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_131);
x_140 = l_ReaderT_instMonad___redArg(x_139);
x_141 = lean_box(0);
x_142 = l_instInhabitedOfMonad___redArg(x_140, x_141);
x_143 = lean_panic_fn(x_142, x_1);
x_144 = lean_apply_8(x_143, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_145 = lean_ctor_get(x_29, 0);
lean_inc(x_145);
lean_dec(x_29);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 2);
lean_inc(x_147);
x_148 = lean_ctor_get(x_145, 3);
lean_inc(x_148);
x_149 = lean_ctor_get(x_145, 4);
lean_inc(x_149);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 lean_ctor_release(x_145, 2);
 lean_ctor_release(x_145, 3);
 lean_ctor_release(x_145, 4);
 x_150 = x_145;
} else {
 lean_dec_ref(x_145);
 x_150 = lean_box(0);
}
x_151 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
x_152 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_inc(x_146);
x_153 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_153, 0, x_146);
x_154 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_154, 0, x_146);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_156, 0, x_149);
x_157 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_157, 0, x_148);
x_158 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_158, 0, x_147);
if (lean_is_scalar(x_150)) {
 x_159 = lean_alloc_ctor(0, 5, 0);
} else {
 x_159 = x_150;
}
lean_ctor_set(x_159, 0, x_155);
lean_ctor_set(x_159, 1, x_151);
lean_ctor_set(x_159, 2, x_158);
lean_ctor_set(x_159, 3, x_157);
lean_ctor_set(x_159, 4, x_156);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_152);
x_161 = l_ReaderT_instMonad___redArg(x_160);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_163 = x_161;
} else {
 lean_dec_ref(x_161);
 x_163 = lean_box(0);
}
x_164 = lean_ctor_get(x_162, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_162, 2);
lean_inc(x_165);
x_166 = lean_ctor_get(x_162, 3);
lean_inc(x_166);
x_167 = lean_ctor_get(x_162, 4);
lean_inc(x_167);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 lean_ctor_release(x_162, 2);
 lean_ctor_release(x_162, 3);
 lean_ctor_release(x_162, 4);
 x_168 = x_162;
} else {
 lean_dec_ref(x_162);
 x_168 = lean_box(0);
}
x_169 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_170 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_164);
x_171 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_171, 0, x_164);
x_172 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_172, 0, x_164);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_174, 0, x_167);
x_175 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_175, 0, x_166);
x_176 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_176, 0, x_165);
if (lean_is_scalar(x_168)) {
 x_177 = lean_alloc_ctor(0, 5, 0);
} else {
 x_177 = x_168;
}
lean_ctor_set(x_177, 0, x_173);
lean_ctor_set(x_177, 1, x_169);
lean_ctor_set(x_177, 2, x_176);
lean_ctor_set(x_177, 3, x_175);
lean_ctor_set(x_177, 4, x_174);
if (lean_is_scalar(x_163)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_163;
}
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_170);
x_179 = l_ReaderT_instMonad___redArg(x_178);
x_180 = lean_box(0);
x_181 = l_instInhabitedOfMonad___redArg(x_179, x_180);
x_182 = lean_panic_fn(x_181, x_1);
x_183 = lean_apply_8(x_182, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_183;
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_184 = lean_ctor_get(x_13, 0);
x_185 = lean_ctor_get(x_13, 2);
x_186 = lean_ctor_get(x_13, 3);
x_187 = lean_ctor_get(x_13, 4);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_13);
x_188 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1;
x_189 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2;
lean_inc(x_184);
x_190 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_190, 0, x_184);
x_191 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_191, 0, x_184);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_193, 0, x_187);
x_194 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_194, 0, x_186);
x_195 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_195, 0, x_185);
x_196 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_196, 0, x_192);
lean_ctor_set(x_196, 1, x_188);
lean_ctor_set(x_196, 2, x_195);
lean_ctor_set(x_196, 3, x_194);
lean_ctor_set(x_196, 4, x_193);
lean_ctor_set(x_11, 1, x_189);
lean_ctor_set(x_11, 0, x_196);
x_197 = l_ReaderT_instMonad___redArg(x_11);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_199 = x_197;
} else {
 lean_dec_ref(x_197);
 x_199 = lean_box(0);
}
x_200 = lean_ctor_get(x_198, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_198, 2);
lean_inc(x_201);
x_202 = lean_ctor_get(x_198, 3);
lean_inc(x_202);
x_203 = lean_ctor_get(x_198, 4);
lean_inc(x_203);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 lean_ctor_release(x_198, 2);
 lean_ctor_release(x_198, 3);
 lean_ctor_release(x_198, 4);
 x_204 = x_198;
} else {
 lean_dec_ref(x_198);
 x_204 = lean_box(0);
}
x_205 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
x_206 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_inc(x_200);
x_207 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_207, 0, x_200);
x_208 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_208, 0, x_200);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_210, 0, x_203);
x_211 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_211, 0, x_202);
x_212 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_212, 0, x_201);
if (lean_is_scalar(x_204)) {
 x_213 = lean_alloc_ctor(0, 5, 0);
} else {
 x_213 = x_204;
}
lean_ctor_set(x_213, 0, x_209);
lean_ctor_set(x_213, 1, x_205);
lean_ctor_set(x_213, 2, x_212);
lean_ctor_set(x_213, 3, x_211);
lean_ctor_set(x_213, 4, x_210);
if (lean_is_scalar(x_199)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_199;
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_206);
x_215 = l_ReaderT_instMonad___redArg(x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 x_217 = x_215;
} else {
 lean_dec_ref(x_215);
 x_217 = lean_box(0);
}
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_216, 2);
lean_inc(x_219);
x_220 = lean_ctor_get(x_216, 3);
lean_inc(x_220);
x_221 = lean_ctor_get(x_216, 4);
lean_inc(x_221);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 lean_ctor_release(x_216, 2);
 lean_ctor_release(x_216, 3);
 lean_ctor_release(x_216, 4);
 x_222 = x_216;
} else {
 lean_dec_ref(x_216);
 x_222 = lean_box(0);
}
x_223 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_224 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_218);
x_225 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_225, 0, x_218);
x_226 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_226, 0, x_218);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_228, 0, x_221);
x_229 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_229, 0, x_220);
x_230 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_230, 0, x_219);
if (lean_is_scalar(x_222)) {
 x_231 = lean_alloc_ctor(0, 5, 0);
} else {
 x_231 = x_222;
}
lean_ctor_set(x_231, 0, x_227);
lean_ctor_set(x_231, 1, x_223);
lean_ctor_set(x_231, 2, x_230);
lean_ctor_set(x_231, 3, x_229);
lean_ctor_set(x_231, 4, x_228);
if (lean_is_scalar(x_217)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_217;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_224);
x_233 = l_ReaderT_instMonad___redArg(x_232);
x_234 = lean_box(0);
x_235 = l_instInhabitedOfMonad___redArg(x_233, x_234);
x_236 = lean_panic_fn(x_235, x_1);
x_237 = lean_apply_8(x_236, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_237;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_238 = lean_ctor_get(x_11, 0);
lean_inc(x_238);
lean_dec(x_11);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 2);
lean_inc(x_240);
x_241 = lean_ctor_get(x_238, 3);
lean_inc(x_241);
x_242 = lean_ctor_get(x_238, 4);
lean_inc(x_242);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 lean_ctor_release(x_238, 2);
 lean_ctor_release(x_238, 3);
 lean_ctor_release(x_238, 4);
 x_243 = x_238;
} else {
 lean_dec_ref(x_238);
 x_243 = lean_box(0);
}
x_244 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1;
x_245 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2;
lean_inc(x_239);
x_246 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_246, 0, x_239);
x_247 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_247, 0, x_239);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_249, 0, x_242);
x_250 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_250, 0, x_241);
x_251 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_251, 0, x_240);
if (lean_is_scalar(x_243)) {
 x_252 = lean_alloc_ctor(0, 5, 0);
} else {
 x_252 = x_243;
}
lean_ctor_set(x_252, 0, x_248);
lean_ctor_set(x_252, 1, x_244);
lean_ctor_set(x_252, 2, x_251);
lean_ctor_set(x_252, 3, x_250);
lean_ctor_set(x_252, 4, x_249);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_245);
x_254 = l_ReaderT_instMonad___redArg(x_253);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_256 = x_254;
} else {
 lean_dec_ref(x_254);
 x_256 = lean_box(0);
}
x_257 = lean_ctor_get(x_255, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_255, 2);
lean_inc(x_258);
x_259 = lean_ctor_get(x_255, 3);
lean_inc(x_259);
x_260 = lean_ctor_get(x_255, 4);
lean_inc(x_260);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 lean_ctor_release(x_255, 2);
 lean_ctor_release(x_255, 3);
 lean_ctor_release(x_255, 4);
 x_261 = x_255;
} else {
 lean_dec_ref(x_255);
 x_261 = lean_box(0);
}
x_262 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3;
x_263 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4;
lean_inc(x_257);
x_264 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_264, 0, x_257);
x_265 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_265, 0, x_257);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_267, 0, x_260);
x_268 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_268, 0, x_259);
x_269 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_269, 0, x_258);
if (lean_is_scalar(x_261)) {
 x_270 = lean_alloc_ctor(0, 5, 0);
} else {
 x_270 = x_261;
}
lean_ctor_set(x_270, 0, x_266);
lean_ctor_set(x_270, 1, x_262);
lean_ctor_set(x_270, 2, x_269);
lean_ctor_set(x_270, 3, x_268);
lean_ctor_set(x_270, 4, x_267);
if (lean_is_scalar(x_256)) {
 x_271 = lean_alloc_ctor(0, 2, 0);
} else {
 x_271 = x_256;
}
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_263);
x_272 = l_ReaderT_instMonad___redArg(x_271);
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_274 = x_272;
} else {
 lean_dec_ref(x_272);
 x_274 = lean_box(0);
}
x_275 = lean_ctor_get(x_273, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_273, 2);
lean_inc(x_276);
x_277 = lean_ctor_get(x_273, 3);
lean_inc(x_277);
x_278 = lean_ctor_get(x_273, 4);
lean_inc(x_278);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 lean_ctor_release(x_273, 2);
 lean_ctor_release(x_273, 3);
 lean_ctor_release(x_273, 4);
 x_279 = x_273;
} else {
 lean_dec_ref(x_273);
 x_279 = lean_box(0);
}
x_280 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5;
x_281 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6;
lean_inc(x_275);
x_282 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_282, 0, x_275);
x_283 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_283, 0, x_275);
x_284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_285, 0, x_278);
x_286 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_286, 0, x_277);
x_287 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_287, 0, x_276);
if (lean_is_scalar(x_279)) {
 x_288 = lean_alloc_ctor(0, 5, 0);
} else {
 x_288 = x_279;
}
lean_ctor_set(x_288, 0, x_284);
lean_ctor_set(x_288, 1, x_280);
lean_ctor_set(x_288, 2, x_287);
lean_ctor_set(x_288, 3, x_286);
lean_ctor_set(x_288, 4, x_285);
if (lean_is_scalar(x_274)) {
 x_289 = lean_alloc_ctor(0, 2, 0);
} else {
 x_289 = x_274;
}
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_281);
x_290 = l_ReaderT_instMonad___redArg(x_289);
x_291 = lean_box(0);
x_292 = l_instInhabitedOfMonad___redArg(x_290, x_291);
x_293 = lean_panic_fn(x_292, x_1);
x_294 = lean_apply_8(x_293, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_294;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_ref_get(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(x_7, x_1);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(x_11, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg(x_1, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.Match.MatcherApp.Basic", 32, 32);
return x_1;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.matchMatcherApp\?", 26, 26);
return x_1;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2;
x_2 = lean_unsigned_to_nat(53u);
x_3 = lean_unsigned_to_nat(63u);
x_4 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1;
x_5 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 6)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_ctor_get(x_16, 4);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_push(x_2, x_18);
x_1 = x_13;
x_2 = x_19;
x_10 = x_17;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_15);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_23 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_1 = x_13;
x_10 = x_24;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
return x_14;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg(x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 6)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get(x_17, 4);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_push(x_3, x_19);
x_21 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg(x_14, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_16);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_dec(x_15);
x_23 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_15);
if (x_31 == 0)
{
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 0);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_11) == 4)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_50; uint8_t x_51; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_12);
x_50 = l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg(x_12, x_9, x_10);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
x_54 = l_Lean_instInhabitedExpr;
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_free_object(x_50);
x_55 = lean_st_ref_get(x_9, x_53);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
if (x_2 == 0)
{
lean_dec(x_56);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
goto block_146;
}
else
{
lean_object* x_147; uint8_t x_148; 
x_147 = lean_ctor_get(x_56, 0);
lean_inc(x_147);
lean_dec(x_56);
lean_inc(x_12);
x_148 = l_Lean_isCasesOnRecursor(x_147, x_12);
if (x_148 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
goto block_146;
}
else
{
if (lean_obj_tag(x_12) == 0)
{
x_58 = x_12;
goto block_143;
}
else
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_12, 0);
lean_inc(x_149);
x_58 = x_149;
goto block_143;
}
}
}
block_143:
{
lean_object* x_59; 
x_59 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_57);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 5)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
lean_dec(x_60);
x_62 = !lean_is_exclusive(x_59);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_63 = lean_ctor_get(x_59, 1);
x_64 = lean_ctor_get(x_59, 0);
lean_dec(x_64);
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_61, 2);
lean_inc(x_67);
x_68 = lean_ctor_get(x_61, 4);
lean_inc(x_68);
x_69 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_70 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_70);
x_71 = lean_mk_array(x_70, x_69);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_sub(x_70, x_72);
lean_dec(x_70);
x_74 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_71, x_73);
x_75 = lean_nat_add(x_66, x_72);
x_76 = lean_nat_add(x_75, x_67);
x_77 = lean_nat_add(x_76, x_72);
lean_dec(x_76);
x_78 = l_Lean_InductiveVal_numCtors(x_61);
lean_dec(x_61);
x_79 = lean_nat_add(x_77, x_78);
lean_dec(x_78);
x_80 = lean_array_get_size(x_74);
x_81 = lean_nat_dec_le(x_79, x_80);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_77);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = lean_box(0);
lean_ctor_set(x_59, 0, x_82);
return x_59;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
lean_free_object(x_59);
x_83 = lean_ctor_get(x_65, 1);
lean_inc(x_83);
lean_dec(x_65);
x_84 = lean_unsigned_to_nat(0u);
lean_inc(x_66);
lean_inc(x_74);
x_85 = l_Array_toSubarray___redArg(x_74, x_84, x_66);
x_86 = lean_array_get(x_54, x_74, x_66);
lean_dec(x_66);
lean_inc(x_77);
lean_inc(x_74);
x_87 = l_Array_toSubarray___redArg(x_74, x_75, x_77);
x_88 = lean_nat_add(x_67, x_72);
lean_dec(x_67);
x_89 = lean_box(0);
x_90 = lean_mk_array(x_88, x_89);
lean_inc(x_79);
lean_inc(x_74);
x_91 = l_Array_toSubarray___redArg(x_74, x_77, x_79);
x_92 = l_Array_toSubarray___redArg(x_74, x_79, x_80);
x_93 = l_List_lengthTR___redArg(x_83);
lean_dec(x_83);
x_94 = l_List_lengthTR___redArg(x_13);
x_95 = lean_nat_dec_eq(x_93, x_94);
lean_dec(x_94);
lean_dec(x_93);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0;
x_14 = x_63;
x_15 = x_84;
x_16 = x_90;
x_17 = x_85;
x_18 = x_86;
x_19 = x_87;
x_20 = x_68;
x_21 = x_92;
x_22 = x_91;
x_23 = x_96;
goto block_49;
}
else
{
lean_object* x_97; 
x_97 = lean_box(0);
x_14 = x_63;
x_15 = x_84;
x_16 = x_90;
x_17 = x_85;
x_18 = x_86;
x_19 = x_87;
x_20 = x_68;
x_21 = x_92;
x_22 = x_91;
x_23 = x_97;
goto block_49;
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_98 = lean_ctor_get(x_59, 1);
lean_inc(x_98);
lean_dec(x_59);
x_99 = lean_ctor_get(x_61, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_61, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_61, 2);
lean_inc(x_101);
x_102 = lean_ctor_get(x_61, 4);
lean_inc(x_102);
x_103 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_104 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_104);
x_105 = lean_mk_array(x_104, x_103);
x_106 = lean_unsigned_to_nat(1u);
x_107 = lean_nat_sub(x_104, x_106);
lean_dec(x_104);
x_108 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_105, x_107);
x_109 = lean_nat_add(x_100, x_106);
x_110 = lean_nat_add(x_109, x_101);
x_111 = lean_nat_add(x_110, x_106);
lean_dec(x_110);
x_112 = l_Lean_InductiveVal_numCtors(x_61);
lean_dec(x_61);
x_113 = lean_nat_add(x_111, x_112);
lean_dec(x_112);
x_114 = lean_array_get_size(x_108);
x_115 = lean_nat_dec_le(x_113, x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_98);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_118 = lean_ctor_get(x_99, 1);
lean_inc(x_118);
lean_dec(x_99);
x_119 = lean_unsigned_to_nat(0u);
lean_inc(x_100);
lean_inc(x_108);
x_120 = l_Array_toSubarray___redArg(x_108, x_119, x_100);
x_121 = lean_array_get(x_54, x_108, x_100);
lean_dec(x_100);
lean_inc(x_111);
lean_inc(x_108);
x_122 = l_Array_toSubarray___redArg(x_108, x_109, x_111);
x_123 = lean_nat_add(x_101, x_106);
lean_dec(x_101);
x_124 = lean_box(0);
x_125 = lean_mk_array(x_123, x_124);
lean_inc(x_113);
lean_inc(x_108);
x_126 = l_Array_toSubarray___redArg(x_108, x_111, x_113);
x_127 = l_Array_toSubarray___redArg(x_108, x_113, x_114);
x_128 = l_List_lengthTR___redArg(x_118);
lean_dec(x_118);
x_129 = l_List_lengthTR___redArg(x_13);
x_130 = lean_nat_dec_eq(x_128, x_129);
lean_dec(x_129);
lean_dec(x_128);
if (x_130 == 0)
{
lean_object* x_131; 
x_131 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0;
x_14 = x_98;
x_15 = x_119;
x_16 = x_125;
x_17 = x_120;
x_18 = x_121;
x_19 = x_122;
x_20 = x_102;
x_21 = x_127;
x_22 = x_126;
x_23 = x_131;
goto block_49;
}
else
{
lean_object* x_132; 
x_132 = lean_box(0);
x_14 = x_98;
x_15 = x_119;
x_16 = x_125;
x_17 = x_120;
x_18 = x_121;
x_19 = x_122;
x_20 = x_102;
x_21 = x_127;
x_22 = x_126;
x_23 = x_132;
goto block_49;
}
}
}
}
else
{
uint8_t x_133; 
lean_dec(x_60);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_133 = !lean_is_exclusive(x_59);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; 
x_134 = lean_ctor_get(x_59, 0);
lean_dec(x_134);
x_135 = lean_box(0);
lean_ctor_set(x_59, 0, x_135);
return x_59;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_59, 1);
lean_inc(x_136);
lean_dec(x_59);
x_137 = lean_box(0);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_139 = !lean_is_exclusive(x_59);
if (x_139 == 0)
{
return x_59;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_59, 0);
x_141 = lean_ctor_get(x_59, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_59);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
block_146:
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_box(0);
x_145 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(x_144, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_57);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_145;
}
}
else
{
uint8_t x_150; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_150 = !lean_is_exclusive(x_52);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_151 = lean_ctor_get(x_52, 0);
x_152 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_153 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_153);
x_154 = lean_mk_array(x_153, x_152);
x_155 = lean_unsigned_to_nat(1u);
x_156 = lean_nat_sub(x_153, x_155);
lean_dec(x_153);
x_157 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_154, x_156);
x_158 = lean_array_get_size(x_157);
x_159 = l_Lean_Meta_Match_MatcherInfo_arity(x_151);
x_160 = lean_nat_dec_lt(x_158, x_159);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_161 = lean_ctor_get(x_151, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_151, 1);
lean_inc(x_162);
x_163 = lean_ctor_get(x_151, 2);
lean_inc(x_163);
x_164 = lean_ctor_get(x_151, 3);
lean_inc(x_164);
x_165 = lean_ctor_get(x_151, 4);
lean_inc(x_165);
x_166 = lean_array_mk(x_13);
x_167 = lean_unsigned_to_nat(0u);
lean_inc(x_161);
x_168 = l_Array_extract___redArg(x_157, x_167, x_161);
x_169 = lean_array_get(x_54, x_157, x_161);
x_170 = lean_nat_add(x_161, x_155);
lean_dec(x_161);
x_171 = lean_nat_add(x_170, x_162);
lean_dec(x_162);
lean_inc(x_171);
lean_inc(x_157);
x_172 = l_Array_toSubarray___redArg(x_157, x_170, x_171);
x_173 = l_Array_ofSubarray___redArg(x_172);
lean_dec(x_172);
x_174 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_151);
lean_dec(x_151);
x_175 = lean_nat_add(x_171, x_174);
lean_dec(x_174);
lean_inc(x_175);
lean_inc(x_157);
x_176 = l_Array_toSubarray___redArg(x_157, x_171, x_175);
x_177 = l_Array_ofSubarray___redArg(x_176);
lean_dec(x_176);
x_178 = l_Array_toSubarray___redArg(x_157, x_175, x_158);
x_179 = l_Array_ofSubarray___redArg(x_178);
lean_dec(x_178);
x_180 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_180, 0, x_12);
lean_ctor_set(x_180, 1, x_166);
lean_ctor_set(x_180, 2, x_164);
lean_ctor_set(x_180, 3, x_165);
lean_ctor_set(x_180, 4, x_168);
lean_ctor_set(x_180, 5, x_169);
lean_ctor_set(x_180, 6, x_173);
lean_ctor_set(x_180, 7, x_163);
lean_ctor_set(x_180, 8, x_177);
lean_ctor_set(x_180, 9, x_179);
lean_ctor_set(x_52, 0, x_180);
return x_50;
}
else
{
lean_object* x_181; 
lean_dec(x_158);
lean_dec(x_157);
lean_free_object(x_52);
lean_dec(x_151);
lean_dec(x_13);
lean_dec(x_12);
x_181 = lean_box(0);
lean_ctor_set(x_50, 0, x_181);
return x_50;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_182 = lean_ctor_get(x_52, 0);
lean_inc(x_182);
lean_dec(x_52);
x_183 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_184 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_184);
x_185 = lean_mk_array(x_184, x_183);
x_186 = lean_unsigned_to_nat(1u);
x_187 = lean_nat_sub(x_184, x_186);
lean_dec(x_184);
x_188 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_185, x_187);
x_189 = lean_array_get_size(x_188);
x_190 = l_Lean_Meta_Match_MatcherInfo_arity(x_182);
x_191 = lean_nat_dec_lt(x_189, x_190);
lean_dec(x_190);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_192 = lean_ctor_get(x_182, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_182, 1);
lean_inc(x_193);
x_194 = lean_ctor_get(x_182, 2);
lean_inc(x_194);
x_195 = lean_ctor_get(x_182, 3);
lean_inc(x_195);
x_196 = lean_ctor_get(x_182, 4);
lean_inc(x_196);
x_197 = lean_array_mk(x_13);
x_198 = lean_unsigned_to_nat(0u);
lean_inc(x_192);
x_199 = l_Array_extract___redArg(x_188, x_198, x_192);
x_200 = lean_array_get(x_54, x_188, x_192);
x_201 = lean_nat_add(x_192, x_186);
lean_dec(x_192);
x_202 = lean_nat_add(x_201, x_193);
lean_dec(x_193);
lean_inc(x_202);
lean_inc(x_188);
x_203 = l_Array_toSubarray___redArg(x_188, x_201, x_202);
x_204 = l_Array_ofSubarray___redArg(x_203);
lean_dec(x_203);
x_205 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_182);
lean_dec(x_182);
x_206 = lean_nat_add(x_202, x_205);
lean_dec(x_205);
lean_inc(x_206);
lean_inc(x_188);
x_207 = l_Array_toSubarray___redArg(x_188, x_202, x_206);
x_208 = l_Array_ofSubarray___redArg(x_207);
lean_dec(x_207);
x_209 = l_Array_toSubarray___redArg(x_188, x_206, x_189);
x_210 = l_Array_ofSubarray___redArg(x_209);
lean_dec(x_209);
x_211 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_211, 0, x_12);
lean_ctor_set(x_211, 1, x_197);
lean_ctor_set(x_211, 2, x_195);
lean_ctor_set(x_211, 3, x_196);
lean_ctor_set(x_211, 4, x_199);
lean_ctor_set(x_211, 5, x_200);
lean_ctor_set(x_211, 6, x_204);
lean_ctor_set(x_211, 7, x_194);
lean_ctor_set(x_211, 8, x_208);
lean_ctor_set(x_211, 9, x_210);
x_212 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_50, 0, x_212);
return x_50;
}
else
{
lean_object* x_213; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_182);
lean_dec(x_13);
lean_dec(x_12);
x_213 = lean_box(0);
lean_ctor_set(x_50, 0, x_213);
return x_50;
}
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_50, 0);
x_215 = lean_ctor_get(x_50, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_50);
x_216 = l_Lean_instInhabitedExpr;
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_217 = lean_st_ref_get(x_9, x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
if (x_2 == 0)
{
lean_dec(x_218);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
goto block_271;
}
else
{
lean_object* x_272; uint8_t x_273; 
x_272 = lean_ctor_get(x_218, 0);
lean_inc(x_272);
lean_dec(x_218);
lean_inc(x_12);
x_273 = l_Lean_isCasesOnRecursor(x_272, x_12);
if (x_273 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
goto block_271;
}
else
{
if (lean_obj_tag(x_12) == 0)
{
x_220 = x_12;
goto block_268;
}
else
{
lean_object* x_274; 
x_274 = lean_ctor_get(x_12, 0);
lean_inc(x_274);
x_220 = x_274;
goto block_268;
}
}
}
block_268:
{
lean_object* x_221; 
x_221 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(x_220, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_219);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
if (lean_obj_tag(x_222) == 5)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
lean_dec(x_222);
x_224 = lean_ctor_get(x_221, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_225 = x_221;
} else {
 lean_dec_ref(x_221);
 x_225 = lean_box(0);
}
x_226 = lean_ctor_get(x_223, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_223, 1);
lean_inc(x_227);
x_228 = lean_ctor_get(x_223, 2);
lean_inc(x_228);
x_229 = lean_ctor_get(x_223, 4);
lean_inc(x_229);
x_230 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_231 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_231);
x_232 = lean_mk_array(x_231, x_230);
x_233 = lean_unsigned_to_nat(1u);
x_234 = lean_nat_sub(x_231, x_233);
lean_dec(x_231);
x_235 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_232, x_234);
x_236 = lean_nat_add(x_227, x_233);
x_237 = lean_nat_add(x_236, x_228);
x_238 = lean_nat_add(x_237, x_233);
lean_dec(x_237);
x_239 = l_Lean_InductiveVal_numCtors(x_223);
lean_dec(x_223);
x_240 = lean_nat_add(x_238, x_239);
lean_dec(x_239);
x_241 = lean_array_get_size(x_235);
x_242 = lean_nat_dec_le(x_240, x_241);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; 
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_243 = lean_box(0);
if (lean_is_scalar(x_225)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_225;
}
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_224);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; 
lean_dec(x_225);
x_245 = lean_ctor_get(x_226, 1);
lean_inc(x_245);
lean_dec(x_226);
x_246 = lean_unsigned_to_nat(0u);
lean_inc(x_227);
lean_inc(x_235);
x_247 = l_Array_toSubarray___redArg(x_235, x_246, x_227);
x_248 = lean_array_get(x_216, x_235, x_227);
lean_dec(x_227);
lean_inc(x_238);
lean_inc(x_235);
x_249 = l_Array_toSubarray___redArg(x_235, x_236, x_238);
x_250 = lean_nat_add(x_228, x_233);
lean_dec(x_228);
x_251 = lean_box(0);
x_252 = lean_mk_array(x_250, x_251);
lean_inc(x_240);
lean_inc(x_235);
x_253 = l_Array_toSubarray___redArg(x_235, x_238, x_240);
x_254 = l_Array_toSubarray___redArg(x_235, x_240, x_241);
x_255 = l_List_lengthTR___redArg(x_245);
lean_dec(x_245);
x_256 = l_List_lengthTR___redArg(x_13);
x_257 = lean_nat_dec_eq(x_255, x_256);
lean_dec(x_256);
lean_dec(x_255);
if (x_257 == 0)
{
lean_object* x_258; 
x_258 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0;
x_14 = x_224;
x_15 = x_246;
x_16 = x_252;
x_17 = x_247;
x_18 = x_248;
x_19 = x_249;
x_20 = x_229;
x_21 = x_254;
x_22 = x_253;
x_23 = x_258;
goto block_49;
}
else
{
lean_object* x_259; 
x_259 = lean_box(0);
x_14 = x_224;
x_15 = x_246;
x_16 = x_252;
x_17 = x_247;
x_18 = x_248;
x_19 = x_249;
x_20 = x_229;
x_21 = x_254;
x_22 = x_253;
x_23 = x_259;
goto block_49;
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_222);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_260 = lean_ctor_get(x_221, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_261 = x_221;
} else {
 lean_dec_ref(x_221);
 x_261 = lean_box(0);
}
x_262 = lean_box(0);
if (lean_is_scalar(x_261)) {
 x_263 = lean_alloc_ctor(0, 2, 0);
} else {
 x_263 = x_261;
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_260);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_264 = lean_ctor_get(x_221, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_221, 1);
lean_inc(x_265);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_266 = x_221;
} else {
 lean_dec_ref(x_221);
 x_266 = lean_box(0);
}
if (lean_is_scalar(x_266)) {
 x_267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_267 = x_266;
}
lean_ctor_set(x_267, 0, x_264);
lean_ctor_set(x_267, 1, x_265);
return x_267;
}
}
block_271:
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_box(0);
x_270 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(x_269, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_219);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_270;
}
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_275 = lean_ctor_get(x_214, 0);
lean_inc(x_275);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 x_276 = x_214;
} else {
 lean_dec_ref(x_214);
 x_276 = lean_box(0);
}
x_277 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_278 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_278);
x_279 = lean_mk_array(x_278, x_277);
x_280 = lean_unsigned_to_nat(1u);
x_281 = lean_nat_sub(x_278, x_280);
lean_dec(x_278);
x_282 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_279, x_281);
x_283 = lean_array_get_size(x_282);
x_284 = l_Lean_Meta_Match_MatcherInfo_arity(x_275);
x_285 = lean_nat_dec_lt(x_283, x_284);
lean_dec(x_284);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_286 = lean_ctor_get(x_275, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_275, 1);
lean_inc(x_287);
x_288 = lean_ctor_get(x_275, 2);
lean_inc(x_288);
x_289 = lean_ctor_get(x_275, 3);
lean_inc(x_289);
x_290 = lean_ctor_get(x_275, 4);
lean_inc(x_290);
x_291 = lean_array_mk(x_13);
x_292 = lean_unsigned_to_nat(0u);
lean_inc(x_286);
x_293 = l_Array_extract___redArg(x_282, x_292, x_286);
x_294 = lean_array_get(x_216, x_282, x_286);
x_295 = lean_nat_add(x_286, x_280);
lean_dec(x_286);
x_296 = lean_nat_add(x_295, x_287);
lean_dec(x_287);
lean_inc(x_296);
lean_inc(x_282);
x_297 = l_Array_toSubarray___redArg(x_282, x_295, x_296);
x_298 = l_Array_ofSubarray___redArg(x_297);
lean_dec(x_297);
x_299 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_275);
lean_dec(x_275);
x_300 = lean_nat_add(x_296, x_299);
lean_dec(x_299);
lean_inc(x_300);
lean_inc(x_282);
x_301 = l_Array_toSubarray___redArg(x_282, x_296, x_300);
x_302 = l_Array_ofSubarray___redArg(x_301);
lean_dec(x_301);
x_303 = l_Array_toSubarray___redArg(x_282, x_300, x_283);
x_304 = l_Array_ofSubarray___redArg(x_303);
lean_dec(x_303);
x_305 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_305, 0, x_12);
lean_ctor_set(x_305, 1, x_291);
lean_ctor_set(x_305, 2, x_289);
lean_ctor_set(x_305, 3, x_290);
lean_ctor_set(x_305, 4, x_293);
lean_ctor_set(x_305, 5, x_294);
lean_ctor_set(x_305, 6, x_298);
lean_ctor_set(x_305, 7, x_288);
lean_ctor_set(x_305, 8, x_302);
lean_ctor_set(x_305, 9, x_304);
if (lean_is_scalar(x_276)) {
 x_306 = lean_alloc_ctor(1, 1, 0);
} else {
 x_306 = x_276;
}
lean_ctor_set(x_306, 0, x_305);
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_215);
return x_307;
}
else
{
lean_object* x_308; lean_object* x_309; 
lean_dec(x_283);
lean_dec(x_282);
lean_dec(x_276);
lean_dec(x_275);
lean_dec(x_13);
lean_dec(x_12);
x_308 = lean_box(0);
x_309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_215);
return x_309;
}
}
}
block_49:
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_mk_empty_array_with_capacity(x_15);
lean_dec(x_15);
lean_inc(x_20);
x_25 = l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg(x_20, x_20, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
lean_dec(x_20);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_array_mk(x_13);
x_29 = l_Array_ofSubarray___redArg(x_17);
lean_dec(x_17);
x_30 = l_Array_ofSubarray___redArg(x_19);
lean_dec(x_19);
x_31 = l_Array_ofSubarray___redArg(x_22);
lean_dec(x_22);
x_32 = l_Array_ofSubarray___redArg(x_21);
lean_dec(x_21);
x_33 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_23);
lean_ctor_set(x_33, 3, x_16);
lean_ctor_set(x_33, 4, x_29);
lean_ctor_set(x_33, 5, x_18);
lean_ctor_set(x_33, 6, x_30);
lean_ctor_set(x_33, 7, x_27);
lean_ctor_set(x_33, 8, x_31);
lean_ctor_set(x_33, 9, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_25, 0, x_34);
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_25);
x_37 = lean_array_mk(x_13);
x_38 = l_Array_ofSubarray___redArg(x_17);
lean_dec(x_17);
x_39 = l_Array_ofSubarray___redArg(x_19);
lean_dec(x_19);
x_40 = l_Array_ofSubarray___redArg(x_22);
lean_dec(x_22);
x_41 = l_Array_ofSubarray___redArg(x_21);
lean_dec(x_21);
x_42 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_42, 0, x_12);
lean_ctor_set(x_42, 1, x_37);
lean_ctor_set(x_42, 2, x_23);
lean_ctor_set(x_42, 3, x_16);
lean_ctor_set(x_42, 4, x_38);
lean_ctor_set(x_42, 5, x_18);
lean_ctor_set(x_42, 6, x_39);
lean_ctor_set(x_42, 7, x_35);
lean_ctor_set(x_42, 8, x_40);
lean_ctor_set(x_42, 9, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_36);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
x_45 = !lean_is_exclusive(x_25);
if (x_45 == 0)
{
return x_25;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_25, 0);
x_47 = lean_ctor_get(x_25, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_25);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
lean_object* x_310; lean_object* x_311; 
lean_dec(x_11);
lean_dec(x_1);
x_310 = lean_box(0);
x_311 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(x_310, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_311;
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected matcher application alternative", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nat application", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_30; uint8_t x_31; 
x_30 = lean_array_get_size(x_9);
x_31 = lean_nat_dec_eq(x_30, x_1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1;
x_33 = l_Lean_indentExpr(x_7);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_indentExpr(x_8);
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_40, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
x_19 = x_18;
goto block_29;
}
block_29:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_1, x_20);
x_22 = lean_array_get(x_2, x_9, x_21);
lean_dec(x_21);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_23 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_3, x_4, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_box(1);
x_27 = lean_unbox(x_26);
x_28 = l_Lean_Meta_mkLambdaFVars(x_9, x_24, x_5, x_6, x_5, x_6, x_27, x_14, x_15, x_16, x_17, x_25);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
return x_28;
}
else
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = lean_usize_dec_lt(x_8, x_7);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_array_uget(x_9, x_8);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_box(x_4);
x_24 = lean_box(x_5);
lean_inc(x_6);
lean_inc(x_21);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_22);
x_25 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___boxed), 18, 8);
lean_closure_set(x_25, 0, x_22);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_23);
lean_closure_set(x_25, 5, x_24);
lean_closure_set(x_25, 6, x_21);
lean_closure_set(x_25, 7, x_6);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_26 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg(x_21, x_22, x_25, x_4, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_box(0);
x_30 = lean_array_uset(x_9, x_8, x_29);
x_31 = 1;
x_32 = lean_usize_add(x_8, x_31);
x_33 = lean_array_uset(x_30, x_8, x_27);
x_8 = x_32;
x_9 = x_33;
x_17 = x_28;
goto _start;
}
else
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_26);
if (x_35 == 0)
{
return x_26;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_26, 0);
x_37 = lean_ctor_get(x_26, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_26);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_5, x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___lam__0), 10, 4);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_6);
lean_closure_set(x_14, 2, x_7);
lean_closure_set(x_14, 3, x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(x_1, x_2, x_3, x_14, x_5, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___lam__0), 10, 4);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_7);
lean_closure_set(x_15, 2, x_8);
lean_closure_set(x_15, 3, x_9);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(x_1, x_2, x_3, x_15, x_5, x_6, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0;
x_16 = lean_array_push(x_15, x_3);
x_17 = lean_box(0);
x_18 = lean_box(1);
x_19 = lean_unbox(x_17);
x_20 = lean_unbox(x_18);
x_21 = l_Lean_Meta_mkLetFVars(x_16, x_13, x_2, x_19, x_20, x_7, x_8, x_9, x_10, x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_21;
}
else
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_box(x_7);
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___boxed), 11, 2);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_16);
x_18 = l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg(x_1, x_2, x_3, x_17, x_5, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_18;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_7);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_2, x_3, x_4, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0;
x_21 = lean_array_push(x_20, x_7);
x_22 = lean_box(1);
x_23 = lean_unbox(x_22);
x_24 = l_Lean_Meta_mkLambdaFVars(x_21, x_18, x_5, x_6, x_5, x_6, x_23, x_11, x_12, x_13, x_14, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_24;
}
else
{
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_7);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_2, x_3, x_4, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0;
x_21 = lean_array_push(x_20, x_7);
x_22 = lean_box(1);
x_23 = lean_unbox(x_22);
x_24 = l_Lean_Meta_mkForallFVars(x_21, x_18, x_5, x_6, x_6, x_23, x_11, x_12, x_13, x_14, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_24;
}
else
{
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_expr_instantiate1(x_1, x_5);
x_15 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_inc(x_4);
lean_inc(x_1);
x_13 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(x_1, x_4, x_5, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 1);
x_22 = lean_ctor_get(x_13, 0);
lean_dec(x_22);
x_23 = lean_box(0);
switch (lean_obj_tag(x_4)) {
case 4:
{
uint8_t x_24; 
lean_dec(x_14);
x_24 = l_Lean_Expr_isConstOf(x_4, x_1);
if (x_24 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
else
{
lean_object* x_25; 
lean_free_object(x_13);
x_25 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
return x_25;
}
}
case 5:
{
uint8_t x_26; lean_object* x_27; 
lean_free_object(x_13);
x_26 = lean_unbox(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_27 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1(x_4, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_14);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_ctor_get(x_28, 0);
lean_inc(x_32);
lean_dec(x_28);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
x_33 = l_Lean_Meta_MatcherApp_addArg_x3f(x_32, x_3, x_8, x_9, x_10, x_11, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_14);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; uint8_t x_54; uint8_t x_55; lean_object* x_56; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
x_42 = lean_ctor_get(x_37, 2);
x_43 = lean_ctor_get(x_37, 3);
x_44 = lean_ctor_get(x_37, 4);
x_45 = lean_ctor_get(x_37, 5);
x_46 = lean_ctor_get(x_37, 6);
x_47 = lean_ctor_get(x_37, 7);
x_48 = lean_ctor_get(x_37, 8);
x_49 = lean_ctor_get(x_37, 9);
x_50 = l_Lean_instInhabitedExpr;
x_51 = l_Array_zip___redArg(x_48, x_47);
lean_dec(x_48);
x_52 = lean_array_size(x_51);
x_53 = 0;
x_54 = lean_unbox(x_23);
x_55 = lean_unbox(x_14);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_56 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(x_50, x_1, x_2, x_54, x_55, x_4, x_52, x_53, x_51, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_38);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; size_t x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_59, 0, x_1);
lean_closure_set(x_59, 1, x_2);
lean_closure_set(x_59, 2, x_3);
x_60 = lean_array_size(x_46);
x_61 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_59, x_60, x_53, x_46, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_58);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_61, 0);
lean_ctor_set(x_37, 8, x_57);
lean_ctor_set(x_37, 6, x_63);
x_64 = l_Lean_Meta_MatcherApp_toExpr(x_37);
lean_ctor_set(x_61, 0, x_64);
return x_61;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_61, 0);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_61);
lean_ctor_set(x_37, 8, x_57);
lean_ctor_set(x_37, 6, x_65);
x_67 = l_Lean_Meta_MatcherApp_toExpr(x_37);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
else
{
uint8_t x_69; 
lean_dec(x_57);
lean_free_object(x_37);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
x_69 = !lean_is_exclusive(x_61);
if (x_69 == 0)
{
return x_61;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_61, 0);
x_71 = lean_ctor_get(x_61, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_61);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_free_object(x_37);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_56);
if (x_73 == 0)
{
return x_56;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_56, 0);
x_75 = lean_ctor_get(x_56, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_56);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; uint8_t x_91; uint8_t x_92; lean_object* x_93; 
x_77 = lean_ctor_get(x_37, 0);
x_78 = lean_ctor_get(x_37, 1);
x_79 = lean_ctor_get(x_37, 2);
x_80 = lean_ctor_get(x_37, 3);
x_81 = lean_ctor_get(x_37, 4);
x_82 = lean_ctor_get(x_37, 5);
x_83 = lean_ctor_get(x_37, 6);
x_84 = lean_ctor_get(x_37, 7);
x_85 = lean_ctor_get(x_37, 8);
x_86 = lean_ctor_get(x_37, 9);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_37);
x_87 = l_Lean_instInhabitedExpr;
x_88 = l_Array_zip___redArg(x_85, x_84);
lean_dec(x_85);
x_89 = lean_array_size(x_88);
x_90 = 0;
x_91 = lean_unbox(x_23);
x_92 = lean_unbox(x_14);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_93 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(x_87, x_1, x_2, x_91, x_92, x_4, x_89, x_90, x_88, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_38);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; size_t x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_96, 0, x_1);
lean_closure_set(x_96, 1, x_2);
lean_closure_set(x_96, 2, x_3);
x_97 = lean_array_size(x_83);
x_98 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_96, x_97, x_90, x_83, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_95);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_101 = x_98;
} else {
 lean_dec_ref(x_98);
 x_101 = lean_box(0);
}
x_102 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_102, 0, x_77);
lean_ctor_set(x_102, 1, x_78);
lean_ctor_set(x_102, 2, x_79);
lean_ctor_set(x_102, 3, x_80);
lean_ctor_set(x_102, 4, x_81);
lean_ctor_set(x_102, 5, x_82);
lean_ctor_set(x_102, 6, x_99);
lean_ctor_set(x_102, 7, x_84);
lean_ctor_set(x_102, 8, x_94);
lean_ctor_set(x_102, 9, x_86);
x_103 = l_Lean_Meta_MatcherApp_toExpr(x_102);
if (lean_is_scalar(x_101)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_101;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_100);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_94);
lean_dec(x_86);
lean_dec(x_84);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
x_105 = lean_ctor_get(x_98, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_98, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_107 = x_98;
} else {
 lean_dec_ref(x_98);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_86);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = lean_ctor_get(x_93, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_93, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_111 = x_93;
} else {
 lean_dec_ref(x_93);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_33);
if (x_113 == 0)
{
return x_33;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_33, 0);
x_115 = lean_ctor_get(x_33, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_33);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_117 = !lean_is_exclusive(x_27);
if (x_117 == 0)
{
return x_27;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_27, 0);
x_119 = lean_ctor_get(x_27, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_27);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
case 6:
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; 
lean_free_object(x_13);
x_121 = lean_ctor_get(x_4, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_4, 1);
lean_inc(x_122);
x_123 = lean_ctor_get(x_4, 2);
lean_inc(x_123);
x_124 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_125 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_122, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 15, 6);
lean_closure_set(x_128, 0, x_123);
lean_closure_set(x_128, 1, x_1);
lean_closure_set(x_128, 2, x_2);
lean_closure_set(x_128, 3, x_3);
lean_closure_set(x_128, 4, x_23);
lean_closure_set(x_128, 5, x_14);
x_129 = lean_box(0);
x_130 = lean_unbox(x_129);
x_131 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_121, x_124, x_126, x_128, x_130, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_127);
return x_131;
}
else
{
lean_dec(x_123);
lean_dec(x_121);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_125;
}
}
case 7:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; 
lean_free_object(x_13);
x_132 = lean_ctor_get(x_4, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_4, 1);
lean_inc(x_133);
x_134 = lean_ctor_get(x_4, 2);
lean_inc(x_134);
x_135 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_136 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_133, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; lean_object* x_142; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 15, 6);
lean_closure_set(x_139, 0, x_134);
lean_closure_set(x_139, 1, x_1);
lean_closure_set(x_139, 2, x_2);
lean_closure_set(x_139, 3, x_3);
lean_closure_set(x_139, 4, x_23);
lean_closure_set(x_139, 5, x_14);
x_140 = lean_box(0);
x_141 = lean_unbox(x_140);
x_142 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_132, x_135, x_137, x_139, x_141, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_138);
return x_142;
}
else
{
lean_dec(x_134);
lean_dec(x_132);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_136;
}
}
case 8:
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; lean_object* x_148; 
lean_free_object(x_13);
lean_dec(x_14);
x_143 = lean_ctor_get(x_4, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_4, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_4, 2);
lean_inc(x_145);
x_146 = lean_ctor_get(x_4, 3);
lean_inc(x_146);
x_147 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_148 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_144, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
lean_dec(x_148);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_151 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_145, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_150);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; uint8_t x_157; lean_object* x_158; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 13, 4);
lean_closure_set(x_154, 0, x_146);
lean_closure_set(x_154, 1, x_1);
lean_closure_set(x_154, 2, x_2);
lean_closure_set(x_154, 3, x_3);
x_155 = lean_box(0);
x_156 = lean_unbox(x_155);
x_157 = lean_unbox(x_23);
x_158 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9(x_143, x_149, x_152, x_154, x_147, x_156, x_157, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_153);
return x_158;
}
else
{
lean_dec(x_149);
lean_dec(x_146);
lean_dec(x_143);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_151;
}
}
else
{
lean_dec(x_146);
lean_dec(x_145);
lean_dec(x_143);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_148;
}
}
case 10:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_free_object(x_13);
lean_dec(x_14);
x_159 = lean_ctor_get(x_4, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_4, 1);
lean_inc(x_160);
x_161 = l_Lean_getRecAppSyntax_x3f(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; 
x_162 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_160, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_162) == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_162, 0);
x_165 = l_Lean_Expr_mdata___override(x_159, x_164);
lean_ctor_set(x_162, 0, x_165);
return x_162;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_162, 0);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_162);
x_168 = l_Lean_Expr_mdata___override(x_159, x_166);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
lean_dec(x_159);
return x_162;
}
}
else
{
lean_object* x_170; uint8_t x_171; 
lean_dec(x_159);
x_170 = lean_ctor_get(x_161, 0);
lean_inc(x_170);
lean_dec(x_161);
x_171 = !lean_is_exclusive(x_10);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_10, 5);
x_173 = l_Lean_replaceRef(x_170, x_172);
lean_dec(x_172);
lean_dec(x_170);
lean_ctor_set(x_10, 5, x_173);
x_174 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_160, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_175 = lean_ctor_get(x_10, 0);
x_176 = lean_ctor_get(x_10, 1);
x_177 = lean_ctor_get(x_10, 2);
x_178 = lean_ctor_get(x_10, 3);
x_179 = lean_ctor_get(x_10, 4);
x_180 = lean_ctor_get(x_10, 5);
x_181 = lean_ctor_get(x_10, 6);
x_182 = lean_ctor_get(x_10, 7);
x_183 = lean_ctor_get(x_10, 8);
x_184 = lean_ctor_get(x_10, 9);
x_185 = lean_ctor_get(x_10, 10);
x_186 = lean_ctor_get_uint8(x_10, sizeof(void*)*13);
x_187 = lean_ctor_get(x_10, 11);
x_188 = lean_ctor_get_uint8(x_10, sizeof(void*)*13 + 1);
x_189 = lean_ctor_get(x_10, 12);
lean_inc(x_189);
lean_inc(x_187);
lean_inc(x_185);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_10);
x_190 = l_Lean_replaceRef(x_170, x_180);
lean_dec(x_180);
lean_dec(x_170);
x_191 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_191, 0, x_175);
lean_ctor_set(x_191, 1, x_176);
lean_ctor_set(x_191, 2, x_177);
lean_ctor_set(x_191, 3, x_178);
lean_ctor_set(x_191, 4, x_179);
lean_ctor_set(x_191, 5, x_190);
lean_ctor_set(x_191, 6, x_181);
lean_ctor_set(x_191, 7, x_182);
lean_ctor_set(x_191, 8, x_183);
lean_ctor_set(x_191, 9, x_184);
lean_ctor_set(x_191, 10, x_185);
lean_ctor_set(x_191, 11, x_187);
lean_ctor_set(x_191, 12, x_189);
lean_ctor_set_uint8(x_191, sizeof(void*)*13, x_186);
lean_ctor_set_uint8(x_191, sizeof(void*)*13 + 1, x_188);
x_192 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_160, x_5, x_6, x_7, x_8, x_9, x_191, x_11, x_21);
return x_192;
}
}
}
case 11:
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_free_object(x_13);
lean_dec(x_14);
x_193 = lean_ctor_get(x_4, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_4, 1);
lean_inc(x_194);
x_195 = lean_ctor_get(x_4, 2);
lean_inc(x_195);
lean_dec(x_4);
x_196 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_195, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_196) == 0)
{
uint8_t x_197; 
x_197 = !lean_is_exclusive(x_196);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_196, 0);
x_199 = l_Lean_Expr_proj___override(x_193, x_194, x_198);
lean_ctor_set(x_196, 0, x_199);
return x_196;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_200 = lean_ctor_get(x_196, 0);
x_201 = lean_ctor_get(x_196, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_196);
x_202 = l_Lean_Expr_proj___override(x_193, x_194, x_200);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
return x_203;
}
}
else
{
lean_dec(x_194);
lean_dec(x_193);
return x_196;
}
}
default: 
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
lean_free_object(x_13);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_204 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0;
x_205 = lean_array_push(x_204, x_1);
lean_inc(x_4);
x_206 = l_Lean_Elab_ensureNoRecFn(x_205, x_4, x_8, x_9, x_10, x_11, x_21);
if (lean_obj_tag(x_206) == 0)
{
uint8_t x_207; 
x_207 = !lean_is_exclusive(x_206);
if (x_207 == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 0);
lean_dec(x_208);
lean_ctor_set(x_206, 0, x_4);
return x_206;
}
else
{
lean_object* x_209; lean_object* x_210; 
x_209 = lean_ctor_get(x_206, 1);
lean_inc(x_209);
lean_dec(x_206);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_4);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
else
{
uint8_t x_211; 
lean_dec(x_4);
x_211 = !lean_is_exclusive(x_206);
if (x_211 == 0)
{
return x_206;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_206, 0);
x_213 = lean_ctor_get(x_206, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_206);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
}
}
else
{
lean_object* x_215; lean_object* x_216; 
x_215 = lean_ctor_get(x_13, 1);
lean_inc(x_215);
lean_dec(x_13);
x_216 = lean_box(0);
switch (lean_obj_tag(x_4)) {
case 4:
{
uint8_t x_217; 
lean_dec(x_14);
x_217 = l_Lean_Expr_isConstOf(x_4, x_1);
if (x_217 == 0)
{
lean_object* x_218; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_4);
lean_ctor_set(x_218, 1, x_215);
return x_218;
}
else
{
lean_object* x_219; 
x_219 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
return x_219;
}
}
case 5:
{
uint8_t x_220; lean_object* x_221; 
x_220 = lean_unbox(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_221 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1(x_4, x_220, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; 
lean_dec(x_14);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_223);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_221, 1);
lean_inc(x_225);
lean_dec(x_221);
x_226 = lean_ctor_get(x_222, 0);
lean_inc(x_226);
lean_dec(x_222);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
x_227 = l_Lean_Meta_MatcherApp_addArg_x3f(x_226, x_3, x_8, x_9, x_10, x_11, x_225);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
if (lean_obj_tag(x_228) == 0)
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_14);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_230 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_229);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; size_t x_246; size_t x_247; uint8_t x_248; uint8_t x_249; lean_object* x_250; 
x_231 = lean_ctor_get(x_228, 0);
lean_inc(x_231);
lean_dec(x_228);
x_232 = lean_ctor_get(x_227, 1);
lean_inc(x_232);
lean_dec(x_227);
x_233 = lean_ctor_get(x_231, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_231, 1);
lean_inc(x_234);
x_235 = lean_ctor_get(x_231, 2);
lean_inc(x_235);
x_236 = lean_ctor_get(x_231, 3);
lean_inc(x_236);
x_237 = lean_ctor_get(x_231, 4);
lean_inc(x_237);
x_238 = lean_ctor_get(x_231, 5);
lean_inc(x_238);
x_239 = lean_ctor_get(x_231, 6);
lean_inc(x_239);
x_240 = lean_ctor_get(x_231, 7);
lean_inc(x_240);
x_241 = lean_ctor_get(x_231, 8);
lean_inc(x_241);
x_242 = lean_ctor_get(x_231, 9);
lean_inc(x_242);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 lean_ctor_release(x_231, 2);
 lean_ctor_release(x_231, 3);
 lean_ctor_release(x_231, 4);
 lean_ctor_release(x_231, 5);
 lean_ctor_release(x_231, 6);
 lean_ctor_release(x_231, 7);
 lean_ctor_release(x_231, 8);
 lean_ctor_release(x_231, 9);
 x_243 = x_231;
} else {
 lean_dec_ref(x_231);
 x_243 = lean_box(0);
}
x_244 = l_Lean_instInhabitedExpr;
x_245 = l_Array_zip___redArg(x_241, x_240);
lean_dec(x_241);
x_246 = lean_array_size(x_245);
x_247 = 0;
x_248 = lean_unbox(x_216);
x_249 = lean_unbox(x_14);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_250 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(x_244, x_1, x_2, x_248, x_249, x_4, x_246, x_247, x_245, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_232);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; size_t x_254; lean_object* x_255; 
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec(x_250);
x_253 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_253, 0, x_1);
lean_closure_set(x_253, 1, x_2);
lean_closure_set(x_253, 2, x_3);
x_254 = lean_array_size(x_239);
x_255 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_253, x_254, x_247, x_239, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_252);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_258 = x_255;
} else {
 lean_dec_ref(x_255);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_259 = lean_alloc_ctor(0, 10, 0);
} else {
 x_259 = x_243;
}
lean_ctor_set(x_259, 0, x_233);
lean_ctor_set(x_259, 1, x_234);
lean_ctor_set(x_259, 2, x_235);
lean_ctor_set(x_259, 3, x_236);
lean_ctor_set(x_259, 4, x_237);
lean_ctor_set(x_259, 5, x_238);
lean_ctor_set(x_259, 6, x_256);
lean_ctor_set(x_259, 7, x_240);
lean_ctor_set(x_259, 8, x_251);
lean_ctor_set(x_259, 9, x_242);
x_260 = l_Lean_Meta_MatcherApp_toExpr(x_259);
if (lean_is_scalar(x_258)) {
 x_261 = lean_alloc_ctor(0, 2, 0);
} else {
 x_261 = x_258;
}
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_257);
return x_261;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_251);
lean_dec(x_243);
lean_dec(x_242);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_237);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
x_262 = lean_ctor_get(x_255, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_255, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_264 = x_255;
} else {
 lean_dec_ref(x_255);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(1, 2, 0);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_262);
lean_ctor_set(x_265, 1, x_263);
return x_265;
}
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_243);
lean_dec(x_242);
lean_dec(x_240);
lean_dec(x_239);
lean_dec(x_238);
lean_dec(x_237);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_266 = lean_ctor_get(x_250, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_250, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_268 = x_250;
} else {
 lean_dec_ref(x_250);
 x_268 = lean_box(0);
}
if (lean_is_scalar(x_268)) {
 x_269 = lean_alloc_ctor(1, 2, 0);
} else {
 x_269 = x_268;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_270 = lean_ctor_get(x_227, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_227, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_272 = x_227;
} else {
 lean_dec_ref(x_227);
 x_272 = lean_box(0);
}
if (lean_is_scalar(x_272)) {
 x_273 = lean_alloc_ctor(1, 2, 0);
} else {
 x_273 = x_272;
}
lean_ctor_set(x_273, 0, x_270);
lean_ctor_set(x_273, 1, x_271);
return x_273;
}
}
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_274 = lean_ctor_get(x_221, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_221, 1);
lean_inc(x_275);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_276 = x_221;
} else {
 lean_dec_ref(x_221);
 x_276 = lean_box(0);
}
if (lean_is_scalar(x_276)) {
 x_277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_277 = x_276;
}
lean_ctor_set(x_277, 0, x_274);
lean_ctor_set(x_277, 1, x_275);
return x_277;
}
}
case 6:
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; lean_object* x_282; 
x_278 = lean_ctor_get(x_4, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_4, 1);
lean_inc(x_279);
x_280 = lean_ctor_get(x_4, 2);
lean_inc(x_280);
x_281 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_282 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_279, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; lean_object* x_288; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
x_285 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 15, 6);
lean_closure_set(x_285, 0, x_280);
lean_closure_set(x_285, 1, x_1);
lean_closure_set(x_285, 2, x_2);
lean_closure_set(x_285, 3, x_3);
lean_closure_set(x_285, 4, x_216);
lean_closure_set(x_285, 5, x_14);
x_286 = lean_box(0);
x_287 = lean_unbox(x_286);
x_288 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_278, x_281, x_283, x_285, x_287, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_284);
return x_288;
}
else
{
lean_dec(x_280);
lean_dec(x_278);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_282;
}
}
case 7:
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; lean_object* x_293; 
x_289 = lean_ctor_get(x_4, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_4, 1);
lean_inc(x_290);
x_291 = lean_ctor_get(x_4, 2);
lean_inc(x_291);
x_292 = lean_ctor_get_uint8(x_4, sizeof(void*)*3 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_293 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_290, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; lean_object* x_299; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_296 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 15, 6);
lean_closure_set(x_296, 0, x_291);
lean_closure_set(x_296, 1, x_1);
lean_closure_set(x_296, 2, x_2);
lean_closure_set(x_296, 3, x_3);
lean_closure_set(x_296, 4, x_216);
lean_closure_set(x_296, 5, x_14);
x_297 = lean_box(0);
x_298 = lean_unbox(x_297);
x_299 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_289, x_292, x_294, x_296, x_298, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_295);
return x_299;
}
else
{
lean_dec(x_291);
lean_dec(x_289);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_293;
}
}
case 8:
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; lean_object* x_305; 
lean_dec(x_14);
x_300 = lean_ctor_get(x_4, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_4, 1);
lean_inc(x_301);
x_302 = lean_ctor_get(x_4, 2);
lean_inc(x_302);
x_303 = lean_ctor_get(x_4, 3);
lean_inc(x_303);
x_304 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 8);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_305 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_301, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_305) == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_305, 1);
lean_inc(x_307);
lean_dec(x_305);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_308 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_302, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_307);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; uint8_t x_314; lean_object* x_315; 
x_309 = lean_ctor_get(x_308, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_308, 1);
lean_inc(x_310);
lean_dec(x_308);
x_311 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 13, 4);
lean_closure_set(x_311, 0, x_303);
lean_closure_set(x_311, 1, x_1);
lean_closure_set(x_311, 2, x_2);
lean_closure_set(x_311, 3, x_3);
x_312 = lean_box(0);
x_313 = lean_unbox(x_312);
x_314 = lean_unbox(x_216);
x_315 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9(x_300, x_306, x_309, x_311, x_304, x_313, x_314, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_310);
return x_315;
}
else
{
lean_dec(x_306);
lean_dec(x_303);
lean_dec(x_300);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_308;
}
}
else
{
lean_dec(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_305;
}
}
case 10:
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_14);
x_316 = lean_ctor_get(x_4, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_4, 1);
lean_inc(x_317);
x_318 = l_Lean_getRecAppSyntax_x3f(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; 
x_319 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_317, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_322 = x_319;
} else {
 lean_dec_ref(x_319);
 x_322 = lean_box(0);
}
x_323 = l_Lean_Expr_mdata___override(x_316, x_320);
if (lean_is_scalar(x_322)) {
 x_324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_324 = x_322;
}
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_321);
return x_324;
}
else
{
lean_dec(x_316);
return x_319;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_316);
x_325 = lean_ctor_get(x_318, 0);
lean_inc(x_325);
lean_dec(x_318);
x_326 = lean_ctor_get(x_10, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_10, 1);
lean_inc(x_327);
x_328 = lean_ctor_get(x_10, 2);
lean_inc(x_328);
x_329 = lean_ctor_get(x_10, 3);
lean_inc(x_329);
x_330 = lean_ctor_get(x_10, 4);
lean_inc(x_330);
x_331 = lean_ctor_get(x_10, 5);
lean_inc(x_331);
x_332 = lean_ctor_get(x_10, 6);
lean_inc(x_332);
x_333 = lean_ctor_get(x_10, 7);
lean_inc(x_333);
x_334 = lean_ctor_get(x_10, 8);
lean_inc(x_334);
x_335 = lean_ctor_get(x_10, 9);
lean_inc(x_335);
x_336 = lean_ctor_get(x_10, 10);
lean_inc(x_336);
x_337 = lean_ctor_get_uint8(x_10, sizeof(void*)*13);
x_338 = lean_ctor_get(x_10, 11);
lean_inc(x_338);
x_339 = lean_ctor_get_uint8(x_10, sizeof(void*)*13 + 1);
x_340 = lean_ctor_get(x_10, 12);
lean_inc(x_340);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 lean_ctor_release(x_10, 2);
 lean_ctor_release(x_10, 3);
 lean_ctor_release(x_10, 4);
 lean_ctor_release(x_10, 5);
 lean_ctor_release(x_10, 6);
 lean_ctor_release(x_10, 7);
 lean_ctor_release(x_10, 8);
 lean_ctor_release(x_10, 9);
 lean_ctor_release(x_10, 10);
 lean_ctor_release(x_10, 11);
 lean_ctor_release(x_10, 12);
 x_341 = x_10;
} else {
 lean_dec_ref(x_10);
 x_341 = lean_box(0);
}
x_342 = l_Lean_replaceRef(x_325, x_331);
lean_dec(x_331);
lean_dec(x_325);
if (lean_is_scalar(x_341)) {
 x_343 = lean_alloc_ctor(0, 13, 2);
} else {
 x_343 = x_341;
}
lean_ctor_set(x_343, 0, x_326);
lean_ctor_set(x_343, 1, x_327);
lean_ctor_set(x_343, 2, x_328);
lean_ctor_set(x_343, 3, x_329);
lean_ctor_set(x_343, 4, x_330);
lean_ctor_set(x_343, 5, x_342);
lean_ctor_set(x_343, 6, x_332);
lean_ctor_set(x_343, 7, x_333);
lean_ctor_set(x_343, 8, x_334);
lean_ctor_set(x_343, 9, x_335);
lean_ctor_set(x_343, 10, x_336);
lean_ctor_set(x_343, 11, x_338);
lean_ctor_set(x_343, 12, x_340);
lean_ctor_set_uint8(x_343, sizeof(void*)*13, x_337);
lean_ctor_set_uint8(x_343, sizeof(void*)*13 + 1, x_339);
x_344 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_317, x_5, x_6, x_7, x_8, x_9, x_343, x_11, x_215);
return x_344;
}
}
case 11:
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_dec(x_14);
x_345 = lean_ctor_get(x_4, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_4, 1);
lean_inc(x_346);
x_347 = lean_ctor_get(x_4, 2);
lean_inc(x_347);
lean_dec(x_4);
x_348 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_347, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_351 = x_348;
} else {
 lean_dec_ref(x_348);
 x_351 = lean_box(0);
}
x_352 = l_Lean_Expr_proj___override(x_345, x_346, x_349);
if (lean_is_scalar(x_351)) {
 x_353 = lean_alloc_ctor(0, 2, 0);
} else {
 x_353 = x_351;
}
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_350);
return x_353;
}
else
{
lean_dec(x_346);
lean_dec(x_345);
return x_348;
}
}
default: 
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_354 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0;
x_355 = lean_array_push(x_354, x_1);
lean_inc(x_4);
x_356 = l_Lean_Elab_ensureNoRecFn(x_355, x_4, x_8, x_9, x_10, x_11, x_215);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_357 = lean_ctor_get(x_356, 1);
lean_inc(x_357);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_358 = x_356;
} else {
 lean_dec_ref(x_356);
 x_358 = lean_box(0);
}
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_4);
lean_ctor_set(x_359, 1, x_357);
return x_359;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
lean_dec(x_4);
x_360 = lean_ctor_get(x_356, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_356, 1);
lean_inc(x_361);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_362 = x_356;
} else {
 lean_dec_ref(x_356);
 x_362 = lean_box(0);
}
if (lean_is_scalar(x_362)) {
 x_363 = lean_alloc_ctor(1, 2, 0);
} else {
 x_363 = x_362;
}
lean_ctor_set(x_363, 0, x_360);
lean_ctor_set(x_363, 1, x_361);
return x_363;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_array_set(x_5, x_6, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_6, x_18);
lean_dec(x_6);
x_4 = x_15;
x_5 = x_17;
x_6 = x_19;
goto _start;
}
else
{
lean_object* x_21; 
lean_dec(x_6);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_2);
lean_closure_set(x_24, 2, x_3);
x_25 = lean_array_size(x_5);
x_26 = 0;
x_27 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_24, x_25, x_26, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_mkAppN(x_22, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = l_Lean_mkAppN(x_22, x_31);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_22);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_array_set(x_5, x_6, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_6, x_18);
x_20 = l_Lean_Expr_withAppAux___at___Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0_spec__0(x_1, x_2, x_3, x_15, x_17, x_19, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
else
{
lean_object* x_21; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop), 12, 3);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_2);
lean_closure_set(x_24, 2, x_3);
x_25 = lean_array_size(x_5);
x_26 = 0;
x_27 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_24, x_25, x_26, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_mkAppN(x_22, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = l_Lean_mkAppN(x_22, x_31);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_22);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isAppOf(x_4, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
x_15 = l_Lean_Expr_getAppNumArgs(x_4);
lean_inc(x_15);
x_16 = lean_mk_array(x_15, x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_15, x_17);
lean_dec(x_15);
x_19 = l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0(x_1, x_2, x_3, x_4, x_16, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_18);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_isTracingEnabledFor___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___redArg(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Meta_withNewMCtxDepth___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___redArg(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__0(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_getMatcherInfo_x3f___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = lean_unbox(x_6);
lean_dec(x_6);
x_21 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0(x_1, x_2, x_3, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_18 = lean_unbox(x_4);
lean_dec(x_4);
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_21 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_22 = l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7(x_1, x_2, x_3, x_18, x_19, x_6, x_20, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___redArg(x_1, x_14, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l_Lean_Meta_withLocalDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__8(x_1, x_2, x_15, x_4, x_5, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___redArg(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = lean_unbox(x_7);
lean_dec(x_7);
x_18 = l_Lean_Meta_withLetDecl___at___Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9_spec__9(x_1, x_2, x_3, x_4, x_5, x_16, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9(x_1, x_2, x_3, x_4, x_16, x_17, x_18, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_19;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(x_1, x_2, x_3, x_4, x_16, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(x_1, x_2, x_3, x_4, x_16, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Expr_withAppAux___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_6);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_nat_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
x_3 = lean_nat_div(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
x_2 = l_Nat_nextPowerOfTwo(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("type of functorial ", 19, 19);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" is", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("replaceRecApps:", 15, 15);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_32 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1;
x_89 = l_Lean_isTracingEnabledFor___at___Lean_Elab_Term_traceAtCmdPos_spec__0___redArg(x_32, x_9, x_11);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_unbox(x_90);
lean_dec(x_90);
if (x_91 == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_dec(x_89);
x_33 = x_5;
x_34 = x_6;
x_35 = x_7;
x_36 = x_8;
x_37 = x_9;
x_38 = x_10;
x_39 = x_92;
goto block_88;
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_89);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_89, 1);
x_95 = lean_ctor_get(x_89, 0);
lean_dec(x_95);
x_96 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10;
lean_inc(x_4);
x_97 = l_Lean_indentExpr(x_4);
lean_ctor_set_tag(x_89, 7);
lean_ctor_set(x_89, 1, x_97);
lean_ctor_set(x_89, 0, x_96);
x_98 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_99 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_99, 0, x_89);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(x_32, x_99, x_7, x_8, x_9, x_10, x_94);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_33 = x_5;
x_34 = x_6;
x_35 = x_7;
x_36 = x_8;
x_37 = x_9;
x_38 = x_10;
x_39 = x_101;
goto block_88;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_102 = lean_ctor_get(x_89, 1);
lean_inc(x_102);
lean_dec(x_89);
x_103 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10;
lean_inc(x_4);
x_104 = l_Lean_indentExpr(x_4);
x_105 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
x_106 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_107 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(x_32, x_107, x_7, x_8, x_9, x_10, x_102);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
lean_dec(x_108);
x_33 = x_5;
x_34 = x_6;
x_35 = x_7;
x_36 = x_8;
x_37 = x_9;
x_38 = x_10;
x_39 = x_109;
goto block_88;
}
}
block_31:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4;
x_20 = lean_st_mk_ref(x_19, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_21);
x_23 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(x_1, x_2, x_3, x_4, x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_21, x_25);
lean_dec(x_21);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_dec(x_21);
return x_23;
}
}
block_88:
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = l_Lean_isTracingEnabledFor___at___Lean_Elab_Term_traceAtCmdPos_spec__0___redArg(x_32, x_37, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_12 = x_33;
x_13 = x_34;
x_14 = x_35;
x_15 = x_36;
x_16 = x_37;
x_17 = x_38;
x_18 = x_43;
goto block_31;
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_40, 1);
x_46 = lean_ctor_get(x_40, 0);
lean_dec(x_46);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_3);
x_47 = lean_infer_type(x_3, x_35, x_36, x_37, x_38, x_45);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
x_51 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6;
lean_inc(x_3);
x_52 = l_Lean_MessageData_ofExpr(x_3);
lean_ctor_set_tag(x_47, 7);
lean_ctor_set(x_47, 1, x_52);
lean_ctor_set(x_47, 0, x_51);
x_53 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8;
lean_ctor_set_tag(x_40, 7);
lean_ctor_set(x_40, 1, x_53);
lean_ctor_set(x_40, 0, x_47);
x_54 = l_Lean_indentExpr(x_49);
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_40);
lean_ctor_set(x_55, 1, x_54);
x_56 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(x_32, x_57, x_35, x_36, x_37, x_38, x_50);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_12 = x_33;
x_13 = x_34;
x_14 = x_35;
x_15 = x_36;
x_16 = x_37;
x_17 = x_38;
x_18 = x_59;
goto block_31;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_60 = lean_ctor_get(x_47, 0);
x_61 = lean_ctor_get(x_47, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_47);
x_62 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6;
lean_inc(x_3);
x_63 = l_Lean_MessageData_ofExpr(x_3);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8;
lean_ctor_set_tag(x_40, 7);
lean_ctor_set(x_40, 1, x_65);
lean_ctor_set(x_40, 0, x_64);
x_66 = l_Lean_indentExpr(x_60);
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_40);
lean_ctor_set(x_67, 1, x_66);
x_68 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(x_32, x_69, x_35, x_36, x_37, x_38, x_61);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_12 = x_33;
x_13 = x_34;
x_14 = x_35;
x_15 = x_36;
x_16 = x_37;
x_17 = x_38;
x_18 = x_71;
goto block_31;
}
}
else
{
lean_free_object(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_47;
}
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_40, 1);
lean_inc(x_72);
lean_dec(x_40);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_3);
x_73 = lean_infer_type(x_3, x_35, x_36, x_37, x_38, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6;
lean_inc(x_3);
x_78 = l_Lean_MessageData_ofExpr(x_3);
if (lean_is_scalar(x_76)) {
 x_79 = lean_alloc_ctor(7, 2, 0);
} else {
 x_79 = x_76;
 lean_ctor_set_tag(x_79, 7);
}
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8;
x_81 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_indentExpr(x_74);
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_addTrace___at___Lean_Elab_Term_traceAtCmdPos_spec__1___redArg(x_32, x_85, x_35, x_36, x_37, x_38, x_75);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_12 = x_33;
x_13 = x_34;
x_14 = x_35;
x_15 = x_36;
x_16 = x_37;
x_17 = x_38;
x_18 = x_87;
goto block_31;
}
else
{
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_73;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_4, x_5, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0), 10, 3);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
x_12 = lean_box(1);
x_13 = lean_box(0);
x_14 = lean_box(0);
x_15 = lean_unbox(x_12);
x_16 = lean_unbox(x_13);
x_17 = lean_unbox(x_12);
x_18 = lean_unbox(x_13);
x_19 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(x_1, x_15, x_16, x_17, x_18, x_14, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0), 10, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = lean_box(1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_2);
x_16 = lean_unbox(x_13);
x_17 = lean_unbox(x_14);
x_18 = lean_unbox(x_13);
x_19 = lean_unbox(x_14);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(x_1, x_16, x_17, x_18, x_19, x_15, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
if (lean_obj_tag(x_20) == 0)
{
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_69; 
x_69 = lean_ctor_get(x_5, 3);
x_15 = x_69;
goto block_68;
block_68:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_array_get(x_1, x_6, x_2);
x_17 = l_Lean_Expr_replaceFVar(x_15, x_3, x_16);
lean_dec(x_16);
x_18 = l_Lean_mkArrow___redArg(x_17, x_7, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = lean_box(0);
x_23 = lean_box(1);
x_24 = lean_unbox(x_22);
x_25 = lean_unbox(x_22);
x_26 = lean_unbox(x_23);
lean_inc(x_20);
x_27 = l_Lean_Meta_mkLambdaFVars(x_6, x_20, x_24, x_4, x_25, x_4, x_26, x_10, x_11, x_12, x_13, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_getLevel(x_20, x_10, x_11, x_12, x_13, x_29);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_ctor_set(x_18, 1, x_32);
lean_ctor_set(x_18, 0, x_28);
lean_ctor_set(x_30, 0, x_18);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_30);
lean_ctor_set(x_18, 1, x_33);
lean_ctor_set(x_18, 0, x_28);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_18);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_28);
lean_free_object(x_18);
x_36 = !lean_is_exclusive(x_30);
if (x_36 == 0)
{
return x_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_30, 0);
x_38 = lean_ctor_get(x_30, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_30);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_free_object(x_18);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_40 = !lean_is_exclusive(x_27);
if (x_40 == 0)
{
return x_27;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_27, 0);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_27);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_18, 0);
x_45 = lean_ctor_get(x_18, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_18);
x_46 = lean_box(0);
x_47 = lean_box(1);
x_48 = lean_unbox(x_46);
x_49 = lean_unbox(x_46);
x_50 = lean_unbox(x_47);
lean_inc(x_44);
x_51 = l_Lean_Meta_mkLambdaFVars(x_6, x_44, x_48, x_4, x_49, x_4, x_50, x_10, x_11, x_12, x_13, x_45);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Meta_getLevel(x_44, x_10, x_11, x_12, x_13, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_55);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_52);
x_60 = lean_ctor_get(x_54, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_62 = x_54;
} else {
 lean_dec_ref(x_54);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_44);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_64 = lean_ctor_get(x_51, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_51, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_66 = x_51;
} else {
 lean_dec_ref(x_51);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_7);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(x_1, x_7, x_2, x_3, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_mk_empty_array_with_capacity(x_4);
x_19 = lean_array_push(x_18, x_1);
x_20 = lean_array_push(x_19, x_7);
x_21 = lean_box(1);
x_22 = lean_unbox(x_21);
x_23 = l_Lean_Meta_mkLambdaFVars(x_20, x_16, x_5, x_6, x_5, x_6, x_22, x_10, x_11, x_12, x_13, x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_23;
}
else
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_1);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, uint8_t x_9, uint8_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_array_get(x_1, x_13, x_2);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_3);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_4);
lean_inc(x_22);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_22);
x_26 = lean_mk_empty_array_with_capacity(x_5);
x_27 = lean_array_push(x_26, x_23);
x_28 = lean_array_push(x_27, x_24);
x_29 = lean_array_push(x_28, x_25);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_30 = l_Lean_Meta_mkAppOptM(x_6, x_29, x_17, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_41; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_box(x_9);
x_34 = lean_box(x_10);
x_35 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed), 14, 6);
lean_closure_set(x_35, 0, x_22);
lean_closure_set(x_35, 1, x_14);
lean_closure_set(x_35, 2, x_7);
lean_closure_set(x_35, 3, x_8);
lean_closure_set(x_35, 4, x_33);
lean_closure_set(x_35, 5, x_34);
x_41 = lean_ctor_get(x_12, 3);
lean_inc(x_41);
x_36 = x_41;
goto block_40;
block_40:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = l_Lean_Expr_replaceFVar(x_36, x_11, x_31);
lean_dec(x_31);
lean_dec(x_36);
x_38 = lean_ctor_get(x_12, 2);
lean_inc(x_38);
lean_dec(x_12);
x_39 = l_Lean_Meta_withLocalDeclD___at___Lean_Elab_Term_ToDepElimPattern_main_unpack_go_spec__0___redArg(x_38, x_37, x_35, x_15, x_16, x_17, x_18, x_19, x_20, x_32);
return x_39;
}
}
else
{
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_box(x_8);
x_23 = lean_box(x_9);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed), 21, 12);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_2);
lean_closure_set(x_24, 2, x_3);
lean_closure_set(x_24, 3, x_4);
lean_closure_set(x_24, 4, x_5);
lean_closure_set(x_24, 5, x_13);
lean_closure_set(x_24, 6, x_6);
lean_closure_set(x_24, 7, x_7);
lean_closure_set(x_24, 8, x_22);
lean_closure_set(x_24, 9, x_23);
lean_closure_set(x_24, 10, x_10);
lean_closure_set(x_24, 11, x_11);
x_25 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(x_14, x_12, x_24, x_8, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
return x_25;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PSum", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inl", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1;
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inr", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3;
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("casesOn", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5;
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_241; 
x_241 = l_Lean_Expr_isFVar(x_1);
if (x_241 == 0)
{
x_12 = x_241;
goto block_240;
}
else
{
lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_242 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_243 = lean_unsigned_to_nat(6u);
x_244 = l_Lean_Expr_isAppOfArity(x_3, x_242, x_243);
x_12 = x_244;
goto block_240;
}
block_240:
{
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_apply_10(x_4, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Expr_getAppNumArgs(x_3);
x_16 = lean_nat_sub(x_15, x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = l_Lean_Expr_getRevArg_x21(x_3, x_18);
x_20 = lean_expr_eqv(x_19, x_1);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_15);
x_21 = lean_apply_10(x_4, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_unsigned_to_nat(4u);
x_23 = lean_nat_sub(x_15, x_22);
x_24 = lean_nat_sub(x_23, x_17);
lean_dec(x_23);
x_25 = l_Lean_Expr_getRevArg_x21(x_3, x_24);
x_26 = l_Lean_Expr_isLambda(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_15);
x_27 = lean_apply_10(x_4, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_unsigned_to_nat(5u);
x_29 = lean_nat_sub(x_15, x_28);
x_30 = lean_nat_sub(x_29, x_17);
lean_dec(x_29);
x_31 = l_Lean_Expr_getRevArg_x21(x_3, x_30);
x_32 = l_Lean_Expr_isLambda(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_15);
x_33 = lean_apply_10(x_4, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Lean_Expr_fvarId_x21(x_2);
lean_inc(x_7);
x_35 = l_Lean_FVarId_getDecl___redArg(x_34, x_7, x_9, x_10, x_11);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_instInhabitedExpr;
x_39 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
lean_inc(x_15);
x_40 = lean_mk_array(x_15, x_39);
x_41 = lean_nat_sub(x_15, x_17);
lean_dec(x_15);
x_42 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_40, x_41);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_box(x_26);
lean_inc(x_36);
lean_inc(x_1);
x_45 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(x_45, 0, x_38);
lean_closure_set(x_45, 1, x_43);
lean_closure_set(x_45, 2, x_1);
lean_closure_set(x_45, 3, x_44);
lean_closure_set(x_45, 4, x_36);
x_46 = lean_unsigned_to_nat(2u);
x_47 = lean_array_get(x_38, x_42, x_46);
x_48 = lean_box(0);
x_49 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_50 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_47, x_45, x_49, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_51, 0);
x_55 = lean_ctor_get(x_51, 1);
x_56 = lean_array_get(x_38, x_42, x_43);
x_57 = lean_array_get(x_38, x_42, x_17);
x_58 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2;
x_59 = lean_array_get(x_38, x_42, x_22);
x_60 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_36);
lean_inc(x_1);
lean_inc(x_4);
lean_inc(x_57);
lean_inc(x_56);
x_61 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_38, x_43, x_56, x_57, x_14, x_4, x_46, x_60, x_26, x_1, x_36, x_17, x_58, x_59, x_5, x_6, x_7, x_8, x_9, x_10, x_52);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
x_65 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4;
x_66 = lean_array_get(x_38, x_42, x_28);
lean_dec(x_42);
x_67 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_57);
lean_inc(x_56);
x_68 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_38, x_43, x_56, x_57, x_14, x_4, x_46, x_67, x_26, x_1, x_36, x_17, x_65, x_66, x_5, x_6, x_7, x_8, x_9, x_10, x_64);
if (lean_obj_tag(x_68) == 0)
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_56);
x_72 = l_Lean_Meta_getLevel(x_56, x_7, x_8, x_9, x_10, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
lean_inc(x_57);
x_75 = l_Lean_Meta_getLevel(x_57, x_7, x_8, x_9, x_10, x_74);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_79 = lean_box(0);
lean_ctor_set_tag(x_68, 1);
lean_ctor_set(x_68, 1, x_79);
lean_ctor_set(x_68, 0, x_77);
lean_ctor_set_tag(x_61, 1);
lean_ctor_set(x_61, 1, x_68);
lean_ctor_set(x_61, 0, x_73);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 1, x_61);
lean_ctor_set(x_51, 0, x_55);
x_80 = l_Lean_Expr_const___override(x_78, x_51);
x_81 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
x_82 = lean_array_push(x_81, x_56);
x_83 = lean_array_push(x_82, x_57);
x_84 = lean_array_push(x_83, x_54);
x_85 = lean_array_push(x_84, x_1);
x_86 = lean_array_push(x_85, x_63);
x_87 = lean_array_push(x_86, x_70);
x_88 = lean_array_push(x_87, x_2);
x_89 = l_Lean_mkAppN(x_80, x_88);
lean_dec(x_88);
lean_ctor_set(x_75, 0, x_89);
return x_75;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_90 = lean_ctor_get(x_75, 0);
x_91 = lean_ctor_get(x_75, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_75);
x_92 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_93 = lean_box(0);
lean_ctor_set_tag(x_68, 1);
lean_ctor_set(x_68, 1, x_93);
lean_ctor_set(x_68, 0, x_90);
lean_ctor_set_tag(x_61, 1);
lean_ctor_set(x_61, 1, x_68);
lean_ctor_set(x_61, 0, x_73);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 1, x_61);
lean_ctor_set(x_51, 0, x_55);
x_94 = l_Lean_Expr_const___override(x_92, x_51);
x_95 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
x_96 = lean_array_push(x_95, x_56);
x_97 = lean_array_push(x_96, x_57);
x_98 = lean_array_push(x_97, x_54);
x_99 = lean_array_push(x_98, x_1);
x_100 = lean_array_push(x_99, x_63);
x_101 = lean_array_push(x_100, x_70);
x_102 = lean_array_push(x_101, x_2);
x_103 = l_Lean_mkAppN(x_94, x_102);
lean_dec(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_91);
return x_104;
}
}
else
{
uint8_t x_105; 
lean_dec(x_73);
lean_free_object(x_68);
lean_dec(x_70);
lean_free_object(x_61);
lean_dec(x_63);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_2);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_75);
if (x_105 == 0)
{
return x_75;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_75, 0);
x_107 = lean_ctor_get(x_75, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_75);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
lean_free_object(x_68);
lean_dec(x_70);
lean_free_object(x_61);
lean_dec(x_63);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_72);
if (x_109 == 0)
{
return x_72;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_72, 0);
x_111 = lean_ctor_get(x_72, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_72);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_68, 0);
x_114 = lean_ctor_get(x_68, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_68);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_56);
x_115 = l_Lean_Meta_getLevel(x_56, x_7, x_8, x_9, x_10, x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
lean_inc(x_57);
x_118 = l_Lean_Meta_getLevel(x_57, x_7, x_8, x_9, x_10, x_117);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
x_122 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_119);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set_tag(x_61, 1);
lean_ctor_set(x_61, 1, x_124);
lean_ctor_set(x_61, 0, x_116);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 1, x_61);
lean_ctor_set(x_51, 0, x_55);
x_125 = l_Lean_Expr_const___override(x_122, x_51);
x_126 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
x_127 = lean_array_push(x_126, x_56);
x_128 = lean_array_push(x_127, x_57);
x_129 = lean_array_push(x_128, x_54);
x_130 = lean_array_push(x_129, x_1);
x_131 = lean_array_push(x_130, x_63);
x_132 = lean_array_push(x_131, x_113);
x_133 = lean_array_push(x_132, x_2);
x_134 = l_Lean_mkAppN(x_125, x_133);
lean_dec(x_133);
if (lean_is_scalar(x_121)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_121;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_120);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_116);
lean_dec(x_113);
lean_free_object(x_61);
lean_dec(x_63);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_2);
lean_dec(x_1);
x_136 = lean_ctor_get(x_118, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_118, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_138 = x_118;
} else {
 lean_dec_ref(x_118);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_113);
lean_free_object(x_61);
lean_dec(x_63);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_140 = lean_ctor_get(x_115, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_115, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_142 = x_115;
} else {
 lean_dec_ref(x_115);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
else
{
lean_free_object(x_61);
lean_dec(x_63);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_68;
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; 
x_144 = lean_ctor_get(x_61, 0);
x_145 = lean_ctor_get(x_61, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_61);
x_146 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4;
x_147 = lean_array_get(x_38, x_42, x_28);
lean_dec(x_42);
x_148 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_57);
lean_inc(x_56);
x_149 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_38, x_43, x_56, x_57, x_14, x_4, x_46, x_148, x_26, x_1, x_36, x_17, x_146, x_147, x_5, x_6, x_7, x_8, x_9, x_10, x_145);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_152 = x_149;
} else {
 lean_dec_ref(x_149);
 x_152 = lean_box(0);
}
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_56);
x_153 = l_Lean_Meta_getLevel(x_56, x_7, x_8, x_9, x_10, x_151);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
lean_inc(x_57);
x_156 = l_Lean_Meta_getLevel(x_57, x_7, x_8, x_9, x_10, x_155);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_159 = x_156;
} else {
 lean_dec_ref(x_156);
 x_159 = lean_box(0);
}
x_160 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_161 = lean_box(0);
if (lean_is_scalar(x_152)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_152;
 lean_ctor_set_tag(x_162, 1);
}
lean_ctor_set(x_162, 0, x_157);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_154);
lean_ctor_set(x_163, 1, x_162);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 1, x_163);
lean_ctor_set(x_51, 0, x_55);
x_164 = l_Lean_Expr_const___override(x_160, x_51);
x_165 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
x_166 = lean_array_push(x_165, x_56);
x_167 = lean_array_push(x_166, x_57);
x_168 = lean_array_push(x_167, x_54);
x_169 = lean_array_push(x_168, x_1);
x_170 = lean_array_push(x_169, x_144);
x_171 = lean_array_push(x_170, x_150);
x_172 = lean_array_push(x_171, x_2);
x_173 = l_Lean_mkAppN(x_164, x_172);
lean_dec(x_172);
if (lean_is_scalar(x_159)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_159;
}
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_158);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_154);
lean_dec(x_152);
lean_dec(x_150);
lean_dec(x_144);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_2);
lean_dec(x_1);
x_175 = lean_ctor_get(x_156, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_156, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_177 = x_156;
} else {
 lean_dec_ref(x_156);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_152);
lean_dec(x_150);
lean_dec(x_144);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_179 = lean_ctor_get(x_153, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_153, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_181 = x_153;
} else {
 lean_dec_ref(x_153);
 x_181 = lean_box(0);
}
if (lean_is_scalar(x_181)) {
 x_182 = lean_alloc_ctor(1, 2, 0);
} else {
 x_182 = x_181;
}
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_180);
return x_182;
}
}
else
{
lean_dec(x_144);
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_149;
}
}
}
else
{
lean_dec(x_57);
lean_dec(x_56);
lean_free_object(x_51);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_42);
lean_dec(x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_61;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; lean_object* x_190; 
x_183 = lean_ctor_get(x_51, 0);
x_184 = lean_ctor_get(x_51, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_51);
x_185 = lean_array_get(x_38, x_42, x_43);
x_186 = lean_array_get(x_38, x_42, x_17);
x_187 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2;
x_188 = lean_array_get(x_38, x_42, x_22);
x_189 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_36);
lean_inc(x_1);
lean_inc(x_4);
lean_inc(x_186);
lean_inc(x_185);
x_190 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_38, x_43, x_185, x_186, x_14, x_4, x_46, x_189, x_26, x_1, x_36, x_17, x_187, x_188, x_5, x_6, x_7, x_8, x_9, x_10, x_52);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; lean_object* x_197; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_193 = x_190;
} else {
 lean_dec_ref(x_190);
 x_193 = lean_box(0);
}
x_194 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4;
x_195 = lean_array_get(x_38, x_42, x_28);
lean_dec(x_42);
x_196 = lean_unbox(x_48);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_186);
lean_inc(x_185);
x_197 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_38, x_43, x_185, x_186, x_14, x_4, x_46, x_196, x_26, x_1, x_36, x_17, x_194, x_195, x_5, x_6, x_7, x_8, x_9, x_10, x_192);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_200 = x_197;
} else {
 lean_dec_ref(x_197);
 x_200 = lean_box(0);
}
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_185);
x_201 = l_Lean_Meta_getLevel(x_185, x_7, x_8, x_9, x_10, x_199);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
lean_inc(x_186);
x_204 = l_Lean_Meta_getLevel(x_186, x_7, x_8, x_9, x_10, x_203);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_207 = x_204;
} else {
 lean_dec_ref(x_204);
 x_207 = lean_box(0);
}
x_208 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
x_209 = lean_box(0);
if (lean_is_scalar(x_200)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_200;
 lean_ctor_set_tag(x_210, 1);
}
lean_ctor_set(x_210, 0, x_205);
lean_ctor_set(x_210, 1, x_209);
if (lean_is_scalar(x_193)) {
 x_211 = lean_alloc_ctor(1, 2, 0);
} else {
 x_211 = x_193;
 lean_ctor_set_tag(x_211, 1);
}
lean_ctor_set(x_211, 0, x_202);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_184);
lean_ctor_set(x_212, 1, x_211);
x_213 = l_Lean_Expr_const___override(x_208, x_212);
x_214 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7;
x_215 = lean_array_push(x_214, x_185);
x_216 = lean_array_push(x_215, x_186);
x_217 = lean_array_push(x_216, x_183);
x_218 = lean_array_push(x_217, x_1);
x_219 = lean_array_push(x_218, x_191);
x_220 = lean_array_push(x_219, x_198);
x_221 = lean_array_push(x_220, x_2);
x_222 = l_Lean_mkAppN(x_213, x_221);
lean_dec(x_221);
if (lean_is_scalar(x_207)) {
 x_223 = lean_alloc_ctor(0, 2, 0);
} else {
 x_223 = x_207;
}
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_206);
return x_223;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_202);
lean_dec(x_200);
lean_dec(x_198);
lean_dec(x_193);
lean_dec(x_191);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_2);
lean_dec(x_1);
x_224 = lean_ctor_get(x_204, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_204, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_226 = x_204;
} else {
 lean_dec_ref(x_204);
 x_226 = lean_box(0);
}
if (lean_is_scalar(x_226)) {
 x_227 = lean_alloc_ctor(1, 2, 0);
} else {
 x_227 = x_226;
}
lean_ctor_set(x_227, 0, x_224);
lean_ctor_set(x_227, 1, x_225);
return x_227;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_200);
lean_dec(x_198);
lean_dec(x_193);
lean_dec(x_191);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_228 = lean_ctor_get(x_201, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_201, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_230 = x_201;
} else {
 lean_dec_ref(x_201);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(1, 2, 0);
} else {
 x_231 = x_230;
}
lean_ctor_set(x_231, 0, x_228);
lean_ctor_set(x_231, 1, x_229);
return x_231;
}
}
else
{
lean_dec(x_193);
lean_dec(x_191);
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_197;
}
}
else
{
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_42);
lean_dec(x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_190;
}
}
}
else
{
uint8_t x_232; 
lean_dec(x_42);
lean_dec(x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_232 = !lean_is_exclusive(x_50);
if (x_232 == 0)
{
return x_50;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_50, 0);
x_234 = lean_ctor_get(x_50, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_50);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
else
{
uint8_t x_236; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_236 = !lean_is_exclusive(x_35);
if (x_236 == 0)
{
return x_35;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_35, 0);
x_238 = lean_ctor_get(x_35, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_35);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = l_Lean_Meta_lambdaBoundedTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(x_1, x_2, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
uint8_t x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_unbox(x_9);
lean_dec(x_9);
x_23 = lean_unbox(x_10);
lean_dec(x_10);
x_24 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22, x_23, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
return x_24;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
uint8_t x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_unbox(x_8);
lean_dec(x_8);
x_23 = lean_unbox(x_9);
lean_dec(x_9);
x_24 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_22, x_23, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
return x_24;
}
}
static lean_object* _init_l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
x_10 = lean_panic_fn(x_9, x_1);
x_11 = lean_apply_7(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_9);
lean_inc(x_1);
x_17 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(x_1, x_9, x_2, x_3, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_mk_empty_array_with_capacity(x_4);
x_21 = lean_array_push(x_20, x_5);
x_22 = lean_array_push(x_21, x_1);
x_23 = lean_array_push(x_22, x_9);
x_24 = l_Lean_Meta_mkLambdaFVars(x_23, x_18, x_6, x_7, x_6, x_7, x_8, x_12, x_13, x_14, x_15, x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
return x_24;
}
else
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
return x_17;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PSigma", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mk", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1;
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_23 = lean_array_get_size(x_14);
lean_inc(x_14);
x_24 = l_Array_toSubarray___redArg(x_14, x_1, x_23);
x_25 = l_Array_ofSubarray___redArg(x_24);
lean_dec(x_24);
x_26 = lean_box(1);
x_27 = lean_unbox(x_26);
x_28 = l_Lean_Meta_mkLambdaFVars(x_25, x_15, x_2, x_3, x_2, x_3, x_27, x_18, x_19, x_20, x_21, x_22);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_4);
x_31 = lean_array_get(x_4, x_14, x_5);
x_32 = lean_array_get(x_4, x_14, x_6);
lean_dec(x_14);
x_33 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2;
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_7);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_8);
lean_inc(x_31);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_31);
lean_inc(x_32);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_32);
x_38 = lean_mk_empty_array_with_capacity(x_9);
x_39 = lean_array_push(x_38, x_34);
x_40 = lean_array_push(x_39, x_35);
x_41 = lean_array_push(x_40, x_36);
x_42 = lean_array_push(x_41, x_37);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_43 = l_Lean_Meta_mkAppOptM(x_33, x_42, x_18, x_19, x_20, x_21, x_30);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_54; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_box(x_2);
x_47 = lean_box(x_3);
x_48 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed), 16, 8);
lean_closure_set(x_48, 0, x_32);
lean_closure_set(x_48, 1, x_29);
lean_closure_set(x_48, 2, x_10);
lean_closure_set(x_48, 3, x_11);
lean_closure_set(x_48, 4, x_31);
lean_closure_set(x_48, 5, x_46);
lean_closure_set(x_48, 6, x_47);
lean_closure_set(x_48, 7, x_26);
x_54 = lean_ctor_get(x_13, 3);
lean_inc(x_54);
x_49 = x_54;
goto block_53;
block_53:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = l_Lean_Expr_replaceFVar(x_49, x_12, x_44);
lean_dec(x_44);
lean_dec(x_49);
x_51 = lean_ctor_get(x_13, 2);
lean_inc(x_51);
lean_dec(x_13);
x_52 = l_Lean_Meta_withLocalDeclD___at___Lean_Elab_Term_ToDepElimPattern_main_unpack_go_spec__0___redArg(x_51, x_50, x_48, x_16, x_17, x_18, x_19, x_20, x_21, x_45);
return x_52;
}
}
else
{
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_43;
}
}
else
{
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
return x_28;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Elab.PreDefinition.WF.Fix", 30, 30);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.WF.Fix.0.Lean.Elab.WF.processPSigmaCasesOn", 75, 75);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2;
x_2 = lean_unsigned_to_nat(49u);
x_3 = lean_unsigned_to_nat(143u);
x_4 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1;
x_5 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5;
x_2 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_22; uint8_t x_162; 
x_162 = l_Lean_Expr_isFVar(x_1);
if (x_162 == 0)
{
x_22 = x_162;
goto block_161;
}
else
{
lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_163 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
x_164 = lean_unsigned_to_nat(5u);
x_165 = l_Lean_Expr_isAppOfArity(x_3, x_163, x_164);
x_22 = x_165;
goto block_161;
}
block_21:
{
lean_object* x_19; lean_object* x_20; 
x_19 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2;
x_20 = l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(x_19, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_20;
}
block_161:
{
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_1);
x_23 = lean_apply_9(x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Expr_getAppNumArgs(x_3);
x_26 = lean_nat_sub(x_25, x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_26, x_27);
lean_dec(x_26);
x_29 = l_Lean_Expr_getRevArg_x21(x_3, x_28);
x_30 = lean_expr_eqv(x_29, x_1);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_1);
x_31 = lean_apply_9(x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_sub(x_25, x_32);
x_34 = lean_nat_sub(x_33, x_27);
lean_dec(x_33);
x_35 = l_Lean_Expr_getRevArg_x21(x_3, x_34);
x_36 = l_Lean_Expr_isLambda(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_1);
x_37 = lean_apply_9(x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_37;
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_Expr_bindingBody_x21(x_35);
lean_dec(x_35);
x_39 = l_Lean_Expr_isLambda(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_25);
lean_dec(x_1);
x_40 = lean_apply_9(x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = l_Lean_Expr_getAppFn(x_3);
x_42 = l_Lean_Expr_constLevels_x21(x_41);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
x_15 = x_8;
x_16 = x_9;
x_17 = x_10;
x_18 = x_11;
goto block_21;
}
else
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
x_15 = x_8;
x_16 = x_9;
x_17 = x_10;
x_18 = x_11;
goto block_21;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
x_15 = x_8;
x_16 = x_9;
x_17 = x_10;
x_18 = x_11;
goto block_21;
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 1);
x_47 = lean_ctor_get(x_44, 0);
lean_dec(x_47);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = l_Lean_Expr_fvarId_x21(x_2);
lean_inc(x_7);
x_49 = l_Lean_FVarId_getDecl___redArg(x_48, x_7, x_9, x_10, x_11);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_instInhabitedExpr;
x_53 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
lean_inc(x_25);
x_54 = lean_mk_array(x_25, x_53);
x_55 = lean_nat_sub(x_25, x_27);
lean_dec(x_25);
x_56 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_54, x_55);
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_box(x_36);
lean_inc(x_50);
lean_inc(x_1);
x_59 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(x_59, 0, x_52);
lean_closure_set(x_59, 1, x_57);
lean_closure_set(x_59, 2, x_1);
lean_closure_set(x_59, 3, x_58);
lean_closure_set(x_59, 4, x_50);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_array_get(x_52, x_56, x_60);
x_62 = lean_box(0);
x_63 = lean_unbox(x_62);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_64 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_61, x_59, x_63, x_5, x_6, x_7, x_8, x_9, x_10, x_51);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_array_get(x_52, x_56, x_57);
x_70 = lean_array_get(x_52, x_56, x_27);
x_71 = lean_box(x_36);
lean_inc(x_1);
lean_inc(x_70);
lean_inc(x_69);
x_72 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 22, 13);
lean_closure_set(x_72, 0, x_60);
lean_closure_set(x_72, 1, x_62);
lean_closure_set(x_72, 2, x_71);
lean_closure_set(x_72, 3, x_52);
lean_closure_set(x_72, 4, x_57);
lean_closure_set(x_72, 5, x_27);
lean_closure_set(x_72, 6, x_69);
lean_closure_set(x_72, 7, x_70);
lean_closure_set(x_72, 8, x_32);
lean_closure_set(x_72, 9, x_4);
lean_closure_set(x_72, 10, x_24);
lean_closure_set(x_72, 11, x_1);
lean_closure_set(x_72, 12, x_50);
x_73 = lean_array_get(x_52, x_56, x_32);
lean_dec(x_56);
x_74 = lean_unbox(x_62);
x_75 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_73, x_72, x_74, x_5, x_6, x_7, x_8, x_9, x_10, x_66);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 0, x_68);
x_79 = l_Lean_Expr_const___override(x_78, x_44);
x_80 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4;
x_81 = lean_array_push(x_80, x_69);
x_82 = lean_array_push(x_81, x_70);
x_83 = lean_array_push(x_82, x_67);
x_84 = lean_array_push(x_83, x_1);
x_85 = lean_array_push(x_84, x_77);
x_86 = lean_array_push(x_85, x_2);
x_87 = l_Lean_mkAppN(x_79, x_86);
lean_dec(x_86);
lean_ctor_set(x_75, 0, x_87);
return x_75;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_88 = lean_ctor_get(x_75, 0);
x_89 = lean_ctor_get(x_75, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_75);
x_90 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 0, x_68);
x_91 = l_Lean_Expr_const___override(x_90, x_44);
x_92 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4;
x_93 = lean_array_push(x_92, x_69);
x_94 = lean_array_push(x_93, x_70);
x_95 = lean_array_push(x_94, x_67);
x_96 = lean_array_push(x_95, x_1);
x_97 = lean_array_push(x_96, x_88);
x_98 = lean_array_push(x_97, x_2);
x_99 = l_Lean_mkAppN(x_91, x_98);
lean_dec(x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_89);
return x_100;
}
}
else
{
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_free_object(x_44);
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
return x_75;
}
}
else
{
uint8_t x_101; 
lean_dec(x_56);
lean_dec(x_50);
lean_free_object(x_44);
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_64);
if (x_101 == 0)
{
return x_64;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_64, 0);
x_103 = lean_ctor_get(x_64, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_64);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_free_object(x_44);
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_49);
if (x_105 == 0)
{
return x_49;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_49, 0);
x_107 = lean_ctor_get(x_49, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_49);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
lean_free_object(x_44);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
x_15 = x_8;
x_16 = x_9;
x_17 = x_10;
x_18 = x_11;
goto block_21;
}
}
else
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_44, 1);
lean_inc(x_109);
lean_dec(x_44);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = l_Lean_Expr_fvarId_x21(x_2);
lean_inc(x_7);
x_111 = l_Lean_FVarId_getDecl___redArg(x_110, x_7, x_9, x_10, x_11);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = l_Lean_instInhabitedExpr;
x_115 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
lean_inc(x_25);
x_116 = lean_mk_array(x_25, x_115);
x_117 = lean_nat_sub(x_25, x_27);
lean_dec(x_25);
x_118 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_116, x_117);
x_119 = lean_unsigned_to_nat(0u);
x_120 = lean_box(x_36);
lean_inc(x_112);
lean_inc(x_1);
x_121 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(x_121, 0, x_114);
lean_closure_set(x_121, 1, x_119);
lean_closure_set(x_121, 2, x_1);
lean_closure_set(x_121, 3, x_120);
lean_closure_set(x_121, 4, x_112);
x_122 = lean_unsigned_to_nat(2u);
x_123 = lean_array_get(x_114, x_118, x_122);
x_124 = lean_box(0);
x_125 = lean_unbox(x_124);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_126 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_123, x_121, x_125, x_5, x_6, x_7, x_8, x_9, x_10, x_113);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec(x_127);
x_131 = lean_array_get(x_114, x_118, x_119);
x_132 = lean_array_get(x_114, x_118, x_27);
x_133 = lean_box(x_36);
lean_inc(x_1);
lean_inc(x_132);
lean_inc(x_131);
x_134 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 22, 13);
lean_closure_set(x_134, 0, x_122);
lean_closure_set(x_134, 1, x_124);
lean_closure_set(x_134, 2, x_133);
lean_closure_set(x_134, 3, x_114);
lean_closure_set(x_134, 4, x_119);
lean_closure_set(x_134, 5, x_27);
lean_closure_set(x_134, 6, x_131);
lean_closure_set(x_134, 7, x_132);
lean_closure_set(x_134, 8, x_32);
lean_closure_set(x_134, 9, x_4);
lean_closure_set(x_134, 10, x_24);
lean_closure_set(x_134, 11, x_1);
lean_closure_set(x_134, 12, x_112);
x_135 = lean_array_get(x_114, x_118, x_32);
lean_dec(x_118);
x_136 = lean_unbox(x_124);
x_137 = l_Lean_Meta_lambdaTelescope___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(x_135, x_134, x_136, x_5, x_6, x_7, x_8, x_9, x_10, x_128);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_130);
lean_ctor_set(x_142, 1, x_43);
x_143 = l_Lean_Expr_const___override(x_141, x_142);
x_144 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4;
x_145 = lean_array_push(x_144, x_131);
x_146 = lean_array_push(x_145, x_132);
x_147 = lean_array_push(x_146, x_129);
x_148 = lean_array_push(x_147, x_1);
x_149 = lean_array_push(x_148, x_138);
x_150 = lean_array_push(x_149, x_2);
x_151 = l_Lean_mkAppN(x_143, x_150);
lean_dec(x_150);
if (lean_is_scalar(x_140)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_140;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_139);
return x_152;
}
else
{
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
return x_137;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_118);
lean_dec(x_112);
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_153 = lean_ctor_get(x_126, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_126, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_155 = x_126;
} else {
 lean_dec_ref(x_126);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_157 = lean_ctor_get(x_111, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_111, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_159 = x_111;
} else {
 lean_dec_ref(x_111);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_dec(x_109);
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
x_15 = x_8;
x_16 = x_9;
x_17 = x_10;
x_18 = x_11;
goto block_21;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = lean_unbox(x_8);
lean_dec(x_8);
x_20 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(x_1, x_2, x_3, x_4, x_5, x_17, x_18, x_19, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_20;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
_start:
{
uint8_t x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_unbox(x_2);
lean_dec(x_2);
x_24 = lean_unbox(x_3);
lean_dec(x_3);
x_25 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(x_1, x_23, x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
return x_25;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticDecreasing_tactic", 23, 23);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("decreasing_tactic", 17, 17);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_WF_applyCleanWfTactic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_8, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_7, 5);
lean_inc(x_16);
x_17 = lean_box(0);
x_18 = lean_unbox(x_17);
x_19 = l_Lean_SourceInfo_fromRef(x_16, x_18);
lean_dec(x_16);
x_20 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1;
x_21 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2;
lean_inc(x_19);
lean_ctor_set_tag(x_12, 2);
lean_ctor_set(x_12, 1, x_21);
lean_ctor_set(x_12, 0, x_19);
x_22 = l_Lean_Syntax_node1(x_19, x_20, x_12);
x_23 = l_Lean_Elab_Tactic_evalTactic(x_22, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_dec(x_12);
x_25 = lean_ctor_get(x_7, 5);
lean_inc(x_25);
x_26 = lean_box(0);
x_27 = lean_unbox(x_26);
x_28 = l_Lean_SourceInfo_fromRef(x_25, x_27);
lean_dec(x_25);
x_29 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1;
x_30 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2;
lean_inc(x_28);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Syntax_node1(x_28, x_29, x_31);
x_33 = l_Lean_Elab_Tactic_evalTactic(x_32, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_33;
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0), 9, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_Elab_Tactic_run(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_List_isEmpty___redArg(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_free_object(x_10);
x_15 = l_Lean_Elab_Term_reportUnsolvedGoals(x_12, x_4, x_5, x_6, x_7, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = lean_box(0);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = l_List_isEmpty___redArg(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Elab_Term_reportUnsolvedGoals(x_17, x_4, x_5, x_6, x_7, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0(uint8_t x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_nat_add(x_5, x_2);
lean_dec(x_5);
x_14 = lean_box(x_4);
x_15 = lean_array_set(x_6, x_3, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_12);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_21; uint8_t x_26; 
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 2);
x_26 = lean_nat_dec_lt(x_8, x_14);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_13);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_28 = lean_ctor_get(x_7, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_30 = x_7;
} else {
 lean_dec_ref(x_7);
 x_30 = lean_box(0);
}
x_57 = lean_box(x_5);
x_58 = lean_array_get(x_57, x_29, x_2);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = lean_box(x_5);
x_61 = lean_array_get(x_60, x_29, x_8);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
x_31 = x_62;
goto block_56;
}
else
{
x_31 = x_59;
goto block_56;
}
block_56:
{
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_30);
x_32 = lean_array_fget(x_1, x_2);
x_33 = lean_array_fget(x_1, x_8);
lean_inc(x_3);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_34 = lean_apply_7(x_3, x_32, x_33, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_nat_add(x_28, x_4);
lean_dec(x_28);
x_41 = lean_box(x_26);
x_42 = lean_array_set(x_29, x_2, x_41);
x_43 = lean_box(0);
x_44 = lean_unbox(x_39);
lean_dec(x_39);
x_45 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0(x_44, x_4, x_8, x_26, x_40, x_42, x_43, x_9, x_10, x_11, x_12, x_38);
x_21 = x_45;
goto block_25;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_34, 1);
lean_inc(x_46);
lean_dec(x_34);
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
lean_dec(x_35);
x_48 = lean_box(0);
x_49 = lean_unbox(x_47);
lean_dec(x_47);
x_50 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0(x_49, x_4, x_8, x_26, x_28, x_29, x_48, x_9, x_10, x_11, x_12, x_46);
x_21 = x_50;
goto block_25;
}
}
else
{
uint8_t x_51; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_34);
if (x_51 == 0)
{
return x_34;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_34, 0);
x_53 = lean_ctor_get(x_34, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_34);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; 
if (lean_is_scalar(x_30)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_30;
}
lean_ctor_set(x_55, 0, x_28);
lean_ctor_set(x_55, 1, x_29);
x_16 = x_55;
x_17 = x_13;
goto block_20;
}
}
}
block_20:
{
lean_object* x_18; 
x_18 = lean_nat_add(x_8, x_15);
lean_dec(x_8);
x_7 = x_16;
x_8 = x_18;
x_13 = x_17;
goto _start;
}
block_25:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_16 = x_24;
x_17 = x_23;
goto block_20;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_12, x_13, x_14, x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 2);
x_16 = lean_nat_dec_lt(x_8, x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_nat_add(x_8, x_1);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_2);
lean_ctor_set(x_20, 2, x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
x_21 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_3, x_8, x_4, x_1, x_5, x_20, x_7, x_19, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_nat_add(x_8, x_15);
lean_dec(x_8);
x_7 = x_22;
x_8 = x_24;
x_13 = x_23;
goto _start;
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_nat_add(x_8, x_1);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_28);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_2);
lean_ctor_set(x_29, 2, x_1);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_27);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
x_31 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_3, x_8, x_4, x_1, x_5, x_29, x_30, x_28, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_nat_add(x_8, x_15);
lean_dec(x_8);
x_7 = x_32;
x_8 = x_34;
x_13 = x_33;
goto _start;
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_12, x_13, x_14, x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_6, 1);
x_15 = lean_ctor_get(x_6, 2);
x_16 = lean_nat_dec_lt(x_8, x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_nat_add(x_8, x_3);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_5);
lean_ctor_set(x_20, 2, x_3);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_21 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_1, x_8, x_2, x_3, x_4, x_20, x_7, x_19, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_nat_add(x_8, x_15);
x_25 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(x_3, x_5, x_1, x_2, x_4, x_6, x_22, x_24, x_9, x_10, x_11, x_12, x_23);
return x_25;
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_21;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_nat_add(x_8, x_3);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_28);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_5);
lean_ctor_set(x_29, 2, x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_27);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_31 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_1, x_8, x_2, x_3, x_4, x_29, x_30, x_28, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_nat_add(x_8, x_15);
x_35 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(x_3, x_5, x_1, x_2, x_4, x_6, x_32, x_34, x_9, x_10, x_11, x_12, x_33);
return x_35;
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_12, x_13, x_14, x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_15; 
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_4, 2);
x_15 = lean_nat_dec_lt(x_6, x_8);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_6);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_box(x_1);
x_18 = lean_array_get(x_17, x_2, x_6);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_array_fget(x_3, x_6);
x_21 = lean_array_push(x_5, x_20);
x_10 = x_21;
x_11 = x_7;
goto block_14;
}
else
{
x_10 = x_5;
x_11 = x_7;
goto block_14;
}
}
block_14:
{
lean_object* x_12; 
x_12 = lean_nat_add(x_6, x_9);
lean_dec(x_6);
x_5 = x_10;
x_6 = x_12;
x_7 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_8 = lean_box(0);
x_9 = lean_array_get_size(x_1);
lean_inc(x_9);
x_10 = lean_mk_array(x_9, x_8);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_unbox(x_8);
x_16 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg(x_1, x_2, x_12, x_15, x_9, x_13, x_14, x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_mk_empty_array_with_capacity(x_19);
lean_dec(x_19);
x_22 = lean_unbox(x_8);
x_23 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg(x_22, x_20, x_1, x_13, x_21, x_11, x_18);
lean_dec(x_13);
lean_dec(x_20);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_12; 
lean_inc(x_1);
x_12 = l_Lean_MVarId_getDecl(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_2);
x_15 = l_Lean_MVarId_getDecl(x_2, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_13, 2);
lean_inc(x_19);
lean_dec(x_13);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 2);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_expr_eqv(x_19, x_21);
lean_dec(x_21);
lean_dec(x_19);
if (x_22 == 0)
{
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_17;
goto block_11;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1;
lean_inc(x_20);
lean_inc(x_18);
x_24 = l_Lean_LocalContext_isSubPrefixOf(x_18, x_20, x_23);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_LocalContext_isSubPrefixOf(x_20, x_18, x_23);
if (x_25 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_17;
goto block_11;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = l_Lean_Expr_mvar___override(x_2);
x_27 = l_Lean_MVarId_assign___at___Lean_Meta_getLevel_spec__0___redArg(x_1, x_26, x_4, x_17);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(x_24);
x_31 = lean_box(x_22);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_box(x_24);
x_35 = lean_box(x_22);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_20);
lean_dec(x_18);
x_38 = l_Lean_Expr_mvar___override(x_1);
x_39 = l_Lean_MVarId_assign___at___Lean_Meta_getLevel_spec__0___redArg(x_2, x_38, x_4, x_17);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
x_42 = lean_box(0);
x_43 = lean_box(x_22);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_39, 0, x_44);
return x_39;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_dec(x_39);
x_46 = lean_box(0);
x_47 = lean_box(x_22);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_15);
if (x_50 == 0)
{
return x_15;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_15, 0);
x_52 = lean_ctor_get(x_15, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_15);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_12);
if (x_54 == 0)
{
return x_12;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_12, 0);
x_56 = lean_ctor_get(x_12, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_12);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
block_11:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_WF_assignSubsumed___lam__0___boxed), 7, 0);
x_8 = l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___lam__0(x_13, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___redArg(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1_spec__1(x_1, x_2, x_3, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_7);
lean_dec(x_4);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___redArg(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_5);
lean_dec(x_5);
x_18 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__1(x_1, x_2, x_3, x_4, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___redArg(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = l_Std_Range_forIn_x27_loop___at___Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0_spec__3(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_filterPairsM___at___Lean_Elab_WF_assignSubsumed_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_WF_assignSubsumed___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_WF_assignSubsumed(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MVar does not look like a recursive call:", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot unpack param, unexpected expression:", 43, 43);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_17; 
x_17 = lean_usize_dec_lt(x_4, x_3);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_array_uget(x_2, x_4);
lean_inc(x_19);
x_20 = l_Lean_MVarId_getType(x_19, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 10)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_21, 1);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 5)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_21);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_39);
x_40 = l_Lean_Meta_ArgsPacker_unpack(x_1, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_19);
lean_dec(x_5);
x_41 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
x_42 = l_Lean_indentExpr(x_39);
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_throwError___at___Lean_getConstInfo___at___Lean_Meta_mkConstWithFreshMVarLevels_spec__0_spec__0___redArg(x_45, x_6, x_7, x_8, x_9, x_22);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
return x_46;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_39);
x_51 = lean_ctor_get(x_40, 0);
lean_inc(x_51);
lean_dec(x_40);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_array_get_size(x_5);
x_54 = lean_nat_dec_lt(x_52, x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_dec(x_52);
lean_dec(x_19);
x_11 = x_5;
x_12 = x_22;
goto block_16;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_array_fget(x_5, x_52);
x_56 = lean_box(0);
x_57 = lean_array_fset(x_5, x_52, x_56);
x_58 = lean_array_push(x_55, x_19);
x_59 = lean_array_fset(x_57, x_52, x_58);
lean_dec(x_52);
x_11 = x_59;
x_12 = x_22;
goto block_16;
}
}
}
else
{
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_5);
x_23 = x_6;
x_24 = x_7;
x_25 = x_8;
x_26 = x_9;
goto block_37;
}
}
else
{
lean_dec(x_19);
lean_dec(x_5);
x_23 = x_6;
x_24 = x_7;
x_25 = x_8;
x_26 = x_9;
goto block_37;
}
block_37:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_27 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
x_28 = l_Lean_indentExpr(x_21);
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at___Lean_getConstInfo___at___Lean_Meta_mkConstWithFreshMVarLevels_spec__0_spec__0___redArg(x_31, x_23, x_24, x_25, x_26, x_22);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
return x_32;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_19);
lean_dec(x_5);
x_60 = !lean_is_exclusive(x_20);
if (x_60 == 0)
{
return x_20;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_20, 0);
x_62 = lean_ctor_get(x_20, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_20);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
block_16:
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = lean_usize_add(x_4, x_13);
x_4 = x_14;
x_5 = x_11;
x_10 = x_12;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; 
x_9 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0;
x_10 = lean_mk_array(x_2, x_9);
x_11 = lean_array_size(x_3);
x_12 = 0;
x_13 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0(x_1, x_3, x_11, x_12, x_10, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_WF_groupGoalsByFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MVar not annotated as a recursive call:", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_19; 
x_19 = lean_usize_dec_lt(x_4, x_3);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_12);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
x_21 = lean_array_uget(x_2, x_4);
lean_inc(x_21);
x_22 = l_Lean_MVarId_getType(x_21, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_21);
x_25 = l_Lean_MVarId_getType(x_21, x_8, x_9, x_10, x_11, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_getRecAppSyntax_x3f(x_26);
lean_dec(x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_21);
lean_dec(x_1);
x_29 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1;
x_30 = l_Lean_indentExpr(x_23);
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at___Lean_Elab_Term_throwErrorIfErrors_spec__0___redArg(x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_23);
x_35 = lean_ctor_get(x_28, 0);
lean_inc(x_35);
lean_dec(x_28);
x_36 = lean_ctor_get(x_10, 0);
x_37 = lean_ctor_get(x_10, 1);
x_38 = lean_ctor_get(x_10, 2);
x_39 = lean_ctor_get(x_10, 3);
x_40 = lean_ctor_get(x_10, 4);
x_41 = lean_ctor_get(x_10, 5);
x_42 = lean_ctor_get(x_10, 6);
x_43 = lean_ctor_get(x_10, 7);
x_44 = lean_ctor_get(x_10, 8);
x_45 = lean_ctor_get(x_10, 9);
x_46 = lean_ctor_get(x_10, 10);
x_47 = lean_ctor_get_uint8(x_10, sizeof(void*)*13);
x_48 = lean_ctor_get(x_10, 11);
x_49 = lean_ctor_get_uint8(x_10, sizeof(void*)*13 + 1);
x_50 = lean_ctor_get(x_10, 12);
x_51 = l_Lean_replaceRef(x_35, x_41);
lean_dec(x_35);
lean_inc(x_50);
lean_inc(x_48);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
x_52 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_52, 0, x_36);
lean_ctor_set(x_52, 1, x_37);
lean_ctor_set(x_52, 2, x_38);
lean_ctor_set(x_52, 3, x_39);
lean_ctor_set(x_52, 4, x_40);
lean_ctor_set(x_52, 5, x_51);
lean_ctor_set(x_52, 6, x_42);
lean_ctor_set(x_52, 7, x_43);
lean_ctor_set(x_52, 8, x_44);
lean_ctor_set(x_52, 9, x_45);
lean_ctor_set(x_52, 10, x_46);
lean_ctor_set(x_52, 11, x_48);
lean_ctor_set(x_52, 12, x_50);
lean_ctor_set_uint8(x_52, sizeof(void*)*13, x_47);
lean_ctor_set_uint8(x_52, sizeof(void*)*13 + 1, x_49);
lean_inc(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_53 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(x_21, x_6, x_7, x_8, x_9, x_52, x_11, x_27);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_1);
x_13 = x_1;
x_14 = x_54;
goto block_18;
}
else
{
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_53;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_25);
if (x_55 == 0)
{
return x_25;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_25, 0);
x_57 = lean_ctor_get(x_25, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_25);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_22);
if (x_59 == 0)
{
return x_22;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_22, 0);
x_61 = lean_ctor_get(x_22, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_22);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
block_18:
{
size_t x_15; size_t x_16; 
x_15 = 1;
x_16 = lean_usize_add(x_4, x_15);
x_4 = x_16;
x_5 = x_13;
x_12 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_2, x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_Lean_Elab_pushInfoTree___at___Lean_Elab_pushInfoLeaf___at_____private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore_spec__0_spec__0___redArg(x_9, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = lean_usize_add(x_2, x_13);
x_2 = x_14;
x_4 = x_11;
x_6 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(x_1, x_2, x_3, x_4, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_eq(x_2, x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Elab_pushInfoTree___at___Lean_Elab_pushInfoLeaf___at_____private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore_spec__0_spec__0___redArg(x_14, x_10, x_11);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = lean_usize_add(x_2, x_18);
x_20 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(x_1, x_19, x_3, x_16, x_10, x_17);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_11);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_Elab_Tactic_setGoals___redArg(x_1, x_5, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Elab_WF_applyCleanWfTactic(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__0), 11, 1);
lean_closure_set(x_20, 0, x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic), 10, 1);
lean_closure_set(x_21, 0, x_3);
x_22 = l_Lean_Elab_withInfoTreeContext___at___Lean_Elab_Tactic_evalTactic_eval_spec__5___redArg(x_21, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_22;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; 
x_10 = lean_box(0);
x_11 = lean_array_size(x_2);
x_12 = 0;
x_13 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0(x_10, x_2, x_11, x_12, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_2);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_10);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
return x_13;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = l_Array_isEmpty___redArg(x_2);
if (x_22 == 0)
{
uint8_t x_23; 
lean_free_object(x_18);
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_50; uint8_t x_51; 
x_24 = lean_ctor_get(x_7, 5);
x_25 = l_Lean_replaceRef(x_20, x_24);
lean_dec(x_24);
lean_ctor_set(x_7, 5, x_25);
x_26 = lean_unsigned_to_nat(0u);
x_50 = lean_array_get_size(x_2);
x_51 = lean_nat_dec_lt(x_26, x_50);
if (x_51 == 0)
{
lean_dec(x_50);
x_27 = x_9;
goto block_49;
}
else
{
uint8_t x_52; 
x_52 = lean_nat_dec_le(x_50, x_50);
if (x_52 == 0)
{
lean_dec(x_50);
x_27 = x_9;
goto block_49;
}
else
{
lean_object* x_53; size_t x_54; size_t x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_box(0);
x_54 = 0;
x_55 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_56 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(x_2, x_54, x_55, x_53, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_27 = x_57;
goto block_49;
}
}
block_49:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_box(0);
x_29 = lean_array_get(x_28, x_2, x_26);
x_30 = lean_array_to_list(x_2);
x_31 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__1), 12, 3);
lean_closure_set(x_31, 0, x_30);
lean_closure_set(x_31, 1, x_20);
lean_closure_set(x_31, 2, x_21);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_32 = l_Lean_Elab_Tactic_run(x_29, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = l_List_isEmpty___redArg(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_free_object(x_32);
x_37 = l_Lean_Elab_Term_reportUnsolvedGoals(x_34, x_5, x_6, x_7, x_8, x_35);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_34);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_38 = lean_box(0);
lean_ctor_set(x_32, 0, x_38);
return x_32;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = l_List_isEmpty___redArg(x_39);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = l_Lean_Elab_Term_reportUnsolvedGoals(x_39, x_5, x_6, x_7, x_8, x_40);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_45 = !lean_is_exclusive(x_32);
if (x_45 == 0)
{
return x_32;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_32, 0);
x_47 = lean_ctor_get(x_32, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_32);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_94; uint8_t x_95; 
x_58 = lean_ctor_get(x_7, 0);
x_59 = lean_ctor_get(x_7, 1);
x_60 = lean_ctor_get(x_7, 2);
x_61 = lean_ctor_get(x_7, 3);
x_62 = lean_ctor_get(x_7, 4);
x_63 = lean_ctor_get(x_7, 5);
x_64 = lean_ctor_get(x_7, 6);
x_65 = lean_ctor_get(x_7, 7);
x_66 = lean_ctor_get(x_7, 8);
x_67 = lean_ctor_get(x_7, 9);
x_68 = lean_ctor_get(x_7, 10);
x_69 = lean_ctor_get_uint8(x_7, sizeof(void*)*13);
x_70 = lean_ctor_get(x_7, 11);
x_71 = lean_ctor_get_uint8(x_7, sizeof(void*)*13 + 1);
x_72 = lean_ctor_get(x_7, 12);
lean_inc(x_72);
lean_inc(x_70);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_7);
x_73 = l_Lean_replaceRef(x_20, x_63);
lean_dec(x_63);
x_74 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_74, 0, x_58);
lean_ctor_set(x_74, 1, x_59);
lean_ctor_set(x_74, 2, x_60);
lean_ctor_set(x_74, 3, x_61);
lean_ctor_set(x_74, 4, x_62);
lean_ctor_set(x_74, 5, x_73);
lean_ctor_set(x_74, 6, x_64);
lean_ctor_set(x_74, 7, x_65);
lean_ctor_set(x_74, 8, x_66);
lean_ctor_set(x_74, 9, x_67);
lean_ctor_set(x_74, 10, x_68);
lean_ctor_set(x_74, 11, x_70);
lean_ctor_set(x_74, 12, x_72);
lean_ctor_set_uint8(x_74, sizeof(void*)*13, x_69);
lean_ctor_set_uint8(x_74, sizeof(void*)*13 + 1, x_71);
x_75 = lean_unsigned_to_nat(0u);
x_94 = lean_array_get_size(x_2);
x_95 = lean_nat_dec_lt(x_75, x_94);
if (x_95 == 0)
{
lean_dec(x_94);
x_76 = x_9;
goto block_93;
}
else
{
uint8_t x_96; 
x_96 = lean_nat_dec_le(x_94, x_94);
if (x_96 == 0)
{
lean_dec(x_94);
x_76 = x_9;
goto block_93;
}
else
{
lean_object* x_97; size_t x_98; size_t x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_box(0);
x_98 = 0;
x_99 = lean_usize_of_nat(x_94);
lean_dec(x_94);
x_100 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(x_2, x_98, x_99, x_97, x_3, x_4, x_5, x_6, x_74, x_8, x_9);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_76 = x_101;
goto block_93;
}
}
block_93:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_box(0);
x_78 = lean_array_get(x_77, x_2, x_75);
x_79 = lean_array_to_list(x_2);
x_80 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__1), 12, 3);
lean_closure_set(x_80, 0, x_79);
lean_closure_set(x_80, 1, x_20);
lean_closure_set(x_80, 2, x_21);
lean_inc(x_8);
lean_inc(x_74);
lean_inc(x_6);
lean_inc(x_5);
x_81 = l_Lean_Elab_Tactic_run(x_78, x_80, x_3, x_4, x_5, x_6, x_74, x_8, x_76);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
x_85 = l_List_isEmpty___redArg(x_82);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_84);
x_86 = l_Lean_Elab_Term_reportUnsolvedGoals(x_82, x_5, x_6, x_74, x_8, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_82);
lean_dec(x_74);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_87 = lean_box(0);
if (lean_is_scalar(x_84)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_84;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_83);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_74);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_89 = lean_ctor_get(x_81, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_81, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_91 = x_81;
} else {
 lean_dec_ref(x_81);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
}
else
{
lean_object* x_102; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_102 = lean_box(0);
lean_ctor_set(x_18, 1, x_9);
lean_ctor_set(x_18, 0, x_102);
return x_18;
}
}
else
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = lean_ctor_get(x_18, 0);
x_104 = lean_ctor_get(x_18, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_18);
x_105 = l_Array_isEmpty___redArg(x_2);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_143; uint8_t x_144; 
x_106 = lean_ctor_get(x_7, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_7, 1);
lean_inc(x_107);
x_108 = lean_ctor_get(x_7, 2);
lean_inc(x_108);
x_109 = lean_ctor_get(x_7, 3);
lean_inc(x_109);
x_110 = lean_ctor_get(x_7, 4);
lean_inc(x_110);
x_111 = lean_ctor_get(x_7, 5);
lean_inc(x_111);
x_112 = lean_ctor_get(x_7, 6);
lean_inc(x_112);
x_113 = lean_ctor_get(x_7, 7);
lean_inc(x_113);
x_114 = lean_ctor_get(x_7, 8);
lean_inc(x_114);
x_115 = lean_ctor_get(x_7, 9);
lean_inc(x_115);
x_116 = lean_ctor_get(x_7, 10);
lean_inc(x_116);
x_117 = lean_ctor_get_uint8(x_7, sizeof(void*)*13);
x_118 = lean_ctor_get(x_7, 11);
lean_inc(x_118);
x_119 = lean_ctor_get_uint8(x_7, sizeof(void*)*13 + 1);
x_120 = lean_ctor_get(x_7, 12);
lean_inc(x_120);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 lean_ctor_release(x_7, 7);
 lean_ctor_release(x_7, 8);
 lean_ctor_release(x_7, 9);
 lean_ctor_release(x_7, 10);
 lean_ctor_release(x_7, 11);
 lean_ctor_release(x_7, 12);
 x_121 = x_7;
} else {
 lean_dec_ref(x_7);
 x_121 = lean_box(0);
}
x_122 = l_Lean_replaceRef(x_103, x_111);
lean_dec(x_111);
if (lean_is_scalar(x_121)) {
 x_123 = lean_alloc_ctor(0, 13, 2);
} else {
 x_123 = x_121;
}
lean_ctor_set(x_123, 0, x_106);
lean_ctor_set(x_123, 1, x_107);
lean_ctor_set(x_123, 2, x_108);
lean_ctor_set(x_123, 3, x_109);
lean_ctor_set(x_123, 4, x_110);
lean_ctor_set(x_123, 5, x_122);
lean_ctor_set(x_123, 6, x_112);
lean_ctor_set(x_123, 7, x_113);
lean_ctor_set(x_123, 8, x_114);
lean_ctor_set(x_123, 9, x_115);
lean_ctor_set(x_123, 10, x_116);
lean_ctor_set(x_123, 11, x_118);
lean_ctor_set(x_123, 12, x_120);
lean_ctor_set_uint8(x_123, sizeof(void*)*13, x_117);
lean_ctor_set_uint8(x_123, sizeof(void*)*13 + 1, x_119);
x_124 = lean_unsigned_to_nat(0u);
x_143 = lean_array_get_size(x_2);
x_144 = lean_nat_dec_lt(x_124, x_143);
if (x_144 == 0)
{
lean_dec(x_143);
x_125 = x_9;
goto block_142;
}
else
{
uint8_t x_145; 
x_145 = lean_nat_dec_le(x_143, x_143);
if (x_145 == 0)
{
lean_dec(x_143);
x_125 = x_9;
goto block_142;
}
else
{
lean_object* x_146; size_t x_147; size_t x_148; lean_object* x_149; lean_object* x_150; 
x_146 = lean_box(0);
x_147 = 0;
x_148 = lean_usize_of_nat(x_143);
lean_dec(x_143);
x_149 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(x_2, x_147, x_148, x_146, x_3, x_4, x_5, x_6, x_123, x_8, x_9);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
lean_dec(x_149);
x_125 = x_150;
goto block_142;
}
}
block_142:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_126 = lean_box(0);
x_127 = lean_array_get(x_126, x_2, x_124);
x_128 = lean_array_to_list(x_2);
x_129 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__1), 12, 3);
lean_closure_set(x_129, 0, x_128);
lean_closure_set(x_129, 1, x_103);
lean_closure_set(x_129, 2, x_104);
lean_inc(x_8);
lean_inc(x_123);
lean_inc(x_6);
lean_inc(x_5);
x_130 = l_Lean_Elab_Tactic_run(x_127, x_129, x_3, x_4, x_5, x_6, x_123, x_8, x_125);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
 x_133 = lean_box(0);
}
x_134 = l_List_isEmpty___redArg(x_131);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_133);
x_135 = l_Lean_Elab_Term_reportUnsolvedGoals(x_131, x_5, x_6, x_123, x_8, x_132);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_131);
lean_dec(x_123);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_136 = lean_box(0);
if (lean_is_scalar(x_133)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_133;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_132);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_123);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_138 = lean_ctor_get(x_130, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_130, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_140 = x_130;
} else {
 lean_dec_ref(x_130);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_151 = lean_box(0);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_9);
return x_152;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0;
x_4 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1;
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_2);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_3);
lean_ctor_set(x_6, 4, x_2);
lean_ctor_set(x_6, 5, x_4);
lean_ctor_set(x_6, 6, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_7, x_6);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 2);
lean_inc(x_21);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_25 = lean_ctor_get(x_17, 2);
lean_dec(x_25);
x_26 = lean_ctor_get(x_17, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_17, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_18, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_18, 2);
lean_inc(x_30);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_20, x_31);
lean_inc(x_19);
lean_ctor_set(x_17, 1, x_32);
x_33 = lean_nat_dec_lt(x_29, x_30);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_8);
lean_ctor_set(x_34, 1, x_13);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_36 = lean_ctor_get(x_18, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_18, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_18, 0);
lean_dec(x_38);
x_39 = lean_array_uget(x_5, x_7);
x_40 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_41 = lean_array_fget(x_28, x_29);
x_42 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_42, 0, x_40);
lean_closure_set(x_42, 1, x_41);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_43, 0, lean_box(0));
lean_closure_set(x_43, 1, x_39);
lean_closure_set(x_43, 2, x_42);
x_44 = lean_box(0);
x_45 = lean_box(0);
x_46 = lean_box(0);
x_47 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_47, 0, x_46);
x_48 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_49 = lean_box(0);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_51, 0, x_44);
lean_ctor_set(x_51, 1, x_45);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_47);
lean_ctor_set(x_51, 4, x_49);
lean_ctor_set(x_51, 5, x_49);
lean_ctor_set(x_51, 6, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*7, x_33);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 1, x_33);
x_52 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 2, x_52);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 3, x_33);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 4, x_33);
x_53 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 5, x_53);
x_54 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 6, x_54);
x_55 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 7, x_55);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 8, x_33);
x_56 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 9, x_56);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 10, x_33);
x_57 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_58 = l_Lean_Elab_Term_TermElabM_run___redArg(x_43, x_51, x_57, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; 
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_nat_add(x_29, x_31);
lean_dec(x_29);
lean_ctor_set(x_18, 1, x_60);
x_61 = 1;
x_62 = lean_usize_add(x_7, x_61);
x_7 = x_62;
x_13 = x_59;
goto _start;
}
else
{
uint8_t x_64; 
lean_free_object(x_18);
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_64 = !lean_is_exclusive(x_58);
if (x_64 == 0)
{
return x_58;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_58, 0);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_58);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_18);
x_68 = lean_array_uget(x_5, x_7);
x_69 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_70 = lean_array_fget(x_28, x_29);
x_71 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_71, 0, x_69);
lean_closure_set(x_71, 1, x_70);
x_72 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_72, 0, lean_box(0));
lean_closure_set(x_72, 1, x_68);
lean_closure_set(x_72, 2, x_71);
x_73 = lean_box(0);
x_74 = lean_box(0);
x_75 = lean_box(0);
x_76 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_76, 0, x_75);
x_77 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_78 = lean_box(0);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_80, 0, x_73);
lean_ctor_set(x_80, 1, x_74);
lean_ctor_set(x_80, 2, x_77);
lean_ctor_set(x_80, 3, x_76);
lean_ctor_set(x_80, 4, x_78);
lean_ctor_set(x_80, 5, x_78);
lean_ctor_set(x_80, 6, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*7, x_33);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 1, x_33);
x_81 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 2, x_81);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 3, x_33);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 4, x_33);
x_82 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 5, x_82);
x_83 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 6, x_83);
x_84 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 7, x_84);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 8, x_33);
x_85 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 9, x_85);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 10, x_33);
x_86 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_87 = l_Lean_Elab_Term_TermElabM_run___redArg(x_72, x_80, x_86, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; size_t x_92; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_nat_add(x_29, x_31);
lean_dec(x_29);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_28);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_90, 2, x_30);
lean_ctor_set(x_8, 0, x_90);
x_91 = 1;
x_92 = lean_usize_add(x_7, x_91);
x_7 = x_92;
x_13 = x_88;
goto _start;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_94 = lean_ctor_get(x_87, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_87, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_dec(x_17);
x_98 = lean_ctor_get(x_18, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_18, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_18, 2);
lean_inc(x_100);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_20, x_101);
lean_inc(x_19);
x_103 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_103, 0, x_19);
lean_ctor_set(x_103, 1, x_102);
lean_ctor_set(x_103, 2, x_21);
x_104 = lean_nat_dec_lt(x_99, x_100);
if (x_104 == 0)
{
lean_object* x_105; 
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_8, 1, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_8);
lean_ctor_set(x_105, 1, x_13);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; 
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_106 = x_18;
} else {
 lean_dec_ref(x_18);
 x_106 = lean_box(0);
}
x_107 = lean_array_uget(x_5, x_7);
x_108 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_109 = lean_array_fget(x_98, x_99);
x_110 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_110, 0, x_108);
lean_closure_set(x_110, 1, x_109);
x_111 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_111, 0, lean_box(0));
lean_closure_set(x_111, 1, x_107);
lean_closure_set(x_111, 2, x_110);
x_112 = lean_box(0);
x_113 = lean_box(0);
x_114 = lean_box(0);
x_115 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_115, 0, x_114);
x_116 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_117 = lean_box(0);
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_119, 0, x_112);
lean_ctor_set(x_119, 1, x_113);
lean_ctor_set(x_119, 2, x_116);
lean_ctor_set(x_119, 3, x_115);
lean_ctor_set(x_119, 4, x_117);
lean_ctor_set(x_119, 5, x_117);
lean_ctor_set(x_119, 6, x_118);
lean_ctor_set_uint8(x_119, sizeof(void*)*7, x_104);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 1, x_104);
x_120 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 2, x_120);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 3, x_104);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 4, x_104);
x_121 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 5, x_121);
x_122 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 6, x_122);
x_123 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 7, x_123);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 8, x_104);
x_124 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 9, x_124);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 10, x_104);
x_125 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_126 = l_Lean_Elab_Term_TermElabM_run___redArg(x_111, x_119, x_125, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; size_t x_130; size_t x_131; 
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_nat_add(x_99, x_101);
lean_dec(x_99);
if (lean_is_scalar(x_106)) {
 x_129 = lean_alloc_ctor(0, 3, 0);
} else {
 x_129 = x_106;
}
lean_ctor_set(x_129, 0, x_98);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_129, 2, x_100);
lean_ctor_set(x_8, 1, x_103);
lean_ctor_set(x_8, 0, x_129);
x_130 = 1;
x_131 = lean_usize_add(x_7, x_130);
x_7 = x_131;
x_13 = x_127;
goto _start;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_106);
lean_dec(x_103);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_133 = lean_ctor_get(x_126, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_126, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_135 = x_126;
} else {
 lean_dec_ref(x_126);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_137 = lean_ctor_get(x_8, 1);
x_138 = lean_ctor_get(x_8, 0);
lean_inc(x_137);
lean_inc(x_138);
lean_dec(x_8);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_137, 2);
lean_inc(x_141);
x_142 = lean_nat_dec_lt(x_140, x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_137);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_13);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 lean_ctor_release(x_137, 2);
 x_145 = x_137;
} else {
 lean_dec_ref(x_137);
 x_145 = lean_box(0);
}
x_146 = lean_ctor_get(x_138, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_138, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_138, 2);
lean_inc(x_148);
x_149 = lean_unsigned_to_nat(1u);
x_150 = lean_nat_add(x_140, x_149);
lean_inc(x_139);
if (lean_is_scalar(x_145)) {
 x_151 = lean_alloc_ctor(0, 3, 0);
} else {
 x_151 = x_145;
}
lean_ctor_set(x_151, 0, x_139);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_151, 2, x_141);
x_152 = lean_nat_dec_lt(x_147, x_148);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_146);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_138);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_13);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; uint8_t x_170; uint8_t x_171; uint8_t x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; 
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 lean_ctor_release(x_138, 2);
 x_155 = x_138;
} else {
 lean_dec_ref(x_138);
 x_155 = lean_box(0);
}
x_156 = lean_array_uget(x_5, x_7);
x_157 = lean_array_fget(x_139, x_140);
lean_dec(x_140);
lean_dec(x_139);
x_158 = lean_array_fget(x_146, x_147);
x_159 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_159, 0, x_157);
lean_closure_set(x_159, 1, x_158);
x_160 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_160, 0, lean_box(0));
lean_closure_set(x_160, 1, x_156);
lean_closure_set(x_160, 2, x_159);
x_161 = lean_box(0);
x_162 = lean_box(0);
x_163 = lean_box(0);
x_164 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_164, 0, x_163);
x_165 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_166 = lean_box(0);
x_167 = lean_box(0);
x_168 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_168, 0, x_161);
lean_ctor_set(x_168, 1, x_162);
lean_ctor_set(x_168, 2, x_165);
lean_ctor_set(x_168, 3, x_164);
lean_ctor_set(x_168, 4, x_166);
lean_ctor_set(x_168, 5, x_166);
lean_ctor_set(x_168, 6, x_167);
lean_ctor_set_uint8(x_168, sizeof(void*)*7, x_152);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 1, x_152);
x_169 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 2, x_169);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 3, x_152);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 4, x_152);
x_170 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 5, x_170);
x_171 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 6, x_171);
x_172 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 7, x_172);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 8, x_152);
x_173 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 9, x_173);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 10, x_152);
x_174 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_175 = l_Lean_Elab_Term_TermElabM_run___redArg(x_160, x_168, x_174, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; size_t x_180; size_t x_181; 
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
lean_dec(x_175);
x_177 = lean_nat_add(x_147, x_149);
lean_dec(x_147);
if (lean_is_scalar(x_155)) {
 x_178 = lean_alloc_ctor(0, 3, 0);
} else {
 x_178 = x_155;
}
lean_ctor_set(x_178, 0, x_146);
lean_ctor_set(x_178, 1, x_177);
lean_ctor_set(x_178, 2, x_148);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_151);
x_180 = 1;
x_181 = lean_usize_add(x_7, x_180);
x_7 = x_181;
x_8 = x_179;
x_13 = x_176;
goto _start;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_155);
lean_dec(x_151);
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_146);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_183 = lean_ctor_get(x_175, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_185 = x_175;
} else {
 lean_dec_ref(x_175);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_7, x_6);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 2);
lean_inc(x_21);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_25 = lean_ctor_get(x_17, 2);
lean_dec(x_25);
x_26 = lean_ctor_get(x_17, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_17, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_18, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_18, 2);
lean_inc(x_30);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_20, x_31);
lean_inc(x_19);
lean_ctor_set(x_17, 1, x_32);
x_33 = lean_nat_dec_lt(x_29, x_30);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_8);
lean_ctor_set(x_34, 1, x_13);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_36 = lean_ctor_get(x_18, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_18, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_18, 0);
lean_dec(x_38);
x_39 = lean_array_uget(x_5, x_7);
x_40 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_41 = lean_array_fget(x_28, x_29);
x_42 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_42, 0, x_40);
lean_closure_set(x_42, 1, x_41);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_43, 0, lean_box(0));
lean_closure_set(x_43, 1, x_39);
lean_closure_set(x_43, 2, x_42);
x_44 = lean_box(0);
x_45 = lean_box(0);
x_46 = lean_box(0);
x_47 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_47, 0, x_46);
x_48 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_49 = lean_box(0);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_51, 0, x_44);
lean_ctor_set(x_51, 1, x_45);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_47);
lean_ctor_set(x_51, 4, x_49);
lean_ctor_set(x_51, 5, x_49);
lean_ctor_set(x_51, 6, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*7, x_33);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 1, x_33);
x_52 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 2, x_52);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 3, x_33);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 4, x_33);
x_53 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 5, x_53);
x_54 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 6, x_54);
x_55 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 7, x_55);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 8, x_33);
x_56 = lean_unbox(x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 9, x_56);
lean_ctor_set_uint8(x_51, sizeof(void*)*7 + 10, x_33);
x_57 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_58 = l_Lean_Elab_Term_TermElabM_run___redArg(x_43, x_51, x_57, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_nat_add(x_29, x_31);
lean_dec(x_29);
lean_ctor_set(x_18, 1, x_60);
x_61 = 1;
x_62 = lean_usize_add(x_7, x_61);
x_63 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_62, x_8, x_9, x_10, x_11, x_12, x_59);
return x_63;
}
else
{
uint8_t x_64; 
lean_free_object(x_18);
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_64 = !lean_is_exclusive(x_58);
if (x_64 == 0)
{
return x_58;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_58, 0);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_58);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_18);
x_68 = lean_array_uget(x_5, x_7);
x_69 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_70 = lean_array_fget(x_28, x_29);
x_71 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_71, 0, x_69);
lean_closure_set(x_71, 1, x_70);
x_72 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_72, 0, lean_box(0));
lean_closure_set(x_72, 1, x_68);
lean_closure_set(x_72, 2, x_71);
x_73 = lean_box(0);
x_74 = lean_box(0);
x_75 = lean_box(0);
x_76 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_76, 0, x_75);
x_77 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_78 = lean_box(0);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_80, 0, x_73);
lean_ctor_set(x_80, 1, x_74);
lean_ctor_set(x_80, 2, x_77);
lean_ctor_set(x_80, 3, x_76);
lean_ctor_set(x_80, 4, x_78);
lean_ctor_set(x_80, 5, x_78);
lean_ctor_set(x_80, 6, x_79);
lean_ctor_set_uint8(x_80, sizeof(void*)*7, x_33);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 1, x_33);
x_81 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 2, x_81);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 3, x_33);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 4, x_33);
x_82 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 5, x_82);
x_83 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 6, x_83);
x_84 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 7, x_84);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 8, x_33);
x_85 = lean_unbox(x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 9, x_85);
lean_ctor_set_uint8(x_80, sizeof(void*)*7 + 10, x_33);
x_86 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_87 = l_Lean_Elab_Term_TermElabM_run___redArg(x_72, x_80, x_86, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; size_t x_92; lean_object* x_93; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_nat_add(x_29, x_31);
lean_dec(x_29);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_28);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_90, 2, x_30);
lean_ctor_set(x_8, 0, x_90);
x_91 = 1;
x_92 = lean_usize_add(x_7, x_91);
x_93 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_92, x_8, x_9, x_10, x_11, x_12, x_88);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_17);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_94 = lean_ctor_get(x_87, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_87, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_dec(x_17);
x_98 = lean_ctor_get(x_18, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_18, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_18, 2);
lean_inc(x_100);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_20, x_101);
lean_inc(x_19);
x_103 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_103, 0, x_19);
lean_ctor_set(x_103, 1, x_102);
lean_ctor_set(x_103, 2, x_21);
x_104 = lean_nat_dec_lt(x_99, x_100);
if (x_104 == 0)
{
lean_object* x_105; 
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_8, 1, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_8);
lean_ctor_set(x_105, 1, x_13);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; 
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_106 = x_18;
} else {
 lean_dec_ref(x_18);
 x_106 = lean_box(0);
}
x_107 = lean_array_uget(x_5, x_7);
x_108 = lean_array_fget(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
x_109 = lean_array_fget(x_98, x_99);
x_110 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_110, 0, x_108);
lean_closure_set(x_110, 1, x_109);
x_111 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_111, 0, lean_box(0));
lean_closure_set(x_111, 1, x_107);
lean_closure_set(x_111, 2, x_110);
x_112 = lean_box(0);
x_113 = lean_box(0);
x_114 = lean_box(0);
x_115 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_115, 0, x_114);
x_116 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_117 = lean_box(0);
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_119, 0, x_112);
lean_ctor_set(x_119, 1, x_113);
lean_ctor_set(x_119, 2, x_116);
lean_ctor_set(x_119, 3, x_115);
lean_ctor_set(x_119, 4, x_117);
lean_ctor_set(x_119, 5, x_117);
lean_ctor_set(x_119, 6, x_118);
lean_ctor_set_uint8(x_119, sizeof(void*)*7, x_104);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 1, x_104);
x_120 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 2, x_120);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 3, x_104);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 4, x_104);
x_121 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 5, x_121);
x_122 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 6, x_122);
x_123 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 7, x_123);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 8, x_104);
x_124 = lean_unbox(x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 9, x_124);
lean_ctor_set_uint8(x_119, sizeof(void*)*7 + 10, x_104);
x_125 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_126 = l_Lean_Elab_Term_TermElabM_run___redArg(x_111, x_119, x_125, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; size_t x_130; size_t x_131; lean_object* x_132; 
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_nat_add(x_99, x_101);
lean_dec(x_99);
if (lean_is_scalar(x_106)) {
 x_129 = lean_alloc_ctor(0, 3, 0);
} else {
 x_129 = x_106;
}
lean_ctor_set(x_129, 0, x_98);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_129, 2, x_100);
lean_ctor_set(x_8, 1, x_103);
lean_ctor_set(x_8, 0, x_129);
x_130 = 1;
x_131 = lean_usize_add(x_7, x_130);
x_132 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_131, x_8, x_9, x_10, x_11, x_12, x_127);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_106);
lean_dec(x_103);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_free_object(x_8);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_133 = lean_ctor_get(x_126, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_126, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_135 = x_126;
} else {
 lean_dec_ref(x_126);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_137 = lean_ctor_get(x_8, 1);
x_138 = lean_ctor_get(x_8, 0);
lean_inc(x_137);
lean_inc(x_138);
lean_dec(x_8);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_137, 2);
lean_inc(x_141);
x_142 = lean_nat_dec_lt(x_140, x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_137);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_13);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 lean_ctor_release(x_137, 2);
 x_145 = x_137;
} else {
 lean_dec_ref(x_137);
 x_145 = lean_box(0);
}
x_146 = lean_ctor_get(x_138, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_138, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_138, 2);
lean_inc(x_148);
x_149 = lean_unsigned_to_nat(1u);
x_150 = lean_nat_add(x_140, x_149);
lean_inc(x_139);
if (lean_is_scalar(x_145)) {
 x_151 = lean_alloc_ctor(0, 3, 0);
} else {
 x_151 = x_145;
}
lean_ctor_set(x_151, 0, x_139);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_151, 2, x_141);
x_152 = lean_nat_dec_lt(x_147, x_148);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_146);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_138);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_13);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; uint8_t x_170; uint8_t x_171; uint8_t x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; 
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 lean_ctor_release(x_138, 2);
 x_155 = x_138;
} else {
 lean_dec_ref(x_138);
 x_155 = lean_box(0);
}
x_156 = lean_array_uget(x_5, x_7);
x_157 = lean_array_fget(x_139, x_140);
lean_dec(x_140);
lean_dec(x_139);
x_158 = lean_array_fget(x_146, x_147);
x_159 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__2), 9, 2);
lean_closure_set(x_159, 0, x_157);
lean_closure_set(x_159, 1, x_158);
x_160 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName), 10, 3);
lean_closure_set(x_160, 0, lean_box(0));
lean_closure_set(x_160, 1, x_156);
lean_closure_set(x_160, 2, x_159);
x_161 = lean_box(0);
x_162 = lean_box(0);
x_163 = lean_box(0);
x_164 = lean_alloc_closure((void*)(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed), 2, 1);
lean_closure_set(x_164, 0, x_163);
x_165 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2;
x_166 = lean_box(0);
x_167 = lean_box(0);
x_168 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_168, 0, x_161);
lean_ctor_set(x_168, 1, x_162);
lean_ctor_set(x_168, 2, x_165);
lean_ctor_set(x_168, 3, x_164);
lean_ctor_set(x_168, 4, x_166);
lean_ctor_set(x_168, 5, x_166);
lean_ctor_set(x_168, 6, x_167);
lean_ctor_set_uint8(x_168, sizeof(void*)*7, x_152);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 1, x_152);
x_169 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 2, x_169);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 3, x_152);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 4, x_152);
x_170 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 5, x_170);
x_171 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 6, x_171);
x_172 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 7, x_172);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 8, x_152);
x_173 = lean_unbox(x_163);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 9, x_173);
lean_ctor_set_uint8(x_168, sizeof(void*)*7 + 10, x_152);
x_174 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_175 = l_Lean_Elab_Term_TermElabM_run___redArg(x_160, x_168, x_174, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; size_t x_180; size_t x_181; lean_object* x_182; 
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
lean_dec(x_175);
x_177 = lean_nat_add(x_147, x_149);
lean_dec(x_147);
if (lean_is_scalar(x_155)) {
 x_178 = lean_alloc_ctor(0, 3, 0);
} else {
 x_178 = x_155;
}
lean_ctor_set(x_178, 0, x_146);
lean_ctor_set(x_178, 1, x_177);
lean_ctor_set(x_178, 2, x_148);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_151);
x_180 = 1;
x_181 = lean_usize_add(x_7, x_180);
x_182 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_181, x_179, x_9, x_10, x_11, x_12, x_176);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_155);
lean_dec(x_151);
lean_dec(x_148);
lean_dec(x_147);
lean_dec(x_146);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_183 = lean_ctor_get(x_175, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_185 = x_175;
} else {
 lean_dec_ref(x_175);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
lean_inc(x_1);
x_14 = l_Lean_Meta_getMVarsNoDelayed(x_1, x_9, x_10, x_11, x_12, x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_18 = l_Lean_Elab_WF_assignSubsumed(x_16, x_9, x_10, x_11, x_12, x_17);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_array_get_size(x_2);
lean_inc(x_21);
x_22 = l_Lean_Elab_WF_groupGoalsByFunction(x_3, x_21, x_19, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_array_get_size(x_23);
x_27 = l_Array_toSubarray___redArg(x_23, x_25, x_26);
x_28 = l_Array_toSubarray___redArg(x_2, x_25, x_21);
lean_ctor_set(x_14, 1, x_28);
lean_ctor_set(x_14, 0, x_27);
x_29 = lean_array_size(x_4);
x_30 = 0;
lean_inc(x_10);
x_31 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3(x_5, x_6, x_7, x_8, x_4, x_29, x_30, x_14, x_9, x_10, x_11, x_12, x_24);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_instantiateMVars___at_____private_Lean_Meta_Basic_0__Lean_Meta_mkLevelErrorMessageCore_spec__1___redArg(x_1, x_10, x_32);
lean_dec(x_10);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_21);
lean_free_object(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
return x_22;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_free_object(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_18);
if (x_42 == 0)
{
return x_18;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_18, 0);
x_44 = lean_ctor_get(x_18, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_18);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_48 = l_Lean_Elab_WF_assignSubsumed(x_46, x_9, x_10, x_11, x_12, x_47);
lean_dec(x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_array_get_size(x_2);
lean_inc(x_51);
x_52 = l_Lean_Elab_WF_groupGoalsByFunction(x_3, x_51, x_49, x_9, x_10, x_11, x_12, x_50);
lean_dec(x_49);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_array_get_size(x_53);
x_57 = l_Array_toSubarray___redArg(x_53, x_55, x_56);
x_58 = l_Array_toSubarray___redArg(x_2, x_55, x_51);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_size(x_4);
x_61 = 0;
lean_inc(x_10);
x_62 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3(x_5, x_6, x_7, x_8, x_4, x_60, x_61, x_59, x_9, x_10, x_11, x_12, x_54);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_Lean_instantiateMVars___at_____private_Lean_Meta_Basic_0__Lean_Meta_mkLevelErrorMessageCore_spec__1___redArg(x_1, x_10, x_63);
lean_dec(x_10);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_10);
lean_dec(x_1);
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_67 = x_62;
} else {
 lean_dec_ref(x_62);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_69 = lean_ctor_get(x_52, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_52, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_71 = x_52;
} else {
 lean_dec_ref(x_52);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_73 = lean_ctor_get(x_48, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_48, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_75 = x_48;
} else {
 lean_dec_ref(x_48);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
static lean_object* _init_l_Lean_Elab_WF_solveDecreasingGoals___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_solveDecreasingGoals___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Elab_WF_solveDecreasingGoals___closed__0;
x_11 = l_Lean_Elab_WF_solveDecreasingGoals___closed__1;
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed), 13, 8);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_1);
lean_closure_set(x_12, 4, x_11);
lean_closure_set(x_12, 5, x_10);
lean_closure_set(x_12, 6, x_11);
lean_closure_set(x_12, 7, x_10);
x_13 = l_Lean_withoutExporting___at___Lean_validateDefEqAttr_spec__0___redArg(x_12, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
lean_dec(x_2);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_18 = l_Array_foldlMUnsafe_fold___at___Lean_Elab_WF_solveDecreasingGoals_spec__1(x_1, x_2, x_3, x_4, x_5, x_16, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___lam__3(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_WF_solveDecreasingGoals___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_5, 2);
lean_dec(x_11);
lean_ctor_set(x_5, 2, x_1);
x_12 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
return x_12;
}
}
else
{
lean_object* x_17; uint64_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get_uint64(x_5, sizeof(void*)*7);
x_19 = lean_ctor_get_uint8(x_5, sizeof(void*)*7 + 8);
x_20 = lean_ctor_get(x_5, 1);
x_21 = lean_ctor_get(x_5, 3);
x_22 = lean_ctor_get(x_5, 4);
x_23 = lean_ctor_get(x_5, 5);
x_24 = lean_ctor_get(x_5, 6);
x_25 = lean_ctor_get_uint8(x_5, sizeof(void*)*7 + 9);
x_26 = lean_ctor_get_uint8(x_5, sizeof(void*)*7 + 10);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_17);
lean_dec(x_5);
x_27 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_27, 0, x_17);
lean_ctor_set(x_27, 1, x_20);
lean_ctor_set(x_27, 2, x_1);
lean_ctor_set(x_27, 3, x_21);
lean_ctor_set(x_27, 4, x_22);
lean_ctor_set(x_27, 5, x_23);
lean_ctor_set(x_27, 6, x_24);
lean_ctor_set_uint64(x_27, sizeof(void*)*7, x_18);
lean_ctor_set_uint8(x_27, sizeof(void*)*7 + 8, x_19);
lean_ctor_set_uint8(x_27, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*7 + 10, x_26);
x_28 = lean_apply_7(x_2, x_3, x_4, x_27, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
else
{
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("WellFounded", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fix", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_WF_mkFix___lam__0___closed__1;
x_2 = l_Lean_Elab_WF_mkFix___lam__0___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("WellFoundedRelation", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_WF_mkFix___lam__0___closed__3;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("opaqueId", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_WF_mkFix___lam__0___closed__5;
x_2 = l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_get(x_1, x_5, x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_15);
x_16 = lean_infer_type(x_15, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_19 = l_Lean_Meta_getLevel(x_17, x_9, x_10, x_11, x_12, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
x_22 = l_Lean_Meta_getLevel(x_6, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; lean_object* x_68; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_58 = lean_mk_empty_array_with_capacity(x_2);
lean_inc(x_15);
lean_inc(x_58);
x_59 = lean_array_push(x_58, x_15);
x_60 = lean_box(0);
x_61 = lean_box(1);
x_62 = lean_box(1);
x_63 = lean_unbox(x_60);
x_64 = lean_unbox(x_61);
x_65 = lean_unbox(x_60);
x_66 = lean_unbox(x_61);
x_67 = lean_unbox(x_62);
x_68 = l_Lean_Meta_mkLambdaFVars(x_59, x_6, x_63, x_64, x_65, x_66, x_67, x_9, x_10, x_11, x_12, x_24);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_Elab_WF_mkFix___lam__0___closed__4;
lean_inc(x_3);
x_72 = l_Lean_Expr_proj___override(x_71, x_14, x_3);
x_73 = l_Lean_Expr_proj___override(x_71, x_2, x_3);
if (x_4 == 0)
{
lean_dec(x_58);
lean_dec(x_10);
x_25 = x_72;
x_26 = x_69;
x_27 = x_73;
x_28 = x_9;
x_29 = x_11;
x_30 = x_12;
x_31 = x_70;
goto block_57;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = l_Lean_Elab_WF_mkFix___lam__0___closed__6;
x_75 = lean_array_push(x_58, x_73);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_76 = l_Lean_Meta_mkAppM(x_74, x_75, x_9, x_10, x_11, x_12, x_70);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_25 = x_72;
x_26 = x_69;
x_27 = x_77;
x_28 = x_9;
x_29 = x_11;
x_30 = x_12;
x_31 = x_78;
goto block_57;
}
else
{
uint8_t x_79; 
lean_dec(x_72);
lean_dec(x_69);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
x_79 = !lean_is_exclusive(x_76);
if (x_79 == 0)
{
return x_76;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_76, 0);
x_81 = lean_ctor_get(x_76, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_76);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_58);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_83 = !lean_is_exclusive(x_68);
if (x_83 == 0)
{
return x_68;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_68, 0);
x_85 = lean_ctor_get(x_68, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_68);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
block_57:
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Lean_Expr_fvarId_x21(x_15);
lean_dec(x_15);
x_33 = l_Lean_FVarId_getUserName___redArg(x_32, x_28, x_29, x_30, x_31);
lean_dec(x_30);
lean_dec(x_29);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = l_Lean_Elab_WF_mkFix___lam__0___closed__2;
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_20);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_Expr_const___override(x_36, x_39);
x_41 = l_Lean_mkApp4(x_40, x_17, x_26, x_25, x_27);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_33, 0, x_42);
return x_33;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_43 = lean_ctor_get(x_33, 0);
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_33);
x_45 = l_Lean_Elab_WF_mkFix___lam__0___closed__2;
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_23);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_20);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Expr_const___override(x_45, x_48);
x_50 = l_Lean_mkApp4(x_49, x_17, x_26, x_25, x_27);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_43);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
x_53 = !lean_is_exclusive(x_33);
if (x_53 == 0)
{
return x_33;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_33, 0);
x_55 = lean_ctor_get(x_33, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_33);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_22);
if (x_87 == 0)
{
return x_22;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_22, 0);
x_89 = lean_ctor_get(x_22, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_22);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_19);
if (x_91 == 0)
{
return x_19;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_19, 0);
x_93 = lean_ctor_get(x_19, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_19);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_16);
if (x_95 == 0)
{
return x_16;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_16, 0);
x_97 = lean_ctor_get(x_16, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_16);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps), 11, 2);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_13);
x_15 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(x_3, x_4, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__2___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(x_1, x_2, x_3, x_4, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_21 = l_Lean_Elab_WF_solveDecreasingGoals(x_5, x_6, x_7, x_19, x_13, x_14, x_15, x_16, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_WF_mkFix___lam__2___closed__0;
x_25 = lean_array_push(x_24, x_1);
x_26 = lean_array_push(x_25, x_2);
x_27 = lean_box(1);
x_28 = lean_box(1);
x_29 = lean_unbox(x_27);
x_30 = lean_unbox(x_27);
x_31 = lean_unbox(x_28);
x_32 = l_Lean_Meta_mkLambdaFVars(x_26, x_22, x_8, x_29, x_8, x_30, x_31, x_13, x_14, x_15, x_16, x_23);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Expr_app___override(x_9, x_33);
x_36 = lean_unbox(x_27);
x_37 = lean_unbox(x_27);
x_38 = lean_unbox(x_28);
x_39 = l_Lean_Meta_mkLambdaFVars(x_10, x_35, x_8, x_36, x_8, x_37, x_38, x_13, x_14, x_15, x_16, x_34);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
return x_39;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
return x_32;
}
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, uint8_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_16, 2);
lean_inc(x_21);
x_22 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_23 = lean_array_get(x_1, x_12, x_22);
x_24 = l_Lean_Expr_fvarId_x21(x_23);
x_25 = l_Lean_LocalContext_setUserName(x_21, x_24, x_2);
x_26 = lean_array_get(x_1, x_12, x_3);
lean_inc(x_23);
lean_inc(x_4);
x_27 = lean_array_push(x_4, x_23);
x_28 = l_Lean_Expr_beta(x_5, x_27);
x_29 = lean_box(x_10);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__2___boxed), 17, 10);
lean_closure_set(x_30, 0, x_23);
lean_closure_set(x_30, 1, x_26);
lean_closure_set(x_30, 2, x_28);
lean_closure_set(x_30, 3, x_6);
lean_closure_set(x_30, 4, x_7);
lean_closure_set(x_30, 5, x_8);
lean_closure_set(x_30, 6, x_9);
lean_closure_set(x_30, 7, x_29);
lean_closure_set(x_30, 8, x_11);
lean_closure_set(x_30, 9, x_4);
x_31 = l_Lean_Meta_withLCtx_x27___at___Lean_Elab_WF_mkFix_spec__0___redArg(x_25, x_30, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_31;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 5);
lean_inc(x_17);
lean_dec(x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_instantiateForall(x_16, x_2, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_instInhabitedExpr;
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_box(x_7);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__0___boxed), 13, 4);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_22);
lean_closure_set(x_24, 2, x_4);
lean_closure_set(x_24, 3, x_23);
x_25 = l_Lean_Elab_WF_mkFix___closed__0;
x_26 = lean_box(0);
x_27 = lean_unbox(x_26);
x_28 = lean_unbox(x_26);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_29 = l_Lean_Meta_forallBoundedTelescope___at___Lean_Elab_Term_addAutoBoundImplicits_x27_spec__1___redArg(x_19, x_25, x_24, x_27, x_28, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_32);
x_34 = lean_infer_type(x_32, x_10, x_11, x_12, x_13, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_37 = lean_whnf(x_35, x_10, x_11, x_12, x_13, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; lean_object* x_46; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_2);
x_40 = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__1___boxed), 12, 2);
lean_closure_set(x_40, 0, x_2);
lean_closure_set(x_40, 1, x_15);
x_41 = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__3___boxed), 20, 11);
lean_closure_set(x_41, 0, x_21);
lean_closure_set(x_41, 1, x_33);
lean_closure_set(x_41, 2, x_22);
lean_closure_set(x_41, 3, x_2);
lean_closure_set(x_41, 4, x_17);
lean_closure_set(x_41, 5, x_40);
lean_closure_set(x_41, 6, x_5);
lean_closure_set(x_41, 7, x_3);
lean_closure_set(x_41, 8, x_6);
lean_closure_set(x_41, 9, x_26);
lean_closure_set(x_41, 10, x_32);
x_42 = l_Lean_Expr_bindingDomain_x21(x_38);
lean_dec(x_38);
x_43 = l_Lean_Elab_WF_mkFix___closed__1;
x_44 = lean_unbox(x_26);
x_45 = lean_unbox(x_26);
x_46 = l_Lean_Meta_forallBoundedTelescope___at___Lean_Elab_Term_addAutoBoundImplicits_x27_spec__1___redArg(x_42, x_43, x_41, x_44, x_45, x_8, x_9, x_10, x_11, x_12, x_13, x_39);
return x_46;
}
else
{
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_37;
}
}
else
{
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_34;
}
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_29);
if (x_47 == 0)
{
return x_29;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_29, 0);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_29);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = l_Lean_Elab_WF_mkFix___lam__0(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_WF_mkFix___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_8);
lean_dec(x_8);
x_19 = l_Lean_Elab_WF_mkFix___lam__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_18, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; lean_object* x_22; 
x_21 = lean_unbox(x_10);
lean_dec(x_10);
x_22 = l_Lean_Elab_WF_mkFix___lam__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_3);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_7);
lean_dec(x_7);
x_16 = l_Lean_Elab_WF_mkFix(x_1, x_2, x_3, x_4, x_5, x_6, x_15, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
lean_object* initialize_Lean_Data_Array(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Array(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_HasConstCache(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__0____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__1____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__2____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__3____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__4____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__5____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__6____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__7____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__8____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__9____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__10____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_ = _init_l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_();
lean_mark_persistent(l_Lean_Elab_WF_initFn___closed__11____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_);
if (builtin) {res = l_Lean_Elab_WF_initFn____x40_Lean_Elab_PreDefinition_WF_Fix___hyg_6_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_definition_wf_replaceRecApps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_definition_wf_replaceRecApps);
lean_dec_ref(res);
}l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___closed__0);
l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0 = _init_l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0();
l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1 = _init_l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__1();
l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0 = _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0();
lean_mark_persistent(l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__0);
l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1 = _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1();
lean_mark_persistent(l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__1);
l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2 = _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2();
lean_mark_persistent(l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__2);
l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3 = _init_l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3();
lean_mark_persistent(l_Lean_getConstInfo___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__1___closed__3);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__0);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__1);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__2);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__3);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__4);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__5);
l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6 = _init_l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6();
lean_mark_persistent(l_panic___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__2___closed__6);
l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0 = _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0();
lean_mark_persistent(l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__0);
l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1 = _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1();
lean_mark_persistent(l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__1);
l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2 = _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2();
lean_mark_persistent(l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__2);
l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3 = _init_l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3();
lean_mark_persistent(l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1_spec__4_spec__4___redArg___closed__3);
l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0 = _init_l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0();
lean_mark_persistent(l_Lean_Meta_matchMatcherApp_x3f___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__1___closed__0);
l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0 = _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__0);
l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1 = _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__1);
l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2 = _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__2);
l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3 = _init_l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__7___lam__0___closed__3);
l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0 = _init_l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_mapLetDecl___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__9___lam__0___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__8);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__9);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__10);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__7);
l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0 = _init_l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0();
lean_mark_persistent(l_panic___at_____private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1);
l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2 = _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2);
l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0 = _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0();
lean_mark_persistent(l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0);
l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1 = _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1();
lean_mark_persistent(l_Lean_Elab_WF_assignSubsumed___lam__0___closed__1);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__0);
l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__0___closed__1);
l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0 = _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__0);
l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__1);
l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2 = _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__2);
l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3 = _init_l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at___Array_forIn_x27Unsafe_loop___at___Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__3___closed__3);
l_Lean_Elab_WF_solveDecreasingGoals___closed__0 = _init_l_Lean_Elab_WF_solveDecreasingGoals___closed__0();
lean_mark_persistent(l_Lean_Elab_WF_solveDecreasingGoals___closed__0);
l_Lean_Elab_WF_solveDecreasingGoals___closed__1 = _init_l_Lean_Elab_WF_solveDecreasingGoals___closed__1();
lean_mark_persistent(l_Lean_Elab_WF_solveDecreasingGoals___closed__1);
l_Lean_Elab_WF_mkFix___lam__0___closed__0 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__0();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__0);
l_Lean_Elab_WF_mkFix___lam__0___closed__1 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__1();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__1);
l_Lean_Elab_WF_mkFix___lam__0___closed__2 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__2();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__2);
l_Lean_Elab_WF_mkFix___lam__0___closed__3 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__3();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__3);
l_Lean_Elab_WF_mkFix___lam__0___closed__4 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__4();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__4);
l_Lean_Elab_WF_mkFix___lam__0___closed__5 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__5();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__5);
l_Lean_Elab_WF_mkFix___lam__0___closed__6 = _init_l_Lean_Elab_WF_mkFix___lam__0___closed__6();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__0___closed__6);
l_Lean_Elab_WF_mkFix___lam__2___closed__0 = _init_l_Lean_Elab_WF_mkFix___lam__2___closed__0();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___lam__2___closed__0);
l_Lean_Elab_WF_mkFix___closed__0 = _init_l_Lean_Elab_WF_mkFix___closed__0();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___closed__0);
l_Lean_Elab_WF_mkFix___closed__1 = _init_l_Lean_Elab_WF_mkFix___closed__1();
lean_mark_persistent(l_Lean_Elab_WF_mkFix___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
