// Lean compiler output
// Module: Lean.PrettyPrinter
// Imports: Lean.PrettyPrinter.Delaborator Lean.PrettyPrinter.Parenthesizer Lean.PrettyPrinter.Formatter Lean.Parser.Module Lean.ParserCompiler Lean.Util.NumObjs Lean.Util.ShareCommon
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__9;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__13;
static lean_object* l_Lean_PPContext_runMetaM___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__7;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_pp_exprSizes;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__4;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__5;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__5;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__8;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__14;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__2;
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppSignature___closed__1;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3;
LEAN_EXPORT lean_object* l_Lean_PPContext_runMetaM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__19;
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6;
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2;
static lean_object* l_Lean_PrettyPrinter_ppTactic___closed__2;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__1;
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__2___boxed(lean_object*);
lean_object* l_Lean_PrettyPrinter_format(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084_(lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5;
static lean_object* l_Lean_PPContext_runMetaM___rarg___closed__3;
lean_object* lean_io_get_num_heartbeats(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_pp_expr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3;
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__1;
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg___lambda__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__22;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object*);
lean_object* l_Lean_Expr_sizeWithoutSharing(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__16;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Lean_MessageData_ofConst___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ppFnsRef;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__10;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__15;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__5;
extern lean_object* l_Lean_pp_raw;
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__10;
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4;
static lean_object* l_Lean_PrettyPrinter_ppTerm___closed__2;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__3;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__8;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__6;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__20;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__1;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_signature___lambda__1___closed__2;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__4;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3;
static lean_object* l_Lean_MessageData_signature___lambda__1___closed__1;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1(size_t, size_t, lean_object*);
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runMetaM___rarg___closed__4;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4;
static lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5;
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
extern lean_object* l_Lean_diagnostics;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__12;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1;
lean_object* lean_mk_syntax_ident(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__3;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM(lean_object*);
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__9;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9;
static lean_object* l_Lean_PrettyPrinter_ppModule___closed__2;
LEAN_EXPORT lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppTerm___closed__1;
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_run_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppModule___closed__1;
lean_object* l_Lean_sanitizeSyntax(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorFormatterAttribute;
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2;
static uint64_t l_Lean_PPContext_runMetaM___rarg___closed__2;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3;
lean_object* l_Lean_Meta_ppGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__17;
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6;
static lean_object* l_Lean_PrettyPrinter_ppTactic___closed__1;
static lean_object* l_Lean_MessageData_ofConst___closed__1;
static lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3;
static lean_object* l_Lean_MessageData_ofConst___closed__3;
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lambda__2(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_getPPMVarsLevels(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PPContext_runMetaM(lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__18;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__11;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6;
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesizeCategory(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_format(lean_object*, uint8_t);
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__21;
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppSignature___closed__2;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__3;
static lean_object* l_Lean_PPContext_runCoreM___rarg___closed__2;
static uint8_t l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4;
static lean_object* l_Lean_MessageData_ofConst___closed__4;
lean_object* l_Lean_PrettyPrinter_formatCategory(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppSignature___closed__3;
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__6;
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_numObjs(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__4;
size_t lean_array_size(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214_(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164_(lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1;
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7;
LEAN_EXPORT uint8_t l_Lean_MessageData_ofLazyM___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7;
uint8_t lean_usize_dec_lt(size_t, size_t);
static lean_object* l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
static lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4;
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2;
lean_object* lean_expr_dbg_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM___lambda__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4;
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1;
lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_PrettyPrinter_delabCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_PrettyPrinter_ppCommand___closed__1;
static lean_object* l_Lean_PrettyPrinter_ppCommand___closed__2;
static lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12;
static lean_object* l_Lean_PrettyPrinter_ppExpr___closed__1;
static lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1;
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_Profile___hyg_5____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_maxRecDepth;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_5, 4);
lean_dec(x_9);
x_10 = lean_ctor_get(x_5, 2);
lean_dec(x_10);
x_11 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_12 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_11);
lean_ctor_set(x_5, 4, x_12);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*13, x_2);
x_13 = lean_apply_3(x_3, x_5, x_6, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 3);
x_17 = lean_ctor_get(x_5, 5);
x_18 = lean_ctor_get(x_5, 6);
x_19 = lean_ctor_get(x_5, 7);
x_20 = lean_ctor_get(x_5, 8);
x_21 = lean_ctor_get(x_5, 9);
x_22 = lean_ctor_get(x_5, 10);
x_23 = lean_ctor_get(x_5, 11);
x_24 = lean_ctor_get_uint8(x_5, sizeof(void*)*13 + 1);
x_25 = lean_ctor_get(x_5, 12);
lean_inc(x_25);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_26 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_27 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_26);
x_28 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_28, 2, x_1);
lean_ctor_set(x_28, 3, x_16);
lean_ctor_set(x_28, 4, x_27);
lean_ctor_set(x_28, 5, x_17);
lean_ctor_set(x_28, 6, x_18);
lean_ctor_set(x_28, 7, x_19);
lean_ctor_set(x_28, 8, x_20);
lean_ctor_set(x_28, 9, x_21);
lean_ctor_set(x_28, 10, x_22);
lean_ctor_set(x_28, 11, x_23);
lean_ctor_set(x_28, 12, x_25);
lean_ctor_set_uint8(x_28, sizeof(void*)*13, x_2);
lean_ctor_set_uint8(x_28, sizeof(void*)*13 + 1, x_24);
x_29 = lean_apply_3(x_3, x_28, x_6, x_7);
return x_29;
}
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("internal exception #", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__3;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics;
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_firstFrontendMacroScope;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_pp_uniq", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__8;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__13() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__12;
x_3 = l_Lean_PPContext_runCoreM___rarg___closed__11;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__14() {
_start:
{
uint64_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__16;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_2 = l_Lean_NameSet_empty;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__19() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__16;
x_3 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_4 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_inheritedTraceOptions;
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_runCoreM___rarg___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<PrettyPrinter>", 15, 15);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_17; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_138; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 3);
lean_inc(x_49);
x_50 = lean_ctor_get(x_1, 4);
lean_inc(x_50);
x_51 = lean_ctor_get(x_1, 5);
lean_inc(x_51);
lean_dec(x_1);
x_52 = l_Lean_Core_getMaxHeartbeats(x_49);
x_53 = l_Lean_PPContext_runCoreM___rarg___closed__5;
x_54 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_49, x_53);
x_55 = lean_box(0);
x_56 = l_Lean_PPContext_runCoreM___rarg___closed__6;
x_57 = l_Lean_PPContext_runCoreM___rarg___closed__9;
x_58 = l_Lean_PPContext_runCoreM___rarg___closed__10;
x_59 = l_Lean_PPContext_runCoreM___rarg___closed__14;
x_60 = l_Lean_PPContext_runCoreM___rarg___closed__17;
x_61 = l_Lean_PPContext_runCoreM___rarg___closed__18;
x_62 = l_Lean_PPContext_runCoreM___rarg___closed__19;
x_63 = l_Lean_PPContext_runCoreM___rarg___closed__20;
x_64 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_64, 0, x_48);
lean_ctor_set(x_64, 1, x_56);
lean_ctor_set(x_64, 2, x_57);
lean_ctor_set(x_64, 3, x_58);
lean_ctor_set(x_64, 4, x_59);
lean_ctor_set(x_64, 5, x_60);
lean_ctor_set(x_64, 6, x_61);
lean_ctor_set(x_64, 7, x_62);
lean_ctor_set(x_64, 8, x_63);
x_65 = lean_io_get_num_heartbeats(x_3);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_st_mk_ref(x_64, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
x_83 = l_Lean_PPContext_runCoreM___rarg___closed__21;
x_84 = lean_st_ref_get(x_83, x_70);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l_Lean_PPContext_runCoreM___rarg___closed__22;
x_88 = l_Lean_PPContext_runCoreM___rarg___closed__4;
x_89 = lean_unsigned_to_nat(0u);
x_90 = lean_unsigned_to_nat(1000u);
x_91 = lean_box(0);
x_92 = l_Lean_firstFrontendMacroScope;
x_93 = 0;
lean_inc(x_49);
x_94 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_94, 0, x_87);
lean_ctor_set(x_94, 1, x_88);
lean_ctor_set(x_94, 2, x_49);
lean_ctor_set(x_94, 3, x_89);
lean_ctor_set(x_94, 4, x_90);
lean_ctor_set(x_94, 5, x_91);
lean_ctor_set(x_94, 6, x_50);
lean_ctor_set(x_94, 7, x_51);
lean_ctor_set(x_94, 8, x_66);
lean_ctor_set(x_94, 9, x_52);
lean_ctor_set(x_94, 10, x_92);
lean_ctor_set(x_94, 11, x_55);
lean_ctor_set(x_94, 12, x_85);
lean_ctor_set_uint8(x_94, sizeof(void*)*13, x_54);
lean_ctor_set_uint8(x_94, sizeof(void*)*13 + 1, x_93);
x_95 = lean_st_ref_get(x_69, x_86);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_ctor_get(x_96, 0);
lean_inc(x_98);
lean_dec(x_96);
x_138 = l_Lean_Kernel_isDiagnosticsEnabled(x_98);
lean_dec(x_98);
if (x_138 == 0)
{
if (x_54 == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_box(0);
lean_inc(x_69);
x_140 = l_Lean_PPContext_runCoreM___rarg___lambda__1(x_49, x_54, x_2, x_139, x_94, x_69, x_97);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_72 = x_141;
x_73 = x_142;
goto block_82;
}
else
{
uint8_t x_143; 
lean_dec(x_71);
lean_dec(x_69);
x_143 = !lean_is_exclusive(x_140);
if (x_143 == 0)
{
x_17 = x_140;
goto block_47;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_140, 0);
x_145 = lean_ctor_get(x_140, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_140);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
x_17 = x_146;
goto block_47;
}
}
}
else
{
lean_object* x_147; 
x_147 = lean_box(0);
x_99 = x_147;
goto block_137;
}
}
else
{
if (x_54 == 0)
{
lean_object* x_148; 
x_148 = lean_box(0);
x_99 = x_148;
goto block_137;
}
else
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_box(0);
lean_inc(x_69);
x_150 = l_Lean_PPContext_runCoreM___rarg___lambda__1(x_49, x_54, x_2, x_149, x_94, x_69, x_97);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_72 = x_151;
x_73 = x_152;
goto block_82;
}
else
{
uint8_t x_153; 
lean_dec(x_71);
lean_dec(x_69);
x_153 = !lean_is_exclusive(x_150);
if (x_153 == 0)
{
x_17 = x_150;
goto block_47;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_150, 0);
x_155 = lean_ctor_get(x_150, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_150);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_17 = x_156;
goto block_47;
}
}
}
}
block_16:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
block_47:
{
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
x_4 = x_17;
goto block_16;
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
x_4 = x_21;
goto block_16;
}
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_MessageData_toString(x_24, x_23);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_tag(x_25, 1);
lean_ctor_set(x_25, 0, x_28);
x_4 = x_25;
goto block_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_25);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_4 = x_32;
goto block_16;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_17);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_17, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_22, 0);
lean_inc(x_35);
lean_dec(x_22);
x_36 = l_Nat_reprFast(x_35);
x_37 = l_Lean_PPContext_runCoreM___rarg___closed__1;
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_17, 0, x_39);
x_4 = x_17;
goto block_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_dec(x_17);
x_41 = lean_ctor_get(x_22, 0);
lean_inc(x_41);
lean_dec(x_22);
x_42 = l_Nat_reprFast(x_41);
x_43 = l_Lean_PPContext_runCoreM___rarg___closed__1;
x_44 = lean_string_append(x_43, x_42);
lean_dec(x_42);
x_45 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_40);
x_4 = x_46;
goto block_16;
}
}
}
}
block_82:
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_st_ref_get(x_69, x_73);
lean_dec(x_69);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_74, 0);
if (lean_is_scalar(x_71)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_71;
}
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_74, 0, x_77);
x_17 = x_74;
goto block_47;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_74, 0);
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_74);
if (lean_is_scalar(x_71)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_71;
}
lean_ctor_set(x_80, 0, x_72);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_17 = x_81;
goto block_47;
}
}
block_137:
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
lean_dec(x_99);
x_100 = lean_st_ref_take(x_69, x_97);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = !lean_is_exclusive(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_104 = lean_ctor_get(x_101, 0);
x_105 = lean_ctor_get(x_101, 5);
lean_dec(x_105);
x_106 = l_Lean_Kernel_enableDiag(x_104, x_54);
lean_ctor_set(x_101, 5, x_60);
lean_ctor_set(x_101, 0, x_106);
x_107 = lean_st_ref_set(x_69, x_101, x_102);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = lean_box(0);
lean_inc(x_69);
x_110 = l_Lean_PPContext_runCoreM___rarg___lambda__1(x_49, x_54, x_2, x_109, x_94, x_69, x_108);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_72 = x_111;
x_73 = x_112;
goto block_82;
}
else
{
uint8_t x_113; 
lean_dec(x_71);
lean_dec(x_69);
x_113 = !lean_is_exclusive(x_110);
if (x_113 == 0)
{
x_17 = x_110;
goto block_47;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_110, 0);
x_115 = lean_ctor_get(x_110, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_110);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_17 = x_116;
goto block_47;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_117 = lean_ctor_get(x_101, 0);
x_118 = lean_ctor_get(x_101, 1);
x_119 = lean_ctor_get(x_101, 2);
x_120 = lean_ctor_get(x_101, 3);
x_121 = lean_ctor_get(x_101, 4);
x_122 = lean_ctor_get(x_101, 6);
x_123 = lean_ctor_get(x_101, 7);
x_124 = lean_ctor_get(x_101, 8);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_101);
x_125 = l_Lean_Kernel_enableDiag(x_117, x_54);
x_126 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_118);
lean_ctor_set(x_126, 2, x_119);
lean_ctor_set(x_126, 3, x_120);
lean_ctor_set(x_126, 4, x_121);
lean_ctor_set(x_126, 5, x_60);
lean_ctor_set(x_126, 6, x_122);
lean_ctor_set(x_126, 7, x_123);
lean_ctor_set(x_126, 8, x_124);
x_127 = lean_st_ref_set(x_69, x_126, x_102);
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
lean_dec(x_127);
x_129 = lean_box(0);
lean_inc(x_69);
x_130 = l_Lean_PPContext_runCoreM___rarg___lambda__1(x_49, x_54, x_2, x_129, x_94, x_69, x_128);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_72 = x_131;
x_73 = x_132;
goto block_82;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_71);
lean_dec(x_69);
x_133 = lean_ctor_get(x_130, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_130, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_135 = x_130;
} else {
 lean_dec_ref(x_130);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
x_17 = x_136;
goto block_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PPContext_runCoreM___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runCoreM___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_PPContext_runCoreM___rarg___lambda__1(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_9;
}
}
static lean_object* _init_l_Lean_PPContext_runMetaM___rarg___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = 0;
x_2 = 1;
x_3 = 1;
x_4 = 0;
x_5 = 2;
x_6 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_6, 0, x_1);
lean_ctor_set_uint8(x_6, 1, x_1);
lean_ctor_set_uint8(x_6, 2, x_1);
lean_ctor_set_uint8(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, 4, x_1);
lean_ctor_set_uint8(x_6, 5, x_2);
lean_ctor_set_uint8(x_6, 6, x_2);
lean_ctor_set_uint8(x_6, 7, x_1);
lean_ctor_set_uint8(x_6, 8, x_2);
lean_ctor_set_uint8(x_6, 9, x_3);
lean_ctor_set_uint8(x_6, 10, x_4);
lean_ctor_set_uint8(x_6, 11, x_2);
lean_ctor_set_uint8(x_6, 12, x_2);
lean_ctor_set_uint8(x_6, 13, x_2);
lean_ctor_set_uint8(x_6, 14, x_5);
lean_ctor_set_uint8(x_6, 15, x_2);
lean_ctor_set_uint8(x_6, 16, x_2);
lean_ctor_set_uint8(x_6, 17, x_2);
return x_6;
}
}
static uint64_t _init_l_Lean_PPContext_runMetaM___rarg___closed__2() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = l_Lean_PPContext_runMetaM___rarg___closed__1;
x_2 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runMetaM___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__16;
x_2 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
lean_ctor_set(x_2, 4, x_1);
lean_ctor_set(x_2, 5, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PPContext_runMetaM___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__16;
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_box(0);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_box(0);
x_7 = l_Lean_PPContext_runMetaM___rarg___closed__1;
x_8 = l_Lean_PPContext_runMetaM___rarg___closed__2;
x_9 = 0;
x_10 = l_Lean_PPContext_runCoreM___rarg___closed__20;
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_4);
lean_ctor_set(x_12, 2, x_5);
lean_ctor_set(x_12, 3, x_10);
lean_ctor_set(x_12, 4, x_6);
lean_ctor_set(x_12, 5, x_11);
lean_ctor_set(x_12, 6, x_6);
lean_ctor_set_uint64(x_12, sizeof(void*)*7, x_8);
lean_ctor_set_uint8(x_12, sizeof(void*)*7 + 8, x_9);
lean_ctor_set_uint8(x_12, sizeof(void*)*7 + 9, x_9);
lean_ctor_set_uint8(x_12, sizeof(void*)*7 + 10, x_9);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = l_Lean_PPContext_runMetaM___rarg___closed__3;
x_15 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_16 = l_Lean_PPContext_runMetaM___rarg___closed__4;
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_4);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_run_x27___rarg), 6, 3);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_12);
lean_closure_set(x_18, 2, x_17);
x_19 = l_Lean_PPContext_runCoreM___rarg(x_1, x_18, x_3);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_PPContext_runMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PPContext_runMetaM___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Lean_sanitizeSyntax(x_2, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Lean_PrettyPrinter_parenthesizeCategory(x_1, x_10, x_3, x_4, x_5);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_PrettyPrinter_formatCategory(x_1, x_12, x_3, x_4, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppTerm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppTerm___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_ppTerm___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_PrettyPrinter_ppTerm___closed__2;
x_6 = l_Lean_PrettyPrinter_ppCategory(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_3, 2);
lean_dec(x_9);
lean_ctor_set(x_3, 2, x_1);
x_10 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; uint64_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get_uint64(x_3, sizeof(void*)*7);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 8);
x_22 = lean_ctor_get(x_3, 1);
x_23 = lean_ctor_get(x_3, 3);
x_24 = lean_ctor_get(x_3, 4);
x_25 = lean_ctor_get(x_3, 5);
x_26 = lean_ctor_get(x_3, 6);
x_27 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 9);
x_28 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 10);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_19);
lean_dec(x_3);
x_29 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_22);
lean_ctor_set(x_29, 2, x_1);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_26);
lean_ctor_set_uint64(x_29, sizeof(void*)*7, x_20);
lean_ctor_set_uint8(x_29, sizeof(void*)*7 + 8, x_21);
lean_ctor_set_uint8(x_29, sizeof(void*)*7 + 9, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*7 + 10, x_28);
x_30 = lean_apply_5(x_2, x_29, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_37 = x_30;
} else {
 lean_dec_ref(x_30);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
x_8 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_PrettyPrinter_ppTerm(x_9, x_5, x_6, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_10);
x_12 = l_Lean_LocalContext_sanitizeNames(x_8, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppUsing___lambda__1), 7, 2);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_1);
x_15 = l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1___rarg(x_13, x_14, x_3, x_4, x_5, x_6, x_7);
return x_15;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pp", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("exprSizes", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer) prefix each embedded expression with its sizes in the format (size disregarding sharing/size with sharing/size with max sharing)", 145, 145);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 0;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1;
x_3 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("PrettyPrinter", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7;
x_3 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1;
x_4 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3;
x_3 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5;
x_4 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8;
x_5 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_Profile___hyg_5____spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_pp_exprSizes;
return x_1;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[size ", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("/", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("] ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 2);
x_9 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1;
x_10 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
lean_inc(x_1);
x_12 = l_Lean_Expr_numObjs(x_1, x_7);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_sharecommon_quick(x_1);
x_17 = l_Lean_Expr_numObjs(x_16, x_15);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_Lean_Expr_sizeWithoutSharing(x_1);
lean_dec(x_1);
x_21 = l_Nat_reprFast(x_20);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 1, x_22);
lean_ctor_set(x_12, 0, x_23);
x_24 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5;
x_25 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_25, 0, x_12);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Nat_reprFast(x_14);
x_27 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
x_30 = l_Nat_reprFast(x_19);
x_31 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7;
x_34 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
x_36 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8;
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_17, 0, x_37);
return x_17;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_38 = lean_ctor_get(x_17, 0);
x_39 = lean_ctor_get(x_17, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_17);
x_40 = l_Lean_Expr_sizeWithoutSharing(x_1);
lean_dec(x_1);
x_41 = l_Nat_reprFast(x_40);
x_42 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 1, x_42);
lean_ctor_set(x_12, 0, x_43);
x_44 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5;
x_45 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_45, 0, x_12);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Nat_reprFast(x_14);
x_47 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_44);
x_50 = l_Nat_reprFast(x_38);
x_51 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7;
x_54 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_2);
x_56 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8;
x_57 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_39);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_59 = lean_ctor_get(x_12, 0);
x_60 = lean_ctor_get(x_12, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_12);
x_61 = lean_sharecommon_quick(x_1);
x_62 = l_Lean_Expr_numObjs(x_61, x_60);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = l_Lean_Expr_sizeWithoutSharing(x_1);
lean_dec(x_1);
x_67 = l_Nat_reprFast(x_66);
x_68 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3;
x_70 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5;
x_72 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_Nat_reprFast(x_59);
x_74 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_71);
x_77 = l_Nat_reprFast(x_63);
x_78 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_78);
x_80 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7;
x_81 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_2);
x_83 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8;
x_84 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
if (lean_is_scalar(x_65)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_65;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_64);
return x_85;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_PrettyPrinter_delab(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExpr___lambda__1), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_PrettyPrinter_ppExpr___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_PrettyPrinter_ppUsing(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(x_1, x_9, x_2, x_3, x_4, x_5, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l_Lean_PrettyPrinter_delabCore___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l_Lean_PrettyPrinter_ppTerm(x_13, x_6, x_7, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(x_1, x_16, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_10, 0, x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_10, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_10);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
x_30 = l_Lean_PrettyPrinter_ppTerm(x_28, x_6, x_7, x_11);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(x_1, x_31, x_4, x_5, x_6, x_7, x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_29);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_29);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_39 = lean_ctor_get(x_30, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_41 = x_30;
} else {
 lean_dec_ref(x_30);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_9);
if (x_43 == 0)
{
return x_9;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_9, 0);
x_45 = lean_ctor_get(x_9, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_9);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_11);
x_13 = l_Lean_LocalContext_sanitizeNames(x_9, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___lambda__1), 8, 3);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
x_16 = l_Lean_Meta_withLCtx_x27___at_Lean_PrettyPrinter_ppUsing___spec__1___rarg(x_14, x_15, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tagAppFns", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1;
x_2 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delabConst), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2;
x_2 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3;
x_3 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___rarg), 10, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 0;
lean_inc(x_1);
x_13 = l_Lean_Environment_find_x3f(x_11, x_1, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_mk_syntax_ident(x_1);
x_15 = lean_ctor_get(x_4, 2);
lean_inc(x_15);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_16);
x_18 = l_Lean_sanitizeSyntax(x_14, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_PrettyPrinter_ppTerm___closed__2;
x_21 = l_Lean_PrettyPrinter_formatCategory(x_20, x_19, x_4, x_5, x_10);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_7, 1, x_16);
lean_ctor_set(x_7, 0, x_23);
lean_ctor_set(x_21, 0, x_7);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_7, 1, x_16);
lean_ctor_set(x_7, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_free_object(x_7);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_free_object(x_7);
x_31 = lean_ctor_get(x_13, 0);
lean_inc(x_31);
lean_dec(x_13);
x_32 = l_Lean_ConstantInfo_levelParams(x_31);
lean_dec(x_31);
x_33 = lean_box(0);
x_34 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_32, x_33);
x_35 = l_Lean_Expr_const___override(x_1, x_34);
x_36 = lean_box(0);
x_37 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5;
x_38 = l_Lean_PrettyPrinter_ppExprWithInfos(x_35, x_36, x_37, x_2, x_3, x_4, x_5, x_10);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_7, 0);
x_40 = lean_ctor_get(x_7, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_7);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = 0;
lean_inc(x_1);
x_43 = l_Lean_Environment_find_x3f(x_41, x_1, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_mk_syntax_ident(x_1);
x_45 = lean_ctor_get(x_4, 2);
lean_inc(x_45);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_46);
x_48 = l_Lean_sanitizeSyntax(x_44, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_Lean_PrettyPrinter_ppTerm___closed__2;
x_51 = l_Lean_PrettyPrinter_formatCategory(x_50, x_49, x_4, x_5, x_40);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_46);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_51, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_59 = x_51;
} else {
 lean_dec_ref(x_51);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_61 = lean_ctor_get(x_43, 0);
lean_inc(x_61);
lean_dec(x_43);
x_62 = l_Lean_ConstantInfo_levelParams(x_61);
lean_dec(x_61);
x_63 = lean_box(0);
x_64 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_62, x_63);
x_65 = l_Lean_Expr_const___override(x_1, x_64);
x_66 = lean_box(0);
x_67 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5;
x_68 = l_Lean_PrettyPrinter_ppExprWithInfos(x_65, x_66, x_67, x_2, x_3, x_4, x_5, x_40);
return x_68;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_7, 4);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 2);
lean_dec(x_12);
x_13 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_14 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_13);
lean_ctor_set(x_7, 4, x_14);
lean_ctor_set(x_7, 2, x_1);
lean_ctor_set_uint8(x_7, sizeof(void*)*13, x_2);
x_15 = l_Lean_PrettyPrinter_ppExpr(x_3, x_4, x_5, x_7, x_8, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
x_18 = lean_ctor_get(x_7, 3);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
x_22 = lean_ctor_get(x_7, 8);
x_23 = lean_ctor_get(x_7, 9);
x_24 = lean_ctor_get(x_7, 10);
x_25 = lean_ctor_get(x_7, 11);
x_26 = lean_ctor_get_uint8(x_7, sizeof(void*)*13 + 1);
x_27 = lean_ctor_get(x_7, 12);
lean_inc(x_27);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_28 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_29 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_28);
x_30 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_30, 0, x_16);
lean_ctor_set(x_30, 1, x_17);
lean_ctor_set(x_30, 2, x_1);
lean_ctor_set(x_30, 3, x_18);
lean_ctor_set(x_30, 4, x_29);
lean_ctor_set(x_30, 5, x_19);
lean_ctor_set(x_30, 6, x_20);
lean_ctor_set(x_30, 7, x_21);
lean_ctor_set(x_30, 8, x_22);
lean_ctor_set(x_30, 9, x_23);
lean_ctor_set(x_30, 10, x_24);
lean_ctor_set(x_30, 11, x_25);
lean_ctor_set(x_30, 12, x_27);
lean_ctor_set_uint8(x_30, sizeof(void*)*13, x_2);
lean_ctor_set_uint8(x_30, sizeof(void*)*13 + 1, x_26);
x_31 = l_Lean_PrettyPrinter_ppExpr(x_3, x_4, x_5, x_30, x_8, x_9);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_74; 
x_13 = lean_ctor_get(x_9, 4);
lean_dec(x_13);
x_14 = lean_ctor_get(x_9, 2);
lean_dec(x_14);
x_15 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_16 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_15);
lean_ctor_set(x_9, 4, x_16);
lean_ctor_set(x_9, 2, x_1);
lean_ctor_set_uint8(x_9, sizeof(void*)*13, x_2);
x_17 = lean_st_mk_ref(x_3, x_11);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_PPContext_runCoreM___rarg___closed__5;
x_21 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_4, x_20);
x_22 = lean_st_ref_get(x_10, x_19);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_74 = l_Lean_Kernel_isDiagnosticsEnabled(x_25);
lean_dec(x_25);
if (x_74 == 0)
{
if (x_21 == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_7);
x_75 = lean_box(0);
lean_inc(x_18);
x_76 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_21, x_5, x_6, x_18, x_75, x_9, x_10, x_24);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_st_ref_get(x_18, x_78);
lean_dec(x_18);
x_80 = !lean_is_exclusive(x_79);
if (x_80 == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_79, 0);
lean_dec(x_81);
lean_ctor_set(x_79, 0, x_77);
return x_79;
}
else
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
lean_dec(x_79);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
else
{
uint8_t x_84; 
lean_dec(x_18);
x_84 = !lean_is_exclusive(x_76);
if (x_84 == 0)
{
return x_76;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_76, 0);
x_86 = lean_ctor_get(x_76, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_76);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
lean_object* x_88; 
x_88 = lean_box(0);
x_26 = x_88;
goto block_73;
}
}
else
{
if (x_21 == 0)
{
lean_object* x_89; 
x_89 = lean_box(0);
x_26 = x_89;
goto block_73;
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_7);
x_90 = lean_box(0);
lean_inc(x_18);
x_91 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_21, x_5, x_6, x_18, x_90, x_9, x_10, x_24);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_st_ref_get(x_18, x_93);
lean_dec(x_18);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_94, 0);
lean_dec(x_96);
lean_ctor_set(x_94, 0, x_92);
return x_94;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_92);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
else
{
uint8_t x_99; 
lean_dec(x_18);
x_99 = !lean_is_exclusive(x_91);
if (x_99 == 0)
{
return x_91;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_91, 0);
x_101 = lean_ctor_get(x_91, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_91);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
block_73:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_26);
x_27 = lean_st_ref_take(x_10, x_24);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_28, 0);
x_32 = lean_ctor_get(x_28, 5);
lean_dec(x_32);
x_33 = l_Lean_Kernel_enableDiag(x_31, x_21);
lean_ctor_set(x_28, 5, x_7);
lean_ctor_set(x_28, 0, x_33);
x_34 = lean_st_ref_set(x_10, x_28, x_29);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_box(0);
lean_inc(x_18);
x_37 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_21, x_5, x_6, x_18, x_36, x_9, x_10, x_35);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_st_ref_get(x_18, x_39);
lean_dec(x_18);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_38);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_18);
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_49 = lean_ctor_get(x_28, 0);
x_50 = lean_ctor_get(x_28, 1);
x_51 = lean_ctor_get(x_28, 2);
x_52 = lean_ctor_get(x_28, 3);
x_53 = lean_ctor_get(x_28, 4);
x_54 = lean_ctor_get(x_28, 6);
x_55 = lean_ctor_get(x_28, 7);
x_56 = lean_ctor_get(x_28, 8);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_28);
x_57 = l_Lean_Kernel_enableDiag(x_49, x_21);
x_58 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_50);
lean_ctor_set(x_58, 2, x_51);
lean_ctor_set(x_58, 3, x_52);
lean_ctor_set(x_58, 4, x_53);
lean_ctor_set(x_58, 5, x_7);
lean_ctor_set(x_58, 6, x_54);
lean_ctor_set(x_58, 7, x_55);
lean_ctor_set(x_58, 8, x_56);
x_59 = lean_st_ref_set(x_10, x_58, x_29);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_box(0);
lean_inc(x_18);
x_62 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_21, x_5, x_6, x_18, x_61, x_9, x_10, x_60);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_st_ref_get(x_18, x_64);
lean_dec(x_18);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_18);
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_62, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_71 = x_62;
} else {
 lean_dec_ref(x_62);
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
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_157; 
x_103 = lean_ctor_get(x_9, 0);
x_104 = lean_ctor_get(x_9, 1);
x_105 = lean_ctor_get(x_9, 3);
x_106 = lean_ctor_get(x_9, 5);
x_107 = lean_ctor_get(x_9, 6);
x_108 = lean_ctor_get(x_9, 7);
x_109 = lean_ctor_get(x_9, 8);
x_110 = lean_ctor_get(x_9, 9);
x_111 = lean_ctor_get(x_9, 10);
x_112 = lean_ctor_get(x_9, 11);
x_113 = lean_ctor_get_uint8(x_9, sizeof(void*)*13 + 1);
x_114 = lean_ctor_get(x_9, 12);
lean_inc(x_114);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_9);
x_115 = l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1;
x_116 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_115);
x_117 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_117, 0, x_103);
lean_ctor_set(x_117, 1, x_104);
lean_ctor_set(x_117, 2, x_1);
lean_ctor_set(x_117, 3, x_105);
lean_ctor_set(x_117, 4, x_116);
lean_ctor_set(x_117, 5, x_106);
lean_ctor_set(x_117, 6, x_107);
lean_ctor_set(x_117, 7, x_108);
lean_ctor_set(x_117, 8, x_109);
lean_ctor_set(x_117, 9, x_110);
lean_ctor_set(x_117, 10, x_111);
lean_ctor_set(x_117, 11, x_112);
lean_ctor_set(x_117, 12, x_114);
lean_ctor_set_uint8(x_117, sizeof(void*)*13, x_2);
lean_ctor_set_uint8(x_117, sizeof(void*)*13 + 1, x_113);
x_118 = lean_st_mk_ref(x_3, x_11);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Lean_PPContext_runCoreM___rarg___closed__5;
x_122 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_4, x_121);
x_123 = lean_st_ref_get(x_10, x_120);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
x_157 = l_Lean_Kernel_isDiagnosticsEnabled(x_126);
lean_dec(x_126);
if (x_157 == 0)
{
if (x_122 == 0)
{
lean_object* x_158; lean_object* x_159; 
lean_dec(x_7);
x_158 = lean_box(0);
lean_inc(x_119);
x_159 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_122, x_5, x_6, x_119, x_158, x_117, x_10, x_125);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = lean_st_ref_get(x_119, x_161);
lean_dec(x_119);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_164 = x_162;
} else {
 lean_dec_ref(x_162);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_119);
x_166 = lean_ctor_get(x_159, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_159, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_168 = x_159;
} else {
 lean_dec_ref(x_159);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
lean_object* x_170; 
x_170 = lean_box(0);
x_127 = x_170;
goto block_156;
}
}
else
{
if (x_122 == 0)
{
lean_object* x_171; 
x_171 = lean_box(0);
x_127 = x_171;
goto block_156;
}
else
{
lean_object* x_172; lean_object* x_173; 
lean_dec(x_7);
x_172 = lean_box(0);
lean_inc(x_119);
x_173 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_122, x_5, x_6, x_119, x_172, x_117, x_10, x_125);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_st_ref_get(x_119, x_175);
lean_dec(x_119);
x_177 = lean_ctor_get(x_176, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_178 = x_176;
} else {
 lean_dec_ref(x_176);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_174);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_119);
x_180 = lean_ctor_get(x_173, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_173, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_182 = x_173;
} else {
 lean_dec_ref(x_173);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
block_156:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_127);
x_128 = lean_st_ref_take(x_10, x_125);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_129, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_129, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_129, 3);
lean_inc(x_134);
x_135 = lean_ctor_get(x_129, 4);
lean_inc(x_135);
x_136 = lean_ctor_get(x_129, 6);
lean_inc(x_136);
x_137 = lean_ctor_get(x_129, 7);
lean_inc(x_137);
x_138 = lean_ctor_get(x_129, 8);
lean_inc(x_138);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 lean_ctor_release(x_129, 2);
 lean_ctor_release(x_129, 3);
 lean_ctor_release(x_129, 4);
 lean_ctor_release(x_129, 5);
 lean_ctor_release(x_129, 6);
 lean_ctor_release(x_129, 7);
 lean_ctor_release(x_129, 8);
 x_139 = x_129;
} else {
 lean_dec_ref(x_129);
 x_139 = lean_box(0);
}
x_140 = l_Lean_Kernel_enableDiag(x_131, x_122);
if (lean_is_scalar(x_139)) {
 x_141 = lean_alloc_ctor(0, 9, 0);
} else {
 x_141 = x_139;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_132);
lean_ctor_set(x_141, 2, x_133);
lean_ctor_set(x_141, 3, x_134);
lean_ctor_set(x_141, 4, x_135);
lean_ctor_set(x_141, 5, x_7);
lean_ctor_set(x_141, 6, x_136);
lean_ctor_set(x_141, 7, x_137);
lean_ctor_set(x_141, 8, x_138);
x_142 = lean_st_ref_set(x_10, x_141, x_130);
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
lean_dec(x_142);
x_144 = lean_box(0);
lean_inc(x_119);
x_145 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_4, x_122, x_5, x_6, x_119, x_144, x_117, x_10, x_143);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_st_ref_get(x_119, x_147);
lean_dec(x_119);
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_150 = x_148;
} else {
 lean_dec_ref(x_148);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_146);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_119);
x_152 = lean_ctor_get(x_145, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_145, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_154 = x_145;
} else {
 lean_dec_ref(x_145);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Core_getMaxHeartbeats(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_uniq", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_ppExprLegacy___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_ppExprLegacy___closed__3;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5() {
_start:
{
uint64_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__16;
x_3 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_4 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*3, x_1);
return x_4;
}
}
static uint8_t _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PPContext_runCoreM___rarg___closed__5;
x_3 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lean_pp_expr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_20; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint64_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_147; 
x_51 = lean_box(0);
x_52 = lean_box(0);
x_53 = lean_box(0);
x_54 = l_Lean_PPContext_runMetaM___rarg___closed__1;
x_55 = l_Lean_PPContext_runMetaM___rarg___closed__2;
x_56 = 0;
x_57 = l_Lean_PPContext_runCoreM___rarg___closed__20;
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_51);
lean_ctor_set(x_59, 2, x_3);
lean_ctor_set(x_59, 3, x_57);
lean_ctor_set(x_59, 4, x_53);
lean_ctor_set(x_59, 5, x_58);
lean_ctor_set(x_59, 6, x_53);
lean_ctor_set_uint64(x_59, sizeof(void*)*7, x_55);
lean_ctor_set_uint8(x_59, sizeof(void*)*7 + 8, x_56);
lean_ctor_set_uint8(x_59, sizeof(void*)*7 + 9, x_56);
lean_ctor_set_uint8(x_59, sizeof(void*)*7 + 10, x_56);
x_60 = l_Lean_PPContext_runMetaM___rarg___closed__3;
x_61 = l_Lean_PPContext_runCoreM___rarg___closed__13;
x_62 = l_Lean_PPContext_runMetaM___rarg___closed__4;
x_63 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_63, 0, x_2);
lean_ctor_set(x_63, 1, x_60);
lean_ctor_set(x_63, 2, x_51);
lean_ctor_set(x_63, 3, x_61);
lean_ctor_set(x_63, 4, x_62);
x_64 = l_Lean_PPContext_runCoreM___rarg___closed__6;
x_65 = l_Lean_PrettyPrinter_ppExprLegacy___closed__4;
x_66 = l_Lean_PPContext_runCoreM___rarg___closed__10;
x_67 = l_Lean_PrettyPrinter_ppExprLegacy___closed__5;
x_68 = l_Lean_PPContext_runCoreM___rarg___closed__17;
x_69 = l_Lean_PPContext_runCoreM___rarg___closed__18;
x_70 = l_Lean_PrettyPrinter_ppExprLegacy___closed__6;
x_71 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_64);
lean_ctor_set(x_71, 2, x_65);
lean_ctor_set(x_71, 3, x_66);
lean_ctor_set(x_71, 4, x_67);
lean_ctor_set(x_71, 5, x_68);
lean_ctor_set(x_71, 6, x_69);
lean_ctor_set(x_71, 7, x_70);
lean_ctor_set(x_71, 8, x_57);
x_72 = lean_io_get_num_heartbeats(x_6);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_st_mk_ref(x_71, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
x_90 = l_Lean_PPContext_runCoreM___rarg___closed__21;
x_91 = lean_st_ref_get(x_90, x_77);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = l_Lean_PPContext_runCoreM___rarg___closed__22;
x_95 = l_Lean_PPContext_runCoreM___rarg___closed__4;
x_96 = lean_unsigned_to_nat(1000u);
x_97 = lean_box(0);
x_98 = lean_box(0);
x_99 = l_Lean_PrettyPrinter_ppExprLegacy___closed__1;
x_100 = l_Lean_firstFrontendMacroScope;
x_101 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_101, 0, x_94);
lean_ctor_set(x_101, 1, x_95);
lean_ctor_set(x_101, 2, x_52);
lean_ctor_set(x_101, 3, x_58);
lean_ctor_set(x_101, 4, x_96);
lean_ctor_set(x_101, 5, x_97);
lean_ctor_set(x_101, 6, x_98);
lean_ctor_set(x_101, 7, x_52);
lean_ctor_set(x_101, 8, x_73);
lean_ctor_set(x_101, 9, x_99);
lean_ctor_set(x_101, 10, x_100);
lean_ctor_set(x_101, 11, x_53);
lean_ctor_set(x_101, 12, x_92);
lean_ctor_set_uint8(x_101, sizeof(void*)*13, x_56);
lean_ctor_set_uint8(x_101, sizeof(void*)*13 + 1, x_56);
x_102 = lean_st_ref_get(x_76, x_93);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
lean_dec(x_103);
x_147 = l_Lean_Kernel_isDiagnosticsEnabled(x_105);
lean_dec(x_105);
if (x_147 == 0)
{
uint8_t x_148; 
x_148 = l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_box(0);
lean_inc(x_76);
x_150 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(x_52, x_148, x_63, x_4, x_5, x_59, x_68, x_149, x_101, x_76, x_104);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_79 = x_151;
x_80 = x_152;
goto block_89;
}
else
{
uint8_t x_153; 
lean_dec(x_78);
lean_dec(x_76);
x_153 = !lean_is_exclusive(x_150);
if (x_153 == 0)
{
x_20 = x_150;
goto block_50;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_150, 0);
x_155 = lean_ctor_get(x_150, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_150);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_20 = x_156;
goto block_50;
}
}
}
else
{
lean_object* x_157; 
x_157 = lean_box(0);
x_106 = x_157;
goto block_146;
}
}
else
{
uint8_t x_158; 
x_158 = l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lean_box(0);
x_106 = x_159;
goto block_146;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_box(0);
lean_inc(x_76);
x_161 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(x_52, x_158, x_63, x_4, x_5, x_59, x_68, x_160, x_101, x_76, x_104);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_79 = x_162;
x_80 = x_163;
goto block_89;
}
else
{
uint8_t x_164; 
lean_dec(x_78);
lean_dec(x_76);
x_164 = !lean_is_exclusive(x_161);
if (x_164 == 0)
{
x_20 = x_161;
goto block_50;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_161, 0);
x_166 = lean_ctor_get(x_161, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_161);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_20 = x_167;
goto block_50;
}
}
}
}
block_19:
{
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
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
block_50:
{
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
x_7 = x_20;
goto block_19;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_7 = x_24;
goto block_19;
}
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_MessageData_toString(x_27, x_26);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_31);
x_7 = x_28;
goto block_19;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_32);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_7 = x_35;
goto block_19;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_20);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_20, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_25, 0);
lean_inc(x_38);
lean_dec(x_25);
x_39 = l_Nat_reprFast(x_38);
x_40 = l_Lean_PPContext_runCoreM___rarg___closed__1;
x_41 = lean_string_append(x_40, x_39);
lean_dec(x_39);
x_42 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_20, 0, x_42);
x_7 = x_20;
goto block_19;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_20, 1);
lean_inc(x_43);
lean_dec(x_20);
x_44 = lean_ctor_get(x_25, 0);
lean_inc(x_44);
lean_dec(x_25);
x_45 = l_Nat_reprFast(x_44);
x_46 = l_Lean_PPContext_runCoreM___rarg___closed__1;
x_47 = lean_string_append(x_46, x_45);
lean_dec(x_45);
x_48 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_43);
x_7 = x_49;
goto block_19;
}
}
}
}
block_89:
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_st_ref_get(x_76, x_80);
lean_dec(x_76);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_81, 0);
if (lean_is_scalar(x_78)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_78;
}
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_81, 0, x_84);
x_20 = x_81;
goto block_50;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_81, 0);
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_81);
if (lean_is_scalar(x_78)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_78;
}
lean_ctor_set(x_87, 0, x_79);
lean_ctor_set(x_87, 1, x_85);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
x_20 = x_88;
goto block_50;
}
}
block_146:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
lean_dec(x_106);
x_107 = lean_st_ref_take(x_76, x_104);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_111 = lean_ctor_get(x_108, 0);
x_112 = lean_ctor_get(x_108, 5);
lean_dec(x_112);
x_113 = l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
x_114 = l_Lean_Kernel_enableDiag(x_111, x_113);
lean_ctor_set(x_108, 5, x_68);
lean_ctor_set(x_108, 0, x_114);
x_115 = lean_st_ref_set(x_76, x_108, x_109);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_box(0);
lean_inc(x_76);
x_118 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(x_52, x_113, x_63, x_4, x_5, x_59, x_68, x_117, x_101, x_76, x_116);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_79 = x_119;
x_80 = x_120;
goto block_89;
}
else
{
uint8_t x_121; 
lean_dec(x_78);
lean_dec(x_76);
x_121 = !lean_is_exclusive(x_118);
if (x_121 == 0)
{
x_20 = x_118;
goto block_50;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_118, 0);
x_123 = lean_ctor_get(x_118, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_118);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_20 = x_124;
goto block_50;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_125 = lean_ctor_get(x_108, 0);
x_126 = lean_ctor_get(x_108, 1);
x_127 = lean_ctor_get(x_108, 2);
x_128 = lean_ctor_get(x_108, 3);
x_129 = lean_ctor_get(x_108, 4);
x_130 = lean_ctor_get(x_108, 6);
x_131 = lean_ctor_get(x_108, 7);
x_132 = lean_ctor_get(x_108, 8);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_108);
x_133 = l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
x_134 = l_Lean_Kernel_enableDiag(x_125, x_133);
x_135 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_126);
lean_ctor_set(x_135, 2, x_127);
lean_ctor_set(x_135, 3, x_128);
lean_ctor_set(x_135, 4, x_129);
lean_ctor_set(x_135, 5, x_68);
lean_ctor_set(x_135, 6, x_130);
lean_ctor_set(x_135, 7, x_131);
lean_ctor_set(x_135, 8, x_132);
x_136 = lean_st_ref_set(x_76, x_135, x_109);
x_137 = lean_ctor_get(x_136, 1);
lean_inc(x_137);
lean_dec(x_136);
x_138 = lean_box(0);
lean_inc(x_76);
x_139 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(x_52, x_133, x_63, x_4, x_5, x_59, x_68, x_138, x_101, x_76, x_137);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_79 = x_140;
x_80 = x_141;
goto block_89;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_78);
lean_dec(x_76);
x_142 = lean_ctor_get(x_139, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_144 = x_139;
} else {
 lean_dec_ref(x_139);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
x_20 = x_145;
goto block_50;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_PrettyPrinter_ppExprLegacy___lambda__2(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
return x_13;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_ppTactic___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_PrettyPrinter_ppTactic___closed__2;
x_6 = l_Lean_PrettyPrinter_ppCategory(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppCommand___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("command", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppCommand___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_ppCommand___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_PrettyPrinter_ppCommand___closed__2;
x_6 = l_Lean_PrettyPrinter_ppCategory(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppModule___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_module_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppModule___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_module_formatter), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_PrettyPrinter_ppModule___closed__1;
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Lean_PrettyPrinter_parenthesize(x_5, x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_PrettyPrinter_ppModule___closed__2;
x_10 = l_Lean_PrettyPrinter_format(x_9, x_7, x_2, x_3, x_8);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppSignature___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_raw;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppSignature___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed), 8, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppSignature___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" : ", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_ConstantInfo_levelParams(x_9);
x_12 = lean_box(0);
x_13 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_11, x_12);
x_14 = l_Lean_Expr_const___override(x_1, x_13);
x_15 = lean_ctor_get(x_4, 2);
lean_inc(x_15);
x_16 = l_Lean_PrettyPrinter_ppSignature___closed__1;
x_17 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_7);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = l_Lean_PrettyPrinter_ppSignature___closed__2;
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_PrettyPrinter_delabCore___rarg(x_14, x_18, x_19, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
x_26 = l_Lean_PrettyPrinter_ppTerm(x_24, x_4, x_5, x_22);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_ctor_set(x_21, 0, x_28);
lean_ctor_set(x_26, 0, x_21);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_26);
lean_ctor_set(x_21, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_free_object(x_21);
lean_dec(x_25);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = l_Lean_PrettyPrinter_ppTerm(x_36, x_4, x_5, x_22);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_41 = x_38;
} else {
 lean_dec_ref(x_38);
 x_41 = lean_box(0);
}
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_37);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_37);
x_44 = lean_ctor_get(x_38, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_46 = x_38;
} else {
 lean_dec_ref(x_38);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_5);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_20);
if (x_48 == 0)
{
return x_20;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_20, 0);
x_50 = lean_ctor_get(x_20, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_20);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_expr_dbg_to_string(x_14);
lean_dec(x_14);
x_53 = l_Lean_PPContext_runCoreM___rarg___closed__3;
x_54 = lean_string_append(x_53, x_52);
lean_dec(x_52);
x_55 = l_Lean_PrettyPrinter_ppSignature___closed__3;
x_56 = lean_string_append(x_54, x_55);
x_57 = l_Lean_ConstantInfo_type(x_9);
lean_dec(x_9);
x_58 = lean_expr_dbg_to_string(x_57);
lean_dec(x_57);
x_59 = lean_string_append(x_56, x_58);
lean_dec(x_58);
x_60 = lean_string_append(x_59, x_53);
x_61 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_7, 0, x_63);
return x_7;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_64 = lean_ctor_get(x_7, 0);
x_65 = lean_ctor_get(x_7, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_7);
x_66 = l_Lean_ConstantInfo_levelParams(x_64);
x_67 = lean_box(0);
x_68 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_66, x_67);
x_69 = l_Lean_Expr_const___override(x_1, x_68);
x_70 = lean_ctor_get(x_4, 2);
lean_inc(x_70);
x_71 = l_Lean_PrettyPrinter_ppSignature___closed__1;
x_72 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_70, x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_64);
x_73 = lean_box(0);
x_74 = l_Lean_PrettyPrinter_ppSignature___closed__2;
lean_inc(x_5);
lean_inc(x_4);
x_75 = l_Lean_PrettyPrinter_delabCore___rarg(x_69, x_73, x_74, x_2, x_3, x_4, x_5, x_65);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_80 = x_76;
} else {
 lean_dec_ref(x_76);
 x_80 = lean_box(0);
}
x_81 = l_Lean_PrettyPrinter_ppTerm(x_78, x_4, x_5, x_77);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
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
if (lean_is_scalar(x_80)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_80;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_79);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_80);
lean_dec(x_79);
x_87 = lean_ctor_get(x_81, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_89 = x_81;
} else {
 lean_dec_ref(x_81);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_5);
lean_dec(x_4);
x_91 = lean_ctor_get(x_75, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_75, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_93 = x_75;
} else {
 lean_dec_ref(x_75);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = lean_expr_dbg_to_string(x_69);
lean_dec(x_69);
x_96 = l_Lean_PPContext_runCoreM___rarg___closed__3;
x_97 = lean_string_append(x_96, x_95);
lean_dec(x_95);
x_98 = l_Lean_PrettyPrinter_ppSignature___closed__3;
x_99 = lean_string_append(x_97, x_98);
x_100 = l_Lean_ConstantInfo_type(x_64);
lean_dec(x_64);
x_101 = lean_expr_dbg_to_string(x_100);
lean_dec(x_100);
x_102 = lean_string_append(x_99, x_101);
lean_dec(x_101);
x_103 = lean_string_append(x_102, x_96);
x_104 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_box(0);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_65);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_7);
if (x_108 == 0)
{
return x_7;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_7, 0);
x_110 = lean_ctor_get(x_7, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_7);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_1 = x_2;
goto _start;
}
case 4:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_5);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_9 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
case 5:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_12);
lean_ctor_set(x_1, 1, x_13);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_15);
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
case 6:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_1);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_19);
lean_ctor_set(x_1, 0, x_20);
return x_1;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_21);
x_23 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
case 7:
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_25);
x_28 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_26);
lean_ctor_set(x_1, 1, x_28);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_1, 0);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_1);
x_31 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_29);
x_32 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_30);
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
case 8:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_1, 1);
x_36 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_35);
lean_ctor_set(x_1, 1, x_36);
return x_1;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_1, 0);
x_38 = lean_ctor_get(x_1, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_1);
x_39 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_38);
x_40 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
case 9:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; size_t x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_1, 1);
x_43 = lean_ctor_get(x_1, 2);
x_44 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_42);
x_45 = lean_array_size(x_43);
x_46 = 0;
x_47 = l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1(x_45, x_46, x_43);
lean_ctor_set(x_1, 2, x_47);
lean_ctor_set(x_1, 1, x_44);
return x_1;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; 
x_48 = lean_ctor_get(x_1, 0);
x_49 = lean_ctor_get(x_1, 1);
x_50 = lean_ctor_get(x_1, 2);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_1);
x_51 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_49);
x_52 = lean_array_size(x_50);
x_53 = 0;
x_54 = l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1(x_52, x_53, x_50);
x_55 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_55, 0, x_48);
lean_ctor_set(x_55, 1, x_51);
lean_ctor_set(x_55, 2, x_54);
return x_55;
}
}
default: 
{
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_4);
lean_ctor_set(x_2, 1, x_6);
x_7 = lean_apply_2(x_5, lean_box(0), x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_apply_2(x_10, lean_box(0), x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_14, lean_box(0), x_2);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_apply_3(x_3, lean_box(0), x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_Exception_isInterrupt(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Exception_isRuntime(x_9);
if (x_11 == 0)
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_13);
lean_ctor_set(x_9, 1, x_14);
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_7, 0, x_18);
return x_7;
}
}
else
{
return x_7;
}
}
else
{
return x_7;
}
}
else
{
return x_7;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_21 = l_Lean_Exception_isInterrupt(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_19);
if (x_22 == 0)
{
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_25 = x_19;
} else {
 lean_dec_ref(x_19);
 x_25 = lean_box(0);
}
x_26 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_24);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_20);
return x_29;
}
}
else
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_20);
return x_30;
}
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_19);
lean_ctor_set(x_31, 1, x_20);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_Exception_isInterrupt(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Exception_isRuntime(x_7);
if (x_9 == 0)
{
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
x_12 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_11);
lean_ctor_set(x_7, 1, x_12);
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
}
else
{
return x_5;
}
}
else
{
return x_5;
}
}
else
{
return x_5;
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
x_19 = l_Lean_Exception_isInterrupt(x_17);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Exception_isRuntime(x_17);
if (x_20 == 0)
{
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_23 = x_17;
} else {
 lean_dec_ref(x_17);
 x_23 = lean_box(0);
}
x_24 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_22);
if (lean_is_scalar(x_23)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_23;
}
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_18);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_17);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_17);
lean_ctor_set(x_28, 1, x_18);
return x_28;
}
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_17);
lean_ctor_set(x_29, 1, x_18);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_Exception_isInterrupt(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Exception_isRuntime(x_9);
if (x_11 == 0)
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_13);
lean_ctor_set(x_9, 1, x_14);
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_7, 0, x_18);
return x_7;
}
}
else
{
return x_7;
}
}
else
{
return x_7;
}
}
else
{
return x_7;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_21 = l_Lean_Exception_isInterrupt(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_19);
if (x_22 == 0)
{
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_25 = x_19;
} else {
 lean_dec_ref(x_19);
 x_25 = lean_box(0);
}
x_26 = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(x_24);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_20);
return x_29;
}
}
else
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_20);
return x_30;
}
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_19);
lean_ctor_set(x_31, 1, x_20);
return x_31;
}
}
}
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delab), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_box(0);
x_5 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1;
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos), 8, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__1), 6, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = l_Lean_PPContext_runMetaM___rarg(x_1, x_7, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppConstNameWithInfos), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__1), 6, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Lean_PPContext_runMetaM___rarg(x_1, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppTerm), 4, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__2), 4, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Lean_PPContext_runCoreM___rarg(x_1, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_getPPMVarsLevels(x_4);
x_6 = l_Lean_Level_format(x_2, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_ppGoal___boxed), 6, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____spec__3), 6, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Lean_PPContext_runMetaM___rarg(x_1, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__2), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__3), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__5), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2;
x_3 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3;
x_4 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4;
x_5 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_ppFnsRef;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7;
x_3 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6;
x_4 = lean_st_ref_set(x_2, x_3, x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9;
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11;
x_2 = lean_unsigned_to_nat(1164u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1;
x_3 = 0;
x_4 = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("parenthesizer", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_registerParserCompilers___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_parenthesizerAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_registerParserCompilers___closed__2;
x_2 = l_Lean_PrettyPrinter_registerParserCompilers___closed__3;
x_3 = l_Lean_PrettyPrinter_registerParserCompilers___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("formatter", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PrettyPrinter_registerParserCompilers___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_formatterAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PrettyPrinter_combinatorFormatterAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_PrettyPrinter_registerParserCompilers___closed__7;
x_2 = l_Lean_PrettyPrinter_registerParserCompilers___closed__8;
x_3 = l_Lean_PrettyPrinter_registerParserCompilers___closed__9;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_registerParserCompilers___closed__5;
x_3 = l_Lean_ParserCompiler_registerParserCompiler___rarg(x_2, x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_PrettyPrinter_registerParserCompilers___closed__10;
x_6 = l_Lean_ParserCompiler_registerParserCompiler___rarg(x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[Error pretty printing: ", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PPContext_runMetaM___rarg(x_2, x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_io_error_to_string(x_13);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_MessageData_ofFormat(x_15);
x_17 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set_tag(x_4, 0);
lean_ctor_set(x_4, 0, x_20);
return x_4;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = lean_io_error_to_string(x_21);
x_24 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_MessageData_ofFormat(x_24);
x_26 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_22);
return x_30;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(invalid MessageData.lazy, missing context)", 43, 43);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MessageData_ofFormatWithInfosM___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MessageData_ofFormatWithInfosM___lambda__3___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_alloc_closure((void*)(l_Lean_MessageData_ofFormatWithInfosM___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_MessageData_ofFormatWithInfosM___closed__1;
x_4 = l_Lean_MessageData_ofFormatWithInfosM___closed__2;
x_5 = l_Lean_MessageData_lazy(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_MessageData_ofFormatWithInfosM___lambda__2(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MessageData_ofFormatWithInfosM___lambda__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_7 = l_Lean_instantiateMVarsCore(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Expr_hasSyntheticSorry(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = 0;
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PPContext_runMetaM___rarg(x_2, x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_io_error_to_string(x_10);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_Lean_MessageData_ofFormat(x_12);
x_14 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2;
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set_tag(x_4, 0);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_MessageData_ofFormat(x_21);
x_23 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
return x_27;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofLazyM___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
size_t x_7; size_t x_8; uint8_t x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_MessageData_ofLazyM___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_MessageData_ofLazyM___lambda__2___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Lean_MessageData_ofFormatWithInfosM___closed__2;
x_6 = l_Lean_MessageData_lazy(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_MessageData_ofLazyM___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazyM___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MessageData_ofLazyM___lambda__2(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[Error pretty printing: expression not a constant]", 50, 50);
return x_1;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2;
x_2 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PPContext_runCoreM___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4;
x_2 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_MessageData_ofConst___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Lean_MessageData_ofExpr(x_1);
x_4 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6;
x_5 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_7 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_panic_fn(x_7, x_2);
return x_8;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.PrettyPrinter", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.MessageData.ofConst", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not a constant", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_MessageData_ofConst___closed__1;
x_2 = l_Lean_MessageData_ofConst___closed__2;
x_3 = lean_unsigned_to_nat(179u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_MessageData_ofConst___closed__3;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Expr_isConst(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_MessageData_ofConst___closed__4;
x_4 = l_panic___at_Lean_MessageData_ofConst___spec__1(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5;
x_7 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos), 8, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_6);
x_8 = l_Lean_MessageData_ofFormatWithInfosM(x_7);
return x_8;
}
}
}
static lean_object* _init_l_Lean_MessageData_signature___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[Error pretty printing signature: ", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Lean_MessageData_signature___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MessageData_signature___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppSignature), 6, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Lean_PPContext_runMetaM___rarg(x_2, x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_io_error_to_string(x_14);
x_16 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = l_Lean_MessageData_ofFormat(x_16);
x_18 = l_Lean_MessageData_signature___lambda__1___closed__2;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_MessageData_ofName(x_1);
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_29);
return x_5;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_5, 0);
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_5);
x_32 = lean_io_error_to_string(x_30);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = l_Lean_MessageData_ofFormat(x_33);
x_35 = l_Lean_MessageData_signature___lambda__1___closed__2;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3;
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_MessageData_ofName(x_1);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_31);
return x_47;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_alloc_closure((void*)(l_Lean_MessageData_signature___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_MessageData_ofFormatWithInfosM___closed__1;
x_4 = l_Lean_MessageData_ofFormatWithInfosM___closed__2;
x_5 = l_Lean_MessageData_lazy(x_2, x_3, x_4);
return x_5;
}
}
lean_object* initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_ParserCompiler(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_NumObjs(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_ShareCommon(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Delaborator(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ParserCompiler(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumObjs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ShareCommon(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1 = _init_l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___lambda__1___closed__1);
l_Lean_PPContext_runCoreM___rarg___closed__1 = _init_l_Lean_PPContext_runCoreM___rarg___closed__1();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__1);
l_Lean_PPContext_runCoreM___rarg___closed__2 = _init_l_Lean_PPContext_runCoreM___rarg___closed__2();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__2);
l_Lean_PPContext_runCoreM___rarg___closed__3 = _init_l_Lean_PPContext_runCoreM___rarg___closed__3();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__3);
l_Lean_PPContext_runCoreM___rarg___closed__4 = _init_l_Lean_PPContext_runCoreM___rarg___closed__4();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__4);
l_Lean_PPContext_runCoreM___rarg___closed__5 = _init_l_Lean_PPContext_runCoreM___rarg___closed__5();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__5);
l_Lean_PPContext_runCoreM___rarg___closed__6 = _init_l_Lean_PPContext_runCoreM___rarg___closed__6();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__6);
l_Lean_PPContext_runCoreM___rarg___closed__7 = _init_l_Lean_PPContext_runCoreM___rarg___closed__7();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__7);
l_Lean_PPContext_runCoreM___rarg___closed__8 = _init_l_Lean_PPContext_runCoreM___rarg___closed__8();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__8);
l_Lean_PPContext_runCoreM___rarg___closed__9 = _init_l_Lean_PPContext_runCoreM___rarg___closed__9();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__9);
l_Lean_PPContext_runCoreM___rarg___closed__10 = _init_l_Lean_PPContext_runCoreM___rarg___closed__10();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__10);
l_Lean_PPContext_runCoreM___rarg___closed__11 = _init_l_Lean_PPContext_runCoreM___rarg___closed__11();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__11);
l_Lean_PPContext_runCoreM___rarg___closed__12 = _init_l_Lean_PPContext_runCoreM___rarg___closed__12();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__12);
l_Lean_PPContext_runCoreM___rarg___closed__13 = _init_l_Lean_PPContext_runCoreM___rarg___closed__13();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__13);
l_Lean_PPContext_runCoreM___rarg___closed__14 = _init_l_Lean_PPContext_runCoreM___rarg___closed__14();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__14);
l_Lean_PPContext_runCoreM___rarg___closed__15 = _init_l_Lean_PPContext_runCoreM___rarg___closed__15();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__15);
l_Lean_PPContext_runCoreM___rarg___closed__16 = _init_l_Lean_PPContext_runCoreM___rarg___closed__16();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__16);
l_Lean_PPContext_runCoreM___rarg___closed__17 = _init_l_Lean_PPContext_runCoreM___rarg___closed__17();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__17);
l_Lean_PPContext_runCoreM___rarg___closed__18 = _init_l_Lean_PPContext_runCoreM___rarg___closed__18();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__18);
l_Lean_PPContext_runCoreM___rarg___closed__19 = _init_l_Lean_PPContext_runCoreM___rarg___closed__19();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__19);
l_Lean_PPContext_runCoreM___rarg___closed__20 = _init_l_Lean_PPContext_runCoreM___rarg___closed__20();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__20);
l_Lean_PPContext_runCoreM___rarg___closed__21 = _init_l_Lean_PPContext_runCoreM___rarg___closed__21();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__21);
l_Lean_PPContext_runCoreM___rarg___closed__22 = _init_l_Lean_PPContext_runCoreM___rarg___closed__22();
lean_mark_persistent(l_Lean_PPContext_runCoreM___rarg___closed__22);
l_Lean_PPContext_runMetaM___rarg___closed__1 = _init_l_Lean_PPContext_runMetaM___rarg___closed__1();
lean_mark_persistent(l_Lean_PPContext_runMetaM___rarg___closed__1);
l_Lean_PPContext_runMetaM___rarg___closed__2 = _init_l_Lean_PPContext_runMetaM___rarg___closed__2();
l_Lean_PPContext_runMetaM___rarg___closed__3 = _init_l_Lean_PPContext_runMetaM___rarg___closed__3();
lean_mark_persistent(l_Lean_PPContext_runMetaM___rarg___closed__3);
l_Lean_PPContext_runMetaM___rarg___closed__4 = _init_l_Lean_PPContext_runMetaM___rarg___closed__4();
lean_mark_persistent(l_Lean_PPContext_runMetaM___rarg___closed__4);
l_Lean_PrettyPrinter_ppTerm___closed__1 = _init_l_Lean_PrettyPrinter_ppTerm___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppTerm___closed__1);
l_Lean_PrettyPrinter_ppTerm___closed__2 = _init_l_Lean_PrettyPrinter_ppTerm___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppTerm___closed__2);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__1);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__2);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__3);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__4);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__5);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__6);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__7);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214____closed__8);
if (builtin) {res = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_214_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_pp_exprSizes = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_pp_exprSizes);
lean_dec_ref(res);
}l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__1);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__2);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__3);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__4);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__5);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__6);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__7);
l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8 = _init_l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8();
lean_mark_persistent(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___closed__8);
l_Lean_PrettyPrinter_ppExpr___closed__1 = _init_l_Lean_PrettyPrinter_ppExpr___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExpr___closed__1);
l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1 = _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1);
l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2 = _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2);
l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3 = _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3);
l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4 = _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4);
l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5 = _init_l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__5);
l_Lean_PrettyPrinter_ppExprLegacy___closed__1 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__1);
l_Lean_PrettyPrinter_ppExprLegacy___closed__2 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__2);
l_Lean_PrettyPrinter_ppExprLegacy___closed__3 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__3);
l_Lean_PrettyPrinter_ppExprLegacy___closed__4 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__4);
l_Lean_PrettyPrinter_ppExprLegacy___closed__5 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
l_Lean_PrettyPrinter_ppExprLegacy___closed__6 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_ppExprLegacy___closed__6);
l_Lean_PrettyPrinter_ppExprLegacy___closed__7 = _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7();
l_Lean_PrettyPrinter_ppTactic___closed__1 = _init_l_Lean_PrettyPrinter_ppTactic___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppTactic___closed__1);
l_Lean_PrettyPrinter_ppTactic___closed__2 = _init_l_Lean_PrettyPrinter_ppTactic___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppTactic___closed__2);
l_Lean_PrettyPrinter_ppCommand___closed__1 = _init_l_Lean_PrettyPrinter_ppCommand___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppCommand___closed__1);
l_Lean_PrettyPrinter_ppCommand___closed__2 = _init_l_Lean_PrettyPrinter_ppCommand___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppCommand___closed__2);
l_Lean_PrettyPrinter_ppModule___closed__1 = _init_l_Lean_PrettyPrinter_ppModule___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppModule___closed__1);
l_Lean_PrettyPrinter_ppModule___closed__2 = _init_l_Lean_PrettyPrinter_ppModule___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppModule___closed__2);
l_Lean_PrettyPrinter_ppSignature___closed__1 = _init_l_Lean_PrettyPrinter_ppSignature___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_ppSignature___closed__1);
l_Lean_PrettyPrinter_ppSignature___closed__2 = _init_l_Lean_PrettyPrinter_ppSignature___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_ppSignature___closed__2);
l_Lean_PrettyPrinter_ppSignature___closed__3 = _init_l_Lean_PrettyPrinter_ppSignature___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_ppSignature___closed__3);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____lambda__1___closed__1);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__1);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__2);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__3);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__4);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__5);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__6);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084____closed__7);
if (builtin) {res = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1084_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__1);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__2);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__3);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__4);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__5);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__6);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__7);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__8);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__9);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__10);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__11);
l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12 = _init_l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12();
lean_mark_persistent(l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164____closed__12);
if (builtin) {res = l_Lean_PrettyPrinter_initFn____x40_Lean_PrettyPrinter___hyg_1164_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_PrettyPrinter_registerParserCompilers___closed__1 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__1);
l_Lean_PrettyPrinter_registerParserCompilers___closed__2 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__2);
l_Lean_PrettyPrinter_registerParserCompilers___closed__3 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__3();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__3);
l_Lean_PrettyPrinter_registerParserCompilers___closed__4 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__4();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__4);
l_Lean_PrettyPrinter_registerParserCompilers___closed__5 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__5);
l_Lean_PrettyPrinter_registerParserCompilers___closed__6 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__6();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__6);
l_Lean_PrettyPrinter_registerParserCompilers___closed__7 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__7();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__7);
l_Lean_PrettyPrinter_registerParserCompilers___closed__8 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__8();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__8);
l_Lean_PrettyPrinter_registerParserCompilers___closed__9 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__9();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__9);
l_Lean_PrettyPrinter_registerParserCompilers___closed__10 = _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__10();
lean_mark_persistent(l_Lean_PrettyPrinter_registerParserCompilers___closed__10);
if (builtin) {res = l_Lean_PrettyPrinter_registerParserCompilers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__1);
l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__2);
l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__3);
l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__1___closed__4);
l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__1);
l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__2);
l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3 = _init_l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___lambda__3___closed__3);
l_Lean_MessageData_ofFormatWithInfosM___closed__1 = _init_l_Lean_MessageData_ofFormatWithInfosM___closed__1();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___closed__1);
l_Lean_MessageData_ofFormatWithInfosM___closed__2 = _init_l_Lean_MessageData_ofFormatWithInfosM___closed__2();
lean_mark_persistent(l_Lean_MessageData_ofFormatWithInfosM___closed__2);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__1);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__2);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__3);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__4);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__5);
l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6 = _init_l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6();
lean_mark_persistent(l_panic___at_Lean_MessageData_ofConst___spec__1___closed__6);
l_Lean_MessageData_ofConst___closed__1 = _init_l_Lean_MessageData_ofConst___closed__1();
lean_mark_persistent(l_Lean_MessageData_ofConst___closed__1);
l_Lean_MessageData_ofConst___closed__2 = _init_l_Lean_MessageData_ofConst___closed__2();
lean_mark_persistent(l_Lean_MessageData_ofConst___closed__2);
l_Lean_MessageData_ofConst___closed__3 = _init_l_Lean_MessageData_ofConst___closed__3();
lean_mark_persistent(l_Lean_MessageData_ofConst___closed__3);
l_Lean_MessageData_ofConst___closed__4 = _init_l_Lean_MessageData_ofConst___closed__4();
lean_mark_persistent(l_Lean_MessageData_ofConst___closed__4);
l_Lean_MessageData_signature___lambda__1___closed__1 = _init_l_Lean_MessageData_signature___lambda__1___closed__1();
lean_mark_persistent(l_Lean_MessageData_signature___lambda__1___closed__1);
l_Lean_MessageData_signature___lambda__1___closed__2 = _init_l_Lean_MessageData_signature___lambda__1___closed__2();
lean_mark_persistent(l_Lean_MessageData_signature___lambda__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
