// Lean compiler output
// Module: Lean.PrettyPrinter.Delaborator.TopDownAnalyze
// Imports: Lean.Data.RBMap Lean.Meta.SynthInstance Lean.Meta.CtorRecognizer Lean.Util.FindMVar Lean.Util.FindLevelMVar Lean.Util.CollectLevelParams Lean.Util.ReplaceLevel Lean.PrettyPrinter.Delaborator.FieldNotation Lean.PrettyPrinter.Delaborator.Options Lean.PrettyPrinter.Delaborator.SubExpr Lean.Elab.Config
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
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_knowsType;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustSubst;
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisNoDot___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_omitMax;
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10;
lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_processPostponed_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at___Lean_Meta_recordSynthPendingFailure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0;
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___Lean_SMap_insert___at_____private_Lean_Environment_0__Lean_Kernel_Environment_add_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeCheckInstances(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33;
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisNeedsType___closed__0;
LEAN_EXPORT lean_object* l_Lean_pp_analyze_explicitHoles;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3;
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
static uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__53;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13;
uint8_t l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at___Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_1369__spec__0(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
static lean_object* l_Lean_getPPAnalysisNamedArg___closed__1;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isSimpleHOFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_typeUnknown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
uint8_t l_Lean_Expr_isStringLit(lean_object*);
static lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32;
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
static lean_object* l_Lean_getPPAnalysisBlockImplicit___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getPPFieldNotation(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34;
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisHole___closed__1;
static lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustSubtypeMk;
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustSubtypeMk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isType2Type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTypeAscriptions___boxed(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisSkip___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM;
static lean_object* l_Lean_getPPAnalyze___closed__0;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNeedsType___boxed(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at___Lean_Meta_isLevelDefEq_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceLevelImpl_replaceUnsafe(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNamedArg(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9;
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
static lean_object* l_Lean_getPPAnalyzeTrustOfNat___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4;
lean_object* l_Lean_RBNode_insert___at___Lean_PrettyPrinter_Delaborator_OptionsPerPos_insertAt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_(lean_object*);
lean_object* l_Lean_addTrace___at___Lean_Meta_processPostponed_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___boxed(lean_object**);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_fieldNotationCandidate_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47;
static lean_object* l_Lean_getPPAnalysisLetVarType___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0;
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable___boxed(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___Lean_Meta_getParamNames_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTypeAscriptions(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5;
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable(lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0(lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0;
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisLetVarType___boxed(lean_object*);
lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum(lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeKnowsType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalyzeTypeAscriptions___closed__0;
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1;
static lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0;
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45;
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0;
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
lean_object* l_Lean_registerInternalExceptionId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8;
lean_object* l_instMonadEIO(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustKnownFOType2TypeHOFuns;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___boxed(lean_object**);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_(lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isDefEqAssigning(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___boxed(lean_object**);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isStructureInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeOmitMax(lean_object*);
static lean_object* l_Lean_getPPAnalysisLetVarType___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_is_out_param(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg___boxed(lean_object**);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getPPFieldNotationGeneralized(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4;
lean_object* l_Lean_Expr_constName_x21(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
static lean_object* l_Lean_getPPAnalysisBlockImplicit___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum___boxed(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5;
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustOfScientific(lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze;
uint8_t l_Lean_getPPInstances(lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNoDot___boxed(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5;
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisHole___boxed(lean_object*);
static lean_object* l_Lean_getPPAnalyzeExplicitHoles___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeExplicitHoles(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3;
static lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
static lean_object* l_Lean_getPPAnalyzeKnowsType___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_setBool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14;
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustOfScientific___boxed(lean_object*);
uint8_t l_Lean_getPPInstanceTypes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisSkip___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeExplicitHoles___boxed(lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0;
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
static lean_object* l_Lean_getPPAnalyzeCheckInstances___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___boxed(lean_object**);
lean_object* l_Lean_SubExpr_Pos_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_binderInfo(lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustSubtypeMk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_setElabConfig(lean_object*);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisBlockImplicit(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40;
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0;
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNoDot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeKnowsType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisSkip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeFailureId;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustSubst___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39;
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustOfNat___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___Lean_NameHashSet_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0;
static lean_object* l_Lean_getPPAnalysisSkip___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_isIdLike(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_;
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisHole(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindLevelMVar_main(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20;
static size_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__54;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustSubst(lean_object*);
uint64_t l_Lean_Name_hash___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNeedsType(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Lean_SubExpr_mkRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___boxed(lean_object**);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisNamedArg___closed__0;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_RBNode_find___at___Lean_PrettyPrinter_Delaborator_OptionsPerPos_insertAt_spec__2___redArg(lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalyzeTrustSubst___closed__0;
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyze(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
static lean_object* l_Lean_getPPAnalyzeOmitMax___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___boxed(lean_object**);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37;
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeOmitMax___boxed(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalyzeTrustOfScientific___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1;
lean_object* l_Lean_withTraceNode___at___Lean_Meta_processPostponed_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg___boxed(lean_object**);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1;
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustId;
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isIdLike___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2;
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustId___boxed(lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
static lean_object* l_Lean_getPPAnalysisNeedsType___closed__1;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35;
lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___redArg(lean_object*);
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryFn(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
static lean_object* l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustOfNat;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4;
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
LEAN_EXPORT lean_object* l_Lean_pp_analyze_checkInstances;
static lean_object* l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisLetVarType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeCheckInstances___boxed(lean_object*);
static lean_object* l_Lean_getPPAnalyzeTrustId___closed__0;
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_typeAscriptions;
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pp_analyze_trustOfScientific;
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisNoDot___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getPPProofs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30;
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustOfNat(lean_object*);
static lean_object* l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___Lean_NameHashSet_insert_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2;
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzePi(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4;
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___boxed(lean_object**);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisBlockImplicit___boxed(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNamedArg___boxed(lean_object*);
static lean_object* l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___Lean_throwAlreadyImported_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_____private_Lean_Meta_Basic_0__Lean_Meta_mkLevelErrorMessageCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyze___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(uint8_t, uint8_t);
static lean_object* l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___boxed(lean_object*);
static lean_object* l_Lean_getPPAnalysisSkip___closed__2;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
uint8_t l_Lean_getPPProofsWithType(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_processPostponed(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkpointDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getPPAnalysisHole___closed__0;
static lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pp", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("analyze", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pp.analyze", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) try to determine annotations sufficient to ensure round-tripping", 90, 90);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("checkInstances", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) confirm that instances can be re-synthesized", 70, 70);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("typeAscriptions", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) add type ascriptions when deemed necessary", 68, 68);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustSubst", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) always 'pretend' applications that can delab to ▸ are 'regular'", 91, 89);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustOfNat", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) always 'pretend' `OfNat.ofNat` applications can elab bottom-up", 88, 88);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustOfScientific", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) always 'pretend' `OfScientific.ofScientific` applications can elab bottom-up", 102, 102);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustSubtypeMk", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) assume the implicit arguments of Subtype.mk can be inferred", 85, 85);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustId", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) always assume an implicit `fun x => x` can be inferred", 80, 80);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trustKnownFOType2TypeHOFuns", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) omit higher-order functions whose values seem to be knownType2Type", 92, 92);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("omitMax", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) omit universe `max` annotations (these constraints can actually hurt)", 95, 95);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("knowsType", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) assume the type of the original expression is known", 77, 77);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("explicitHoles", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer analyzer) use `_` for explicit arguments that can be inferred", 77, 77);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_2 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_5 = l_Lean_Name_mkStr4(x_4, x_3, x_2, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_3 = l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_4 = l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_;
x_5 = l_Lean_Option_register___at___Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_45__spec__0(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_getPPAnalyze___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyze(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyze___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyze___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyze(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeCheckInstances___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_checkInstances;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeCheckInstances(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeCheckInstances___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeCheckInstances___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeCheckInstances(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTypeAscriptions___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_typeAscriptions;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTypeAscriptions(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTypeAscriptions___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTypeAscriptions___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTypeAscriptions(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustSubst___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustSubst;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustSubst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustSubst___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustSubst___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustSubst(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustOfNat___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustOfNat;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustOfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustOfNat___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustOfNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustOfNat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustOfScientific___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustOfScientific;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustOfScientific(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustOfScientific___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustOfScientific___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustOfScientific(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustId___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustId;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustId___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustId___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustId(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustSubtypeMk;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustSubtypeMk(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustSubtypeMk___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustSubtypeMk(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_trustKnownFOType2TypeHOFuns;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeOmitMax___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_omitMax;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeOmitMax(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeOmitMax___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeOmitMax___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeOmitMax(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeKnowsType___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_knowsType;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeKnowsType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeKnowsType___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeKnowsType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeKnowsType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalyzeExplicitHoles___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_analyze_explicitHoles;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalyzeExplicitHoles(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_getPPAnalyzeExplicitHoles___closed__0;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalyzeExplicitHoles___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalyzeExplicitHoles(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisSkip___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("analysis", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisSkip___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("skip", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisSkip___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisSkip___closed__1;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisSkip(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisSkip___closed__2;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisSkip___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisSkip(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisHole___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hole", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisHole___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisHole___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisHole___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisHole___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisHole(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNamedArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("namedArg", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNamedArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisNamedArg___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNamedArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisNamedArg___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNamedArg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisNamedArg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisLetVarType___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("letVarType", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisLetVarType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisLetVarType___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisLetVarType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisLetVarType___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisLetVarType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisLetVarType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNeedsType___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("needsType", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNeedsType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisNeedsType___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNeedsType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisNeedsType___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNeedsType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisNeedsType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisBlockImplicit___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("blockImplicit", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisBlockImplicit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisBlockImplicit___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisBlockImplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisBlockImplicit___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisBlockImplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisBlockImplicit(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNoDot___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("noDot", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_getPPAnalysisNoDot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getPPAnalysisNoDot___closed__0;
x_2 = l_Lean_getPPAnalysisSkip___closed__0;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_getPPAnalysisNoDot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_getPPAnalysisNoDot___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_KVMap_findCore(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_unbox(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_3);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getPPAnalysisNoDot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_getPPAnalysisNoDot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg___lam__0), 8, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_box(1);
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = lean_unbox(x_10);
x_14 = lean_unbox(x_11);
x_15 = lean_unbox(x_10);
x_16 = lean_unbox(x_11);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___redArg(x_1, x_13, x_14, x_15, x_16, x_12, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Expr_isForall(x_2);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0___boxed), 7, 0);
x_8 = lean_box(0);
x_9 = lean_unbox(x_8);
x_10 = l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg(x_1, x_7, x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___redArg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Meta_lambdaTelescope___at___Lean_PrettyPrinter_Delaborator_returnsPi_spec__0(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_returnsPi___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
x_1 = x_3;
goto _start;
}
else
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Expr_hasLooseBVars(x_1);
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isNonConstFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_isNonConstFun(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isSimpleHOFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_PrettyPrinter_Delaborator_returnsPi(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_PrettyPrinter_Delaborator_isNonConstFun___redArg(x_1, x_9);
lean_dec(x_1);
x_11 = lean_unbox(x_8);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_box(1);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_10, 0);
lean_dec(x_21);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_8);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_10, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_10, 0, x_26);
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_dec(x_10);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
lean_dec(x_1);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isType2Type(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_10 = x_7;
} else {
 lean_dec_ref(x_7);
 x_10 = lean_box(0);
}
if (lean_obj_tag(x_8) == 7)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 3)
{
lean_object* x_15; 
lean_dec(x_14);
x_15 = lean_ctor_get(x_8, 2);
lean_inc(x_15);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 3)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_15);
lean_dec(x_10);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
else
{
lean_dec(x_15);
goto block_13;
}
}
else
{
lean_dec(x_14);
lean_dec(x_8);
goto block_13;
}
}
else
{
lean_dec(x_8);
goto block_13;
}
block_13:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
if (lean_is_scalar(x_10)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_10;
}
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
return x_7;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_getAppFn(x_1);
x_4 = l_Lean_Expr_isFVar(x_3);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Expr_isConst(x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_box(x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isFOLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_isFOLike(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_isIdLike(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_box(1);
x_4 = lean_unbox(x_3);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_box(0);
x_6 = lean_unbox(x_5);
return x_6;
}
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_box(0);
x_8 = lean_unbox(x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isIdLike___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_isIdLike(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isStructureInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
x_7 = l_Lean_Meta_isConstructorApp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_st_ref_get(x_5, x_15);
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_Lean_isStructure(x_20, x_21);
x_23 = lean_box(x_22);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_dec(x_16);
x_28 = l_Lean_isStructure(x_26, x_27);
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_7);
if (x_31 == 0)
{
return x_7;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_7, 0);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_7);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_Lean_MetavarContext_findDecl_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_unbox(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_ref_get(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_FindMVar_main(x_8, x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_box(1);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_box(0);
x_18 = l_Lean_FindMVar_main(x_16, x_1, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_14);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___lam__0(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Lean_MetavarContext_findLevelDepth_x3f(x_1, x_2);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
x_6 = l_Option_beqOption____x40_Init_Data_Option_Basic___hyg_160____at___Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_1369__spec__0(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_ref_get(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_FindLevelMVar_main(x_8, x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_box(1);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_box(0);
x_18 = l_Lean_FindLevelMVar_main(x_16, x_1, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_14);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___lam__0(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_instantiateMVars___at_____private_Lean_Meta_Basic_0__Lean_Meta_mkLevelErrorMessageCore_spec__1___redArg(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasMVarAtCurrDepth___redArg(x_5, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_typeUnknown(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_3);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_8, x_3, x_9);
lean_dec(x_3);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = l_Lean_Expr_constName_x21(x_1);
x_8 = lean_name_eq(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
return x_8;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_box(0);
x_13 = lean_unbox(x_12);
return x_13;
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HOr", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hOr", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HXor", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hXor", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAnd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAnd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAppend", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAppend", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HOrElse", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hOrElse", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAndThen", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAndThen", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HShiftLeft", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hShiftLeft", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HShiftRight", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(13u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50;
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_lt(x_2, x_1);
return x_3;
}
}
static size_t _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__54() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_getAppNumArgs(x_1);
x_3 = lean_unsigned_to_nat(6u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_box(0);
x_6 = l_Lean_Expr_getAppFn(x_1);
x_7 = l_Lean_Expr_isConst(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = lean_unbox(x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51;
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__53;
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_6);
x_11 = lean_unbox(x_5);
return x_11;
}
else
{
if (x_10 == 0)
{
uint8_t x_12; 
lean_dec(x_6);
x_12 = lean_unbox(x_5);
return x_12;
}
else
{
size_t x_13; size_t x_14; uint8_t x_15; 
x_13 = 0;
x_14 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__54;
x_15 = l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0(x_6, x_9, x_13, x_14);
lean_dec(x_6);
return x_15;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp_spec__0(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_3, x_2);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_20; 
x_12 = l_Lean_Meta_mkFreshLevelMVar(x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_20 = !lean_is_exclusive(x_4);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; size_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; lean_object* x_37; uint8_t x_38; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
x_23 = lean_array_uget(x_1, x_3);
x_24 = lean_array_get_size(x_22);
x_25 = l_Lean_Name_hash___override(x_23);
x_26 = 32;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = 16;
x_30 = lean_uint64_shift_right(x_28, x_29);
x_31 = lean_uint64_xor(x_28, x_30);
x_32 = lean_uint64_to_usize(x_31);
x_33 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_34 = 1;
x_35 = lean_usize_sub(x_33, x_34);
x_36 = lean_usize_land(x_32, x_35);
x_37 = lean_array_uget(x_22, x_36);
x_38 = l_Std_DHashMap_Internal_AssocList_contains___at___Lean_NameHashSet_insert_spec__0___redArg(x_23, x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_21, x_39);
lean_dec(x_21);
x_41 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_41, 0, x_23);
lean_ctor_set(x_41, 1, x_13);
lean_ctor_set(x_41, 2, x_37);
x_42 = lean_array_uset(x_22, x_36, x_41);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_nat_mul(x_40, x_43);
x_45 = lean_unsigned_to_nat(3u);
x_46 = lean_nat_div(x_44, x_45);
lean_dec(x_44);
x_47 = lean_array_get_size(x_42);
x_48 = lean_nat_dec_le(x_46, x_47);
lean_dec(x_47);
lean_dec(x_46);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Lean_NameHashSet_insert_spec__1___redArg(x_42);
lean_ctor_set(x_4, 1, x_49);
lean_ctor_set(x_4, 0, x_40);
x_15 = x_4;
goto block_19;
}
else
{
lean_ctor_set(x_4, 1, x_42);
lean_ctor_set(x_4, 0, x_40);
x_15 = x_4;
goto block_19;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_box(0);
x_51 = lean_array_uset(x_22, x_36, x_50);
x_52 = l_Std_DHashMap_Internal_AssocList_replace___at___Lean_SMap_insert___at_____private_Lean_Environment_0__Lean_Kernel_Environment_add_spec__0_spec__1___redArg(x_23, x_13, x_37);
x_53 = lean_array_uset(x_51, x_36, x_52);
lean_ctor_set(x_4, 1, x_53);
x_15 = x_4;
goto block_19;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; size_t x_65; size_t x_66; size_t x_67; size_t x_68; size_t x_69; lean_object* x_70; uint8_t x_71; 
x_54 = lean_ctor_get(x_4, 0);
x_55 = lean_ctor_get(x_4, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_4);
x_56 = lean_array_uget(x_1, x_3);
x_57 = lean_array_get_size(x_55);
x_58 = l_Lean_Name_hash___override(x_56);
x_59 = 32;
x_60 = lean_uint64_shift_right(x_58, x_59);
x_61 = lean_uint64_xor(x_58, x_60);
x_62 = 16;
x_63 = lean_uint64_shift_right(x_61, x_62);
x_64 = lean_uint64_xor(x_61, x_63);
x_65 = lean_uint64_to_usize(x_64);
x_66 = lean_usize_of_nat(x_57);
lean_dec(x_57);
x_67 = 1;
x_68 = lean_usize_sub(x_66, x_67);
x_69 = lean_usize_land(x_65, x_68);
x_70 = lean_array_uget(x_55, x_69);
x_71 = l_Std_DHashMap_Internal_AssocList_contains___at___Lean_NameHashSet_insert_spec__0___redArg(x_56, x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_54, x_72);
lean_dec(x_54);
x_74 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_74, 0, x_56);
lean_ctor_set(x_74, 1, x_13);
lean_ctor_set(x_74, 2, x_70);
x_75 = lean_array_uset(x_55, x_69, x_74);
x_76 = lean_unsigned_to_nat(4u);
x_77 = lean_nat_mul(x_73, x_76);
x_78 = lean_unsigned_to_nat(3u);
x_79 = lean_nat_div(x_77, x_78);
lean_dec(x_77);
x_80 = lean_array_get_size(x_75);
x_81 = lean_nat_dec_le(x_79, x_80);
lean_dec(x_80);
lean_dec(x_79);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___Lean_NameHashSet_insert_spec__1___redArg(x_75);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_73);
lean_ctor_set(x_83, 1, x_82);
x_15 = x_83;
goto block_19;
}
else
{
lean_object* x_84; 
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_73);
lean_ctor_set(x_84, 1, x_75);
x_15 = x_84;
goto block_19;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_box(0);
x_86 = lean_array_uset(x_55, x_69, x_85);
x_87 = l_Std_DHashMap_Internal_AssocList_replace___at___Lean_SMap_insert___at_____private_Lean_Environment_0__Lean_Kernel_Environment_add_spec__0_spec__1___redArg(x_56, x_13, x_70);
x_88 = lean_array_uset(x_86, x_69, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_54);
lean_ctor_set(x_89, 1, x_88);
x_15 = x_89;
goto block_19;
}
}
block_19:
{
size_t x_16; size_t x_17; 
x_16 = 1;
x_17 = lean_usize_add(x_3, x_16);
x_3 = x_17;
x_4 = x_15;
x_9 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_5, x_18);
x_20 = l_Std_DHashMap_Internal_AssocList_get_x21___at___Lean_throwAlreadyImported_spec__0___redArg(x_2, x_4, x_19);
lean_dec(x_19);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_2);
x_22 = l_Lean_Level_hasParam(x_3);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_3);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_nat_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0;
x_3 = lean_nat_div(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1;
x_2 = l_Nat_nextPowerOfTwo(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6;
x_3 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasLevelParam(x_1);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; uint8_t x_16; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8;
lean_inc(x_1);
x_10 = l_Lean_CollectLevelParams_main(x_1, x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10;
x_13 = lean_array_size(x_11);
x_14 = 0;
x_15 = l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg(x_11, x_13, x_14, x_12, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_box(0);
x_19 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0___boxed), 3, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Expr_ReplaceLevelImpl_replaceUnsafe(x_19, x_1);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_box(0);
x_24 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0___boxed), 3, 2);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_23);
x_25 = l_Lean_Expr_ReplaceLevelImpl_replaceUnsafe(x_24, x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___redArg(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forIn_x27Unsafe_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars_spec__0(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___lam__0(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isDefEqAssigning(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; uint64_t x_13; lean_object* x_14; 
x_11 = lean_box(1);
x_12 = lean_unbox(x_11);
lean_ctor_set_uint8(x_9, 7, x_12);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_9);
lean_ctor_set_uint64(x_3, sizeof(void*)*7, x_13);
x_14 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
else
{
uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; uint64_t x_35; lean_object* x_36; 
x_15 = lean_ctor_get_uint8(x_9, 0);
x_16 = lean_ctor_get_uint8(x_9, 1);
x_17 = lean_ctor_get_uint8(x_9, 2);
x_18 = lean_ctor_get_uint8(x_9, 3);
x_19 = lean_ctor_get_uint8(x_9, 4);
x_20 = lean_ctor_get_uint8(x_9, 5);
x_21 = lean_ctor_get_uint8(x_9, 6);
x_22 = lean_ctor_get_uint8(x_9, 8);
x_23 = lean_ctor_get_uint8(x_9, 9);
x_24 = lean_ctor_get_uint8(x_9, 10);
x_25 = lean_ctor_get_uint8(x_9, 11);
x_26 = lean_ctor_get_uint8(x_9, 12);
x_27 = lean_ctor_get_uint8(x_9, 13);
x_28 = lean_ctor_get_uint8(x_9, 14);
x_29 = lean_ctor_get_uint8(x_9, 15);
x_30 = lean_ctor_get_uint8(x_9, 16);
x_31 = lean_ctor_get_uint8(x_9, 17);
lean_dec(x_9);
x_32 = lean_box(1);
x_33 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_33, 0, x_15);
lean_ctor_set_uint8(x_33, 1, x_16);
lean_ctor_set_uint8(x_33, 2, x_17);
lean_ctor_set_uint8(x_33, 3, x_18);
lean_ctor_set_uint8(x_33, 4, x_19);
lean_ctor_set_uint8(x_33, 5, x_20);
lean_ctor_set_uint8(x_33, 6, x_21);
x_34 = lean_unbox(x_32);
lean_ctor_set_uint8(x_33, 7, x_34);
lean_ctor_set_uint8(x_33, 8, x_22);
lean_ctor_set_uint8(x_33, 9, x_23);
lean_ctor_set_uint8(x_33, 10, x_24);
lean_ctor_set_uint8(x_33, 11, x_25);
lean_ctor_set_uint8(x_33, 12, x_26);
lean_ctor_set_uint8(x_33, 13, x_27);
lean_ctor_set_uint8(x_33, 14, x_28);
lean_ctor_set_uint8(x_33, 15, x_29);
lean_ctor_set_uint8(x_33, 16, x_30);
lean_ctor_set_uint8(x_33, 17, x_31);
x_35 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_33);
lean_ctor_set(x_3, 0, x_33);
lean_ctor_set_uint64(x_3, sizeof(void*)*7, x_35);
x_36 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_36;
}
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; uint64_t x_68; lean_object* x_69; lean_object* x_70; 
x_37 = lean_ctor_get(x_3, 0);
x_38 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 8);
x_39 = lean_ctor_get(x_3, 1);
x_40 = lean_ctor_get(x_3, 2);
x_41 = lean_ctor_get(x_3, 3);
x_42 = lean_ctor_get(x_3, 4);
x_43 = lean_ctor_get(x_3, 5);
x_44 = lean_ctor_get(x_3, 6);
x_45 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 9);
x_46 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 10);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_37);
lean_dec(x_3);
x_47 = lean_ctor_get_uint8(x_37, 0);
x_48 = lean_ctor_get_uint8(x_37, 1);
x_49 = lean_ctor_get_uint8(x_37, 2);
x_50 = lean_ctor_get_uint8(x_37, 3);
x_51 = lean_ctor_get_uint8(x_37, 4);
x_52 = lean_ctor_get_uint8(x_37, 5);
x_53 = lean_ctor_get_uint8(x_37, 6);
x_54 = lean_ctor_get_uint8(x_37, 8);
x_55 = lean_ctor_get_uint8(x_37, 9);
x_56 = lean_ctor_get_uint8(x_37, 10);
x_57 = lean_ctor_get_uint8(x_37, 11);
x_58 = lean_ctor_get_uint8(x_37, 12);
x_59 = lean_ctor_get_uint8(x_37, 13);
x_60 = lean_ctor_get_uint8(x_37, 14);
x_61 = lean_ctor_get_uint8(x_37, 15);
x_62 = lean_ctor_get_uint8(x_37, 16);
x_63 = lean_ctor_get_uint8(x_37, 17);
if (lean_is_exclusive(x_37)) {
 x_64 = x_37;
} else {
 lean_dec_ref(x_37);
 x_64 = lean_box(0);
}
x_65 = lean_box(1);
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 0, 18);
} else {
 x_66 = x_64;
}
lean_ctor_set_uint8(x_66, 0, x_47);
lean_ctor_set_uint8(x_66, 1, x_48);
lean_ctor_set_uint8(x_66, 2, x_49);
lean_ctor_set_uint8(x_66, 3, x_50);
lean_ctor_set_uint8(x_66, 4, x_51);
lean_ctor_set_uint8(x_66, 5, x_52);
lean_ctor_set_uint8(x_66, 6, x_53);
x_67 = lean_unbox(x_65);
lean_ctor_set_uint8(x_66, 7, x_67);
lean_ctor_set_uint8(x_66, 8, x_54);
lean_ctor_set_uint8(x_66, 9, x_55);
lean_ctor_set_uint8(x_66, 10, x_56);
lean_ctor_set_uint8(x_66, 11, x_57);
lean_ctor_set_uint8(x_66, 12, x_58);
lean_ctor_set_uint8(x_66, 13, x_59);
lean_ctor_set_uint8(x_66, 14, x_60);
lean_ctor_set_uint8(x_66, 15, x_61);
lean_ctor_set_uint8(x_66, 16, x_62);
lean_ctor_set_uint8(x_66, 17, x_63);
x_68 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_66);
x_69 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_39);
lean_ctor_set(x_69, 2, x_40);
lean_ctor_set(x_69, 3, x_41);
lean_ctor_set(x_69, 4, x_42);
lean_ctor_set(x_69, 5, x_43);
lean_ctor_set(x_69, 6, x_44);
lean_ctor_set_uint64(x_69, sizeof(void*)*7, x_68);
lean_ctor_set_uint8(x_69, sizeof(void*)*7 + 8, x_38);
lean_ctor_set_uint8(x_69, sizeof(void*)*7 + 9, x_45);
lean_ctor_set_uint8(x_69, sizeof(void*)*7 + 10, x_46);
x_70 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_69, x_4, x_5, x_6, x_7);
return x_70;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkpointDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isDefEqAssigning), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_box(0);
x_10 = lean_unbox(x_9);
x_11 = l_Lean_Meta_checkpointDefEq___at___Lean_Meta_isLevelDefEq_spec__0(x_8, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_8, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_Expr_isSort(x_2);
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0___boxed), 7, 0);
x_8 = lean_box(0);
x_9 = lean_unbox(x_8);
x_10 = lean_unbox(x_8);
x_11 = l_Lean_Meta_forallTelescopeReducing___at___Lean_Meta_getParamNames_spec__1___redArg(x_1, x_7, x_9, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_8, x_9);
lean_dec(x_9);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0___boxed), 7, 0);
x_11 = lean_box(0);
x_12 = lean_unbox(x_11);
x_13 = lean_unbox(x_11);
x_14 = l_Lean_Meta_forallTelescopeReducing___at___Lean_Meta_getParamNames_spec__1___redArg(x_8, x_10, x_12, x_13, x_2, x_3, x_4, x_5, x_9);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ndrec", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rec", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2;
x_3 = lean_unsigned_to_nat(6u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4;
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_5, x_3);
return x_6;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_box(0);
x_3 = lean_unbox(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
x_1 = x_4;
goto _start;
}
default: 
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_box(1);
x_7 = lean_unbox(x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_5; 
x_5 = l_Lean_Name_hasMacroScopes(x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_isPrivateName(x_1);
x_2 = x_6;
goto block_4;
}
else
{
x_2 = x_5;
goto block_4;
}
block_4:
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable_containsNum(x_1);
return x_3;
}
else
{
return x_2;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Expr_mvarId_x21(x_1);
x_8 = l_Lean_MVarId_getDecl(x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
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
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_8; lean_object* x_9; 
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_1, 0);
x_1 = x_13;
goto _start;
}
case 2:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_8 = x_15;
x_9 = x_16;
goto block_12;
}
case 3:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_8 = x_17;
x_9 = x_18;
goto block_12;
}
default: 
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_box(0);
x_20 = lean_unbox(x_19);
return x_20;
}
}
block_7:
{
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax(x_3);
if (x_5 == 0)
{
x_1 = x_2;
goto _start;
}
else
{
return x_5;
}
}
else
{
return x_4;
}
}
block_12:
{
uint8_t x_10; 
x_10 = l_Lean_Level_hasParam(x_8);
if (x_10 == 0)
{
x_2 = x_9;
x_3 = x_8;
x_4 = x_10;
goto block_7;
}
else
{
uint8_t x_11; 
x_11 = l_Lean_Level_hasParam(x_9);
x_2 = x_9;
x_3 = x_8;
x_4 = x_11;
goto block_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; uint8_t x_7; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_unbox(x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_4);
x_5 = lean_unbox(x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_5);
x_6 = lean_unbox(x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 2, x_6);
x_7 = lean_unbox(x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 3, x_7);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_apply_1(x_2, x_12);
lean_ctor_set(x_4, 0, x_13);
x_14 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 1);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 2);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 3);
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_apply_1(x_2, x_19);
x_21 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_15);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 1, x_16);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 2, x_17);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 3, x_18);
x_22 = lean_apply_7(x_3, x_21, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM___lam__0), 10, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_57; lean_object* x_59; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_59 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isDefEqAssigning(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_st_ref_take(x_4, x_62);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_67 = lean_ctor_get(x_63, 1);
x_68 = lean_ctor_get(x_65, 1);
lean_ctor_set(x_63, 1, x_2);
lean_ctor_set(x_63, 0, x_1);
x_69 = lean_array_push(x_68, x_63);
lean_ctor_set(x_65, 1, x_69);
x_70 = lean_st_ref_set(x_4, x_65, x_67);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_box(0);
x_73 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(x_72, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = x_73;
goto block_58;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_74 = lean_ctor_get(x_63, 1);
x_75 = lean_ctor_get(x_65, 0);
x_76 = lean_ctor_get(x_65, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_65);
lean_ctor_set(x_63, 1, x_2);
lean_ctor_set(x_63, 0, x_1);
x_77 = lean_array_push(x_76, x_63);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_st_ref_set(x_4, x_78, x_74);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_box(0);
x_82 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_80);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = x_82;
goto block_58;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_83 = lean_ctor_get(x_63, 0);
x_84 = lean_ctor_get(x_63, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_63);
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_87 = x_83;
} else {
 lean_dec_ref(x_83);
 x_87 = lean_box(0);
}
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_1);
lean_ctor_set(x_88, 1, x_2);
x_89 = lean_array_push(x_86, x_88);
if (lean_is_scalar(x_87)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_87;
}
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_st_ref_set(x_4, x_90, x_84);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_box(0);
x_94 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(x_93, x_3, x_4, x_5, x_6, x_7, x_8, x_92);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = x_94;
goto block_58;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_2);
lean_dec(x_1);
x_95 = lean_ctor_get(x_59, 1);
lean_inc(x_95);
lean_dec(x_59);
x_96 = lean_box(0);
x_97 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(x_96, x_3, x_4, x_5, x_6, x_7, x_8, x_95);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = x_97;
goto block_58;
}
}
else
{
uint8_t x_98; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_98 = !lean_is_exclusive(x_59);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_59, 0);
x_100 = lean_ctor_get(x_59, 1);
lean_inc(x_100);
lean_inc(x_99);
x_51 = x_59;
x_52 = x_99;
x_53 = x_100;
goto block_56;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_59, 0);
x_102 = lean_ctor_get(x_59, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_59);
lean_inc(x_102);
lean_inc(x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_51 = x_103;
x_52 = x_101;
x_53 = x_102;
goto block_56;
}
}
block_50:
{
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_10);
x_13 = lean_st_ref_take(x_4, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_13, 1);
x_18 = lean_ctor_get(x_15, 1);
lean_ctor_set(x_13, 1, x_2);
lean_ctor_set(x_13, 0, x_1);
x_19 = lean_array_push(x_18, x_13);
lean_ctor_set(x_15, 1, x_19);
x_20 = lean_st_ref_set(x_4, x_15, x_17);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_ctor_get(x_13, 1);
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
lean_ctor_set(x_13, 1, x_2);
lean_ctor_set(x_13, 0, x_1);
x_30 = lean_array_push(x_29, x_13);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_st_ref_set(x_4, x_31, x_27);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_37 = lean_ctor_get(x_13, 0);
x_38 = lean_ctor_get(x_13, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_13);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_41 = x_37;
} else {
 lean_dec_ref(x_37);
 x_41 = lean_box(0);
}
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_2);
x_43 = lean_array_push(x_40, x_42);
if (lean_is_scalar(x_41)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_41;
}
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_st_ref_set(x_4, x_44, x_38);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = lean_box(0);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
else
{
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
block_56:
{
uint8_t x_54; 
x_54 = l_Lean_Exception_isInterrupt(x_52);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = l_Lean_Exception_isRuntime(x_52);
lean_dec(x_52);
x_10 = x_51;
x_11 = x_53;
x_12 = x_55;
goto block_50;
}
else
{
lean_dec(x_52);
x_10 = x_51;
x_11 = x_53;
x_12 = x_54;
goto block_50;
}
}
block_58:
{
return x_57;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_17; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_17 = lean_whnf(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_20 = lean_whnf(x_2, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = lean_array_get_size(x_4);
x_25 = lean_nat_dec_lt(x_3, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_26 = lean_box(0);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_free_object(x_20);
if (lean_obj_tag(x_18) == 7)
{
if (lean_obj_tag(x_22) == 7)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_46; 
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_18, 2);
lean_inc(x_28);
lean_dec(x_18);
x_29 = lean_ctor_get(x_22, 2);
lean_inc(x_29);
lean_dec(x_22);
x_30 = l_Lean_instInhabitedExpr;
x_46 = lean_is_out_param(x_27);
if (x_46 == 0)
{
x_31 = x_6;
x_32 = x_7;
x_33 = x_8;
x_34 = x_9;
x_35 = x_10;
x_36 = x_11;
x_37 = x_23;
goto block_45;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_array_get(x_30, x_4, x_3);
x_48 = lean_array_get(x_30, x_5, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_49 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_47, x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_31 = x_6;
x_32 = x_7;
x_33 = x_8;
x_34 = x_9;
x_35 = x_10;
x_36 = x_11;
x_37 = x_50;
goto block_45;
}
else
{
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
return x_49;
}
}
block_45:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_array_get(x_30, x_4, x_3);
x_39 = lean_expr_instantiate1(x_28, x_38);
lean_dec(x_38);
lean_dec(x_28);
x_40 = lean_array_get(x_30, x_5, x_3);
x_41 = lean_expr_instantiate1(x_29, x_40);
lean_dec(x_40);
lean_dec(x_29);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_3, x_42);
lean_dec(x_3);
x_1 = x_39;
x_2 = x_41;
x_3 = x_43;
x_6 = x_31;
x_7 = x_32;
x_8 = x_33;
x_9 = x_34;
x_10 = x_35;
x_11 = x_36;
x_12 = x_37;
goto _start;
}
}
else
{
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_13 = x_23;
goto block_16;
}
}
else
{
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_13 = x_23;
goto block_16;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_ctor_get(x_20, 0);
x_52 = lean_ctor_get(x_20, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_20);
x_53 = lean_array_get_size(x_4);
x_54 = lean_nat_dec_lt(x_3, x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
return x_56;
}
else
{
if (lean_obj_tag(x_18) == 7)
{
if (lean_obj_tag(x_51) == 7)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_76; 
x_57 = lean_ctor_get(x_18, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_18, 2);
lean_inc(x_58);
lean_dec(x_18);
x_59 = lean_ctor_get(x_51, 2);
lean_inc(x_59);
lean_dec(x_51);
x_60 = l_Lean_instInhabitedExpr;
x_76 = lean_is_out_param(x_57);
if (x_76 == 0)
{
x_61 = x_6;
x_62 = x_7;
x_63 = x_8;
x_64 = x_9;
x_65 = x_10;
x_66 = x_11;
x_67 = x_52;
goto block_75;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_array_get(x_60, x_4, x_3);
x_78 = lean_array_get(x_60, x_5, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_79 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_77, x_78, x_6, x_7, x_8, x_9, x_10, x_11, x_52);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_61 = x_6;
x_62 = x_7;
x_63 = x_8;
x_64 = x_9;
x_65 = x_10;
x_66 = x_11;
x_67 = x_80;
goto block_75;
}
else
{
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
return x_79;
}
}
block_75:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_array_get(x_60, x_4, x_3);
x_69 = lean_expr_instantiate1(x_58, x_68);
lean_dec(x_68);
lean_dec(x_58);
x_70 = lean_array_get(x_60, x_5, x_3);
x_71 = lean_expr_instantiate1(x_59, x_70);
lean_dec(x_70);
lean_dec(x_59);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_3, x_72);
lean_dec(x_3);
x_1 = x_69;
x_2 = x_71;
x_3 = x_73;
x_6 = x_61;
x_7 = x_62;
x_8 = x_63;
x_9 = x_64;
x_10 = x_65;
x_11 = x_66;
x_12 = x_67;
goto _start;
}
}
else
{
lean_dec(x_51);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_13 = x_52;
goto block_16;
}
}
else
{
lean_dec(x_51);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_13 = x_52;
goto block_16;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_81 = !lean_is_exclusive(x_20);
if (x_81 == 0)
{
return x_20;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_20, 0);
x_83 = lean_ctor_get(x_20, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_20);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_85 = !lean_is_exclusive(x_17);
if (x_85 == 0)
{
return x_17;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_17, 0);
x_87 = lean_ctor_get(x_17, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_17);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
block_16:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = lean_infer_type(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = lean_infer_type(x_2, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_getAppFn(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = lean_infer_type(x_16, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Expr_getAppFn(x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_21 = lean_infer_type(x_20, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_26 = l_Lean_Expr_getAppNumArgs(x_11);
lean_inc(x_26);
x_27 = lean_mk_array(x_26, x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_26, x_28);
lean_dec(x_26);
x_30 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_11, x_27, x_29);
x_31 = l_Lean_Expr_getAppNumArgs(x_14);
lean_inc(x_31);
x_32 = lean_mk_array(x_31, x_25);
x_33 = lean_nat_sub(x_31, x_28);
lean_dec(x_31);
x_34 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_14, x_32, x_33);
x_35 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams_inspectAux(x_18, x_22, x_24, x_30, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_34);
lean_dec(x_30);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_21);
if (x_36 == 0)
{
return x_21;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_21, 0);
x_38 = lean_ctor_get(x_21, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_21);
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
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_17);
if (x_40 == 0)
{
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 0);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_13);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_10);
if (x_48 == 0)
{
return x_10;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_10, 0);
x_50 = lean_ctor_get(x_10, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_10);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfScientific", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofScientific", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_17; uint8_t x_37; 
x_4 = lean_ctor_get(x_2, 2);
x_37 = l_Lean_Expr_isFVar(x_1);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = l_Lean_Expr_isConst(x_1);
x_17 = x_38;
goto block_36;
}
else
{
x_17 = x_37;
goto block_36;
}
block_16:
{
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_getPPAnalyzeTrustOfScientific(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2;
x_10 = lean_unsigned_to_nat(5u);
x_11 = l_Lean_Expr_isAppOfArity(x_1, x_9, x_10);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
}
block_36:
{
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = l_Lean_Expr_isMVar(x_1);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_isRawNatLit(x_1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Expr_isStringLit(x_1);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Expr_isSort(x_1);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_getPPAnalyzeTrustOfNat(x_4);
if (x_22 == 0)
{
x_5 = x_22;
goto block_16;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5;
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Expr_isAppOfArity(x_1, x_23, x_24);
x_5 = x_25;
goto block_16;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(x_20);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_box(x_19);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_3);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(x_18);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_box(x_17);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(x_1, x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_25; 
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get(x_8, 2);
x_25 = lean_nat_dec_lt(x_10, x_18);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_17);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; 
lean_dec(x_9);
x_27 = lean_box(x_1);
x_28 = lean_array_get(x_27, x_2, x_10);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
x_30 = lean_box(3);
x_31 = lean_unbox(x_30);
x_32 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_29, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; uint8_t x_35; 
x_33 = lean_box(0);
x_34 = lean_unbox(x_33);
x_35 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_29, x_34);
if (x_35 == 0)
{
lean_inc(x_3);
x_20 = x_3;
x_21 = x_17;
goto block_24;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_inc(x_4);
x_36 = lean_array_get(x_4, x_5, x_10);
x_37 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(x_36, x_15, x_17);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_54; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_array_fget(x_6, x_10);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_41);
x_54 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_typeUnknown(x_41, x_13, x_14, x_15, x_16, x_40);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
if (x_56 == 0)
{
x_42 = x_54;
goto block_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
lean_inc(x_41);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_41);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_36);
x_59 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_36, x_58, x_7, x_11, x_12, x_13, x_14, x_15, x_16, x_57);
x_42 = x_59;
goto block_53;
}
}
else
{
x_42 = x_54;
goto block_53;
}
block_53:
{
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
lean_dec(x_41);
lean_dec(x_36);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_45;
goto block_24;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_47 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_36, x_41, x_11, x_12, x_13, x_14, x_15, x_16, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_48;
goto block_24;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
return x_47;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_41);
lean_dec(x_36);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_42);
if (x_49 == 0)
{
return x_42;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_42, 0);
x_51 = lean_ctor_get(x_42, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_42);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_37, 1);
lean_inc(x_60);
lean_dec(x_37);
x_61 = lean_array_fget(x_6, x_10);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_62 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_36, x_61, x_11, x_12, x_13, x_14, x_15, x_16, x_60);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_63;
goto block_24;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
return x_62;
}
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_inc(x_4);
x_64 = lean_array_get(x_4, x_5, x_10);
x_65 = lean_array_fget(x_6, x_10);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_66 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams(x_64, x_65, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_67;
goto block_24;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
return x_66;
}
}
}
block_24:
{
lean_object* x_22; 
x_22 = lean_nat_add(x_10, x_19);
lean_dec(x_10);
x_9 = x_20;
x_10 = x_22;
x_17 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_55; uint8_t x_56; 
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_eq(x_3, x_55);
if (x_56 == 1)
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_10);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(x_1, x_8, x_10);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; uint8_t x_143; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
x_63 = lean_box(0);
x_64 = l_Lean_instInhabitedExpr;
x_91 = lean_unsigned_to_nat(1u);
x_92 = lean_nat_sub(x_3, x_91);
x_93 = l_Lean_Expr_getAppFn(x_1);
x_143 = l_Lean_Expr_isConst(x_93);
if (x_143 == 0)
{
uint8_t x_144; 
x_144 = l_Lean_Expr_isFVar(x_93);
if (x_144 == 0)
{
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_59;
}
else
{
uint8_t x_145; 
lean_dec(x_59);
x_145 = lean_unbox(x_60);
lean_dec(x_60);
x_94 = x_145;
goto block_142;
}
}
else
{
uint8_t x_146; 
lean_dec(x_59);
x_146 = lean_unbox(x_60);
lean_dec(x_60);
x_94 = x_146;
goto block_142;
}
block_80:
{
if (x_70 == 0)
{
lean_dec(x_68);
lean_dec(x_65);
x_31 = x_66;
x_32 = x_67;
x_33 = x_4;
x_34 = x_5;
x_35 = x_6;
x_36 = x_7;
x_37 = x_8;
x_38 = x_9;
x_39 = x_71;
goto block_54;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_array_get(x_64, x_65, x_68);
lean_dec(x_68);
x_73 = lean_array_get(x_64, x_65, x_69);
lean_dec(x_65);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_74 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_72, x_73, x_4, x_5, x_6, x_7, x_8, x_9, x_71);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_31 = x_66;
x_32 = x_67;
x_33 = x_4;
x_34 = x_5;
x_35 = x_6;
x_36 = x_7;
x_37 = x_8;
x_38 = x_9;
x_39 = x_75;
goto block_54;
}
else
{
uint8_t x_76; 
lean_dec(x_66);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_74);
if (x_76 == 0)
{
return x_74;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_74, 0);
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_74);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
block_90:
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_unbox(x_87);
lean_dec(x_87);
x_65 = x_82;
x_66 = x_81;
x_67 = x_83;
x_68 = x_84;
x_69 = x_85;
x_70 = x_89;
x_71 = x_88;
goto block_80;
}
block_142:
{
lean_object* x_95; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_95 = lean_infer_type(x_93, x_6, x_7, x_8, x_9, x_62);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars(x_96, x_6, x_7, x_8, x_9, x_97);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_102 = l_Lean_Expr_getAppNumArgs(x_1);
lean_inc(x_102);
x_103 = lean_mk_array(x_102, x_101);
x_104 = lean_nat_sub(x_102, x_91);
lean_dec(x_102);
lean_inc(x_1);
x_105 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_103, x_104);
x_106 = lean_array_get_size(x_105);
x_107 = lean_box(0);
x_108 = lean_unbox(x_107);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_109 = l_Lean_Meta_forallMetaBoundedTelescope(x_99, x_106, x_108, x_6, x_7, x_8, x_9, x_100);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_113 = lean_ctor_get(x_110, 0);
lean_inc(x_113);
lean_dec(x_110);
x_114 = lean_ctor_get(x_111, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_111, 1);
lean_inc(x_115);
lean_dec(x_111);
x_116 = lean_array_get_size(x_113);
x_117 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_117, 0, x_55);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set(x_117, 2, x_91);
x_118 = lean_box(0);
x_119 = lean_unbox(x_63);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_120 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg(x_119, x_114, x_118, x_64, x_105, x_113, x_92, x_117, x_118, x_55, x_4, x_5, x_6, x_7, x_8, x_9, x_112);
lean_dec(x_117);
lean_dec(x_92);
lean_dec(x_105);
lean_dec(x_114);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; uint8_t x_122; 
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
lean_dec(x_120);
x_122 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp(x_1);
lean_dec(x_1);
if (x_122 == 0)
{
x_65 = x_113;
x_66 = x_115;
x_67 = x_94;
x_68 = x_55;
x_69 = x_91;
x_70 = x_122;
x_71 = x_121;
goto block_80;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_123 = lean_array_get(x_64, x_113, x_55);
x_124 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_123, x_7, x_121);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_unbox(x_125);
lean_dec(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_124, 1);
lean_inc(x_127);
lean_dec(x_124);
x_128 = lean_array_get(x_64, x_113, x_91);
x_129 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_128, x_7, x_127);
x_81 = x_115;
x_82 = x_113;
x_83 = x_94;
x_84 = x_55;
x_85 = x_91;
x_86 = x_129;
goto block_90;
}
else
{
x_81 = x_115;
x_82 = x_113;
x_83 = x_94;
x_84 = x_55;
x_85 = x_91;
x_86 = x_124;
goto block_90;
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_115);
lean_dec(x_113);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_120);
if (x_130 == 0)
{
return x_120;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_120, 0);
x_132 = lean_ctor_get(x_120, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_120);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_105);
lean_dec(x_92);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_134 = !lean_is_exclusive(x_109);
if (x_134 == 0)
{
return x_109;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_109, 0);
x_136 = lean_ctor_get(x_109, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_109);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_92);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_138 = !lean_is_exclusive(x_95);
if (x_138 == 0)
{
return x_95;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_95, 0);
x_140 = lean_ctor_get(x_95, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_95);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
}
else
{
lean_dec(x_60);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_59;
}
}
block_30:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_11, x_13, x_14);
lean_dec(x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = lean_box(1);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_15, 0);
lean_dec(x_25);
x_26 = lean_box(x_12);
lean_ctor_set(x_15, 0, x_26);
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_box(x_12);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
block_54:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_35);
x_11 = x_31;
x_12 = x_32;
x_13 = x_36;
x_14 = x_39;
goto block_30;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_2, 0);
lean_inc(x_40);
lean_dec(x_2);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
x_41 = lean_infer_type(x_40, x_35, x_36, x_37, x_38, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_36);
lean_inc(x_31);
x_44 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_31, x_42, x_33, x_34, x_35, x_36, x_37, x_38, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_11 = x_31;
x_12 = x_32;
x_13 = x_36;
x_14 = x_45;
goto block_30;
}
else
{
uint8_t x_46; 
lean_dec(x_36);
lean_dec(x_31);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_44, 0);
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_44);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_31);
x_50 = !lean_is_exclusive(x_41);
if (x_50 == 0)
{
return x_41;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_41, 0);
x_52 = lean_ctor_get(x_41, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_41);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_1);
lean_dec(x_1);
x_19 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___redArg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_1);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp_spec__0(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; 
lean_ctor_set_uint8(x_4, sizeof(void*)*1, x_1);
lean_ctor_set_uint8(x_4, sizeof(void*)*1 + 1, x_2);
x_12 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
else
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 2);
x_14 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 3);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_1);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 1, x_2);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 2, x_13);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 3, x_14);
x_17 = lean_apply_7(x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("analyzeFailure", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_;
x_3 = l_Lean_registerInternalExceptionId(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeFailureId;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(x_1, x_6, x_8);
return x_9;
}
}
static double _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
x_22 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0;
x_23 = lean_box(0);
x_24 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_22);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_22);
x_26 = lean_unbox(x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_26);
x_27 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2;
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
x_39 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0;
x_40 = lean_box(0);
x_41 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_42 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_float(x_42, sizeof(void*)*2, x_39);
lean_ctor_set_float(x_42, sizeof(void*)*2 + 8, x_39);
x_43 = lean_unbox(x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 16, x_43);
x_44 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2;
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
x_64 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0;
x_65 = lean_box(0);
x_66 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_67 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set_float(x_67, sizeof(void*)*2, x_64);
lean_ctor_set_float(x_67, sizeof(void*)*2 + 8, x_64);
x_68 = lean_unbox(x_65);
lean_ctor_set_uint8(x_67, sizeof(void*)*2 + 16, x_68);
x_69 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2;
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
x_92 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0;
x_93 = lean_box(0);
x_94 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_95 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_95, 0, x_1);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set_float(x_95, sizeof(void*)*2, x_92);
lean_ctor_set_float(x_95, sizeof(void*)*2 + 8, x_92);
x_96 = lean_unbox(x_93);
lean_ctor_set_uint8(x_95, sizeof(void*)*2 + 16, x_96);
x_97 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2;
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
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("annotate", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_80; lean_object* x_81; 
x_36 = lean_st_ref_get(x_4, x_9);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
x_80 = lean_ctor_get(x_37, 0);
lean_inc(x_80);
lean_dec(x_37);
x_81 = l_Lean_RBNode_find___at___Lean_PrettyPrinter_Delaborator_OptionsPerPos_insertAt_spec__2___redArg(x_80, x_2);
lean_dec(x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; 
x_82 = lean_box(0);
x_40 = x_82;
goto block_79;
}
else
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
lean_dec(x_81);
x_40 = x_83;
goto block_79;
}
block_35:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_st_ref_take(x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = l_Lean_RBNode_insert___at___Lean_PrettyPrinter_Delaborator_OptionsPerPos_insertAt_spec__0___redArg(x_17, x_2, x_10);
lean_ctor_set(x_14, 0, x_18);
x_19 = lean_st_ref_set(x_11, x_14, x_15);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = l_Lean_RBNode_insert___at___Lean_PrettyPrinter_Delaborator_OptionsPerPos_insertAt_spec__0___redArg(x_26, x_2, x_10);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_st_ref_set(x_11, x_29, x_15);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
x_33 = lean_box(0);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
block_79:
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1;
x_42 = l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(x_41, x_7, x_38);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
x_46 = lean_box(1);
x_47 = lean_unbox(x_46);
lean_inc(x_1);
x_48 = l_Lean_KVMap_setBool(x_40, x_1, x_47);
x_49 = lean_unbox(x_44);
lean_dec(x_44);
if (x_49 == 0)
{
lean_free_object(x_42);
lean_dec(x_39);
lean_dec(x_1);
x_10 = x_48;
x_11 = x_4;
x_12 = x_45;
goto block_35;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_50 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
x_51 = l_Lean_SubExpr_Pos_toString(x_2);
x_52 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_MessageData_ofFormat(x_52);
lean_ctor_set_tag(x_42, 7);
lean_ctor_set(x_42, 1, x_53);
lean_ctor_set(x_42, 0, x_50);
x_54 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4;
if (lean_is_scalar(x_39)) {
 x_55 = lean_alloc_ctor(7, 2, 0);
} else {
 x_55 = x_39;
 lean_ctor_set_tag(x_55, 7);
}
lean_ctor_set(x_55, 0, x_42);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_MessageData_ofName(x_1);
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_50);
x_59 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(x_41, x_58, x_5, x_6, x_7, x_8, x_45);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_10 = x_48;
x_11 = x_4;
x_12 = x_60;
goto block_35;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; uint8_t x_66; 
x_61 = lean_ctor_get(x_42, 0);
x_62 = lean_ctor_get(x_42, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_42);
x_63 = lean_box(1);
x_64 = lean_unbox(x_63);
lean_inc(x_1);
x_65 = l_Lean_KVMap_setBool(x_40, x_1, x_64);
x_66 = lean_unbox(x_61);
lean_dec(x_61);
if (x_66 == 0)
{
lean_dec(x_39);
lean_dec(x_1);
x_10 = x_65;
x_11 = x_4;
x_12 = x_62;
goto block_35;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_67 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
x_68 = l_Lean_SubExpr_Pos_toString(x_2);
x_69 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = l_Lean_MessageData_ofFormat(x_69);
x_71 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_71, 0, x_67);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4;
if (lean_is_scalar(x_39)) {
 x_73 = lean_alloc_ctor(7, 2, 0);
} else {
 x_73 = x_39;
 lean_ctor_set_tag(x_73, 7);
}
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_MessageData_ofName(x_1);
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_67);
x_77 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(x_41, x_76, x_5, x_6, x_7, x_8, x_62);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_10 = x_65;
x_11 = x_4;
x_12 = x_78;
goto block_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_5);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___redArg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___redArg(x_2, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_27; 
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_27 = lean_nat_dec_lt(x_10, x_19);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_11);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_18);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; 
lean_dec(x_9);
x_30 = lean_box(x_2);
x_31 = lean_array_get(x_30, x_3, x_10);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
x_33 = lean_box(0);
x_34 = lean_unbox(x_33);
x_35 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_32, x_34);
if (x_35 == 0)
{
lean_inc(x_1);
x_21 = x_1;
x_22 = x_11;
x_23 = x_18;
goto block_26;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_inc(x_4);
x_36 = lean_array_get(x_4, x_5, x_10);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_36);
x_37 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_typeUnknown(x_36, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_36);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
lean_inc(x_1);
x_21 = x_1;
x_22 = x_11;
x_23 = x_40;
goto block_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_array_fget(x_6, x_10);
lean_inc(x_7);
lean_inc(x_10);
x_43 = lean_apply_1(x_7, x_10);
x_44 = lean_unsigned_to_nat(10u);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_45 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_42, x_43, x_44, x_12, x_13, x_14, x_15, x_16, x_17, x_41);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_46);
lean_dec(x_36);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
lean_inc(x_1);
x_21 = x_1;
x_22 = x_11;
x_23 = x_48;
goto block_26;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
lean_inc(x_4);
x_50 = lean_array_get(x_4, x_6, x_10);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_51 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_50, x_36, x_12, x_13, x_14, x_15, x_16, x_17, x_49);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = !lean_is_exclusive(x_11);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_11, 0);
x_55 = lean_array_set(x_54, x_10, x_46);
lean_ctor_set(x_11, 0, x_55);
lean_inc(x_1);
x_21 = x_1;
x_22 = x_11;
x_23 = x_52;
goto block_26;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_11, 0);
x_57 = lean_ctor_get(x_11, 1);
x_58 = lean_ctor_get(x_11, 2);
x_59 = lean_ctor_get(x_11, 3);
x_60 = lean_ctor_get(x_11, 4);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_11);
x_61 = lean_array_set(x_56, x_10, x_46);
x_62 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
lean_ctor_set(x_62, 2, x_58);
lean_ctor_set(x_62, 3, x_59);
lean_ctor_set(x_62, 4, x_60);
lean_inc(x_1);
x_21 = x_1;
x_22 = x_62;
x_23 = x_52;
goto block_26;
}
}
else
{
uint8_t x_63; 
lean_dec(x_46);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_51);
if (x_63 == 0)
{
return x_51;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_51, 0);
x_65 = lean_ctor_get(x_51, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_51);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_36);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_45);
if (x_67 == 0)
{
return x_45;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_45, 0);
x_69 = lean_ctor_get(x_45, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_45);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_36);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_37);
if (x_71 == 0)
{
return x_37;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_37, 0);
x_73 = lean_ctor_get(x_37, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_37);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
block_26:
{
lean_object* x_24; 
x_24 = lean_nat_add(x_10, x_20);
lean_dec(x_10);
x_9 = x_21;
x_10 = x_24;
x_11 = x_22;
x_18 = x_23;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_8);
x_20 = lean_ctor_get(x_7, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_dec(x_7);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_array_get_size(x_1);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_5);
lean_inc_n(x_2, 2);
x_26 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_1, x_20, x_25, x_2, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_2);
{
lean_object* _tmp_6 = x_21;
lean_object* _tmp_7 = x_2;
lean_object* _tmp_9 = x_29;
lean_object* _tmp_16 = x_28;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_10 = _tmp_9;
x_17 = _tmp_16;
}
goto _start;
}
else
{
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_8, x_9, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_11);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_9);
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_array_get_size(x_6);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_25);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_4);
lean_inc_n(x_1, 2);
x_27 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_21, x_26, x_1, x_23, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_1);
x_31 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg(x_6, x_1, x_2, x_3, x_4, x_5, x_22, x_1, x_10, x_30, x_12, x_13, x_14, x_15, x_16, x_17, x_29);
return x_31;
}
else
{
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_array_get(x_1, x_2, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0___boxed), 1, 0);
x_14 = l_Lean_instInhabitedExpr;
x_15 = lean_box(0);
lean_inc(x_11);
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1___boxed), 3, 2);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_11);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_box(0);
x_21 = lean_unbox(x_15);
lean_inc(x_19);
x_22 = l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg(x_20, x_21, x_12, x_14, x_11, x_10, x_19, x_19, x_20, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_11);
lean_dec(x_12);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_20);
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_22, 0, x_28);
return x_22;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_20);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg___boxed(lean_object** _args) {
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
uint8_t x_19; lean_object* x_20; 
x_19 = lean_unbox(x_2);
lean_dec(x_2);
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___redArg(x_1, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0___boxed(lean_object** _args) {
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
uint8_t x_22; lean_object* x_23; 
x_22 = lean_unbox(x_2);
lean_dec(x_2);
x_23 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__0(x_1, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_23;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___redArg(x_1, x_2, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_19;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_3);
lean_dec(x_3);
x_21 = l_List_forIn_x27_loop___at___List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1_spec__1(x_1, x_2, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg___boxed(lean_object** _args) {
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
uint8_t x_19; lean_object* x_20; 
x_19 = lean_unbox(x_2);
lean_dec(x_2);
x_20 = l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___redArg(x_1, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_20;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_2);
lean_dec(x_2);
x_21 = l_List_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps_spec__1(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___lam__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_25; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_25 = lean_nat_dec_lt(x_8, x_17);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_9);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_16);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; 
lean_dec(x_7);
x_28 = lean_box(x_1);
x_29 = lean_array_get(x_28, x_2, x_8);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
x_31 = lean_box(3);
x_32 = lean_unbox(x_31);
x_33 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_30, x_32);
if (x_33 == 0)
{
lean_inc(x_3);
x_19 = x_3;
x_20 = x_9;
x_21 = x_16;
goto block_24;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_array_fget(x_4, x_8);
x_35 = l_Lean_instInhabitedExpr;
x_36 = lean_array_get(x_35, x_5, x_8);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_37 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams(x_34, x_36, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_3);
x_19 = x_3;
x_20 = x_9;
x_21 = x_38;
goto block_24;
}
else
{
uint8_t x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_37);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
block_24:
{
lean_object* x_22; 
x_22 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_7 = x_19;
x_8 = x_22;
x_9 = x_20;
x_16 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = lean_box(0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_get_size(x_10);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_box(0);
x_19 = lean_unbox(x_13);
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg(x_19, x_12, x_18, x_10, x_11, x_17, x_18, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 0);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_20);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
else
{
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___redArg(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_1);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams_spec__0(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; uint8_t x_55; lean_object* x_57; uint8_t x_58; uint8_t x_59; uint8_t x_83; uint8_t x_108; 
x_18 = lean_ctor_get(x_7, 1);
x_19 = lean_ctor_get(x_7, 2);
x_108 = lean_nat_dec_lt(x_9, x_18);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_8);
lean_ctor_set(x_109, 1, x_10);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_17);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; uint8_t x_116; 
lean_dec(x_8);
x_111 = lean_box(x_5);
x_112 = lean_array_get(x_111, x_6, x_9);
x_113 = lean_unbox(x_112);
lean_dec(x_112);
x_114 = lean_box(1);
x_115 = lean_unbox(x_114);
x_116 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_113, x_115);
if (x_116 == 0)
{
lean_object* x_117; uint8_t x_118; uint8_t x_119; 
x_117 = lean_box(2);
x_118 = lean_unbox(x_117);
x_119 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_113, x_118);
x_83 = x_119;
goto block_107;
}
else
{
x_83 = x_116;
goto block_107;
}
}
block_25:
{
lean_object* x_23; 
x_23 = lean_nat_add(x_9, x_19);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_23;
x_10 = x_21;
x_17 = x_22;
goto _start;
}
block_48:
{
lean_object* x_30; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_30 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_26, x_27, x_11, x_12, x_13, x_14, x_15, x_16, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_10, 1);
x_34 = lean_box(x_28);
x_35 = lean_array_set(x_33, x_9, x_34);
lean_ctor_set(x_10, 1, x_35);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_10;
x_22 = x_31;
goto block_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_10, 0);
x_37 = lean_ctor_get(x_10, 1);
x_38 = lean_ctor_get(x_10, 2);
x_39 = lean_ctor_get(x_10, 3);
x_40 = lean_ctor_get(x_10, 4);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_10);
x_41 = lean_box(x_28);
x_42 = lean_array_set(x_37, x_9, x_41);
x_43 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_38);
lean_ctor_set(x_43, 3, x_39);
lean_ctor_set(x_43, 4, x_40);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_43;
x_22 = x_31;
goto block_25;
}
}
else
{
uint8_t x_44; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_30);
if (x_44 == 0)
{
return x_30;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_30, 0);
x_46 = lean_ctor_get(x_30, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_30);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
block_56:
{
if (x_55 == 0)
{
x_26 = x_49;
x_27 = x_52;
x_28 = x_53;
x_29 = x_54;
goto block_48;
}
else
{
if (x_51 == 0)
{
x_26 = x_49;
x_27 = x_52;
x_28 = x_53;
x_29 = x_54;
goto block_48;
}
else
{
if (x_50 == 0)
{
x_26 = x_49;
x_27 = x_52;
x_28 = x_53;
x_29 = x_54;
goto block_48;
}
else
{
lean_dec(x_52);
lean_dec(x_49);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_10;
x_22 = x_54;
goto block_25;
}
}
}
}
block_82:
{
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_inc(x_3);
x_60 = lean_array_get(x_3, x_4, x_9);
lean_inc(x_60);
x_61 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_60, x_14, x_57);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_3);
x_64 = lean_array_get(x_3, x_2, x_9);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_64);
x_65 = l_Lean_PrettyPrinter_Delaborator_isType2Type(x_64, x_13, x_14, x_15, x_16, x_63);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_PrettyPrinter_Delaborator_isFOLike___redArg(x_64, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_ctor_get(x_15, 2);
lean_inc(x_71);
x_72 = l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
uint8_t x_73; uint8_t x_74; 
lean_dec(x_62);
x_73 = lean_unbox(x_69);
lean_dec(x_69);
x_74 = lean_unbox(x_66);
lean_dec(x_66);
x_49 = x_64;
x_50 = x_73;
x_51 = x_74;
x_52 = x_60;
x_53 = x_58;
x_54 = x_70;
x_55 = x_72;
goto block_56;
}
else
{
uint8_t x_75; 
x_75 = lean_unbox(x_62);
lean_dec(x_62);
if (x_75 == 0)
{
uint8_t x_76; uint8_t x_77; 
x_76 = lean_unbox(x_69);
lean_dec(x_69);
x_77 = lean_unbox(x_66);
lean_dec(x_66);
x_49 = x_64;
x_50 = x_76;
x_51 = x_77;
x_52 = x_60;
x_53 = x_58;
x_54 = x_70;
x_55 = x_72;
goto block_56;
}
else
{
lean_dec(x_69);
lean_dec(x_66);
x_26 = x_64;
x_27 = x_60;
x_28 = x_58;
x_29 = x_70;
goto block_48;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_65);
if (x_78 == 0)
{
return x_65;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_65, 0);
x_80 = lean_ctor_get(x_65, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_65);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_inc(x_1);
x_20 = x_1;
x_21 = x_10;
x_22 = x_57;
goto block_25;
}
}
block_107:
{
if (x_83 == 0)
{
lean_inc(x_1);
x_20 = x_1;
x_21 = x_10;
x_22 = x_17;
goto block_25;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_array_fget(x_2, x_9);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_85 = lean_infer_type(x_84, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_88 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHigherOrder(x_86, x_13, x_14, x_15, x_16, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_unbox(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
lean_dec(x_89);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_10;
x_22 = x_91;
goto block_25;
}
else
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
lean_dec(x_88);
x_93 = lean_ctor_get(x_15, 2);
lean_inc(x_93);
x_94 = l_Lean_getPPAnalyzeTrustId(x_93);
lean_dec(x_93);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_unbox(x_89);
lean_dec(x_89);
x_57 = x_92;
x_58 = x_95;
x_59 = x_94;
goto block_82;
}
else
{
lean_object* x_96; uint8_t x_97; uint8_t x_98; 
lean_inc(x_3);
x_96 = lean_array_get(x_3, x_2, x_9);
x_97 = l_Lean_PrettyPrinter_Delaborator_isIdLike(x_96);
lean_dec(x_96);
x_98 = lean_unbox(x_89);
lean_dec(x_89);
x_57 = x_92;
x_58 = x_98;
x_59 = x_97;
goto block_82;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_88);
if (x_99 == 0)
{
return x_88;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_88, 0);
x_101 = lean_ctor_get(x_88, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_88);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_85);
if (x_103 == 0)
{
return x_85;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_85, 0);
x_105 = lean_ctor_get(x_85, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_85);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; 
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = l_Lean_instInhabitedExpr;
x_14 = lean_box(0);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_get_size(x_10);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_box(0);
x_20 = lean_unbox(x_14);
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg(x_19, x_10, x_13, x_11, x_20, x_12, x_18, x_19, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_19);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
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
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
}
else
{
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_5);
lean_dec(x_5);
x_19 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___redArg(x_1, x_2, x_3, x_4, x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0___boxed(lean_object** _args) {
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
x_21 = lean_unbox(x_5);
lean_dec(x_5);
x_22 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders_spec__0(x_1, x_2, x_3, x_4, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
lean_ctor_set(x_4, 1, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_2, x_3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_38; lean_object* x_39; uint8_t x_44; 
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_2, x_3, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_14 = x_11;
} else {
 lean_dec_ref(x_11);
 x_14 = lean_box(0);
}
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_17 = x_12;
} else {
 lean_dec_ref(x_12);
 x_17 = lean_box(0);
}
x_18 = l_Lean_instInhabitedExpr;
x_44 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp(x_15);
lean_dec(x_15);
if (x_44 == 0)
{
x_38 = x_44;
x_39 = x_13;
goto block_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_array_get(x_18, x_10, x_45);
x_47 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_46, x_6, x_13);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_array_get(x_18, x_10, x_51);
x_53 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_52, x_6, x_50);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_unbox(x_54);
lean_dec(x_54);
x_38 = x_56;
x_39 = x_55;
goto block_43;
}
else
{
lean_object* x_57; 
lean_dec(x_14);
x_57 = lean_ctor_get(x_47, 1);
lean_inc(x_57);
lean_dec(x_47);
x_19 = x_16;
x_20 = x_57;
goto block_37;
}
}
block_37:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_get(x_18, x_10, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_array_get(x_18, x_10, x_23);
x_25 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_22, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_3);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
if (lean_is_scalar(x_17)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_17;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_25);
if (lean_is_scalar(x_17)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_17;
}
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_19);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_19);
lean_dec(x_17);
x_33 = !lean_is_exclusive(x_25);
if (x_33 == 0)
{
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 0);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
block_43:
{
if (x_38 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_16);
if (lean_is_scalar(x_14)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_14;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_dec(x_14);
x_19 = x_16;
x_20 = x_39;
goto block_37;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_25; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_25 = lean_nat_dec_lt(x_8, x_17);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_9);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_16);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; 
lean_dec(x_7);
x_28 = lean_box(x_2);
x_29 = lean_array_get(x_28, x_3, x_8);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
x_31 = lean_box(0);
x_32 = lean_unbox(x_31);
x_33 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_30, x_32);
if (x_33 == 0)
{
lean_inc(x_1);
x_19 = x_1;
x_20 = x_9;
x_21 = x_16;
goto block_24;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = l_Lean_instInhabitedExpr;
x_35 = lean_array_get(x_34, x_4, x_8);
lean_inc(x_35);
x_36 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_35, x_13, x_16);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_35);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
lean_inc(x_1);
x_19 = x_1;
x_20 = x_9;
x_21 = x_39;
goto block_24;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_array_fget(x_5, x_8);
x_42 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg(x_41, x_14, x_40);
lean_dec(x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
lean_dec(x_43);
lean_dec(x_35);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
lean_inc(x_1);
x_19 = x_1;
x_20 = x_9;
x_21 = x_45;
goto block_24;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_array_get(x_34, x_5, x_8);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_48 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_47, x_35, x_10, x_11, x_12, x_13, x_14, x_15, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = !lean_is_exclusive(x_9);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_9, 0);
x_52 = lean_array_set(x_51, x_8, x_43);
lean_ctor_set(x_9, 0, x_52);
lean_inc(x_1);
x_19 = x_1;
x_20 = x_9;
x_21 = x_49;
goto block_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_53 = lean_ctor_get(x_9, 0);
x_54 = lean_ctor_get(x_9, 1);
x_55 = lean_ctor_get(x_9, 2);
x_56 = lean_ctor_get(x_9, 3);
x_57 = lean_ctor_get(x_9, 4);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_9);
x_58 = lean_array_set(x_53, x_8, x_43);
x_59 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_54);
lean_ctor_set(x_59, 2, x_55);
lean_ctor_set(x_59, 3, x_56);
lean_ctor_set(x_59, 4, x_57);
lean_inc(x_1);
x_19 = x_1;
x_20 = x_59;
x_21 = x_49;
goto block_24;
}
}
else
{
uint8_t x_60; 
lean_dec(x_43);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_48);
if (x_60 == 0)
{
return x_48;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_48, 0);
x_62 = lean_ctor_get(x_48, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_48);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
}
block_24:
{
lean_object* x_22; 
x_22 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_7 = x_19;
x_8 = x_22;
x_9 = x_20;
x_16 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = lean_box(0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_get_size(x_10);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_box(0);
x_19 = lean_unbox(x_13);
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg(x_18, x_19, x_12, x_11, x_10, x_17, x_18, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 0);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_20);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
else
{
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_2);
lean_dec(x_2);
x_18 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___redArg(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_2);
lean_dec(x_2);
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps_spec__0(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg___lam__0), 10, 5);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
lean_closure_set(x_12, 3, x_5);
lean_closure_set(x_12, 4, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___redArg(x_2, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkpointDefEq(x_1, x_2, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
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
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_4);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_4);
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
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("funBinderTypes", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_28; lean_object* x_29; lean_object* x_30; uint8_t x_63; 
x_20 = lean_ctor_get(x_8, 1);
x_21 = lean_ctor_get(x_8, 2);
x_63 = lean_nat_dec_lt(x_10, x_20);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_64 = lean_box(x_9);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_12);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_19);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; uint8_t x_71; uint8_t x_72; 
x_67 = lean_box(x_4);
x_68 = lean_array_get(x_67, x_5, x_10);
x_69 = lean_unbox(x_68);
lean_dec(x_68);
x_70 = lean_box(1);
x_71 = lean_unbox(x_70);
x_72 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_69, x_71);
if (x_72 == 0)
{
x_28 = x_72;
x_29 = x_12;
x_30 = x_19;
goto block_62;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_inc(x_1);
x_73 = lean_array_get(x_1, x_3, x_10);
lean_inc(x_73);
x_74 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_73, x_16, x_19);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_unbox(x_75);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; 
lean_dec(x_73);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_22 = x_9;
x_23 = x_12;
x_24 = x_77;
goto block_27;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_dec(x_74);
lean_inc(x_6);
x_79 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0___boxed), 11, 2);
lean_closure_set(x_79, 0, x_6);
lean_closure_set(x_79, 1, x_73);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_11);
x_80 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg(x_79, x_7, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_78);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = lean_unbox(x_83);
lean_dec(x_83);
x_28 = x_85;
x_29 = x_84;
x_30 = x_82;
goto block_62;
}
else
{
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
return x_80;
}
}
}
}
block_27:
{
lean_object* x_25; 
x_25 = lean_nat_add(x_10, x_21);
lean_dec(x_10);
x_9 = x_22;
x_10 = x_25;
x_12 = x_23;
x_19 = x_24;
goto _start;
}
block_62:
{
if (x_28 == 0)
{
x_22 = x_9;
x_23 = x_29;
x_24 = x_30;
goto block_27;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_11);
lean_dec(x_6);
x_31 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1;
lean_inc(x_13);
x_32 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_31, x_13, x_14, x_15, x_16, x_17, x_18, x_30);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_32, 1);
x_35 = lean_ctor_get(x_32, 0);
lean_dec(x_35);
lean_inc(x_1);
x_36 = lean_array_get(x_1, x_2, x_10);
x_37 = lean_array_get(x_1, x_3, x_10);
lean_dec(x_10);
x_38 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_36, x_37, x_13, x_14, x_15, x_16, x_17, x_18, x_34);
lean_dec(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_box(x_28);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 0, x_41);
lean_ctor_set(x_38, 0, x_32);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_box(x_28);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 0, x_43);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_free_object(x_32);
lean_dec(x_29);
x_45 = !lean_is_exclusive(x_38);
if (x_45 == 0)
{
return x_38;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_38, 0);
x_47 = lean_ctor_get(x_38, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_38);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_32, 1);
lean_inc(x_49);
lean_dec(x_32);
lean_inc(x_1);
x_50 = lean_array_get(x_1, x_2, x_10);
x_51 = lean_array_get(x_1, x_3, x_10);
lean_dec(x_10);
x_52 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_50, x_51, x_13, x_14, x_15, x_16, x_17, x_18, x_49);
lean_dec(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = lean_box(x_28);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_29);
if (lean_is_scalar(x_54)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_54;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_29);
x_58 = lean_ctor_get(x_52, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_60 = x_52;
} else {
 lean_dec_ref(x_52);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 1);
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = l_Lean_SubExpr_Pos_push(x_16, x_2);
lean_dec(x_16);
lean_ctor_set(x_14, 1, x_18);
lean_ctor_set(x_14, 0, x_1);
x_19 = lean_apply_9(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_dec(x_14);
x_21 = l_Lean_SubExpr_Pos_push(x_20, x_2);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_6, 0, x_22);
x_23 = lean_apply_9(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_23;
}
}
else
{
lean_object* x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_6, 0);
x_25 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_26 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_27 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_28 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
lean_inc(x_24);
lean_dec(x_6);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_30 = x_24;
} else {
 lean_dec_ref(x_24);
 x_30 = lean_box(0);
}
x_31 = l_Lean_SubExpr_Pos_push(x_29, x_2);
lean_dec(x_29);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_25);
lean_ctor_set_uint8(x_33, sizeof(void*)*1 + 1, x_26);
lean_ctor_set_uint8(x_33, sizeof(void*)*1 + 2, x_27);
lean_ctor_set_uint8(x_33, sizeof(void*)*1 + 3, x_28);
x_34 = lean_apply_9(x_3, x_4, x_5, x_33, x_7, x_8, x_9, x_10, x_11, x_12);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_6, x_2, x_3, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg___lam__0), 11, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_6);
lean_closure_set(x_15, 2, x_7);
lean_closure_set(x_15, 3, x_8);
lean_closure_set(x_15, 4, x_9);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(x_1, x_2, x_3, x_15, x_5, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
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
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_14 = lean_apply_10(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_Lean_Expr_bindingBody_x21(x_2);
x_20 = lean_expr_instantiate1(x_19, x_4);
lean_dec(x_4);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_apply_1(x_3, x_17);
x_23 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2___redArg(x_20, x_21, x_22, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
lean_inc(x_6);
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_5, x_6, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0___boxed), 13, 3);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_3);
x_19 = l_Lean_Expr_binderInfo(x_16);
x_20 = l_Lean_Expr_bindingDomain_x21(x_16);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_unbox(x_21);
x_23 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg(x_1, x_19, x_20, x_18, x_22, x_4, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0___boxed), 11, 1);
lean_closure_set(x_12, 0, x_2);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1___boxed), 10, 0);
x_14 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg(x_1, x_13, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_inc(x_8);
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_7, x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_18 = x_15;
} else {
 lean_dec_ref(x_15);
 x_18 = lean_box(0);
}
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_21 = x_16;
} else {
 lean_dec_ref(x_16);
 x_21 = lean_box(0);
}
if (lean_obj_tag(x_19) == 6)
{
lean_dec(x_19);
if (lean_obj_tag(x_5) == 7)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; lean_object* x_38; 
lean_dec(x_21);
lean_dec(x_18);
x_27 = lean_ctor_get(x_5, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_5, 2);
lean_inc(x_28);
lean_dec(x_5);
x_29 = lean_box(0);
x_30 = l_Lean_instInhabitedExpr;
x_31 = lean_box(0);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_unsigned_to_nat(1u);
lean_inc(x_4);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_4);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_unbox(x_29);
x_36 = lean_unbox(x_31);
x_37 = lean_unbox(x_31);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
x_38 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg(x_30, x_1, x_2, x_35, x_3, x_27, x_36, x_34, x_37, x_32, x_6, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_17);
lean_dec(x_34);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_box(0);
x_44 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core), 14, 5);
lean_closure_set(x_44, 0, x_1);
lean_closure_set(x_44, 1, x_2);
lean_closure_set(x_44, 2, x_3);
lean_closure_set(x_44, 3, x_4);
lean_closure_set(x_44, 4, x_28);
x_45 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg(x_43, x_44, x_6, x_42, x_8, x_9, x_10, x_11, x_12, x_13, x_40);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; uint8_t x_57; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_51 = x_46;
} else {
 lean_dec_ref(x_46);
 x_51 = lean_box(0);
}
x_57 = lean_unbox(x_41);
if (x_57 == 0)
{
uint8_t x_58; 
lean_dec(x_41);
x_58 = lean_unbox(x_49);
lean_dec(x_49);
x_52 = x_58;
goto block_56;
}
else
{
uint8_t x_59; 
lean_dec(x_49);
x_59 = lean_unbox(x_41);
lean_dec(x_41);
x_52 = x_59;
goto block_56;
}
block_56:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_box(x_52);
if (lean_is_scalar(x_51)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_51;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
if (lean_is_scalar(x_48)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_48;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_47);
return x_55;
}
}
else
{
lean_dec(x_41);
return x_45;
}
}
else
{
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_38;
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = x_17;
goto block_26;
}
}
else
{
lean_dec(x_19);
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
lean_dec(x_1);
x_22 = x_17;
goto block_26;
}
block_26:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_box(0);
if (lean_is_scalar(x_21)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_21;
}
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
if (lean_is_scalar(x_18)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_18;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___redArg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__0(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_20 = lean_unbox(x_4);
lean_dec(x_4);
x_21 = lean_unbox(x_7);
lean_dec(x_7);
x_22 = lean_unbox(x_9);
lean_dec(x_9);
x_23 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg(x_1, x_2, x_3, x_20, x_5, x_6, x_21, x_8, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___boxed(lean_object** _args) {
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
uint8_t x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_unbox(x_4);
lean_dec(x_4);
x_23 = lean_unbox(x_7);
lean_dec(x_7);
x_24 = lean_unbox(x_9);
lean_dec(x_9);
x_25 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1(x_1, x_2, x_3, x_22, x_5, x_6, x_23, x_8, x_24, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___redArg(x_1, x_15, x_3, x_4, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__3(x_1, x_2, x_16, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2___redArg___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___redArg(x_2, x_3, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_inc(x_5);
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_4, x_5, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_inc(x_5);
x_17 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___redArg(x_16, x_5, x_14);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
x_24 = lean_ctor_get(x_5, 0);
lean_dec(x_24);
x_25 = l_Lean_instInhabitedExpr;
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_27 = l_Lean_Expr_getAppNumArgs(x_15);
lean_inc(x_27);
x_28 = lean_mk_array(x_27, x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_27, x_29);
lean_dec(x_27);
x_31 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_15, x_28, x_30);
x_32 = lean_array_get_size(x_31);
x_33 = l_Lean_SubExpr_Pos_pushNaryArg(x_32, x_1, x_22);
lean_dec(x_22);
lean_dec(x_32);
x_34 = lean_array_get(x_25, x_31, x_1);
lean_dec(x_31);
lean_ctor_set(x_18, 1, x_33);
lean_ctor_set(x_18, 0, x_34);
lean_ctor_set(x_5, 0, x_18);
x_35 = lean_apply_9(x_2, x_3, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
x_38 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_39 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 1);
x_40 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 2);
x_41 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 3);
lean_dec(x_5);
x_42 = l_Lean_instInhabitedExpr;
x_43 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_44 = l_Lean_Expr_getAppNumArgs(x_15);
lean_inc(x_44);
x_45 = lean_mk_array(x_44, x_43);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_sub(x_44, x_46);
lean_dec(x_44);
x_48 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_15, x_45, x_47);
x_49 = lean_array_get_size(x_48);
x_50 = l_Lean_SubExpr_Pos_pushNaryArg(x_49, x_1, x_36);
lean_dec(x_36);
lean_dec(x_49);
x_51 = lean_array_get(x_42, x_48, x_1);
lean_dec(x_48);
lean_ctor_set(x_18, 1, x_50);
lean_ctor_set(x_18, 0, x_51);
x_52 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_52, 0, x_18);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_38);
lean_ctor_set_uint8(x_52, sizeof(void*)*1 + 1, x_39);
lean_ctor_set_uint8(x_52, sizeof(void*)*1 + 2, x_40);
lean_ctor_set_uint8(x_52, sizeof(void*)*1 + 3, x_41);
x_53 = lean_apply_9(x_2, x_3, x_37, x_52, x_6, x_7, x_8, x_9, x_10, x_19);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_54 = lean_ctor_get(x_18, 0);
x_55 = lean_ctor_get(x_18, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_18);
x_56 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_57 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 1);
x_58 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 2);
x_59 = lean_ctor_get_uint8(x_5, sizeof(void*)*1 + 3);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_60 = x_5;
} else {
 lean_dec_ref(x_5);
 x_60 = lean_box(0);
}
x_61 = l_Lean_instInhabitedExpr;
x_62 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_63 = l_Lean_Expr_getAppNumArgs(x_15);
lean_inc(x_63);
x_64 = lean_mk_array(x_63, x_62);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_sub(x_63, x_65);
lean_dec(x_63);
x_67 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_15, x_64, x_66);
x_68 = lean_array_get_size(x_67);
x_69 = l_Lean_SubExpr_Pos_pushNaryArg(x_68, x_1, x_54);
lean_dec(x_54);
lean_dec(x_68);
x_70 = lean_array_get(x_61, x_67, x_1);
lean_dec(x_67);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
if (lean_is_scalar(x_60)) {
 x_72 = lean_alloc_ctor(0, 1, 4);
} else {
 x_72 = x_60;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set_uint8(x_72, sizeof(void*)*1, x_56);
lean_ctor_set_uint8(x_72, sizeof(void*)*1 + 1, x_57);
lean_ctor_set_uint8(x_72, sizeof(void*)*1 + 2, x_58);
lean_ctor_set_uint8(x_72, sizeof(void*)*1 + 3, x_59);
x_73 = lean_apply_9(x_2, x_3, x_55, x_72, x_6, x_7, x_8, x_9, x_10, x_19);
return x_73;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_26; 
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_6, 2);
x_26 = lean_nat_dec_lt(x_8, x_18);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_10);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; 
lean_dec(x_7);
x_29 = lean_box(x_1);
x_30 = lean_array_get(x_29, x_2, x_8);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = lean_box(0);
x_33 = lean_unbox(x_32);
x_34 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_31, x_33);
if (x_34 == 0)
{
lean_inc(x_3);
x_20 = x_3;
x_21 = x_10;
x_22 = x_17;
goto block_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = l_Lean_instInhabitedExpr;
x_36 = lean_array_get(x_35, x_4, x_8);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_37 = lean_infer_type(x_36, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_5);
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core), 14, 5);
lean_closure_set(x_40, 0, x_5);
lean_closure_set(x_40, 1, x_4);
lean_closure_set(x_40, 2, x_2);
lean_closure_set(x_40, 3, x_8);
lean_closure_set(x_40, 4, x_38);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_41 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_8, x_40, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_43);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_46;
x_22 = x_45;
goto block_25;
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_dec(x_42);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 2);
x_51 = lean_array_set(x_50, x_8, x_43);
lean_ctor_set(x_47, 2, x_51);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_47;
x_22 = x_48;
goto block_25;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
x_54 = lean_ctor_get(x_47, 2);
x_55 = lean_ctor_get(x_47, 3);
x_56 = lean_ctor_get(x_47, 4);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_57 = lean_array_set(x_54, x_8, x_43);
x_58 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_57);
lean_ctor_set(x_58, 3, x_55);
lean_ctor_set(x_58, 4, x_56);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_58;
x_22 = x_48;
goto block_25;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_41);
if (x_59 == 0)
{
return x_41;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_41, 0);
x_61 = lean_ctor_get(x_41, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_41);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_37);
if (x_63 == 0)
{
return x_37;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_37, 0);
x_65 = lean_ctor_get(x_37, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_37);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
block_25:
{
lean_object* x_23; 
x_23 = lean_nat_add(x_8, x_19);
lean_dec(x_8);
x_7 = x_20;
x_8 = x_23;
x_10 = x_21;
x_17 = x_22;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_26; 
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_6, 2);
x_26 = lean_nat_dec_lt(x_8, x_18);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_10);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; 
lean_dec(x_7);
x_29 = lean_box(x_1);
x_30 = lean_array_get(x_29, x_2, x_8);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = lean_box(0);
x_33 = lean_unbox(x_32);
x_34 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_31, x_33);
if (x_34 == 0)
{
lean_inc(x_3);
x_20 = x_3;
x_21 = x_10;
x_22 = x_17;
goto block_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = l_Lean_instInhabitedExpr;
x_36 = lean_array_get(x_35, x_4, x_8);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_37 = lean_infer_type(x_36, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_5);
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core), 14, 5);
lean_closure_set(x_40, 0, x_5);
lean_closure_set(x_40, 1, x_4);
lean_closure_set(x_40, 2, x_2);
lean_closure_set(x_40, 3, x_8);
lean_closure_set(x_40, 4, x_38);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_41 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_8, x_40, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_43);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_46;
x_22 = x_45;
goto block_25;
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_dec(x_42);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 2);
x_51 = lean_array_set(x_50, x_8, x_43);
lean_ctor_set(x_47, 2, x_51);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_47;
x_22 = x_48;
goto block_25;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
x_54 = lean_ctor_get(x_47, 2);
x_55 = lean_ctor_get(x_47, 3);
x_56 = lean_ctor_get(x_47, 4);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_57 = lean_array_set(x_54, x_8, x_43);
x_58 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_57);
lean_ctor_set(x_58, 3, x_55);
lean_ctor_set(x_58, 4, x_56);
lean_inc(x_3);
x_20 = x_3;
x_21 = x_58;
x_22 = x_48;
goto block_25;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_41);
if (x_59 == 0)
{
return x_41;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_41, 0);
x_61 = lean_ctor_get(x_41, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_41);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_37);
if (x_63 == 0)
{
return x_37;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_37, 0);
x_65 = lean_ctor_get(x_37, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_37);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
block_25:
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_nat_add(x_8, x_19);
lean_dec(x_8);
x_24 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_20, x_23, x_9, x_21, x_11, x_12, x_13, x_14, x_15, x_16, x_22);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
x_13 = lean_box(0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_get_size(x_10);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_box(0);
x_19 = lean_unbox(x_13);
x_20 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg(x_19, x_12, x_18, x_11, x_10, x_17, x_18, x_14, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 0);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_20);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
else
{
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_1);
lean_dec(x_1);
x_19 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___redArg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_6);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_1);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2_spec__2(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_6);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_1);
lean_dec(x_1);
x_19 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___redArg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_6);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_1);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__2(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_6);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 1);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_infer_type(x_10, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_22; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
x_22 = l_Lean_Expr_isForall(x_13);
if (x_22 == 0)
{
lean_dec(x_13);
x_16 = x_22;
goto block_21;
}
else
{
uint8_t x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; 
x_23 = l_Lean_Expr_bindingInfo_x21(x_13);
lean_dec(x_13);
x_24 = lean_box(1);
x_25 = lean_unbox(x_24);
x_26 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_23, x_25);
x_16 = x_26;
goto block_21;
}
block_21:
{
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_box(0);
if (lean_is_scalar(x_15)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_15;
}
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
x_19 = l_Lean_getPPAnalysisBlockImplicit___closed__1;
x_20 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_19, x_1, x_2, x_3, x_4, x_5, x_6, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_20;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_12);
if (x_27 == 0)
{
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_12, 0);
x_29 = lean_ctor_get(x_12, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_7);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___redArg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_instMonadEIO(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1), 7, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0;
x_10 = l_ReaderT_instMonad___redArg(x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 2);
x_17 = lean_ctor_get(x_12, 3);
x_18 = lean_ctor_get(x_12, 4);
x_19 = lean_ctor_get(x_12, 1);
lean_dec(x_19);
x_20 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_21 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
lean_inc(x_15);
x_22 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_22, 0, x_15);
x_23 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_23, 0, x_15);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_25, 0, x_18);
x_26 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_26, 0, x_17);
x_27 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_27, 0, x_16);
lean_ctor_set(x_12, 4, x_25);
lean_ctor_set(x_12, 3, x_26);
lean_ctor_set(x_12, 2, x_27);
lean_ctor_set(x_12, 1, x_20);
lean_ctor_set(x_12, 0, x_24);
lean_ctor_set(x_10, 1, x_21);
x_28 = l_ReaderT_instMonad___redArg(x_10);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 2);
x_35 = lean_ctor_get(x_30, 3);
x_36 = lean_ctor_get(x_30, 4);
x_37 = lean_ctor_get(x_30, 1);
lean_dec(x_37);
x_38 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_39 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_33);
x_40 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_40, 0, x_33);
x_41 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_41, 0, x_33);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_43, 0, x_36);
x_44 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_44, 0, x_35);
x_45 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_45, 0, x_34);
lean_ctor_set(x_30, 4, x_43);
lean_ctor_set(x_30, 3, x_44);
lean_ctor_set(x_30, 2, x_45);
lean_ctor_set(x_30, 1, x_38);
lean_ctor_set(x_30, 0, x_42);
lean_ctor_set(x_28, 1, x_39);
x_46 = l_ReaderT_instMonad___redArg(x_28);
x_47 = lean_box(0);
x_48 = l_instInhabitedOfMonad___redArg(x_46, x_47);
x_49 = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_49, 0, x_48);
x_50 = lean_panic_fn(x_49, x_1);
x_51 = lean_apply_7(x_50, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_52 = lean_ctor_get(x_30, 0);
x_53 = lean_ctor_get(x_30, 2);
x_54 = lean_ctor_get(x_30, 3);
x_55 = lean_ctor_get(x_30, 4);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_30);
x_56 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_57 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_52);
x_58 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_58, 0, x_52);
x_59 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_59, 0, x_52);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_61, 0, x_55);
x_62 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_62, 0, x_54);
x_63 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_63, 0, x_53);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_60);
lean_ctor_set(x_64, 1, x_56);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 3, x_62);
lean_ctor_set(x_64, 4, x_61);
lean_ctor_set(x_28, 1, x_57);
lean_ctor_set(x_28, 0, x_64);
x_65 = l_ReaderT_instMonad___redArg(x_28);
x_66 = lean_box(0);
x_67 = l_instInhabitedOfMonad___redArg(x_65, x_66);
x_68 = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_68, 0, x_67);
x_69 = lean_panic_fn(x_68, x_1);
x_70 = lean_apply_7(x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_71 = lean_ctor_get(x_28, 0);
lean_inc(x_71);
lean_dec(x_28);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_71, 3);
lean_inc(x_74);
x_75 = lean_ctor_get(x_71, 4);
lean_inc(x_75);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 lean_ctor_release(x_71, 2);
 lean_ctor_release(x_71, 3);
 lean_ctor_release(x_71, 4);
 x_76 = x_71;
} else {
 lean_dec_ref(x_71);
 x_76 = lean_box(0);
}
x_77 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_78 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_72);
x_79 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_79, 0, x_72);
x_80 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_80, 0, x_72);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_82, 0, x_75);
x_83 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_83, 0, x_74);
x_84 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_84, 0, x_73);
if (lean_is_scalar(x_76)) {
 x_85 = lean_alloc_ctor(0, 5, 0);
} else {
 x_85 = x_76;
}
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_85, 1, x_77);
lean_ctor_set(x_85, 2, x_84);
lean_ctor_set(x_85, 3, x_83);
lean_ctor_set(x_85, 4, x_82);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_78);
x_87 = l_ReaderT_instMonad___redArg(x_86);
x_88 = lean_box(0);
x_89 = l_instInhabitedOfMonad___redArg(x_87, x_88);
x_90 = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_90, 0, x_89);
x_91 = lean_panic_fn(x_90, x_1);
x_92 = lean_apply_7(x_91, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_93 = lean_ctor_get(x_12, 0);
x_94 = lean_ctor_get(x_12, 2);
x_95 = lean_ctor_get(x_12, 3);
x_96 = lean_ctor_get(x_12, 4);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_12);
x_97 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_98 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
lean_inc(x_93);
x_99 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_99, 0, x_93);
x_100 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_100, 0, x_93);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_102, 0, x_96);
x_103 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_103, 0, x_95);
x_104 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_104, 0, x_94);
x_105 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_105, 0, x_101);
lean_ctor_set(x_105, 1, x_97);
lean_ctor_set(x_105, 2, x_104);
lean_ctor_set(x_105, 3, x_103);
lean_ctor_set(x_105, 4, x_102);
lean_ctor_set(x_10, 1, x_98);
lean_ctor_set(x_10, 0, x_105);
x_106 = l_ReaderT_instMonad___redArg(x_10);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_108 = x_106;
} else {
 lean_dec_ref(x_106);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_107, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_107, 3);
lean_inc(x_111);
x_112 = lean_ctor_get(x_107, 4);
lean_inc(x_112);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 lean_ctor_release(x_107, 2);
 lean_ctor_release(x_107, 3);
 lean_ctor_release(x_107, 4);
 x_113 = x_107;
} else {
 lean_dec_ref(x_107);
 x_113 = lean_box(0);
}
x_114 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_115 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_109);
x_116 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_116, 0, x_109);
x_117 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_117, 0, x_109);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_119, 0, x_112);
x_120 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_120, 0, x_111);
x_121 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_121, 0, x_110);
if (lean_is_scalar(x_113)) {
 x_122 = lean_alloc_ctor(0, 5, 0);
} else {
 x_122 = x_113;
}
lean_ctor_set(x_122, 0, x_118);
lean_ctor_set(x_122, 1, x_114);
lean_ctor_set(x_122, 2, x_121);
lean_ctor_set(x_122, 3, x_120);
lean_ctor_set(x_122, 4, x_119);
if (lean_is_scalar(x_108)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_108;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_115);
x_124 = l_ReaderT_instMonad___redArg(x_123);
x_125 = lean_box(0);
x_126 = l_instInhabitedOfMonad___redArg(x_124, x_125);
x_127 = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_127, 0, x_126);
x_128 = lean_panic_fn(x_127, x_1);
x_129 = lean_apply_7(x_128, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_130 = lean_ctor_get(x_10, 0);
lean_inc(x_130);
lean_dec(x_10);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 2);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 3);
lean_inc(x_133);
x_134 = lean_ctor_get(x_130, 4);
lean_inc(x_134);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 lean_ctor_release(x_130, 2);
 lean_ctor_release(x_130, 3);
 lean_ctor_release(x_130, 4);
 x_135 = x_130;
} else {
 lean_dec_ref(x_130);
 x_135 = lean_box(0);
}
x_136 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_137 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
lean_inc(x_131);
x_138 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_138, 0, x_131);
x_139 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_139, 0, x_131);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_141, 0, x_134);
x_142 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_142, 0, x_133);
x_143 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_143, 0, x_132);
if (lean_is_scalar(x_135)) {
 x_144 = lean_alloc_ctor(0, 5, 0);
} else {
 x_144 = x_135;
}
lean_ctor_set(x_144, 0, x_140);
lean_ctor_set(x_144, 1, x_136);
lean_ctor_set(x_144, 2, x_143);
lean_ctor_set(x_144, 3, x_142);
lean_ctor_set(x_144, 4, x_141);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_137);
x_146 = l_ReaderT_instMonad___redArg(x_145);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_148 = x_146;
} else {
 lean_dec_ref(x_146);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_147, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_147, 3);
lean_inc(x_151);
x_152 = lean_ctor_get(x_147, 4);
lean_inc(x_152);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 lean_ctor_release(x_147, 2);
 lean_ctor_release(x_147, 3);
 lean_ctor_release(x_147, 4);
 x_153 = x_147;
} else {
 lean_dec_ref(x_147);
 x_153 = lean_box(0);
}
x_154 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_155 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_149);
x_156 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_156, 0, x_149);
x_157 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_157, 0, x_149);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_159, 0, x_152);
x_160 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_160, 0, x_151);
x_161 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_161, 0, x_150);
if (lean_is_scalar(x_153)) {
 x_162 = lean_alloc_ctor(0, 5, 0);
} else {
 x_162 = x_153;
}
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_154);
lean_ctor_set(x_162, 2, x_161);
lean_ctor_set(x_162, 3, x_160);
lean_ctor_set(x_162, 4, x_159);
if (lean_is_scalar(x_148)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_148;
}
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_155);
x_164 = l_ReaderT_instMonad___redArg(x_163);
x_165 = lean_box(0);
x_166 = l_instInhabitedOfMonad___redArg(x_164, x_165);
x_167 = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(x_167, 0, x_166);
x_168 = lean_panic_fn(x_167, x_1);
x_169 = lean_apply_7(x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_169;
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("universes", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_containsBadMax___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.TopDownAnalyze", 45, 45);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.TopDownAnalyze.analyze.analyzeConst", 66, 66);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(41u);
x_3 = lean_unsigned_to_nat(441u);
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4;
x_5 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 4)
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 1);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_List_isEmpty___redArg(x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_5, 2);
lean_inc(x_21);
x_22 = l_Lean_getPPAnalyzeOmitMax(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_dec(x_19);
x_11 = x_22;
goto block_17;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2;
x_24 = l_List_any___redArg(x_19, x_23);
x_11 = x_24;
goto block_17;
}
}
else
{
lean_object* x_25; 
lean_dec(x_19);
x_25 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_2);
return x_25;
}
}
else
{
lean_object* x_26; 
lean_dec(x_9);
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_2);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_9);
x_27 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6;
x_28 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0(x_27, x_1, x_2, x_3, x_4, x_5, x_6, x_10);
return x_28;
}
block_17:
{
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1;
lean_inc(x_1);
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_10);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_14);
lean_dec(x_2);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_1, x_2, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_2);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_getPPAnalysisNamedArg___closed__1;
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_2, 4);
x_16 = lean_box(0);
x_17 = lean_array_push(x_15, x_1);
lean_ctor_set(x_2, 4, x_17);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_2);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_2, 0);
x_20 = lean_ctor_get(x_2, 1);
x_21 = lean_ctor_get(x_2, 2);
x_22 = lean_ctor_get(x_2, 3);
x_23 = lean_ctor_get(x_2, 4);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_2);
x_24 = lean_box(0);
x_25 = lean_array_push(x_23, x_1);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 3, x_22);
lean_ctor_set(x_26, 4, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_dec(x_11);
x_29 = lean_ctor_get(x_2, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_2, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_2, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_2, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 4);
lean_inc(x_33);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 x_34 = x_2;
} else {
 lean_dec_ref(x_2);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
x_36 = lean_array_push(x_33, x_1);
if (lean_is_scalar(x_34)) {
 x_37 = lean_alloc_ctor(0, 5, 0);
} else {
 x_37 = x_34;
}
lean_ctor_set(x_37, 0, x_29);
lean_ctor_set(x_37, 1, x_30);
lean_ctor_set(x_37, 2, x_31);
lean_ctor_set(x_37, 3, x_32);
lean_ctor_set(x_37, 4, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Expr_hasMVar(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_st_ref_get(x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_instantiateMVarsCore(x_11, x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = lean_st_ref_take(x_3, x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
lean_ctor_set(x_16, 0, x_14);
x_20 = lean_st_ref_set(x_3, x_16, x_17);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_12, 1, x_2);
lean_ctor_set(x_20, 0, x_12);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
lean_ctor_set(x_12, 1, x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_12);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_16, 1);
x_26 = lean_ctor_get(x_16, 2);
x_27 = lean_ctor_get(x_16, 3);
x_28 = lean_ctor_get(x_16, 4);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_29 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_29, 0, x_14);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_27);
lean_ctor_set(x_29, 4, x_28);
x_30 = lean_st_ref_set(x_3, x_29, x_17);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
lean_ctor_set(x_12, 1, x_2);
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
x_36 = lean_st_ref_take(x_3, x_10);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 2);
lean_inc(x_40);
x_41 = lean_ctor_get(x_37, 3);
lean_inc(x_41);
x_42 = lean_ctor_get(x_37, 4);
lean_inc(x_42);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 lean_ctor_release(x_37, 4);
 x_43 = x_37;
} else {
 lean_dec_ref(x_37);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 5, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 2, x_40);
lean_ctor_set(x_44, 3, x_41);
lean_ctor_set(x_44, 4, x_42);
x_45 = lean_st_ref_set(x_3, x_44, x_38);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_34);
lean_ctor_set(x_48, 1, x_2);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg(x_1, x_3, x_7, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_2);
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_2, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_2);
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool_spec__0___redArg(x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_2, 0);
lean_dec(x_17);
x_18 = l_Lean_Expr_getAppNumArgs(x_10);
x_19 = l_Lean_SubExpr_Pos_pushNaryFn(x_18, x_15);
lean_dec(x_15);
lean_dec(x_18);
x_20 = l_Lean_Expr_getAppFn(x_10);
lean_dec(x_10);
lean_ctor_set(x_12, 1, x_19);
lean_ctor_set(x_12, 0, x_20);
lean_ctor_set(x_2, 0, x_12);
x_21 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
x_25 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 1);
x_26 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
x_27 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 3);
lean_dec(x_2);
x_28 = l_Lean_Expr_getAppNumArgs(x_10);
x_29 = l_Lean_SubExpr_Pos_pushNaryFn(x_28, x_22);
lean_dec(x_22);
lean_dec(x_28);
x_30 = l_Lean_Expr_getAppFn(x_10);
lean_dec(x_10);
lean_ctor_set(x_12, 1, x_29);
lean_ctor_set(x_12, 0, x_30);
x_31 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_31, 0, x_12);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_24);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 1, x_25);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 2, x_26);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 3, x_27);
x_32 = lean_apply_7(x_1, x_31, x_3, x_4, x_5, x_6, x_7, x_23);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_12);
x_35 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
x_36 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 1);
x_37 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
x_38 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 3);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_39 = x_2;
} else {
 lean_dec_ref(x_2);
 x_39 = lean_box(0);
}
x_40 = l_Lean_Expr_getAppNumArgs(x_10);
x_41 = l_Lean_SubExpr_Pos_pushNaryFn(x_40, x_33);
lean_dec(x_33);
lean_dec(x_40);
x_42 = l_Lean_Expr_getAppFn(x_10);
lean_dec(x_10);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
if (lean_is_scalar(x_39)) {
 x_44 = lean_alloc_ctor(0, 1, 4);
} else {
 x_44 = x_39;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set_uint8(x_44, sizeof(void*)*1, x_35);
lean_ctor_set_uint8(x_44, sizeof(void*)*1 + 1, x_36);
lean_ctor_set_uint8(x_44, sizeof(void*)*1 + 2, x_37);
lean_ctor_set_uint8(x_44, sizeof(void*)*1 + 3, x_38);
x_45 = lean_apply_7(x_1, x_44, x_3, x_4, x_5, x_6, x_7, x_34);
return x_45;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_dec(x_1);
x_13 = l_Lean_Expr_isApp(x_10);
lean_dec(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_14 = l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg(x_11, x_2, x_6, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_19 = x_15;
} else {
 lean_dec_ref(x_15);
 x_19 = lean_box(0);
}
x_20 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_hasLevelMVarAtCurrDepth___redArg(x_17, x_6, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_box(1);
if (x_12 == 0)
{
uint8_t x_40; 
x_40 = lean_unbox(x_21);
lean_dec(x_21);
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = lean_unbox(x_23);
x_24 = x_41;
goto block_39;
}
else
{
x_24 = x_12;
goto block_39;
}
}
else
{
uint8_t x_42; 
lean_dec(x_21);
x_42 = lean_unbox(x_23);
x_24 = x_42;
goto block_39;
}
block_39:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_25, 0, x_23);
x_26 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryFn___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__1), 9, 2);
lean_closure_set(x_26, 0, lean_box(0));
lean_closure_set(x_26, 1, x_25);
x_27 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_13, x_24, x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
if (lean_is_scalar(x_19)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_19;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_18);
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
if (lean_is_scalar(x_19)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_19;
}
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_18);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_19);
lean_dec(x_18);
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
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_2);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_9);
return x_45;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = l_Lean_SubExpr_Pos_push(x_14, x_2);
lean_dec(x_14);
lean_ctor_set(x_12, 1, x_16);
lean_ctor_set(x_12, 0, x_1);
x_17 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Lean_SubExpr_Pos_push(x_18, x_2);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_4, 0, x_20);
x_21 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_24 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 1);
x_25 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 2);
x_26 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 3);
lean_inc(x_22);
lean_dec(x_4);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_28 = x_22;
} else {
 lean_dec_ref(x_22);
 x_28 = lean_box(0);
}
x_29 = l_Lean_SubExpr_Pos_push(x_27, x_2);
lean_dec(x_27);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 1, x_24);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 2, x_25);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 3, x_26);
x_32 = lean_apply_7(x_3, x_31, x_5, x_6, x_7, x_8, x_9, x_10);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_2, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = lean_infer_type(x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_13, x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Delaborator.topDownAnalyze", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("false", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_132; lean_object* x_133; 
x_132 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0;
x_133 = l_Lean_Core_checkSystem(x_132, x_6, x_7, x_8);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_135 = x_133;
} else {
 lean_dec_ref(x_133);
 x_135 = lean_box(0);
}
x_136 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_137 = l_Lean_isTracingEnabledFor___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__0___redArg(x_136, x_6, x_134);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_unbox(x_138);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; 
lean_dec(x_135);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
x_113 = x_2;
x_114 = x_3;
x_115 = x_4;
x_116 = x_5;
x_117 = x_6;
x_118 = x_7;
x_119 = x_140;
goto block_131;
}
else
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_155; 
x_141 = lean_ctor_get(x_137, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_142 = x_137;
} else {
 lean_dec_ref(x_137);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
x_144 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 1);
x_145 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
if (x_143 == 0)
{
lean_object* x_164; 
x_164 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3;
x_155 = x_164;
goto block_163;
}
else
{
lean_object* x_165; 
x_165 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4;
x_155 = x_165;
goto block_163;
}
block_154:
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_148 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = l_Lean_MessageData_ofFormat(x_148);
if (lean_is_scalar(x_142)) {
 x_150 = lean_alloc_ctor(7, 2, 0);
} else {
 x_150 = x_142;
 lean_ctor_set_tag(x_150, 7);
}
lean_ctor_set(x_150, 0, x_146);
lean_ctor_set(x_150, 1, x_149);
if (lean_is_scalar(x_135)) {
 x_151 = lean_alloc_ctor(7, 2, 0);
} else {
 x_151 = x_135;
 lean_ctor_set_tag(x_151, 7);
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_145);
x_152 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg(x_136, x_151, x_4, x_5, x_6, x_7, x_141);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
x_113 = x_2;
x_114 = x_3;
x_115 = x_4;
x_116 = x_5;
x_117 = x_6;
x_118 = x_7;
x_119 = x_153;
goto block_131;
}
block_163:
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_156 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = l_Lean_MessageData_ofFormat(x_156);
x_158 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_158, 0, x_145);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2;
x_160 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
if (x_144 == 0)
{
lean_object* x_161; 
x_161 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3;
x_146 = x_160;
x_147 = x_161;
goto block_154;
}
else
{
lean_object* x_162; 
x_162 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4;
x_146 = x_160;
x_147 = x_162;
goto block_154;
}
}
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_133;
}
block_12:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
block_76:
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 3, x_1);
lean_inc(x_16);
x_21 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_16, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
switch (lean_obj_tag(x_22)) {
case 1:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_16, x_13, x_18, x_14, x_17, x_15, x_23);
lean_dec(x_13);
return x_24;
}
case 3:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___redArg(x_25);
return x_26;
}
case 4:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_dec(x_21);
x_28 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst(x_16, x_13, x_18, x_14, x_17, x_15, x_27);
return x_28;
}
case 5:
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_22);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_dec(x_21);
x_30 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp(x_16, x_13, x_18, x_14, x_17, x_15, x_29);
return x_30;
}
case 6:
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_22);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_dec(x_21);
x_32 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam(x_16, x_13, x_18, x_14, x_17, x_15, x_31);
return x_32;
}
case 7:
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_dec(x_21);
x_34 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzePi(x_16, x_13, x_18, x_14, x_17, x_15, x_33);
return x_34;
}
case 8:
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_dec(x_21);
x_36 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet(x_16, x_13, x_18, x_14, x_17, x_15, x_35);
return x_36;
}
case 10:
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_22);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_dec(x_21);
x_38 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData(x_16, x_13, x_18, x_14, x_17, x_15, x_37);
return x_38;
}
case 11:
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_22);
x_39 = lean_ctor_get(x_21, 1);
lean_inc(x_39);
lean_dec(x_21);
x_40 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj(x_16, x_13, x_18, x_14, x_17, x_15, x_39);
return x_40;
}
default: 
{
uint8_t x_41; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_41 = !lean_is_exclusive(x_21);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_21, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_21, 0, x_43);
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 1);
lean_inc(x_44);
lean_dec(x_21);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
}
else
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_48 = lean_ctor_get_uint8(x_16, sizeof(void*)*1 + 1);
x_49 = lean_ctor_get_uint8(x_16, sizeof(void*)*1 + 2);
x_50 = lean_ctor_get(x_16, 0);
lean_inc(x_50);
lean_dec(x_16);
x_51 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_47);
lean_ctor_set_uint8(x_51, sizeof(void*)*1 + 1, x_48);
lean_ctor_set_uint8(x_51, sizeof(void*)*1 + 2, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*1 + 3, x_1);
lean_inc(x_51);
x_52 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_51, x_19);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
switch (lean_obj_tag(x_53)) {
case 1:
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit(x_51, x_13, x_18, x_14, x_17, x_15, x_54);
lean_dec(x_13);
return x_55;
}
case 3:
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeSort___redArg(x_56);
return x_57;
}
case 4:
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_53);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_dec(x_52);
x_59 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst(x_51, x_13, x_18, x_14, x_17, x_15, x_58);
return x_59;
}
case 5:
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_53);
x_60 = lean_ctor_get(x_52, 1);
lean_inc(x_60);
lean_dec(x_52);
x_61 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp(x_51, x_13, x_18, x_14, x_17, x_15, x_60);
return x_61;
}
case 6:
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_53);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_dec(x_52);
x_63 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam(x_51, x_13, x_18, x_14, x_17, x_15, x_62);
return x_63;
}
case 7:
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_53);
x_64 = lean_ctor_get(x_52, 1);
lean_inc(x_64);
lean_dec(x_52);
x_65 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzePi(x_51, x_13, x_18, x_14, x_17, x_15, x_64);
return x_65;
}
case 8:
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_53);
x_66 = lean_ctor_get(x_52, 1);
lean_inc(x_66);
lean_dec(x_52);
x_67 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet(x_51, x_13, x_18, x_14, x_17, x_15, x_66);
return x_67;
}
case 10:
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_53);
x_68 = lean_ctor_get(x_52, 1);
lean_inc(x_68);
lean_dec(x_52);
x_69 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData(x_51, x_13, x_18, x_14, x_17, x_15, x_68);
return x_69;
}
case 11:
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_53);
x_70 = lean_ctor_get(x_52, 1);
lean_inc(x_70);
lean_dec(x_52);
x_71 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj(x_51, x_13, x_18, x_14, x_17, x_15, x_70);
return x_71;
}
default: 
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_72 = lean_ctor_get(x_52, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_73 = x_52;
} else {
 lean_dec_ref(x_52);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
}
}
block_101:
{
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
lean_dec(x_85);
if (x_86 == 0)
{
lean_object* x_87; 
lean_dec(x_77);
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_dec(x_84);
x_13 = x_78;
x_14 = x_79;
x_15 = x_81;
x_16 = x_80;
x_17 = x_82;
x_18 = x_83;
x_19 = x_87;
goto block_76;
}
else
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_84, 1);
lean_inc(x_88);
lean_dec(x_84);
x_89 = l_Lean_getPPProofsWithType(x_77);
lean_dec(x_77);
if (x_89 == 0)
{
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
x_9 = x_88;
goto block_12;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_box(0);
x_91 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_91, 0, x_90);
x_92 = lean_box(x_89);
x_93 = lean_box(x_89);
x_94 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_94, 0, lean_box(0));
lean_closure_set(x_94, 1, x_92);
lean_closure_set(x_94, 2, x_93);
lean_closure_set(x_94, 3, x_91);
x_95 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(x_94, x_80, x_78, x_83, x_79, x_82, x_81, x_88);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_9 = x_96;
goto block_12;
}
else
{
return x_95;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
x_97 = !lean_is_exclusive(x_84);
if (x_97 == 0)
{
return x_84;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_84, 0);
x_99 = lean_ctor_get(x_84, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_84);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
block_112:
{
if (x_111 == 0)
{
lean_dec(x_105);
lean_dec(x_102);
x_13 = x_103;
x_14 = x_104;
x_15 = x_107;
x_16 = x_106;
x_17 = x_108;
x_18 = x_110;
x_19 = x_109;
goto block_76;
}
else
{
lean_dec(x_109);
x_77 = x_102;
x_78 = x_103;
x_79 = x_104;
x_80 = x_106;
x_81 = x_107;
x_82 = x_108;
x_83 = x_110;
x_84 = x_105;
goto block_101;
}
}
block_131:
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
lean_inc(x_113);
x_120 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_113, x_119);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_117, 2);
lean_inc(x_123);
x_124 = l_Lean_Expr_isAtomic(x_121);
if (x_124 == 0)
{
uint8_t x_125; 
x_125 = l_Lean_getPPProofs(x_123);
if (x_125 == 0)
{
lean_object* x_126; 
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
x_126 = l_Lean_Meta_isProof(x_121, x_115, x_116, x_117, x_118, x_122);
if (lean_obj_tag(x_126) == 0)
{
x_77 = x_123;
x_78 = x_114;
x_79 = x_116;
x_80 = x_113;
x_81 = x_118;
x_82 = x_117;
x_83 = x_115;
x_84 = x_126;
goto block_101;
}
else
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
x_129 = l_Lean_Exception_isInterrupt(x_127);
if (x_129 == 0)
{
uint8_t x_130; 
x_130 = l_Lean_Exception_isRuntime(x_127);
lean_dec(x_127);
x_102 = x_123;
x_103 = x_114;
x_104 = x_116;
x_105 = x_126;
x_106 = x_113;
x_107 = x_118;
x_108 = x_117;
x_109 = x_128;
x_110 = x_115;
x_111 = x_130;
goto block_112;
}
else
{
lean_dec(x_127);
x_102 = x_123;
x_103 = x_114;
x_104 = x_116;
x_105 = x_126;
x_106 = x_113;
x_107 = x_118;
x_108 = x_117;
x_109 = x_128;
x_110 = x_115;
x_111 = x_129;
goto block_112;
}
}
}
else
{
lean_dec(x_123);
lean_dec(x_121);
x_13 = x_114;
x_14 = x_116;
x_15 = x_118;
x_16 = x_113;
x_17 = x_117;
x_18 = x_115;
x_19 = x_122;
goto block_76;
}
}
else
{
lean_dec(x_123);
lean_dec(x_121);
x_13 = x_114;
x_14 = x_116;
x_15 = x_118;
x_16 = x_113;
x_17 = x_117;
x_18 = x_115;
x_19 = x_122;
goto block_76;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___lam__0), 9, 3);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_7);
lean_closure_set(x_14, 2, x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(x_1, x_2, x_3, x_14, x_5, x_6, x_9, x_10, x_11, x_12, x_13);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0;
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
x_21 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_22 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
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
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 2);
x_36 = lean_ctor_get(x_31, 3);
x_37 = lean_ctor_get(x_31, 4);
x_38 = lean_ctor_get(x_31, 1);
lean_dec(x_38);
x_39 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_40 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
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
x_48 = l_ReaderT_instMonad___redArg(x_47);
x_49 = l_instInhabitedOfMonad___redArg(x_48, x_1);
x_50 = lean_panic_fn(x_49, x_2);
x_51 = lean_apply_7(x_50, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_52 = lean_ctor_get(x_31, 0);
x_53 = lean_ctor_get(x_31, 2);
x_54 = lean_ctor_get(x_31, 3);
x_55 = lean_ctor_get(x_31, 4);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_31);
x_56 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_57 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_52);
x_58 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_58, 0, x_52);
x_59 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_59, 0, x_52);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_61, 0, x_55);
x_62 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_62, 0, x_54);
x_63 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_63, 0, x_53);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_60);
lean_ctor_set(x_64, 1, x_56);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 3, x_62);
lean_ctor_set(x_64, 4, x_61);
lean_ctor_set(x_29, 1, x_57);
lean_ctor_set(x_29, 0, x_64);
x_65 = l_ReaderT_instMonad___redArg(x_29);
x_66 = l_ReaderT_instMonad___redArg(x_65);
x_67 = l_instInhabitedOfMonad___redArg(x_66, x_1);
x_68 = lean_panic_fn(x_67, x_2);
x_69 = lean_apply_7(x_68, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_70 = lean_ctor_get(x_29, 0);
lean_inc(x_70);
lean_dec(x_29);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_70, 4);
lean_inc(x_74);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 lean_ctor_release(x_70, 2);
 lean_ctor_release(x_70, 3);
 lean_ctor_release(x_70, 4);
 x_75 = x_70;
} else {
 lean_dec_ref(x_70);
 x_75 = lean_box(0);
}
x_76 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_77 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_71);
x_78 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_78, 0, x_71);
x_79 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_79, 0, x_71);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_81, 0, x_74);
x_82 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_82, 0, x_73);
x_83 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_83, 0, x_72);
if (lean_is_scalar(x_75)) {
 x_84 = lean_alloc_ctor(0, 5, 0);
} else {
 x_84 = x_75;
}
lean_ctor_set(x_84, 0, x_80);
lean_ctor_set(x_84, 1, x_76);
lean_ctor_set(x_84, 2, x_83);
lean_ctor_set(x_84, 3, x_82);
lean_ctor_set(x_84, 4, x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_77);
x_86 = l_ReaderT_instMonad___redArg(x_85);
x_87 = l_ReaderT_instMonad___redArg(x_86);
x_88 = l_instInhabitedOfMonad___redArg(x_87, x_1);
x_89 = lean_panic_fn(x_88, x_2);
x_90 = lean_apply_7(x_89, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_91 = lean_ctor_get(x_13, 0);
x_92 = lean_ctor_get(x_13, 2);
x_93 = lean_ctor_get(x_13, 3);
x_94 = lean_ctor_get(x_13, 4);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_13);
x_95 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_96 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
lean_inc(x_91);
x_97 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_97, 0, x_91);
x_98 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_98, 0, x_91);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_100, 0, x_94);
x_101 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_101, 0, x_93);
x_102 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_102, 0, x_92);
x_103 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_103, 0, x_99);
lean_ctor_set(x_103, 1, x_95);
lean_ctor_set(x_103, 2, x_102);
lean_ctor_set(x_103, 3, x_101);
lean_ctor_set(x_103, 4, x_100);
lean_ctor_set(x_11, 1, x_96);
lean_ctor_set(x_11, 0, x_103);
x_104 = l_ReaderT_instMonad___redArg(x_11);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_105, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 2);
lean_inc(x_108);
x_109 = lean_ctor_get(x_105, 3);
lean_inc(x_109);
x_110 = lean_ctor_get(x_105, 4);
lean_inc(x_110);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 lean_ctor_release(x_105, 2);
 lean_ctor_release(x_105, 3);
 lean_ctor_release(x_105, 4);
 x_111 = x_105;
} else {
 lean_dec_ref(x_105);
 x_111 = lean_box(0);
}
x_112 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_113 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
lean_inc(x_107);
x_114 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_114, 0, x_107);
x_115 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_115, 0, x_107);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_117, 0, x_110);
x_118 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_118, 0, x_109);
x_119 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_119, 0, x_108);
if (lean_is_scalar(x_111)) {
 x_120 = lean_alloc_ctor(0, 5, 0);
} else {
 x_120 = x_111;
}
lean_ctor_set(x_120, 0, x_116);
lean_ctor_set(x_120, 1, x_112);
lean_ctor_set(x_120, 2, x_119);
lean_ctor_set(x_120, 3, x_118);
lean_ctor_set(x_120, 4, x_117);
if (lean_is_scalar(x_106)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_106;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_113);
x_122 = l_ReaderT_instMonad___redArg(x_121);
x_123 = l_ReaderT_instMonad___redArg(x_122);
x_124 = l_instInhabitedOfMonad___redArg(x_123, x_1);
x_125 = lean_panic_fn(x_124, x_2);
x_126 = lean_apply_7(x_125, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_127 = lean_ctor_get(x_11, 0);
lean_inc(x_127);
lean_dec(x_11);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_127, 4);
lean_inc(x_131);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 x_132 = x_127;
} else {
 lean_dec_ref(x_127);
 x_132 = lean_box(0);
}
x_133 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1;
x_134 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2;
lean_inc(x_128);
x_135 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(x_135, 0, x_128);
x_136 = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_136, 0, x_128);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(x_138, 0, x_131);
x_139 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(x_139, 0, x_130);
x_140 = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(x_140, 0, x_129);
if (lean_is_scalar(x_132)) {
 x_141 = lean_alloc_ctor(0, 5, 0);
} else {
 x_141 = x_132;
}
lean_ctor_set(x_141, 0, x_137);
lean_ctor_set(x_141, 1, x_133);
lean_ctor_set(x_141, 2, x_140);
lean_ctor_set(x_141, 3, x_139);
lean_ctor_set(x_141, 4, x_138);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_134);
x_143 = l_ReaderT_instMonad___redArg(x_142);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_145 = x_143;
} else {
 lean_dec_ref(x_143);
 x_145 = lean_box(0);
}
x_146 = lean_ctor_get(x_144, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_144, 2);
lean_inc(x_147);
x_148 = lean_ctor_get(x_144, 3);
lean_inc(x_148);
x_149 = lean_ctor_get(x_144, 4);
lean_inc(x_149);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 lean_ctor_release(x_144, 2);
 lean_ctor_release(x_144, 3);
 lean_ctor_release(x_144, 4);
 x_150 = x_144;
} else {
 lean_dec_ref(x_144);
 x_150 = lean_box(0);
}
x_151 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3;
x_152 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4;
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
if (lean_is_scalar(x_145)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_145;
}
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_152);
x_161 = l_ReaderT_instMonad___redArg(x_160);
x_162 = l_ReaderT_instMonad___redArg(x_161);
x_163 = l_instInhabitedOfMonad___redArg(x_162, x_1);
x_164 = lean_panic_fn(x_163, x_2);
x_165 = lean_apply_7(x_164, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_165;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_expr_instantiate1(x_1, x_3);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_11, x_12, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr", 38, 38);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr.withLetBody", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(43u);
x_3 = lean_unsigned_to_nat(124u);
x_4 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1;
x_5 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 8)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_11, 3);
lean_inc(x_16);
x_17 = lean_ctor_get_uint8(x_11, sizeof(void*)*4 + 8);
lean_dec(x_11);
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0___boxed), 10, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_2);
x_19 = lean_box(0);
x_20 = lean_unbox(x_19);
x_21 = l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg(x_13, x_14, x_15, x_18, x_17, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
lean_dec(x_2);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2;
x_24 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_1, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr.withLetVarType", 53, 53);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(38u);
x_3 = lean_unsigned_to_nat(116u);
x_4 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0;
x_5 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 8)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_2);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1;
x_18 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr.withLetValue", 51, 51);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(38u);
x_3 = lean_unsigned_to_nat(120u);
x_4 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0;
x_5 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 8)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_2);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1;
x_18 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.TopDownAnalyze.analyze.analyzeLet", 64, 64);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(46u);
x_3 = lean_unsigned_to_nat(458u);
x_4 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0;
x_5 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 8)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = lean_unsigned_to_nat(10u);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_11, x_12, x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_29; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_29 = lean_unbox(x_15);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = l_Lean_getPPAnalysisLetVarType___closed__1;
lean_inc(x_1);
x_31 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_30, x_1, x_2, x_3, x_4, x_5, x_6, x_16);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_box(1);
lean_inc(x_15);
x_34 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_34, 0, x_15);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, x_33);
lean_closure_set(x_35, 2, x_15);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_36 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg(x_17, x_35, x_1, x_2, x_3, x_4, x_5, x_6, x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_38, 0, lean_box(0));
lean_closure_set(x_38, 1, x_33);
lean_closure_set(x_38, 2, x_33);
lean_closure_set(x_38, 3, x_34);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_39 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg(x_17, x_38, x_1, x_2, x_3, x_4, x_5, x_6, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_18 = x_1;
x_19 = x_2;
x_20 = x_3;
x_21 = x_4;
x_22 = x_5;
x_23 = x_6;
x_24 = x_40;
goto block_28;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_39;
}
}
else
{
lean_dec(x_34);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_36;
}
}
else
{
uint8_t x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_41 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_42 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 1);
x_43 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 3);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_box(0);
x_46 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_46, 0, x_45);
lean_inc_n(x_15, 2);
x_47 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_47, 0, lean_box(0));
lean_closure_set(x_47, 1, x_15);
lean_closure_set(x_47, 2, x_15);
lean_closure_set(x_47, 3, x_46);
x_48 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_41);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 1, x_42);
x_49 = lean_unbox(x_15);
lean_dec(x_15);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 2, x_49);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 3, x_43);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_50 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg(x_17, x_47, x_48, x_2, x_3, x_4, x_5, x_6, x_16);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_18 = x_1;
x_19 = x_2;
x_20 = x_3;
x_21 = x_4;
x_22 = x_5;
x_23 = x_6;
x_24 = x_51;
goto block_28;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_50;
}
}
block_28:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_box(0);
x_26 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg(x_17, x_26, x_18, x_19, x_20, x_21, x_22, x_23, x_24);
return x_27;
}
}
else
{
uint8_t x_52; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_14);
if (x_52 == 0)
{
return x_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_14, 0);
x_54 = lean_ctor_get(x_14, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_14);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_9);
x_56 = lean_ctor_get(x_8, 1);
lean_inc(x_56);
lean_dec(x_8);
x_57 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1;
x_58 = l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0(x_57, x_1, x_2, x_3, x_4, x_5, x_6, x_56);
return x_58;
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr.withMDataExpr", 52, 52);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(33u);
x_3 = lean_unsigned_to_nat(112u);
x_4 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0;
x_5 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 10)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_3, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_dec(x_18);
lean_ctor_set(x_12, 0, x_14);
x_19 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_3, 0, x_21);
x_22 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_22;
}
}
else
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_24 = lean_ctor_get_uint8(x_3, sizeof(void*)*1 + 1);
x_25 = lean_ctor_get_uint8(x_3, sizeof(void*)*1 + 2);
x_26 = lean_ctor_get_uint8(x_3, sizeof(void*)*1 + 3);
lean_dec(x_3);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_28 = x_12;
} else {
 lean_dec_ref(x_12);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_14);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_30, sizeof(void*)*1 + 1, x_24);
lean_ctor_set_uint8(x_30, sizeof(void*)*1 + 2, x_25);
lean_ctor_set_uint8(x_30, sizeof(void*)*1 + 3, x_26);
x_31 = lean_apply_7(x_2, x_30, x_4, x_5, x_6, x_7, x_8, x_13);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_11);
lean_dec(x_2);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_dec(x_10);
x_33 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1;
x_34 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_1, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg(x_8, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter.Delaborator.SubExpr.withProj", 47, 47);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5;
x_2 = lean_unsigned_to_nat(34u);
x_3 = lean_unsigned_to_nat(108u);
x_4 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0;
x_5 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_3);
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 11)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_2);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1;
x_18 = l_panic___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__1___redArg(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg(x_8, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_2, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Expr_bindingDomain_x21(x_10);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_12, x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___lam__0), 9, 3);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_6);
lean_closure_set(x_13, 2, x_7);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(x_1, x_2, x_3, x_13, x_5, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = lean_apply_8(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_bindingBody_x21(x_2);
x_16 = lean_expr_instantiate1(x_15, x_4);
lean_dec(x_4);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_apply_1(x_3, x_13);
x_19 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0_spec__0___redArg(x_16, x_17, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
lean_inc(x_4);
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_4, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0___boxed), 11, 3);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_12);
lean_closure_set(x_14, 2, x_3);
x_15 = l_Lean_Expr_binderInfo(x_12);
x_16 = l_Lean_Expr_bindingDomain_x21(x_12);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_unbox(x_17);
x_19 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg(x_1, x_15, x_16, x_14, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0___boxed), 9, 1);
lean_closure_set(x_10, 0, x_2);
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1___boxed), 8, 0);
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg(x_1, x_11, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1;
lean_inc(x_1);
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_25, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_8 = x_1;
x_9 = x_2;
x_10 = x_3;
x_11 = x_4;
x_12 = x_5;
x_13 = x_6;
x_14 = x_27;
goto block_23;
}
else
{
x_8 = x_1;
x_9 = x_2;
x_10 = x_3;
x_11 = x_4;
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
goto block_23;
}
block_23:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_box(1);
x_16 = lean_box(0);
x_17 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_17, 0, x_16);
lean_inc(x_17);
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_18, 0, lean_box(0));
lean_closure_set(x_18, 1, x_15);
lean_closure_set(x_18, 2, x_16);
lean_closure_set(x_18, 3, x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_19 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0___redArg(x_18, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg(x_21, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
return x_22;
}
else
{
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzePi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_box(1);
x_9 = lean_box(0);
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_10, 0, x_9);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_11, 0, lean_box(0));
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingDomain___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__0___redArg(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg(x_14, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_13);
return x_15;
}
else
{
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_4);
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_3, x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_12);
return x_15;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("structureInstanceTypes", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_inc(x_1);
x_34 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_7);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_box(0);
x_38 = lean_unsigned_to_nat(10u);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_39 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_35, x_37, x_38, x_1, x_2, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; uint8_t x_64; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_43 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 2);
if (x_42 == 0)
{
uint8_t x_73; 
x_73 = lean_unbox(x_40);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_74 = l_Lean_getPPAnalysisNeedsType___closed__1;
lean_inc(x_1);
x_75 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_74, x_1, x_2, x_3, x_4, x_5, x_6, x_41);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_box(1);
lean_inc(x_40);
x_78 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_78, 0, x_40);
x_79 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___boxed), 11, 4);
lean_closure_set(x_79, 0, lean_box(0));
lean_closure_set(x_79, 1, x_77);
lean_closure_set(x_79, 2, x_40);
lean_closure_set(x_79, 3, x_78);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_80 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(x_79, x_1, x_2, x_3, x_4, x_5, x_6, x_76);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = lean_unbox(x_77);
x_8 = x_82;
x_9 = x_1;
x_10 = x_2;
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_81;
goto block_33;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_80;
}
}
else
{
lean_dec(x_40);
x_64 = x_42;
goto block_72;
}
}
else
{
lean_object* x_83; uint8_t x_84; 
lean_dec(x_40);
x_83 = lean_box(0);
x_84 = lean_unbox(x_83);
x_64 = x_84;
goto block_72;
}
block_63:
{
lean_object* x_48; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_48 = l_Lean_PrettyPrinter_Delaborator_isStructureInstance(x_44, x_3, x_4, x_5, x_6, x_45);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_8 = x_42;
x_9 = x_1;
x_10 = x_2;
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_51;
goto block_33;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1;
x_54 = lean_box(x_46);
x_55 = lean_box(x_47);
x_56 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0___boxed), 10, 3);
lean_closure_set(x_56, 0, x_53);
lean_closure_set(x_56, 1, x_54);
lean_closure_set(x_56, 2, x_55);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_57 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_spec__0___redArg(x_56, x_1, x_2, x_3, x_4, x_5, x_6, x_52);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_8 = x_47;
x_9 = x_1;
x_10 = x_2;
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_58;
goto block_33;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_57;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_48);
if (x_59 == 0)
{
return x_48;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_48, 0);
x_61 = lean_ctor_get(x_48, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_48);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
block_72:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_inc(x_1);
x_65 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_1, x_41);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_box(1);
if (x_42 == 0)
{
uint8_t x_69; 
x_69 = lean_unbox(x_68);
x_44 = x_66;
x_45 = x_67;
x_46 = x_64;
x_47 = x_69;
goto block_63;
}
else
{
if (x_64 == 0)
{
if (x_43 == 0)
{
lean_dec(x_66);
x_8 = x_42;
x_9 = x_1;
x_10 = x_2;
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_67;
goto block_33;
}
else
{
uint8_t x_70; 
x_70 = lean_unbox(x_68);
x_44 = x_66;
x_45 = x_67;
x_46 = x_64;
x_47 = x_70;
goto block_63;
}
}
else
{
uint8_t x_71; 
x_71 = lean_unbox(x_68);
x_44 = x_66;
x_45 = x_67;
x_46 = x_64;
x_47 = x_71;
goto block_63;
}
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_39);
if (x_85 == 0)
{
return x_39;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_39, 0);
x_87 = lean_ctor_get(x_39, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_39);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
block_33:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
lean_inc(x_9);
x_16 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_9, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_9);
x_19 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_9, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(1);
x_23 = l_Lean_Expr_getAppFn(x_17);
lean_dec(x_17);
x_24 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0;
x_25 = l_Lean_Expr_getAppNumArgs(x_20);
lean_inc(x_25);
x_26 = lean_mk_array(x_25, x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_25, x_27);
lean_dec(x_25);
x_29 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_20, x_26, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged), 9, 2);
lean_closure_set(x_30, 0, x_23);
lean_closure_set(x_30, 1, x_29);
x_31 = lean_unbox(x_22);
x_32 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_8, x_31, x_30, x_9, x_10, x_11, x_12, x_13, x_14, x_21);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_canBottomUp(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_19; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
x_19 = lean_unbox(x_13);
lean_dec(x_13);
if (x_19 == 0)
{
if (x_4 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
goto block_18;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
x_20 = l_Lean_getPPAnalysisNoDot___closed__1;
x_21 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_21;
}
}
else
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
goto block_18;
}
block_18:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
if (lean_is_scalar(x_15)) {
 x_17 = lean_alloc_ctor(0, 2, 0);
} else {
 x_17 = x_15;
}
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Subtype", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mk", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1;
x_2 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = lean_infer_type(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars(x_11, x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_get_size(x_2);
x_17 = lean_box(0);
x_18 = lean_unbox(x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
lean_inc(x_14);
x_19 = l_Lean_Meta_forallMetaBoundedTelescope(x_14, x_16, x_18, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_27 = lean_array_get_size(x_23);
lean_inc(x_27);
x_28 = l_Array_extract___redArg(x_2, x_27, x_16);
x_29 = l_Array_shrink___redArg(x_2, x_27);
lean_dec(x_27);
if (x_26 == 0)
{
lean_dec(x_25);
x_100 = x_3;
x_101 = x_4;
x_102 = x_5;
x_103 = x_6;
x_104 = x_7;
x_105 = x_8;
x_106 = x_22;
goto block_136;
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_inc(x_1);
x_137 = l_Lean_mkAppN(x_1, x_29);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_138 = lean_infer_type(x_137, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_141 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_139, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_140);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; 
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
x_100 = x_3;
x_101 = x_4;
x_102 = x_5;
x_103 = x_6;
x_104 = x_7;
x_105 = x_8;
x_106 = x_142;
goto block_136;
}
else
{
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_141;
}
}
else
{
uint8_t x_143; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_143 = !lean_is_exclusive(x_138);
if (x_143 == 0)
{
return x_138;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_138, 0);
x_145 = lean_ctor_get(x_138, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_138);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
block_67:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_29);
lean_inc(x_1);
x_38 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_14);
lean_ctor_set(x_38, 2, x_29);
lean_ctor_set(x_38, 3, x_23);
lean_ctor_set(x_38, 4, x_24);
lean_ctor_set_uint8(x_38, sizeof(void*)*5, x_37);
x_39 = lean_array_get_size(x_29);
x_40 = lean_box(0);
x_41 = lean_mk_array(x_39, x_40);
x_42 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7;
lean_inc_n(x_41, 3);
x_43 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_41);
lean_ctor_set(x_43, 3, x_41);
lean_ctor_set(x_43, 4, x_42);
lean_inc(x_30);
lean_inc(x_33);
lean_inc(x_34);
lean_inc(x_32);
lean_inc(x_35);
lean_inc(x_36);
x_44 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore(x_38, x_43, x_36, x_35, x_32, x_34, x_33, x_30, x_31);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_44, 1);
x_47 = lean_ctor_get(x_44, 0);
lean_dec(x_47);
x_48 = l_Array_isEmpty___redArg(x_28);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = l_Array_isEmpty___redArg(x_29);
if (x_49 == 0)
{
lean_object* x_50; 
lean_free_object(x_44);
x_50 = l_Lean_mkAppN(x_1, x_29);
lean_dec(x_29);
x_1 = x_50;
x_2 = x_28;
x_3 = x_36;
x_4 = x_35;
x_5 = x_32;
x_6 = x_34;
x_7 = x_33;
x_8 = x_30;
x_9 = x_46;
goto _start;
}
else
{
lean_object* x_52; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_52 = lean_box(0);
lean_ctor_set(x_44, 0, x_52);
return x_44;
}
}
else
{
lean_object* x_53; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_53 = lean_box(0);
lean_ctor_set(x_44, 0, x_53);
return x_44;
}
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
lean_dec(x_44);
x_55 = l_Array_isEmpty___redArg(x_28);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = l_Array_isEmpty___redArg(x_29);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = l_Lean_mkAppN(x_1, x_29);
lean_dec(x_29);
x_1 = x_57;
x_2 = x_28;
x_3 = x_36;
x_4 = x_35;
x_5 = x_32;
x_6 = x_34;
x_7 = x_33;
x_8 = x_30;
x_9 = x_54;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_54);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_54);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_44);
if (x_63 == 0)
{
return x_44;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_44, 0);
x_65 = lean_ctor_get(x_44, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_44);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
block_82:
{
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = l_Lean_getPPAnalyzeTrustSubtypeMk(x_73);
lean_dec(x_73);
if (x_78 == 0)
{
lean_dec(x_76);
x_30 = x_68;
x_31 = x_69;
x_32 = x_70;
x_33 = x_71;
x_34 = x_72;
x_35 = x_75;
x_36 = x_74;
x_37 = x_78;
goto block_67;
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2;
x_80 = lean_unsigned_to_nat(4u);
x_81 = l_Lean_Expr_isAppOfArity(x_76, x_79, x_80);
lean_dec(x_76);
x_30 = x_68;
x_31 = x_69;
x_32 = x_70;
x_33 = x_71;
x_34 = x_72;
x_35 = x_75;
x_36 = x_74;
x_37 = x_81;
goto block_67;
}
}
else
{
lean_dec(x_76);
lean_dec(x_73);
x_30 = x_68;
x_31 = x_69;
x_32 = x_70;
x_33 = x_71;
x_34 = x_72;
x_35 = x_75;
x_36 = x_74;
x_37 = x_77;
goto block_67;
}
}
block_99:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
lean_inc(x_83);
x_90 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_83, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
lean_inc(x_83);
x_93 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_maybeAddBlockImplicit_spec__0___redArg(x_83, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_ctor_get(x_87, 2);
lean_inc(x_96);
x_97 = l_Lean_getPPAnalyzeTrustSubst(x_96);
if (x_97 == 0)
{
lean_dec(x_91);
x_68 = x_88;
x_69 = x_95;
x_70 = x_85;
x_71 = x_87;
x_72 = x_86;
x_73 = x_96;
x_74 = x_83;
x_75 = x_84;
x_76 = x_94;
x_77 = x_97;
goto block_82;
}
else
{
uint8_t x_98; 
x_98 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike(x_91);
lean_dec(x_91);
x_68 = x_88;
x_69 = x_95;
x_70 = x_85;
x_71 = x_87;
x_72 = x_86;
x_73 = x_96;
x_74 = x_83;
x_75 = x_84;
x_76 = x_94;
x_77 = x_98;
goto block_82;
}
}
block_136:
{
lean_object* x_107; uint8_t x_108; 
x_107 = lean_ctor_get(x_104, 2);
lean_inc(x_107);
x_108 = l_Lean_getPPFieldNotation(x_107);
if (x_108 == 0)
{
lean_dec(x_107);
x_83 = x_100;
x_84 = x_101;
x_85 = x_102;
x_86 = x_103;
x_87 = x_104;
x_88 = x_105;
x_89 = x_106;
goto block_99;
}
else
{
uint8_t x_109; lean_object* x_110; 
x_109 = l_Lean_getPPFieldNotationGeneralized(x_107);
lean_dec(x_107);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_29);
lean_inc(x_1);
x_110 = l_Lean_PrettyPrinter_Delaborator_fieldNotationCandidate_x3f(x_1, x_29, x_109, x_102, x_103, x_104, x_105, x_106);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_83 = x_100;
x_84 = x_101;
x_85 = x_102;
x_86 = x_103;
x_87 = x_104;
x_88 = x_105;
x_89 = x_112;
goto block_99;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_113 = lean_ctor_get(x_111, 0);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
lean_dec(x_110);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_array_get_size(x_29);
x_117 = lean_nat_dec_lt(x_115, x_116);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_115);
x_118 = l_Lean_getPPAnalysisNoDot___closed__1;
lean_inc(x_100);
x_119 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_118, x_100, x_101, x_102, x_103, x_104, x_105, x_114);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_83 = x_100;
x_84 = x_101;
x_85 = x_102;
x_86 = x_103;
x_87 = x_104;
x_88 = x_105;
x_89 = x_120;
goto block_99;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; uint8_t x_129; lean_object* x_130; 
x_121 = lean_box(0);
x_122 = l_Lean_instInhabitedExpr;
x_123 = lean_array_get(x_122, x_29, x_115);
lean_dec(x_115);
x_124 = lean_box(0);
x_125 = lean_unsigned_to_nat(10u);
x_126 = lean_box(x_108);
x_127 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0___boxed), 11, 4);
lean_closure_set(x_127, 0, x_123);
lean_closure_set(x_127, 1, x_124);
lean_closure_set(x_127, 2, x_125);
lean_closure_set(x_127, 3, x_126);
x_128 = lean_unbox(x_121);
x_129 = lean_unbox(x_121);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
x_130 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_128, x_129, x_127, x_100, x_101, x_102, x_103, x_104, x_105, x_114);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_83 = x_100;
x_84 = x_101;
x_85 = x_102;
x_86 = x_103;
x_87 = x_104;
x_88 = x_105;
x_89 = x_131;
goto block_99;
}
else
{
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_1);
return x_130;
}
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_110);
if (x_132 == 0)
{
return x_110;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_110, 0);
x_134 = lean_ctor_get(x_110, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_110);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_147 = !lean_is_exclusive(x_19);
if (x_147 == 0)
{
return x_19;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_19, 0);
x_149 = lean_ctor_get(x_19, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_19);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_151 = !lean_is_exclusive(x_10);
if (x_151 == 0)
{
return x_10;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_10, 0);
x_153 = lean_ctor_get(x_10, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_10);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = lean_nat_dec_lt(x_4, x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_6);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
lean_inc(x_1);
{
lean_object* _tmp_2 = x_1;
lean_object* _tmp_3 = x_23;
lean_object* _tmp_5 = x_22;
lean_object* _tmp_12 = x_21;
x_3 = _tmp_2;
x_4 = _tmp_3;
x_6 = _tmp_5;
x_13 = _tmp_12;
}
goto _start;
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectBottomUps(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_checkOutParams(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectHigherOrders(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_22 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic(x_1, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_collectTrivialBottomUps(x_1, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_box(1);
x_31 = lean_box(0);
x_32 = lean_unbox(x_30);
x_33 = lean_unbox(x_31);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_34 = l_Lean_Meta_processPostponed(x_32, x_33, x_5, x_6, x_7, x_8, x_28);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_36 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic(x_1, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn(x_1, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_1, 2);
lean_inc(x_44);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_array_get_size(x_44);
lean_dec(x_44);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_48, 2, x_47);
x_49 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_50 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg(x_49, x_48, x_49, x_45, x_1, x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_42);
lean_dec(x_48);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit(x_1, x_53, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
return x_54;
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_50;
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
lean_dec(x_1);
return x_40;
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
lean_dec(x_1);
return x_36;
}
}
else
{
uint8_t x_55; 
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_34);
if (x_55 == 0)
{
return x_34;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_34, 0);
x_57 = lean_ctor_get(x_34, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_34);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
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
lean_dec(x_1);
return x_26;
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
lean_dec(x_1);
return x_22;
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
lean_dec(x_1);
return x_18;
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
lean_dec(x_1);
return x_14;
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
lean_dec(x_1);
return x_10;
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_nameNotRoundtrippable(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
size_t x_7; size_t x_8; 
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
x_2 = x_8;
goto _start;
}
else
{
return x_6;
}
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_box(0);
x_11 = lean_unbox(x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_4);
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_hBinOpHeuristic_spec__0___redArg(x_3, x_4, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = lean_infer_type(x_14, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(3u);
x_20 = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__2_spec__2_spec__2___redArg(x_17, x_19, x_1, x_2, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_5);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_3);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_63; 
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_6, 2);
x_63 = lean_nat_dec_lt(x_8, x_18);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_1);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_7);
lean_ctor_set(x_64, 1, x_10);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_17);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_7);
x_66 = lean_ctor_get(x_10, 3);
lean_inc(x_66);
x_67 = lean_box(0);
x_68 = lean_array_get(x_67, x_66, x_8);
lean_dec(x_66);
x_69 = lean_unbox(x_68);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_70 = l_Lean_Expr_getAppNumArgs(x_4);
x_71 = lean_nat_add(x_70, x_8);
lean_dec(x_70);
x_72 = l_Lean_getPPAnalysisSkip___closed__0;
x_73 = l_Lean_getPPAnalysisHole___closed__0;
lean_inc(x_5);
x_74 = l_Lean_Name_mkStr3(x_5, x_72, x_73);
x_75 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1___boxed), 10, 1);
lean_closure_set(x_75, 0, x_74);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_76 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_71, x_75, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_71);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_45 = x_9;
x_46 = x_79;
x_47 = x_11;
x_48 = x_12;
x_49 = x_13;
x_50 = x_14;
x_51 = x_15;
x_52 = x_16;
x_53 = x_78;
goto block_62;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_1);
return x_76;
}
}
else
{
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_45 = x_9;
x_46 = x_10;
x_47 = x_11;
x_48 = x_12;
x_49 = x_13;
x_50 = x_14;
x_51 = x_15;
x_52 = x_16;
x_53 = x_17;
goto block_62;
}
}
block_25:
{
lean_object* x_23; 
x_23 = lean_nat_add(x_8, x_19);
lean_dec(x_8);
x_7 = x_20;
x_8 = x_23;
x_10 = x_21;
x_17 = x_22;
goto _start;
}
block_44:
{
if (x_35 == 0)
{
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_34;
x_22 = x_31;
goto block_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_box(0);
x_37 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_box(x_2);
x_39 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0___boxed), 12, 3);
lean_closure_set(x_39, 0, x_38);
lean_closure_set(x_39, 1, x_36);
lean_closure_set(x_39, 2, x_37);
x_40 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1___redArg(x_39, x_27, x_34, x_28, x_30, x_29, x_32, x_33, x_26, x_31);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_43;
x_22 = x_42;
goto block_25;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_1);
return x_40;
}
}
}
block_62:
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; uint8_t x_58; uint8_t x_59; 
x_54 = lean_box(0);
x_55 = lean_array_get(x_54, x_3, x_8);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
x_57 = lean_box(3);
x_58 = lean_unbox(x_57);
x_59 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_56, x_58);
if (x_59 == 0)
{
x_26 = x_52;
x_27 = x_45;
x_28 = x_47;
x_29 = x_49;
x_30 = x_48;
x_31 = x_53;
x_32 = x_50;
x_33 = x_51;
x_34 = x_46;
x_35 = x_59;
goto block_44;
}
else
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
x_61 = l_Lean_getPPInstanceTypes(x_60);
lean_dec(x_60);
x_26 = x_52;
x_27 = x_45;
x_28 = x_47;
x_29 = x_49;
x_30 = x_48;
x_31 = x_53;
x_32 = x_50;
x_33 = x_51;
x_34 = x_46;
x_35 = x_61;
goto block_44;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_63; 
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_6, 2);
x_63 = lean_nat_dec_lt(x_8, x_18);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_7);
lean_ctor_set(x_64, 1, x_10);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_17);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_7);
x_66 = lean_ctor_get(x_10, 3);
lean_inc(x_66);
x_67 = lean_box(0);
x_68 = lean_array_get(x_67, x_66, x_8);
lean_dec(x_66);
x_69 = lean_unbox(x_68);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_70 = l_Lean_Expr_getAppNumArgs(x_4);
x_71 = lean_nat_add(x_70, x_8);
lean_dec(x_70);
x_72 = l_Lean_getPPAnalysisSkip___closed__0;
x_73 = l_Lean_getPPAnalysisHole___closed__0;
lean_inc(x_5);
x_74 = l_Lean_Name_mkStr3(x_5, x_72, x_73);
x_75 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1___boxed), 10, 1);
lean_closure_set(x_75, 0, x_74);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_76 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_71, x_75, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_71);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_45 = x_9;
x_46 = x_79;
x_47 = x_11;
x_48 = x_12;
x_49 = x_13;
x_50 = x_14;
x_51 = x_15;
x_52 = x_16;
x_53 = x_78;
goto block_62;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
return x_76;
}
}
else
{
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_45 = x_9;
x_46 = x_10;
x_47 = x_11;
x_48 = x_12;
x_49 = x_13;
x_50 = x_14;
x_51 = x_15;
x_52 = x_16;
x_53 = x_17;
goto block_62;
}
}
block_25:
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_nat_add(x_8, x_19);
x_24 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_20, x_23, x_9, x_21, x_11, x_12, x_13, x_14, x_15, x_16, x_22);
return x_24;
}
block_44:
{
if (x_35 == 0)
{
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_26;
x_22 = x_33;
goto block_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_box(0);
x_37 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_37, 0, x_36);
x_38 = lean_box(x_2);
x_39 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0___boxed), 12, 3);
lean_closure_set(x_39, 0, x_38);
lean_closure_set(x_39, 1, x_36);
lean_closure_set(x_39, 2, x_37);
x_40 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__1___redArg(x_39, x_32, x_26, x_34, x_29, x_31, x_28, x_30, x_27, x_33);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_43;
x_22 = x_42;
goto block_25;
}
else
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
return x_40;
}
}
}
block_62:
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; uint8_t x_58; uint8_t x_59; 
x_54 = lean_box(0);
x_55 = lean_array_get(x_54, x_3, x_8);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
x_57 = lean_box(3);
x_58 = lean_unbox(x_57);
x_59 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_56, x_58);
if (x_59 == 0)
{
x_26 = x_46;
x_27 = x_52;
x_28 = x_50;
x_29 = x_48;
x_30 = x_51;
x_31 = x_49;
x_32 = x_45;
x_33 = x_53;
x_34 = x_47;
x_35 = x_59;
goto block_44;
}
else
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
x_61 = l_Lean_getPPInstanceTypes(x_60);
lean_dec(x_60);
x_26 = x_46;
x_27 = x_52;
x_28 = x_50;
x_29 = x_48;
x_30 = x_51;
x_31 = x_49;
x_32 = x_45;
x_33 = x_53;
x_34 = x_47;
x_35 = x_61;
goto block_44;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
return x_22;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("explicit", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0;
x_2 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_Name_mkStr2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 4);
lean_inc(x_17);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_get_size(x_17);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
goto block_13;
}
else
{
if (x_20 == 0)
{
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
goto block_13;
}
else
{
size_t x_21; size_t x_22; uint8_t x_23; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_23 = l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0(x_17, x_21, x_22);
lean_dec(x_17);
if (x_23 == 0)
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
goto block_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_25 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1;
lean_inc(x_3);
x_26 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_array_get_size(x_15);
lean_dec(x_15);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_box(0);
x_32 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg(x_31, x_23, x_16, x_14, x_24, x_30, x_31, x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_30);
lean_dec(x_14);
lean_dec(x_16);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_31);
return x_32;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_32, 0, x_38);
return x_32;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_31);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
return x_44;
}
}
else
{
return x_32;
}
}
}
}
block_13:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_7, 3);
lean_inc(x_36);
x_37 = lean_box(x_3);
x_38 = lean_array_get(x_37, x_36, x_4);
lean_dec(x_36);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_10;
x_19 = x_11;
x_20 = x_12;
x_21 = x_13;
x_22 = x_14;
goto block_35;
}
else
{
lean_object* x_40; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_40 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_typeUnknown(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; uint8_t x_53; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_53 = lean_unbox(x_41);
lean_dec(x_41);
if (x_53 == 0)
{
x_43 = x_39;
goto block_52;
}
else
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_box(0);
x_55 = lean_unbox(x_54);
x_43 = x_55;
goto block_52;
}
block_52:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_box(0);
x_45 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_45, 0, x_44);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_46 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_withKnowing___redArg(x_43, x_39, x_45, x_8, x_9, x_10, x_11, x_12, x_13, x_42);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_15 = x_7;
x_16 = x_8;
x_17 = x_9;
x_18 = x_10;
x_19 = x_11;
x_20 = x_12;
x_21 = x_13;
x_22 = x_47;
goto block_35;
}
else
{
uint8_t x_48; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_46);
if (x_48 == 0)
{
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_46, 0);
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_46);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_40);
if (x_56 == 0)
{
return x_40;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_40, 0);
x_58 = lean_ctor_get(x_40, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_40);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
block_35:
{
lean_object* x_23; 
x_23 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_tryUnify(x_1, x_2, x_16, x_17, x_18, x_19, x_20, x_21, x_22);
lean_dec(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_15);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_15);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_15);
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; uint8_t x_139; uint8_t x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_142 = lean_ctor_get_uint8(x_14, sizeof(void*)*1);
x_143 = lean_ctor_get_uint8(x_14, sizeof(void*)*1 + 1);
x_144 = lean_ctor_get_uint8(x_14, sizeof(void*)*1 + 2);
x_145 = lean_ctor_get_uint8(x_14, sizeof(void*)*1 + 3);
x_146 = lean_ctor_get(x_14, 0);
lean_inc(x_146);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_147 = x_14;
} else {
 lean_dec_ref(x_14);
 x_147 = lean_box(0);
}
if (x_144 == 0)
{
lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_230 = lean_box(x_7);
x_231 = lean_array_get(x_230, x_11, x_1);
x_232 = lean_unbox(x_231);
lean_dec(x_231);
x_148 = x_232;
goto block_229;
}
else
{
x_148 = x_144;
goto block_229;
}
block_40:
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_22, 3);
x_26 = lean_box(1);
x_27 = lean_box(0);
x_28 = lean_array_set(x_25, x_1, x_26);
lean_ctor_set(x_22, 3, x_28);
x_29 = lean_apply_10(x_2, x_27, x_12, x_22, x_21, x_15, x_16, x_17, x_18, x_19, x_23);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
x_32 = lean_ctor_get(x_22, 2);
x_33 = lean_ctor_get(x_22, 3);
x_34 = lean_ctor_get(x_22, 4);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_35 = lean_box(1);
x_36 = lean_box(0);
x_37 = lean_array_set(x_33, x_1, x_35);
x_38 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_31);
lean_ctor_set(x_38, 2, x_32);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 4, x_34);
x_39 = lean_apply_10(x_2, x_36, x_12, x_38, x_21, x_15, x_16, x_17, x_18, x_19, x_23);
return x_39;
}
}
block_50:
{
if (x_42 == 0)
{
x_21 = x_41;
x_22 = x_43;
x_23 = x_44;
goto block_40;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = l_Lean_getPPAnalysisHole___closed__1;
lean_inc(x_41);
x_46 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_45, x_41, x_15, x_16, x_17, x_18, x_19, x_44);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_apply_10(x_2, x_47, x_12, x_43, x_41, x_15, x_16, x_17, x_18, x_19, x_48);
return x_49;
}
}
block_59:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lean_getPPAnalysisSkip___closed__2;
lean_inc(x_53);
x_55 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_54, x_53, x_15, x_16, x_17, x_18, x_19, x_51);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_apply_10(x_2, x_56, x_12, x_52, x_53, x_15, x_16, x_17, x_18, x_19, x_57);
return x_58;
}
block_91:
{
if (x_3 == 0)
{
lean_object* x_64; 
x_64 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(x_4, x_16, x_17, x_18, x_19, x_63);
lean_dec(x_4);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_60);
x_67 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(x_65, x_62, x_60, x_15, x_16, x_17, x_18, x_19, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_dec(x_67);
x_71 = !lean_is_exclusive(x_69);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_69, 3);
x_73 = lean_box(0);
x_74 = lean_box(x_61);
x_75 = lean_array_set(x_72, x_1, x_74);
lean_ctor_set(x_69, 3, x_75);
x_76 = lean_apply_10(x_2, x_73, x_12, x_69, x_60, x_15, x_16, x_17, x_18, x_19, x_70);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_77 = lean_ctor_get(x_69, 0);
x_78 = lean_ctor_get(x_69, 1);
x_79 = lean_ctor_get(x_69, 2);
x_80 = lean_ctor_get(x_69, 3);
x_81 = lean_ctor_get(x_69, 4);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_69);
x_82 = lean_box(0);
x_83 = lean_box(x_61);
x_84 = lean_array_set(x_80, x_1, x_83);
x_85 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_85, 0, x_77);
lean_ctor_set(x_85, 1, x_78);
lean_ctor_set(x_85, 2, x_79);
lean_ctor_set(x_85, 3, x_84);
lean_ctor_set(x_85, 4, x_81);
x_86 = lean_apply_10(x_2, x_82, x_12, x_85, x_60, x_15, x_16, x_17, x_18, x_19, x_70);
return x_86;
}
}
else
{
uint8_t x_87; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_64);
if (x_87 == 0)
{
return x_64;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_64, 0);
x_89 = lean_ctor_get(x_64, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_64);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
lean_dec(x_4);
x_51 = x_63;
x_52 = x_62;
x_53 = x_60;
goto block_59;
}
}
block_118:
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_94);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_94, 3);
x_104 = lean_box(0);
x_105 = lean_box(x_92);
x_106 = lean_array_set(x_103, x_1, x_105);
lean_ctor_set(x_94, 3, x_106);
x_107 = lean_apply_10(x_2, x_104, x_93, x_94, x_95, x_96, x_97, x_98, x_99, x_100, x_101);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_108 = lean_ctor_get(x_94, 0);
x_109 = lean_ctor_get(x_94, 1);
x_110 = lean_ctor_get(x_94, 2);
x_111 = lean_ctor_get(x_94, 3);
x_112 = lean_ctor_get(x_94, 4);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_94);
x_113 = lean_box(0);
x_114 = lean_box(x_92);
x_115 = lean_array_set(x_111, x_1, x_114);
x_116 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_116, 0, x_108);
lean_ctor_set(x_116, 1, x_109);
lean_ctor_set(x_116, 2, x_110);
lean_ctor_set(x_116, 3, x_115);
lean_ctor_set(x_116, 4, x_112);
x_117 = lean_apply_10(x_2, x_113, x_93, x_116, x_95, x_96, x_97, x_98, x_99, x_100, x_101);
return x_117;
}
}
block_134:
{
lean_object* x_123; 
x_123 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(x_4, x_16, x_17, x_18, x_19, x_122);
lean_dec(x_4);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
lean_inc(x_119);
x_126 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(x_124, x_121, x_119, x_15, x_16, x_17, x_18, x_19, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_92 = x_120;
x_93 = x_12;
x_94 = x_129;
x_95 = x_119;
x_96 = x_15;
x_97 = x_16;
x_98 = x_17;
x_99 = x_18;
x_100 = x_19;
x_101 = x_128;
goto block_118;
}
else
{
uint8_t x_130; 
lean_dec(x_121);
lean_dec(x_119);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_2);
x_130 = !lean_is_exclusive(x_123);
if (x_130 == 0)
{
return x_123;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_123, 0);
x_132 = lean_ctor_get(x_123, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_123);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
block_141:
{
if (x_139 == 0)
{
lean_dec(x_135);
x_119 = x_136;
x_120 = x_138;
x_121 = x_13;
x_122 = x_137;
goto block_134;
}
else
{
lean_object* x_140; 
lean_dec(x_136);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_135);
lean_ctor_set(x_140, 1, x_137);
return x_140;
}
}
block_229:
{
lean_object* x_149; lean_object* x_150; 
if (lean_is_scalar(x_147)) {
 x_149 = lean_alloc_ctor(0, 1, 4);
} else {
 x_149 = x_147;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set_uint8(x_149, sizeof(void*)*1, x_142);
lean_ctor_set_uint8(x_149, sizeof(void*)*1 + 1, x_143);
lean_ctor_set_uint8(x_149, sizeof(void*)*1 + 2, x_148);
lean_ctor_set_uint8(x_149, sizeof(void*)*1 + 3, x_145);
x_150 = lean_box(x_5);
switch (lean_obj_tag(x_150)) {
case 0:
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_9);
lean_inc(x_4);
x_151 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_4, x_17, x_20);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_6);
x_154 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isFunLike(x_6, x_16, x_17, x_18, x_19, x_153);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = lean_ctor_get(x_18, 2);
lean_inc(x_157);
x_158 = l_Lean_getPPAnalyzeExplicitHoles(x_157);
lean_dec(x_157);
if (x_158 == 0)
{
lean_dec(x_155);
lean_dec(x_152);
lean_dec(x_6);
lean_dec(x_4);
x_41 = x_149;
x_42 = x_158;
x_43 = x_13;
x_44 = x_156;
goto block_50;
}
else
{
uint8_t x_159; 
x_159 = lean_unbox(x_152);
lean_dec(x_152);
if (x_159 == 0)
{
if (x_158 == 0)
{
lean_dec(x_155);
lean_dec(x_6);
lean_dec(x_4);
x_41 = x_149;
x_42 = x_158;
x_43 = x_13;
x_44 = x_156;
goto block_50;
}
else
{
if (x_148 == 0)
{
uint8_t x_160; 
x_160 = lean_unbox(x_155);
lean_dec(x_155);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_161 = lean_box(x_7);
x_162 = lean_array_get(x_161, x_8, x_1);
x_163 = lean_unbox(x_162);
lean_dec(x_162);
if (x_163 == 0)
{
lean_object* x_164; 
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
x_164 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkpointDefEq(x_4, x_6, x_16, x_17, x_18, x_19, x_156);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_unbox(x_165);
lean_dec(x_165);
x_41 = x_149;
x_42 = x_167;
x_43 = x_13;
x_44 = x_166;
goto block_50;
}
else
{
uint8_t x_168; 
lean_dec(x_149);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_168 = !lean_is_exclusive(x_164);
if (x_168 == 0)
{
return x_164;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_164, 0);
x_170 = lean_ctor_get(x_164, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_164);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_4);
x_21 = x_149;
x_22 = x_13;
x_23 = x_156;
goto block_40;
}
}
else
{
lean_dec(x_6);
lean_dec(x_4);
x_21 = x_149;
x_22 = x_13;
x_23 = x_156;
goto block_40;
}
}
else
{
lean_dec(x_155);
lean_dec(x_6);
lean_dec(x_4);
x_21 = x_149;
x_22 = x_13;
x_23 = x_156;
goto block_40;
}
}
}
else
{
lean_dec(x_155);
lean_dec(x_6);
lean_dec(x_4);
x_21 = x_149;
x_22 = x_13;
x_23 = x_156;
goto block_40;
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_152);
lean_dec(x_149);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_172 = !lean_is_exclusive(x_154);
if (x_172 == 0)
{
return x_154;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_154, 0);
x_174 = lean_ctor_get(x_154, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_154);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
case 3:
{
lean_object* x_176; uint8_t x_177; 
x_176 = lean_ctor_get(x_18, 2);
lean_inc(x_176);
x_177 = l_Lean_getPPInstances(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
lean_dec(x_176);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_178 = l_Lean_getPPAnalysisSkip___closed__2;
lean_inc(x_149);
x_179 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_178, x_149, x_15, x_16, x_17, x_18, x_19, x_20);
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_92 = x_177;
x_93 = x_12;
x_94 = x_13;
x_95 = x_149;
x_96 = x_15;
x_97 = x_16;
x_98 = x_17;
x_99 = x_18;
x_100 = x_19;
x_101 = x_180;
goto block_118;
}
else
{
uint8_t x_181; 
x_181 = l_Lean_getPPAnalyzeCheckInstances(x_176);
lean_dec(x_176);
if (x_181 == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_182 = l_Lean_getPPAnalysisSkip___closed__2;
lean_inc(x_149);
x_183 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_182, x_149, x_15, x_16, x_17, x_18, x_19, x_20);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_92 = x_181;
x_93 = x_12;
x_94 = x_13;
x_95 = x_149;
x_96 = x_15;
x_97 = x_16;
x_98 = x_17;
x_99 = x_18;
x_100 = x_19;
x_101 = x_184;
goto block_118;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_box(0);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
x_186 = l_Lean_Meta_trySynthInstance(x_9, x_185, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
if (lean_obj_tag(x_187) == 1)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
lean_dec(x_187);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
x_190 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkpointDefEq(x_189, x_6, x_16, x_17, x_18, x_19, x_188);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_unbox(x_191);
lean_dec(x_191);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; 
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
lean_dec(x_190);
x_194 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_mvarName(x_4, x_16, x_17, x_18, x_19, x_193);
lean_dec(x_4);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
lean_inc(x_149);
x_197 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_annotateNamedArg___redArg(x_195, x_13, x_149, x_15, x_16, x_17, x_18, x_19, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_92 = x_181;
x_93 = x_12;
x_94 = x_200;
x_95 = x_149;
x_96 = x_15;
x_97 = x_16;
x_98 = x_17;
x_99 = x_18;
x_100 = x_19;
x_101 = x_199;
goto block_118;
}
else
{
uint8_t x_201; 
lean_dec(x_149);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_201 = !lean_is_exclusive(x_194);
if (x_201 == 0)
{
return x_194;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_194, 0);
x_203 = lean_ctor_get(x_194, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_194);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; 
lean_dec(x_4);
x_205 = lean_ctor_get(x_190, 1);
lean_inc(x_205);
lean_dec(x_190);
x_206 = l_Lean_getPPAnalysisSkip___closed__2;
lean_inc(x_149);
x_207 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBool(x_206, x_149, x_15, x_16, x_17, x_18, x_19, x_205);
x_208 = lean_ctor_get(x_207, 1);
lean_inc(x_208);
lean_dec(x_207);
x_209 = lean_box(0);
x_210 = lean_unbox(x_209);
x_92 = x_210;
x_93 = x_12;
x_94 = x_13;
x_95 = x_149;
x_96 = x_15;
x_97 = x_16;
x_98 = x_17;
x_99 = x_18;
x_100 = x_19;
x_101 = x_208;
goto block_118;
}
}
else
{
uint8_t x_211; 
lean_dec(x_149);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_211 = !lean_is_exclusive(x_190);
if (x_211 == 0)
{
return x_190;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_190, 0);
x_213 = lean_ctor_get(x_190, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_190);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
else
{
lean_object* x_215; 
lean_dec(x_187);
lean_dec(x_6);
x_215 = lean_ctor_get(x_186, 1);
lean_inc(x_215);
lean_dec(x_186);
x_119 = x_149;
x_120 = x_181;
x_121 = x_13;
x_122 = x_215;
goto block_134;
}
}
else
{
lean_object* x_216; lean_object* x_217; uint8_t x_218; 
lean_dec(x_6);
x_216 = lean_ctor_get(x_186, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_186, 1);
lean_inc(x_217);
lean_dec(x_186);
x_218 = l_Lean_Exception_isInterrupt(x_216);
if (x_218 == 0)
{
uint8_t x_219; 
x_219 = l_Lean_Exception_isRuntime(x_216);
x_135 = x_216;
x_136 = x_149;
x_137 = x_217;
x_138 = x_181;
x_139 = x_219;
goto block_141;
}
else
{
x_135 = x_216;
x_136 = x_149;
x_137 = x_217;
x_138 = x_181;
x_139 = x_218;
goto block_141;
}
}
}
}
}
default: 
{
lean_object* x_220; lean_object* x_221; uint8_t x_222; 
lean_dec(x_150);
lean_dec(x_9);
lean_dec(x_6);
lean_inc(x_4);
x_220 = l___private_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_0__Lean_PrettyPrinter_Delaborator_TopDownAnalyze_valUnknown___redArg(x_4, x_17, x_20);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_unbox(x_221);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
lean_dec(x_221);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
lean_dec(x_220);
x_224 = lean_box(x_7);
x_225 = lean_array_get(x_224, x_10, x_1);
x_226 = lean_unbox(x_225);
lean_dec(x_225);
if (x_226 == 0)
{
lean_dec(x_4);
x_51 = x_223;
x_52 = x_13;
x_53 = x_149;
goto block_59;
}
else
{
x_60 = x_149;
x_61 = x_226;
x_62 = x_13;
x_63 = x_223;
goto block_91;
}
}
else
{
lean_object* x_227; uint8_t x_228; 
x_227 = lean_ctor_get(x_220, 1);
lean_inc(x_227);
lean_dec(x_220);
x_228 = lean_unbox(x_221);
lean_dec(x_221);
x_60 = x_149;
x_61 = x_228;
x_62 = x_13;
x_63 = x_227;
goto block_91;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 4);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 2);
lean_inc(x_18);
x_19 = l_Lean_instInhabitedExpr;
x_20 = lean_array_get(x_19, x_12, x_1);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_20);
x_21 = lean_infer_type(x_20, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_box(0);
x_25 = lean_box(0);
x_26 = lean_array_get(x_19, x_13, x_1);
lean_dec(x_13);
lean_inc(x_1);
lean_inc(x_20);
lean_inc(x_26);
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0___boxed), 14, 4);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_20);
lean_closure_set(x_27, 2, x_24);
lean_closure_set(x_27, 3, x_1);
x_28 = l_Lean_Expr_getAppNumArgs(x_11);
lean_dec(x_11);
x_29 = lean_nat_add(x_28, x_1);
lean_dec(x_28);
x_30 = lean_array_get(x_25, x_14, x_1);
lean_dec(x_14);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = lean_box(x_15);
x_33 = lean_box(x_31);
x_34 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1___boxed), 20, 11);
lean_closure_set(x_34, 0, x_1);
lean_closure_set(x_34, 1, x_27);
lean_closure_set(x_34, 2, x_32);
lean_closure_set(x_34, 3, x_26);
lean_closure_set(x_34, 4, x_33);
lean_closure_set(x_34, 5, x_20);
lean_closure_set(x_34, 6, x_24);
lean_closure_set(x_34, 7, x_18);
lean_closure_set(x_34, 8, x_22);
lean_closure_set(x_34, 9, x_17);
lean_closure_set(x_34, 10, x_16);
x_35 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withNaryArg___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_spec__0___redArg(x_29, x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
lean_dec(x_29);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_21);
if (x_36 == 0)
{
return x_21;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_21, 0);
x_38 = lean_ctor_get(x_21, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_21);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_instantiateMVars___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeFn_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___redArg(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = lean_unbox(x_7);
lean_dec(x_7);
x_17 = l_Lean_Meta_withLetDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_15, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___redArg(x_1, x_13, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = l_Lean_Meta_withLocalDecl___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1_spec__1(x_1, x_2, x_14, x_4, x_5, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1_spec__1___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLam_spec__1___redArg___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___lam__0(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___lam__0(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__0(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__0(x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___redArg(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2___boxed(lean_object** _args) {
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
_start:
{
uint8_t x_20; lean_object* x_21; 
x_20 = lean_unbox(x_2);
lean_dec(x_2);
x_21 = l_Std_Range_forIn_x27_loop___at___Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2_spec__2(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___redArg(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2___boxed(lean_object** _args) {
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
uint8_t x_22; lean_object* x_23; 
x_22 = lean_unbox(x_4);
lean_dec(x_4);
x_23 = l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit_spec__2(x_1, x_2, x_3, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__0(x_1, x_2, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1___boxed(lean_object** _args) {
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; 
x_21 = lean_unbox(x_3);
lean_dec(x_3);
x_22 = lean_unbox(x_5);
lean_dec(x_5);
x_23 = lean_unbox(x_7);
lean_dec(x_7);
x_24 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_analyzeArg___lam__1(x_1, x_2, x_21, x_4, x_22, x_6, x_23, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_24;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg___lam__0), 8, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___redArg(x_2, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_MessageData_ofExpr(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_set(x_1, x_2, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1;
x_14 = lean_st_mk_ref(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_29; lean_object* x_30; lean_object* x_38; lean_object* x_44; uint64_t x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_10, 2);
lean_inc(x_19);
x_44 = l_Lean_Elab_Term_setElabConfig(x_18);
x_45 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_44);
lean_ctor_set(x_8, 0, x_44);
lean_ctor_set_uint64(x_8, sizeof(void*)*7, x_45);
x_46 = l_Lean_getPPAnalyzeKnowsType(x_19);
lean_dec(x_19);
x_47 = l_Lean_SubExpr_mkRoot(x_2);
x_48 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 1, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 2, x_3);
lean_ctor_set_uint8(x_48, sizeof(void*)*1 + 3, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_15);
x_49 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(x_4, x_3, x_48, x_15, x_8, x_9, x_10, x_11, x_16);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_get(x_15, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_st_ref_get(x_15, x_53);
lean_dec(x_15);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
x_20 = x_56;
x_21 = x_55;
goto block_28;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; uint8_t x_91; 
lean_dec(x_15);
x_57 = lean_ctor_get(x_49, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_49, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_59 = x_49;
} else {
 lean_dec_ref(x_49);
 x_59 = lean_box(0);
}
x_91 = l_Lean_Exception_isInterrupt(x_57);
if (x_91 == 0)
{
uint8_t x_92; 
x_92 = l_Lean_Exception_isRuntime(x_57);
x_60 = x_92;
goto block_90;
}
else
{
x_60 = x_91;
goto block_90;
}
block_90:
{
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_61 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2;
x_62 = l_Lean_Name_mkStr3(x_5, x_6, x_61);
lean_inc(x_62);
x_63 = l_Lean_isTracingEnabledFor___at___Lean_Meta_processPostponed_loop_spec__0___redArg(x_62, x_10, x_58);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_57);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_67 = lean_box(0);
lean_inc(x_9);
x_68 = lean_apply_6(x_7, x_67, x_8, x_9, x_10, x_11, x_66);
x_38 = x_68;
goto block_43;
}
else
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_63);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_70 = lean_ctor_get(x_63, 1);
x_71 = lean_ctor_get(x_63, 0);
lean_dec(x_71);
x_72 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4;
x_73 = l_Lean_Exception_toMessageData(x_57);
lean_ctor_set_tag(x_63, 7);
lean_ctor_set(x_63, 1, x_73);
lean_ctor_set(x_63, 0, x_72);
x_74 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
if (lean_is_scalar(x_59)) {
 x_75 = lean_alloc_ctor(7, 2, 0);
} else {
 x_75 = x_59;
 lean_ctor_set_tag(x_75, 7);
}
lean_ctor_set(x_75, 0, x_63);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_addTrace___at___Lean_Meta_processPostponed_loop_spec__1(x_62, x_75, x_8, x_9, x_10, x_11, x_70);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_box(0);
lean_inc(x_9);
x_79 = lean_apply_6(x_7, x_78, x_8, x_9, x_10, x_11, x_77);
x_38 = x_79;
goto block_43;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_80 = lean_ctor_get(x_63, 1);
lean_inc(x_80);
lean_dec(x_63);
x_81 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4;
x_82 = l_Lean_Exception_toMessageData(x_57);
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
if (lean_is_scalar(x_59)) {
 x_85 = lean_alloc_ctor(7, 2, 0);
} else {
 x_85 = x_59;
 lean_ctor_set_tag(x_85, 7);
}
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_addTrace___at___Lean_Meta_processPostponed_loop_spec__1(x_62, x_85, x_8, x_9, x_10, x_11, x_80);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_box(0);
lean_inc(x_9);
x_89 = lean_apply_6(x_7, x_88, x_8, x_9, x_10, x_11, x_87);
x_38 = x_89;
goto block_43;
}
}
}
else
{
lean_dec(x_59);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = x_57;
x_30 = x_58;
goto block_37;
}
}
}
block_28:
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_inc(x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_20);
x_23 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(x_9, x_1, x_22, x_21);
lean_dec(x_22);
lean_dec(x_9);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_20);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
block_37:
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_box(0);
x_32 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(x_9, x_1, x_31, x_30);
lean_dec(x_9);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_29);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_29);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
block_43:
{
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_20 = x_39;
x_21 = x_40;
goto block_28;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_29 = x_41;
x_30 = x_42;
goto block_37;
}
}
}
else
{
lean_object* x_93; uint8_t x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_112; lean_object* x_113; lean_object* x_120; lean_object* x_126; uint64_t x_127; lean_object* x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_93 = lean_ctor_get(x_8, 0);
x_94 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 8);
x_95 = lean_ctor_get(x_8, 1);
x_96 = lean_ctor_get(x_8, 2);
x_97 = lean_ctor_get(x_8, 3);
x_98 = lean_ctor_get(x_8, 4);
x_99 = lean_ctor_get(x_8, 5);
x_100 = lean_ctor_get(x_8, 6);
x_101 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 9);
x_102 = lean_ctor_get_uint8(x_8, sizeof(void*)*7 + 10);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_93);
lean_dec(x_8);
x_103 = lean_ctor_get(x_10, 2);
lean_inc(x_103);
x_126 = l_Lean_Elab_Term_setElabConfig(x_93);
x_127 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_126);
x_128 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_95);
lean_ctor_set(x_128, 2, x_96);
lean_ctor_set(x_128, 3, x_97);
lean_ctor_set(x_128, 4, x_98);
lean_ctor_set(x_128, 5, x_99);
lean_ctor_set(x_128, 6, x_100);
lean_ctor_set_uint64(x_128, sizeof(void*)*7, x_127);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 8, x_94);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 9, x_101);
lean_ctor_set_uint8(x_128, sizeof(void*)*7 + 10, x_102);
x_129 = l_Lean_getPPAnalyzeKnowsType(x_103);
lean_dec(x_103);
x_130 = l_Lean_SubExpr_mkRoot(x_2);
x_131 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set_uint8(x_131, sizeof(void*)*1, x_129);
lean_ctor_set_uint8(x_131, sizeof(void*)*1 + 1, x_129);
lean_ctor_set_uint8(x_131, sizeof(void*)*1 + 2, x_3);
lean_ctor_set_uint8(x_131, sizeof(void*)*1 + 3, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_128);
lean_inc(x_15);
x_132 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(x_4, x_3, x_131, x_15, x_128, x_9, x_10, x_11, x_16);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_128);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_st_ref_get(x_15, x_133);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_st_ref_get(x_15, x_136);
lean_dec(x_15);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
lean_dec(x_137);
x_139 = lean_ctor_get(x_135, 0);
lean_inc(x_139);
lean_dec(x_135);
x_104 = x_139;
x_105 = x_138;
goto block_111;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; uint8_t x_164; 
lean_dec(x_15);
x_140 = lean_ctor_get(x_132, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_132, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_142 = x_132;
} else {
 lean_dec_ref(x_132);
 x_142 = lean_box(0);
}
x_164 = l_Lean_Exception_isInterrupt(x_140);
if (x_164 == 0)
{
uint8_t x_165; 
x_165 = l_Lean_Exception_isRuntime(x_140);
x_143 = x_165;
goto block_163;
}
else
{
x_143 = x_164;
goto block_163;
}
block_163:
{
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_144 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2;
x_145 = l_Lean_Name_mkStr3(x_5, x_6, x_144);
lean_inc(x_145);
x_146 = l_Lean_isTracingEnabledFor___at___Lean_Meta_processPostponed_loop_spec__0___redArg(x_145, x_10, x_141);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_unbox(x_147);
lean_dec(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_145);
lean_dec(x_142);
lean_dec(x_140);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_150 = lean_box(0);
lean_inc(x_9);
x_151 = lean_apply_6(x_7, x_150, x_128, x_9, x_10, x_11, x_149);
x_120 = x_151;
goto block_125;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_152 = lean_ctor_get(x_146, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_153 = x_146;
} else {
 lean_dec_ref(x_146);
 x_153 = lean_box(0);
}
x_154 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4;
x_155 = l_Lean_Exception_toMessageData(x_140);
if (lean_is_scalar(x_153)) {
 x_156 = lean_alloc_ctor(7, 2, 0);
} else {
 x_156 = x_153;
 lean_ctor_set_tag(x_156, 7);
}
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2;
if (lean_is_scalar(x_142)) {
 x_158 = lean_alloc_ctor(7, 2, 0);
} else {
 x_158 = x_142;
 lean_ctor_set_tag(x_158, 7);
}
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_Lean_addTrace___at___Lean_Meta_processPostponed_loop_spec__1(x_145, x_158, x_128, x_9, x_10, x_11, x_152);
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
lean_dec(x_159);
x_161 = lean_box(0);
lean_inc(x_9);
x_162 = lean_apply_6(x_7, x_161, x_128, x_9, x_10, x_11, x_160);
x_120 = x_162;
goto block_125;
}
}
else
{
lean_dec(x_142);
lean_dec(x_128);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_112 = x_140;
x_113 = x_141;
goto block_119;
}
}
}
block_111:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_inc(x_104);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_104);
x_107 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(x_9, x_1, x_106, x_105);
lean_dec(x_106);
lean_dec(x_9);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_109 = x_107;
} else {
 lean_dec_ref(x_107);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_104);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
block_119:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_box(0);
x_115 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(x_9, x_1, x_114, x_113);
lean_dec(x_9);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_117 = x_115;
} else {
 lean_dec_ref(x_115);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
 lean_ctor_set_tag(x_118, 1);
}
lean_ctor_set(x_118, 0, x_112);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
block_125:
{
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_104 = x_121;
x_105 = x_122;
goto block_111;
}
else
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_120, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_120, 1);
lean_inc(x_124);
lean_dec(x_120);
x_112 = x_123;
x_113 = x_124;
goto block_119;
}
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0___boxed), 7, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1___boxed), 6, 0);
x_12 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_13 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_14 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_15 = lean_box(0);
x_16 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0;
x_17 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___boxed), 12, 7);
lean_closure_set(x_17, 0, x_8);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_15);
lean_closure_set(x_17, 3, x_16);
lean_closure_set(x_17, 4, x_12);
lean_closure_set(x_17, 5, x_13);
lean_closure_set(x_17, 6, x_11);
x_18 = lean_box(1);
x_19 = l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1;
x_20 = lean_unbox(x_18);
x_21 = l_Lean_withTraceNode___at___Lean_Meta_processPostponed_spec__0___redArg(x_14, x_10, x_17, x_20, x_19, x_2, x_3, x_4, x_5, x_9);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___redArg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_withNewMCtxDepth___at___Lean_PrettyPrinter_Delaborator_topDownAnalyze_spec__0(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_2 = lean_box(0);
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PrettyPrinter", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Delaborator", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("TopDownAnalyze", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10899u);
x_2 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_3 = l_Lean_Name_num___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tryUnify", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2;
x_2 = l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_2 = l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_;
x_3 = lean_box(0);
x_4 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_5 = lean_unbox(x_3);
x_6 = l_Lean_registerTraceClass(x_2, x_5, x_4, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1;
x_9 = lean_box(1);
x_10 = lean_unbox(x_9);
x_11 = l_Lean_registerTraceClass(x_8, x_10, x_4, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_14 = lean_unbox(x_9);
x_15 = l_Lean_registerTraceClass(x_13, x_14, x_4, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_;
x_18 = lean_unbox(x_9);
x_19 = l_Lean_registerTraceClass(x_17, x_18, x_4, x_16);
return x_19;
}
else
{
return x_15;
}
}
else
{
return x_11;
}
}
else
{
return x_6;
}
}
}
lean_object* initialize_Lean_Data_RBMap(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_FindMVar(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_FindLevelMVar(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_ReplaceLevel(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Delaborator_FieldNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Delaborator_Options(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Delaborator_SubExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Config(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter_Delaborator_TopDownAnalyze(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_RBMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindMVar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindLevelMVar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ReplaceLevel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator_FieldNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator_Options(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator_SubExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Config(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_ = _init_l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_();
lean_mark_persistent(l_Lean_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_7_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_47_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_checkInstances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_checkInstances);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_87_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_typeAscriptions = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_typeAscriptions);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_127_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustSubst = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustSubst);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_167_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustOfNat = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustOfNat);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_207_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustOfScientific = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustOfScientific);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_247_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustSubtypeMk = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustSubtypeMk);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_287_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustId);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_327_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_trustKnownFOType2TypeHOFuns = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_trustKnownFOType2TypeHOFuns);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_367_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_omitMax = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_omitMax);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_407_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_knowsType = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_knowsType);
lean_dec_ref(res);
}l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_ = _init_l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_();
lean_mark_persistent(l_Lean_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_);
l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_ = _init_l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_();
lean_mark_persistent(l_Lean_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_);
l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_ = _init_l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_();
lean_mark_persistent(l_Lean_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_);
l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_ = _init_l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_();
lean_mark_persistent(l_Lean_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_);
l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_ = _init_l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_();
lean_mark_persistent(l_Lean_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_);
if (builtin) {res = l_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_447_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_analyze_explicitHoles = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_analyze_explicitHoles);
lean_dec_ref(res);
}l_Lean_getPPAnalyze___closed__0 = _init_l_Lean_getPPAnalyze___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyze___closed__0);
l_Lean_getPPAnalyzeCheckInstances___closed__0 = _init_l_Lean_getPPAnalyzeCheckInstances___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeCheckInstances___closed__0);
l_Lean_getPPAnalyzeTypeAscriptions___closed__0 = _init_l_Lean_getPPAnalyzeTypeAscriptions___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTypeAscriptions___closed__0);
l_Lean_getPPAnalyzeTrustSubst___closed__0 = _init_l_Lean_getPPAnalyzeTrustSubst___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustSubst___closed__0);
l_Lean_getPPAnalyzeTrustOfNat___closed__0 = _init_l_Lean_getPPAnalyzeTrustOfNat___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustOfNat___closed__0);
l_Lean_getPPAnalyzeTrustOfScientific___closed__0 = _init_l_Lean_getPPAnalyzeTrustOfScientific___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustOfScientific___closed__0);
l_Lean_getPPAnalyzeTrustId___closed__0 = _init_l_Lean_getPPAnalyzeTrustId___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustId___closed__0);
l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0 = _init_l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustSubtypeMk___closed__0);
l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0 = _init_l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeTrustKnownFOType2TypeHOFuns___closed__0);
l_Lean_getPPAnalyzeOmitMax___closed__0 = _init_l_Lean_getPPAnalyzeOmitMax___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeOmitMax___closed__0);
l_Lean_getPPAnalyzeKnowsType___closed__0 = _init_l_Lean_getPPAnalyzeKnowsType___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeKnowsType___closed__0);
l_Lean_getPPAnalyzeExplicitHoles___closed__0 = _init_l_Lean_getPPAnalyzeExplicitHoles___closed__0();
lean_mark_persistent(l_Lean_getPPAnalyzeExplicitHoles___closed__0);
l_Lean_getPPAnalysisSkip___closed__0 = _init_l_Lean_getPPAnalysisSkip___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisSkip___closed__0);
l_Lean_getPPAnalysisSkip___closed__1 = _init_l_Lean_getPPAnalysisSkip___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisSkip___closed__1);
l_Lean_getPPAnalysisSkip___closed__2 = _init_l_Lean_getPPAnalysisSkip___closed__2();
lean_mark_persistent(l_Lean_getPPAnalysisSkip___closed__2);
l_Lean_getPPAnalysisHole___closed__0 = _init_l_Lean_getPPAnalysisHole___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisHole___closed__0);
l_Lean_getPPAnalysisHole___closed__1 = _init_l_Lean_getPPAnalysisHole___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisHole___closed__1);
l_Lean_getPPAnalysisNamedArg___closed__0 = _init_l_Lean_getPPAnalysisNamedArg___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisNamedArg___closed__0);
l_Lean_getPPAnalysisNamedArg___closed__1 = _init_l_Lean_getPPAnalysisNamedArg___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisNamedArg___closed__1);
l_Lean_getPPAnalysisLetVarType___closed__0 = _init_l_Lean_getPPAnalysisLetVarType___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisLetVarType___closed__0);
l_Lean_getPPAnalysisLetVarType___closed__1 = _init_l_Lean_getPPAnalysisLetVarType___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisLetVarType___closed__1);
l_Lean_getPPAnalysisNeedsType___closed__0 = _init_l_Lean_getPPAnalysisNeedsType___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisNeedsType___closed__0);
l_Lean_getPPAnalysisNeedsType___closed__1 = _init_l_Lean_getPPAnalysisNeedsType___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisNeedsType___closed__1);
l_Lean_getPPAnalysisBlockImplicit___closed__0 = _init_l_Lean_getPPAnalysisBlockImplicit___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisBlockImplicit___closed__0);
l_Lean_getPPAnalysisBlockImplicit___closed__1 = _init_l_Lean_getPPAnalysisBlockImplicit___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisBlockImplicit___closed__1);
l_Lean_getPPAnalysisNoDot___closed__0 = _init_l_Lean_getPPAnalysisNoDot___closed__0();
lean_mark_persistent(l_Lean_getPPAnalysisNoDot___closed__0);
l_Lean_getPPAnalysisNoDot___closed__1 = _init_l_Lean_getPPAnalysisNoDot___closed__1();
lean_mark_persistent(l_Lean_getPPAnalysisNoDot___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__5);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__6);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__7);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__8);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__9);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__10);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__11);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__12);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__13);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__14);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__15);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__16);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__17);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__18);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__19);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__20);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__21);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__22);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__23);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__24);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__25);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__26);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__27);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__28);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__29);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__30);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__31);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__32);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__33);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__34);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__35);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__36);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__37);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__38);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__39);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__40);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__41);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__42);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__43);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__44);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__45);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__46);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__47);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__48);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__49);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__50);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__51);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__52);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__53 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__53();
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__54 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isHBinOp___closed__54();
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__5);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__6);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__7);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__8);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__9);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_replaceLPsWithVars___closed__10);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isSubstLike___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instInhabitedContext);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadReaderOfSubExprAnalyzeM);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_instMonadWithReaderOfSubExprAnalyzeM);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_inspectOutParams___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_isTrivialBottomUp___redArg___closed__5);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_ = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_ = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_);
if (builtin) {res = l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_3645_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeFailureId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeFailureId);
lean_dec_ref(res);
}l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_checkKnowsType___redArg___closed__1);
l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0 = _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__0();
l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1 = _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1();
lean_mark_persistent(l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__1);
l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2 = _init_l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2();
lean_mark_persistent(l_Lean_addTrace___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt_spec__1___redArg___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_annotateBoolAt___closed__4);
l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0 = _init_l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__0);
l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1 = _init_l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_applyFunBinderHeuristic_core_spec__1___redArg___closed__1);
l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0 = _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0();
lean_mark_persistent(l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__0);
l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1 = _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1();
lean_mark_persistent(l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__1);
l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2 = _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2();
lean_mark_persistent(l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__2);
l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3 = _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3();
lean_mark_persistent(l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__3);
l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4 = _init_l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4();
lean_mark_persistent(l_panic___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst_spec__0___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__4);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__5);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeConst___closed__6);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__3);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze___closed__4);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetBody___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__0___redArg___closed__2);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetVarType___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__3___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withLetValue___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet_spec__4___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeLet___closed__1);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withMDataExpr___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeMData_spec__0___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__0);
l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_SubExpr_withProj___at___Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeProj_spec__0___redArg___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeApp___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__1);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyze_analyzeAppStaged___closed__2);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__0);
l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_TopDownAnalyze_analyzeAppStagedCore_maybeSetExplicit___closed__1);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__0);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__1);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__2);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__3);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___lam__3___closed__4);
l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0 = _init_l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_topDownAnalyze___closed__0);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__0____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__1____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__2____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__3____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__4____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__5____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__6____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__7____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__8____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__9____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__10____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__11____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__12____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__13____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__14____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__15____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__16____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__17____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__18____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_ = _init_l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_initFn___closed__19____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_);
if (builtin) {res = l_Lean_PrettyPrinter_Delaborator_initFn____x40_Lean_PrettyPrinter_Delaborator_TopDownAnalyze___hyg_10899_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
