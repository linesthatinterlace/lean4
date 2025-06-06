// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Cases
// Imports: Lean.Meta.Tactic.Cases
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
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_contains___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_RBTree_ofList___at_Lean_ConstantInfo_getUsedConstantsAsSet___spec__1(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19;
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__3;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__7;
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases___lambda__4___closed__1;
static lean_object* l_Lean_Meta_Grind_cases___lambda__4___closed__3;
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6;
size_t lean_uint64_to_usize(uint64_t);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1;
static uint8_t l_Lean_Meta_Grind_cases___lambda__4___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isEagerSplit___boxed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(lean_object*, size_t, lean_object*);
size_t lean_usize_mul(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isBuiltinEagerCases___boxed(lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2;
lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_casesOnSuffix;
static lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3;
lean_object* l_Lean_Meta_RecursorInfo_numIndices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase___boxed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4;
static lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2(lean_object*, size_t, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4;
lean_object* l_Lean_LocalDecl_index(lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(lean_object*, size_t, size_t, lean_object*, uint8_t);
static lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1;
lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isBuiltinEagerCases(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isEagerSplit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesEntry;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_Lean_Meta_Grind_cases___lambda__4___closed__6;
lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__8;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7;
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
static size_t l_Lean_Meta_Grind_cases___lambda__4___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_casesExt;
static lean_object* l_Lean_Meta_Grind_cases___lambda__2___closed__3;
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___lambda__1(lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__6;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static size_t l_Lean_Meta_Grind_cases___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____lambda__1(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__2;
lean_object* lean_usize_to_nat(size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addCasesAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1(lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Meta_Grind_cases___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1;
static lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
lean_object* l_Lean_LocalContext_setKind(lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Meta_Grind_cases___lambda__4___closed__5;
lean_object* l_Lean_Meta_mkRecursorInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases___lambda__2___closed__1;
lean_object* l_Lean_Meta_RecursorInfo_numMinors(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2(lean_object*, size_t, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9;
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3;
lean_object* l_Lean_indentExpr(lean_object*);
static lean_object* l_Lean_Meta_Grind_validateCasesAttr___closed__1;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___boxed(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Array_idxOfAux___at_Lean_MetavarContext_setMVarUserName___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash___override(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1___boxed(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14;
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18;
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isSplit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2;
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_ReducibilityAttrs_0__Lean_validate___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11;
static lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3;
static lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSplit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1;
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3___boxed(lean_object**);
size_t lean_usize_land(size_t, size_t);
static lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesEntry() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("And", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Exists", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("True", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("False", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unit", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Empty", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10;
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8;
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6;
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4;
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2;
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18;
x_2 = l_Lean_RBTree_ofList___at_Lean_ConstantInfo_getUsedConstantsAsSet___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isBuiltinEagerCases(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
x_3 = l_Lean_NameSet_contains(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isBuiltinEagerCases___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_isBuiltinEagerCases(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_usize_shift_right(x_2, x_5);
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; uint8_t x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Grind_CasesTypes_contains(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_8);
lean_dec(x_4);
return x_1;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 0);
lean_dec(x_14);
x_15 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
case 1:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_1);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_1, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_array_set(x_4, x_8, x_9);
x_23 = lean_usize_shift_right(x_2, x_5);
x_24 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(x_21, x_23, x_3);
lean_inc(x_24);
x_25 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_ctor_set(x_10, 0, x_24);
x_26 = lean_array_set(x_22, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
else
{
lean_object* x_27; uint8_t x_28; 
lean_dec(x_24);
lean_free_object(x_10);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_array_set(x_22, x_8, x_27);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_29);
return x_1;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_27, 0);
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_27);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_set(x_22, x_8, x_32);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_10, 0);
lean_inc(x_34);
lean_dec(x_10);
x_35 = lean_array_set(x_4, x_8, x_9);
x_36 = lean_usize_shift_right(x_2, x_5);
x_37 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(x_34, x_36, x_3);
lean_inc(x_37);
x_38 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
x_40 = lean_array_set(x_35, x_8, x_39);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_array_set(x_35, x_8, x_45);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_47 = lean_ctor_get(x_10, 0);
lean_inc(x_47);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_48 = x_10;
} else {
 lean_dec_ref(x_10);
 x_48 = lean_box(0);
}
x_49 = lean_array_set(x_4, x_8, x_9);
x_50 = lean_usize_shift_right(x_2, x_5);
x_51 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(x_47, x_50, x_3);
lean_inc(x_51);
x_52 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
if (lean_is_scalar(x_48)) {
 x_53 = lean_alloc_ctor(1, 1, 0);
} else {
 x_53 = x_48;
}
lean_ctor_set(x_53, 0, x_51);
x_54 = lean_array_set(x_49, x_8, x_53);
lean_dec(x_8);
x_55 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_51);
lean_dec(x_48);
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_set(x_49, x_8, x_60);
lean_dec(x_8);
x_62 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_62, 0, x_61);
return x_62;
}
}
}
default: 
{
lean_dec(x_8);
lean_dec(x_4);
return x_1;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
x_65 = lean_unsigned_to_nat(0u);
x_66 = l_Array_idxOfAux___at_Lean_MetavarContext_setMVarUserName___spec__3(x_63, x_3, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_dec(x_64);
lean_dec(x_63);
return x_1;
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_1);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_ctor_get(x_1, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_1, 0);
lean_dec(x_69);
x_70 = lean_ctor_get(x_66, 0);
lean_inc(x_70);
lean_dec(x_66);
lean_inc(x_70);
x_71 = l_Array_eraseIdx___rarg(x_63, x_70, lean_box(0));
x_72 = l_Array_eraseIdx___rarg(x_64, x_70, lean_box(0));
lean_ctor_set(x_1, 1, x_72);
lean_ctor_set(x_1, 0, x_71);
return x_1;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_1);
x_73 = lean_ctor_get(x_66, 0);
lean_inc(x_73);
lean_dec(x_66);
lean_inc(x_73);
x_74 = l_Array_eraseIdx___rarg(x_63, x_73, lean_box(0));
x_75 = l_Array_eraseIdx___rarg(x_64, x_73, lean_box(0));
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Meta_Grind_CasesTypes_erase___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_erase___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Grind_CasesTypes_erase(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint64_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_Lean_Name_hash___override(x_9);
x_13 = lean_uint64_to_usize(x_12);
x_14 = 1;
x_15 = lean_usize_sub(x_1, x_14);
x_16 = 5;
x_17 = lean_usize_mul(x_16, x_15);
x_18 = lean_usize_shift_right(x_13, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_5, x_19);
lean_dec(x_5);
x_21 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_6, x_18, x_1, x_9, x_11);
x_4 = lean_box(0);
x_5 = x_20;
x_6 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_box(x_4);
x_14 = lean_array_push(x_6, x_13);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_15 = lean_array_push(x_5, x_3);
x_16 = lean_box(x_4);
x_17 = lean_array_push(x_6, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_array_fget(x_5, x_2);
x_20 = lean_name_eq(x_3, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_5);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
lean_dec(x_2);
x_2 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_1, 1);
lean_dec(x_25);
x_26 = lean_ctor_get(x_1, 0);
lean_dec(x_26);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_box(x_4);
x_29 = lean_array_fset(x_6, x_2, x_28);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_29);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_1);
x_30 = lean_array_fset(x_5, x_2, x_3);
x_31 = lean_box(x_4);
x_32 = lean_array_fset(x_6, x_2, x_31);
lean_dec(x_2);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_15);
x_22 = lean_box(x_5);
x_23 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_array_fset(x_17, x_12, x_24);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_20);
lean_dec(x_19);
x_26 = lean_box(x_5);
lean_ctor_set(x_15, 1, x_26);
lean_ctor_set(x_15, 0, x_4);
x_27 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_name_eq(x_4, x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_box(x_5);
x_32 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_28, x_29, x_4, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_array_fset(x_17, x_12, x_33);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_29);
lean_dec(x_28);
x_35 = lean_box(x_5);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_array_fset(x_17, x_12, x_36);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_37);
return x_1;
}
}
}
case 1:
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_15);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_15, 0);
x_40 = lean_usize_shift_right(x_2, x_9);
x_41 = lean_usize_add(x_3, x_8);
x_42 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_39, x_40, x_41, x_4, x_5);
lean_ctor_set(x_15, 0, x_42);
x_43 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_43);
return x_1;
}
else
{
lean_object* x_44; size_t x_45; size_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_15, 0);
lean_inc(x_44);
lean_dec(x_15);
x_45 = lean_usize_shift_right(x_2, x_9);
x_46 = lean_usize_add(x_3, x_8);
x_47 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_44, x_45, x_46, x_4, x_5);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_array_fset(x_17, x_12, x_48);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_49);
return x_1;
}
}
default: 
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_box(x_5);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_array_fset(x_17, x_12, x_51);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_52);
return x_1;
}
}
}
}
else
{
lean_object* x_53; size_t x_54; size_t x_55; size_t x_56; size_t x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
lean_dec(x_1);
x_54 = 1;
x_55 = 5;
x_56 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_57 = lean_usize_land(x_2, x_56);
x_58 = lean_usize_to_nat(x_57);
x_59 = lean_array_get_size(x_53);
x_60 = lean_nat_dec_lt(x_58, x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_58);
lean_dec(x_4);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_53);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_array_fget(x_53, x_58);
x_63 = lean_box(0);
x_64 = lean_array_fset(x_53, x_58, x_63);
switch (lean_obj_tag(x_62)) {
case 0:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
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
x_68 = lean_name_eq(x_4, x_65);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_67);
x_69 = lean_box(x_5);
x_70 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_65, x_66, x_4, x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_array_fset(x_64, x_58, x_71);
lean_dec(x_58);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_66);
lean_dec(x_65);
x_74 = lean_box(x_5);
if (lean_is_scalar(x_67)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_67;
}
lean_ctor_set(x_75, 0, x_4);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_fset(x_64, x_58, x_75);
lean_dec(x_58);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
return x_77;
}
}
case 1:
{
lean_object* x_78; lean_object* x_79; size_t x_80; size_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_78 = lean_ctor_get(x_62, 0);
lean_inc(x_78);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 x_79 = x_62;
} else {
 lean_dec_ref(x_62);
 x_79 = lean_box(0);
}
x_80 = lean_usize_shift_right(x_2, x_55);
x_81 = lean_usize_add(x_3, x_54);
x_82 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_78, x_80, x_81, x_4, x_5);
if (lean_is_scalar(x_79)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_79;
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_array_fset(x_64, x_58, x_83);
lean_dec(x_58);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
return x_85;
}
default: 
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_box(x_5);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_4);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_array_fset(x_64, x_58, x_87);
lean_dec(x_58);
x_89 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_89, 0, x_88);
return x_89;
}
}
}
}
}
else
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_1);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; size_t x_93; uint8_t x_94; 
x_91 = lean_unsigned_to_nat(0u);
x_92 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4(x_1, x_91, x_4, x_5);
x_93 = 7;
x_94 = lean_usize_dec_le(x_93, x_3);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_95 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_92);
x_96 = lean_unsigned_to_nat(4u);
x_97 = lean_nat_dec_lt(x_95, x_96);
lean_dec(x_95);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_ctor_get(x_92, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_92, 1);
lean_inc(x_99);
lean_dec(x_92);
x_100 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1;
x_101 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3(x_3, x_98, x_99, lean_box(0), x_91, x_100);
lean_dec(x_99);
lean_dec(x_98);
return x_101;
}
else
{
return x_92;
}
}
else
{
return x_92;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; size_t x_107; uint8_t x_108; 
x_102 = lean_ctor_get(x_1, 0);
x_103 = lean_ctor_get(x_1, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_1);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_unsigned_to_nat(0u);
x_106 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4(x_104, x_105, x_4, x_5);
x_107 = 7;
x_108 = lean_usize_dec_le(x_107, x_3);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_109 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_106);
x_110 = lean_unsigned_to_nat(4u);
x_111 = lean_nat_dec_lt(x_109, x_110);
lean_dec(x_109);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_ctor_get(x_106, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_106, 1);
lean_inc(x_113);
lean_dec(x_106);
x_114 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1;
x_115 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3(x_3, x_112, x_113, lean_box(0), x_105, x_114);
lean_dec(x_113);
lean_dec(x_112);
return x_115;
}
else
{
return x_106;
}
}
else
{
return x_106;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_Name_hash___override(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Grind_CasesTypes_insert___spec__3(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__4(x_1, x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2(x_1, x_6, x_7, x_4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Meta_Grind_CasesTypes_insert(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = 5;
x_7 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_name_eq(x_3, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_free_object(x_1);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
lean_free_object(x_1);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_usize_shift_right(x_2, x_6);
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = 5;
x_22 = l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2;
x_23 = lean_usize_land(x_2, x_22);
x_24 = lean_usize_to_nat(x_23);
x_25 = lean_box(2);
x_26 = lean_array_get(x_25, x_20, x_24);
lean_dec(x_24);
lean_dec(x_20);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_name_eq(x_3, x_27);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_28);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_28);
return x_31;
}
}
case 1:
{
lean_object* x_32; size_t x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_usize_shift_right(x_2, x_21);
x_1 = x_32;
x_2 = x_33;
goto _start;
}
default: 
{
lean_object* x_35; 
x_35 = lean_box(0);
return x_35;
}
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3(x_36, x_37, lean_box(0), x_38, x_3);
lean_dec(x_37);
lean_dec(x_36);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_find_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Grind_CasesTypes_find_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isEagerSplit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
x_5 = l_Lean_NameSet_contains(x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
x_9 = l_Lean_NameSet_contains(x_8, x_2);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isEagerSplit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Grind_CasesTypes_isEagerSplit(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Meta_Grind_CasesTypes_find_x3f___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
x_5 = l_Lean_NameSet_contains(x_4, x_2);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_isSplit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Grind_CasesTypes_isSplit(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_insert___at_Lean_Meta_Grind_CasesTypes_insert___spec__1(x_1, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Meta", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Grind", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("casesExt", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1;
x_2 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2;
x_3 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3;
x_4 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5;
x_2 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6;
x_3 = l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2;
x_4 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8;
x_3 = l_Lean_registerSimpleScopedEnvExtension___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2;
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Grind_casesExt;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_st_ref_take(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 5);
lean_dec(x_8);
x_9 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_10 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2;
x_11 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_9, x_7, x_10);
x_12 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
lean_ctor_set(x_4, 5, x_12);
lean_ctor_set(x_4, 0, x_11);
x_13 = lean_st_ref_set(x_1, x_4, x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 6);
x_26 = lean_ctor_get(x_4, 7);
x_27 = lean_ctor_get(x_4, 8);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_28 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_29 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2;
x_30 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_28, x_20, x_29);
x_31 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
x_32 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_21);
lean_ctor_set(x_32, 2, x_22);
lean_ctor_set(x_32, 3, x_23);
lean_ctor_set(x_32, 4, x_24);
lean_ctor_set(x_32, 5, x_31);
lean_ctor_set(x_32, 6, x_25);
lean_ctor_set(x_32, 7, x_26);
lean_ctor_set(x_32, 8, x_27);
x_33 = lean_st_ref_set(x_1, x_32, x_5);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_resetCasesExt___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Grind_resetCasesExt___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Grind_resetCasesExt___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_resetCasesExt___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Grind_resetCasesExt(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Meta_Grind_casesExt;
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*3);
lean_dec(x_9);
x_11 = l_Lean_Meta_Grind_instInhabitedCasesTypes;
x_12 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_13 = l_Lean_ScopedEnvExtension_getState___rarg(x_11, x_12, x_6, x_10);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_Grind_casesExt;
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get_uint8(x_19, sizeof(void*)*3);
lean_dec(x_19);
x_21 = l_Lean_Meta_Grind_instInhabitedCasesTypes;
x_22 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_23 = l_Lean_ScopedEnvExtension_getState___rarg(x_21, x_22, x_16, x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_15);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getCasesTypes___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Grind_getCasesTypes___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getCasesTypes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Grind_getCasesTypes(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSplit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Meta_Grind_getCasesTypes___rarg(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_Meta_Grind_CasesTypes_isSplit(x_7, x_1);
x_9 = lean_box(x_8);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = l_Lean_Meta_Grind_CasesTypes_isSplit(x_10, x_1);
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSplit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_Grind_isSplit(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 5)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*6);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_6, 0);
lean_dec(x_12);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_1);
return x_6;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
if (x_2 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_6, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_1);
return x_6;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_dec(x_6);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_free_object(x_7);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_6, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_6, 1);
lean_inc(x_22);
lean_dec(x_6);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_7, 0);
lean_inc(x_25);
lean_dec(x_7);
x_26 = lean_ctor_get_uint8(x_25, sizeof(void*)*6);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_28 = x_6;
} else {
 lean_dec_ref(x_6);
 x_28 = lean_box(0);
}
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_1);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
else
{
if (x_2 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_6, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_32 = x_6;
} else {
 lean_dec_ref(x_6);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_1);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
x_35 = lean_ctor_get(x_6, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_36 = x_6;
} else {
 lean_dec_ref(x_6);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_7);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_6);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_6, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_6, 0, x_41);
return x_6;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_6, 1);
lean_inc(x_42);
lean_dec(x_6);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_6);
if (x_45 == 0)
{
return x_6;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_6, 0);
x_47 = lean_ctor_get(x_6, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_6);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_7);
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_6, 0);
lean_dec(x_17);
x_18 = 1;
x_19 = lean_box(x_18);
lean_ctor_set(x_6, 0, x_19);
return x_6;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_dec(x_6);
x_21 = 1;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Meta_Grind_isCasesAttrCandidate(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(x_1, x_2, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l_Lean_Meta_isInductivePredicate_x3f(x_17, x_3, x_4, x_5, x_6, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_8);
if (x_19 == 0)
{
return x_8;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid `[grind cases]`, `", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_validateCasesAttr___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is not an inductive datatype or an alias for one", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_validateCasesAttr___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid `[grind cases eager]`, `", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_validateCasesAttr___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is not a non-recursive inductive datatype or an alias for one", 63, 63);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_validateCasesAttr___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_validateCasesAttr___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l_Lean_Meta_Grind_isCasesAttrCandidate(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
if (x_2 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = l_Lean_MessageData_ofName(x_1);
x_11 = l_Lean_Meta_Grind_validateCasesAttr___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Meta_Grind_validateCasesAttr___closed__4;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at___private_Lean_ReducibilityAttrs_0__Lean_validate___spec__3(x_14, x_3, x_4, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = l_Lean_MessageData_ofName(x_1);
x_18 = l_Lean_Meta_Grind_validateCasesAttr___closed__6;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Meta_Grind_validateCasesAttr___closed__8;
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_ReducibilityAttrs_0__Lean_validate___spec__3(x_21, x_3, x_4, x_16);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_6);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_6, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set(x_6, 0, x_25);
return x_6;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_dec(x_6);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_6);
if (x_29 == 0)
{
return x_6;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_6, 0);
x_31 = lean_ctor_get(x_6, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_6);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_validateCasesAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Meta_Grind_validateCasesAttr(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_4, 6);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_st_ref_take(x_5, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 5);
lean_dec(x_13);
x_14 = l_Lean_ScopedEnvExtension_addCore___rarg(x_12, x_1, x_2, x_3, x_7);
x_15 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
lean_ctor_set(x_9, 5, x_15);
lean_ctor_set(x_9, 0, x_14);
x_16 = lean_st_ref_set(x_5, x_9, x_10);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
x_25 = lean_ctor_get(x_9, 2);
x_26 = lean_ctor_get(x_9, 3);
x_27 = lean_ctor_get(x_9, 4);
x_28 = lean_ctor_get(x_9, 6);
x_29 = lean_ctor_get(x_9, 7);
x_30 = lean_ctor_get(x_9, 8);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_31 = l_Lean_ScopedEnvExtension_addCore___rarg(x_23, x_1, x_2, x_3, x_7);
x_32 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
x_33 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_24);
lean_ctor_set(x_33, 2, x_25);
lean_ctor_set(x_33, 3, x_26);
lean_ctor_set(x_33, 4, x_27);
lean_ctor_set(x_33, 5, x_32);
lean_ctor_set(x_33, 6, x_28);
lean_ctor_set(x_33, 7, x_29);
lean_ctor_set(x_33, 8, x_30);
x_34 = lean_st_ref_set(x_5, x_33, x_10);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addCasesAttr(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_Grind_validateCasesAttr(x_1, x_2, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_2);
x_10 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_11 = l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1(x_10, x_9, x_3, x_4, x_5, x_8);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_ScopedEnvExtension_add___at_Lean_Meta_Grind_addCasesAttr___spec__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addCasesAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Meta_Grind_addCasesAttr(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 5);
x_6 = l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(x_1, x_2, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is not marked with the `[grind]` attribute", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
lean_inc(x_1);
x_6 = l_Lean_PersistentHashMap_contains___at_Lean_Meta_Grind_CasesTypes_contains___spec__1(x_1, x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_7 = l_Lean_MessageData_ofName(x_2);
x_8 = l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1(x_11, x_3, x_4, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_PersistentHashMap_erase___at_Lean_Meta_Grind_CasesTypes_erase___spec__1(x_1, x_2);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Meta_Grind_CasesTypes_eraseDecl___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_Grind_CasesTypes_eraseDecl(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is marked as a built-in case-split for `grind` and cannot be erased", 69, 69);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases;
x_6 = l_Lean_NameSet_contains(x_5, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_MessageData_ofName(x_1);
x_10 = l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at___private_Lean_ReducibilityAttrs_0__Lean_validate___spec__3(x_13, x_2, x_3, x_4);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_Grind_ensureNotBuiltinCases(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Lean_Meta_Grind_ensureNotBuiltinCases(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_Grind_casesExt;
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*3);
lean_dec(x_13);
x_15 = l_Lean_Meta_Grind_instInhabitedCasesTypes;
x_16 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1;
x_17 = l_Lean_ScopedEnvExtension_getState___rarg(x_15, x_16, x_10, x_14);
x_18 = l_Lean_Meta_Grind_CasesTypes_eraseDecl(x_17, x_1, x_2, x_3, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_st_ref_take(x_3, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_22, 0);
x_26 = lean_ctor_get(x_22, 5);
lean_dec(x_26);
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_eraseCasesAttr___lambda__1___boxed), 2, 1);
lean_closure_set(x_27, 0, x_19);
x_28 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_16, x_25, x_27);
x_29 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
lean_ctor_set(x_22, 5, x_29);
lean_ctor_set(x_22, 0, x_28);
x_30 = lean_st_ref_set(x_3, x_22, x_23);
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
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_37 = lean_ctor_get(x_22, 0);
x_38 = lean_ctor_get(x_22, 1);
x_39 = lean_ctor_get(x_22, 2);
x_40 = lean_ctor_get(x_22, 3);
x_41 = lean_ctor_get(x_22, 4);
x_42 = lean_ctor_get(x_22, 6);
x_43 = lean_ctor_get(x_22, 7);
x_44 = lean_ctor_get(x_22, 8);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_22);
x_45 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_eraseCasesAttr___lambda__1___boxed), 2, 1);
lean_closure_set(x_45, 0, x_19);
x_46 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_16, x_37, x_45);
x_47 = l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3;
x_48 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_38);
lean_ctor_set(x_48, 2, x_39);
lean_ctor_set(x_48, 3, x_40);
lean_ctor_set(x_48, 4, x_41);
lean_ctor_set(x_48, 5, x_47);
lean_ctor_set(x_48, 6, x_42);
lean_ctor_set(x_48, 7, x_43);
lean_ctor_set(x_48, 8, x_44);
x_49 = lean_st_ref_set(x_3, x_48, x_23);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
x_52 = lean_box(0);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_18);
if (x_54 == 0)
{
return x_18;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_18, 0);
x_56 = lean_ctor_get(x_18, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_18);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
return x_5;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_5, 0);
x_60 = lean_ctor_get(x_5, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_5);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Grind_eraseCasesAttr___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseCasesAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_Grind_eraseCasesAttr(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l_Lean_FVarId_getDecl(x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = l_Lean_LocalDecl_index(x_10);
x_14 = lean_local_ctx_num_indices(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_14, x_15);
lean_dec(x_14);
x_17 = lean_nat_dec_eq(x_13, x_16);
lean_dec(x_16);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_8);
x_18 = l_Lean_LocalDecl_type(x_10);
lean_dec(x_10);
x_19 = l_Lean_Meta_isProp(x_18, x_2, x_3, x_4, x_5, x_11);
return x_19;
}
else
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_8, 0, x_21);
return x_8;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = l_Lean_LocalDecl_index(x_22);
x_26 = lean_local_ctx_num_indices(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_26, x_27);
lean_dec(x_26);
x_29 = lean_nat_dec_eq(x_25, x_28);
lean_dec(x_28);
lean_dec(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
x_31 = l_Lean_Meta_isProp(x_30, x_2, x_3, x_4, x_5, x_23);
return x_31;
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = 1;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_23);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_8);
if (x_35 == 0)
{
return x_8;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_8, 0);
x_37 = lean_ctor_get(x_8, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_8);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_6);
return x_41;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("grind", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cases", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1;
x_2 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(non-recursive) inductive type expected at ", 43, 43);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = l_Lean_MessageData_ofExpr(x_2);
x_11 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_indentExpr(x_4);
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_13);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3;
x_20 = l_Lean_Meta_throwTacticEx___rarg(x_19, x_1, x_18, x_5, x_6, x_7, x_8, x_9);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases_throwInductiveExpected___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Grind_cases_throwInductiveExpected(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected recursor type", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_9, 1);
x_20 = lean_nat_dec_lt(x_11, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_10, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_35 = lean_whnf(x_34, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 7)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 2);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_dec_lt(x_40, x_7);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = 2;
x_43 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
x_44 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_42, x_1, x_43, x_14, x_15, x_16, x_17, x_37);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
x_48 = l_Lean_Expr_app___override(x_33, x_46);
x_49 = l_Lean_Expr_mvarId_x21(x_46);
lean_dec(x_46);
x_50 = lean_array_push(x_31, x_49);
x_51 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 0, x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_44);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_22 = x_54;
x_23 = x_47;
goto block_28;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_55 = lean_ctor_get(x_44, 0);
x_56 = lean_ctor_get(x_44, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_44);
lean_inc(x_55);
x_57 = l_Lean_Expr_app___override(x_33, x_55);
x_58 = l_Lean_Expr_mvarId_x21(x_55);
lean_dec(x_55);
x_59 = lean_array_push(x_31, x_58);
x_60 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_22 = x_64;
x_23 = x_56;
goto block_28;
}
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_inc(x_29);
lean_inc(x_1);
x_65 = l_Lean_Name_num___override(x_1, x_29);
x_66 = 2;
x_67 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
lean_inc(x_5);
x_68 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_66, x_65, x_67, x_14, x_15, x_16, x_17, x_37);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
x_72 = l_Lean_Expr_app___override(x_33, x_70);
x_73 = l_Lean_Expr_mvarId_x21(x_70);
lean_dec(x_70);
x_74 = lean_array_push(x_31, x_73);
x_75 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_68, 1, x_39);
lean_ctor_set(x_68, 0, x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_68);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_22 = x_78;
x_23 = x_71;
goto block_28;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_79 = lean_ctor_get(x_68, 0);
x_80 = lean_ctor_get(x_68, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_68);
lean_inc(x_79);
x_81 = l_Lean_Expr_app___override(x_33, x_79);
x_82 = l_Lean_Expr_mvarId_x21(x_79);
lean_dec(x_79);
x_83 = lean_array_push(x_31, x_82);
x_84 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_85, 1, x_39);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_22 = x_88;
x_23 = x_80;
goto block_28;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_89 = lean_ctor_get(x_35, 1);
lean_inc(x_89);
lean_dec(x_35);
x_90 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4;
x_91 = l_Lean_Meta_throwTacticEx___rarg(x_4, x_3, x_90, x_14, x_15, x_16, x_17, x_89);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
return x_91;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_35);
if (x_96 == 0)
{
return x_35;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_35, 0);
x_98 = lean_ctor_get(x_35, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_35);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
block_28:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_9, 2);
x_26 = lean_nat_add(x_11, x_25);
lean_dec(x_11);
x_10 = x_24;
x_11 = x_26;
x_12 = lean_box(0);
x_13 = lean_box(0);
x_18 = x_23;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = l_Lean_LocalContext_setKind(x_4, x_6, x_7);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_9, 1);
x_20 = lean_nat_dec_lt(x_11, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_10, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_35 = lean_whnf(x_34, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 7)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 2);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_dec_lt(x_40, x_7);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = 2;
x_43 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
lean_inc(x_6);
lean_inc(x_5);
x_44 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_42, x_2, x_43, x_14, x_15, x_16, x_17, x_37);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
x_48 = l_Lean_Expr_app___override(x_33, x_46);
x_49 = l_Lean_Expr_mvarId_x21(x_46);
lean_dec(x_46);
x_50 = lean_array_push(x_31, x_49);
x_51 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 0, x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_44);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_22 = x_54;
x_23 = x_47;
goto block_28;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_55 = lean_ctor_get(x_44, 0);
x_56 = lean_ctor_get(x_44, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_44);
lean_inc(x_55);
x_57 = l_Lean_Expr_app___override(x_33, x_55);
x_58 = l_Lean_Expr_mvarId_x21(x_55);
lean_dec(x_55);
x_59 = lean_array_push(x_31, x_58);
x_60 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_22 = x_64;
x_23 = x_56;
goto block_28;
}
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_inc(x_29);
lean_inc(x_2);
x_65 = l_Lean_Name_num___override(x_2, x_29);
x_66 = 2;
x_67 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
lean_inc(x_5);
x_68 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_66, x_65, x_67, x_14, x_15, x_16, x_17, x_37);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
x_72 = l_Lean_Expr_app___override(x_33, x_70);
x_73 = l_Lean_Expr_mvarId_x21(x_70);
lean_dec(x_70);
x_74 = lean_array_push(x_31, x_73);
x_75 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_68, 1, x_39);
lean_ctor_set(x_68, 0, x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_68);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_22 = x_78;
x_23 = x_71;
goto block_28;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_79 = lean_ctor_get(x_68, 0);
x_80 = lean_ctor_get(x_68, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_68);
lean_inc(x_79);
x_81 = l_Lean_Expr_app___override(x_33, x_79);
x_82 = l_Lean_Expr_mvarId_x21(x_79);
lean_dec(x_79);
x_83 = lean_array_push(x_31, x_82);
x_84 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_85, 1, x_39);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_22 = x_88;
x_23 = x_80;
goto block_28;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_89 = lean_ctor_get(x_35, 1);
lean_inc(x_89);
lean_dec(x_35);
x_90 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4;
x_91 = l_Lean_Meta_throwTacticEx___rarg(x_4, x_1, x_90, x_14, x_15, x_16, x_17, x_89);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
return x_91;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_35);
if (x_96 == 0)
{
return x_35;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_35, 0);
x_98 = lean_ctor_get(x_35, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_35);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
block_28:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_9, 2);
x_26 = lean_nat_add(x_11, x_25);
lean_dec(x_11);
x_10 = x_24;
x_11 = x_26;
x_12 = lean_box(0);
x_13 = lean_box(0);
x_18 = x_23;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_9, 1);
x_20 = lean_nat_dec_lt(x_11, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_10, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_35 = lean_whnf(x_34, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 7)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 2);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_dec_lt(x_40, x_7);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = 2;
x_43 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
x_44 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_42, x_1, x_43, x_14, x_15, x_16, x_17, x_37);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
x_48 = l_Lean_Expr_app___override(x_33, x_46);
x_49 = l_Lean_Expr_mvarId_x21(x_46);
lean_dec(x_46);
x_50 = lean_array_push(x_31, x_49);
x_51 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 0, x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_44);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_22 = x_54;
x_23 = x_47;
goto block_28;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_55 = lean_ctor_get(x_44, 0);
x_56 = lean_ctor_get(x_44, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_44);
lean_inc(x_55);
x_57 = l_Lean_Expr_app___override(x_33, x_55);
x_58 = l_Lean_Expr_mvarId_x21(x_55);
lean_dec(x_55);
x_59 = lean_array_push(x_31, x_58);
x_60 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_22 = x_64;
x_23 = x_56;
goto block_28;
}
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_inc(x_29);
lean_inc(x_1);
x_65 = l_Lean_Name_num___override(x_1, x_29);
x_66 = 2;
x_67 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
lean_inc(x_5);
x_68 = l_Lean_Meta_mkFreshExprMVarAt(x_5, x_6, x_38, x_66, x_65, x_67, x_14, x_15, x_16, x_17, x_37);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
x_72 = l_Lean_Expr_app___override(x_33, x_70);
x_73 = l_Lean_Expr_mvarId_x21(x_70);
lean_dec(x_70);
x_74 = lean_array_push(x_31, x_73);
x_75 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
lean_ctor_set(x_68, 1, x_39);
lean_ctor_set(x_68, 0, x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_68);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_22 = x_78;
x_23 = x_71;
goto block_28;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_79 = lean_ctor_get(x_68, 0);
x_80 = lean_ctor_get(x_68, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_68);
lean_inc(x_79);
x_81 = l_Lean_Expr_app___override(x_33, x_79);
x_82 = l_Lean_Expr_mvarId_x21(x_79);
lean_dec(x_79);
x_83 = lean_array_push(x_31, x_82);
x_84 = lean_nat_add(x_29, x_40);
lean_dec(x_29);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_85, 1, x_39);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_22 = x_88;
x_23 = x_80;
goto block_28;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_89 = lean_ctor_get(x_35, 1);
lean_inc(x_89);
lean_dec(x_35);
x_90 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4;
x_91 = l_Lean_Meta_throwTacticEx___rarg(x_4, x_3, x_90, x_14, x_15, x_16, x_17, x_89);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
return x_91;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_35);
if (x_96 == 0)
{
return x_35;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_35, 0);
x_98 = lean_ctor_get(x_35, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_35);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
block_28:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_9, 2);
x_26 = lean_nat_add(x_11, x_25);
lean_dec(x_11);
x_10 = x_24;
x_11 = x_26;
x_12 = lean_box(0);
x_13 = lean_box(0);
x_18 = x_23;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Meta_mkRecursorAppPrefix(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_56 = lean_ctor_get(x_9, 2);
lean_inc(x_56);
x_57 = 1;
lean_inc(x_3);
x_58 = l_Lean_LocalContext_setKind(x_56, x_3, x_57);
x_59 = lean_array_get_size(x_6);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_nat_dec_lt(x_60, x_59);
x_62 = l_Lean_Meta_getLocalInstances(x_9, x_10, x_11, x_12, x_16);
if (x_61 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_59);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_17 = x_58;
x_18 = x_63;
x_19 = x_64;
goto block_55;
}
else
{
uint8_t x_65; 
x_65 = lean_nat_dec_le(x_59, x_59);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_59);
x_66 = lean_ctor_get(x_62, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_62, 1);
lean_inc(x_67);
lean_dec(x_62);
x_17 = x_58;
x_18 = x_66;
x_19 = x_67;
goto block_55;
}
else
{
lean_object* x_68; lean_object* x_69; size_t x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
lean_dec(x_62);
x_70 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_71 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(x_6, x_8, x_70, x_58);
x_17 = x_71;
x_18 = x_68;
x_19 = x_69;
goto block_55;
}
}
block_55:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = l_Lean_mkAppN(x_15, x_5);
x_21 = l_Lean_Expr_fvar___override(x_3);
x_22 = l_Lean_Expr_app___override(x_20, x_21);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_22);
x_23 = lean_infer_type(x_22, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_RecursorInfo_numMinors(x_4);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_unsigned_to_nat(1u);
lean_inc(x_26);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_24);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_6);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
x_33 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1(x_7, x_4, x_1, x_2, x_17, x_18, x_26, x_29, x_29, x_32, x_27, lean_box(0), lean_box(0), x_9, x_10, x_11, x_12, x_25);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_4);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_ctor_get(x_36, 0);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_1, x_39, x_9, x_10, x_11, x_12, x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = lean_array_to_list(x_38);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_array_to_list(x_38);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_33);
if (x_47 == 0)
{
return x_33;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_33, 0);
x_49 = lean_ctor_get(x_33, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_33);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_14);
if (x_72 == 0)
{
return x_14;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_14, 0);
x_74 = lean_ctor_get(x_14, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_14);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static size_t _init_l_Lean_Meta_Grind_cases___lambda__2___closed__2() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_2 = lean_array_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__2___closed__3() {
_start:
{
size_t x_1; size_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Meta_Grind_cases___lambda__2___closed__2;
x_3 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_4 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_Meta_intro1Core(x_3, x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3;
x_16 = l_Lean_Meta_Grind_cases___lambda__2___closed__3;
x_17 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_18 = l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1;
lean_inc(x_14);
x_19 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lambda__1___boxed), 13, 8);
lean_closure_set(x_19, 0, x_14);
lean_closure_set(x_19, 1, x_15);
lean_closure_set(x_19, 2, x_13);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_16);
lean_closure_set(x_19, 5, x_17);
lean_closure_set(x_19, 6, x_2);
lean_closure_set(x_19, 7, x_18);
x_20 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_14, x_19, x_4, x_5, x_6, x_7, x_12);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Meta_mkRecursorAppPrefix(x_1, x_2, x_3, x_4, x_5, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_57 = lean_ctor_get(x_9, 2);
lean_inc(x_57);
x_58 = 1;
lean_inc(x_3);
x_59 = l_Lean_LocalContext_setKind(x_57, x_3, x_58);
x_60 = lean_array_get_size(x_7);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_nat_dec_lt(x_61, x_60);
x_63 = l_Lean_Meta_getLocalInstances(x_9, x_10, x_11, x_12, x_16);
if (x_62 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_60);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_17 = x_59;
x_18 = x_64;
x_19 = x_65;
goto block_56;
}
else
{
uint8_t x_66; 
x_66 = lean_nat_dec_le(x_60, x_60);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_60);
x_67 = lean_ctor_get(x_63, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_dec(x_63);
x_17 = x_59;
x_18 = x_67;
x_19 = x_68;
goto block_56;
}
else
{
lean_object* x_69; lean_object* x_70; size_t x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_dec(x_63);
x_71 = lean_usize_of_nat(x_60);
lean_dec(x_60);
x_72 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(x_7, x_8, x_71, x_59);
x_17 = x_72;
x_18 = x_69;
x_19 = x_70;
goto block_56;
}
}
block_56:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = l_Lean_mkAppN(x_15, x_5);
x_21 = l_Lean_Expr_fvar___override(x_3);
x_22 = l_Lean_Expr_app___override(x_20, x_21);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_22);
x_23 = lean_infer_type(x_22, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_RecursorInfo_numMinors(x_4);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_unsigned_to_nat(1u);
lean_inc(x_26);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_24);
x_31 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
x_34 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4(x_6, x_4, x_1, x_2, x_17, x_18, x_26, x_29, x_29, x_33, x_27, lean_box(0), lean_box(0), x_9, x_10, x_11, x_12, x_25);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_4);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_ctor_get(x_36, 0);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
x_41 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_1, x_40, x_9, x_10, x_11, x_12, x_38);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = lean_array_to_list(x_39);
lean_ctor_set(x_41, 0, x_44);
return x_41;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_array_to_list(x_39);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_34);
if (x_48 == 0)
{
return x_34;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_34, 0);
x_50 = lean_ctor_get(x_34, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_34);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_23);
if (x_52 == 0)
{
return x_23;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_23, 0);
x_54 = lean_ctor_get(x_23, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_23);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_14);
if (x_73 == 0)
{
return x_14;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_14, 0);
x_75 = lean_ctor_get(x_14, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_14);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("x", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_cases___lambda__4___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("h", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Grind_cases___lambda__4___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Meta_Grind_cases___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_Grind_cases___lambda__4___closed__5;
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
static uint8_t _init_l_Lean_Meta_Grind_cases___lambda__4___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lean_Meta_Grind_cases___lambda__4___closed__5;
x_2 = lean_nat_dec_le(x_1, x_1);
return x_2;
}
}
static size_t _init_l_Lean_Meta_Grind_cases___lambda__4___closed__8() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Meta_Grind_cases___lambda__4___closed__5;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_MVarId_getTag(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = lean_whnf(x_12, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_getAppFn(x_15);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_18);
x_19 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_18, x_3, x_4, x_5, x_6, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 5)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_casesOnSuffix;
x_23 = l_Lean_Name_str___override(x_18, x_22);
x_24 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l_Lean_Meta_mkRecursorInfo(x_23, x_24, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Meta_RecursorInfo_numIndices(x_26);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_lt(x_29, x_28);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_isSimpleFVar(x_2, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_35 = l_Lean_Meta_isProof(x_2, x_3, x_4, x_5, x_6, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = l_Lean_Meta_Grind_cases___lambda__4___closed__2;
x_40 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_39, x_5, x_6, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Meta_Grind_cases___lambda__4___closed__4;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_44 = l_Lean_MVarId_assertExt(x_1, x_41, x_15, x_2, x_43, x_3, x_4, x_5, x_6, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Meta_Grind_cases___lambda__2(x_26, x_9, x_45, x_3, x_4, x_5, x_6, x_46);
return x_47;
}
else
{
uint8_t x_48; 
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_44);
if (x_48 == 0)
{
return x_44;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_44);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_35, 1);
lean_inc(x_52);
lean_dec(x_35);
x_53 = l_Lean_Meta_Grind_cases___lambda__4___closed__2;
x_54 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_53, x_5, x_6, x_52);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_57 = l_Lean_MVarId_assert(x_1, x_55, x_15, x_2, x_3, x_4, x_5, x_6, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Meta_Grind_cases___lambda__2(x_26, x_9, x_58, x_3, x_4, x_5, x_6, x_59);
return x_60;
}
else
{
uint8_t x_61; 
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = !lean_is_exclusive(x_57);
if (x_61 == 0)
{
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_57);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_35);
if (x_65 == 0)
{
return x_35;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_35, 0);
x_67 = lean_ctor_get(x_35, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_35);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; size_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_15);
x_69 = lean_ctor_get(x_31, 1);
lean_inc(x_69);
lean_dec(x_31);
x_70 = l_Lean_Expr_fvarId_x21(x_2);
lean_dec(x_2);
x_71 = 0;
x_72 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3;
x_73 = l_Lean_Meta_Grind_cases___lambda__2___closed__3;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_26);
lean_inc(x_70);
lean_inc(x_1);
x_74 = l_Lean_Meta_mkRecursorAppPrefix(x_1, x_72, x_70, x_26, x_73, x_3, x_4, x_5, x_6, x_69);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_116 = lean_ctor_get(x_3, 2);
lean_inc(x_116);
x_117 = 1;
lean_inc(x_70);
x_118 = l_Lean_LocalContext_setKind(x_116, x_70, x_117);
x_119 = l_Lean_Meta_getLocalInstances(x_3, x_4, x_5, x_6, x_76);
x_120 = l_Lean_Meta_Grind_cases___lambda__4___closed__6;
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_119, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
lean_dec(x_119);
x_77 = x_118;
x_78 = x_121;
x_79 = x_122;
goto block_115;
}
else
{
uint8_t x_123; 
x_123 = l_Lean_Meta_Grind_cases___lambda__4___closed__7;
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_119, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_119, 1);
lean_inc(x_125);
lean_dec(x_119);
x_77 = x_118;
x_78 = x_124;
x_79 = x_125;
goto block_115;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; size_t x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_119, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_119, 1);
lean_inc(x_127);
lean_dec(x_119);
x_128 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_129 = l_Lean_Meta_Grind_cases___lambda__4___closed__8;
x_130 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(x_128, x_71, x_129, x_118);
x_77 = x_130;
x_78 = x_126;
x_79 = x_127;
goto block_115;
}
}
block_115:
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = l_Lean_mkAppN(x_75, x_73);
x_81 = l_Lean_Expr_fvar___override(x_70);
x_82 = l_Lean_Expr_app___override(x_80, x_81);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_82);
x_83 = lean_infer_type(x_82, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_Meta_RecursorInfo_numMinors(x_26);
x_87 = lean_unsigned_to_nat(1u);
lean_inc(x_86);
x_88 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_88, 0, x_29);
lean_ctor_set(x_88, 1, x_86);
lean_ctor_set(x_88, 2, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_82);
lean_ctor_set(x_89, 1, x_84);
x_90 = l_Lean_Meta_Grind_cases___lambda__2___closed__1;
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_93 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3(x_1, x_9, x_26, x_72, x_77, x_78, x_86, x_88, x_88, x_92, x_29, lean_box(0), lean_box(0), x_3, x_4, x_5, x_6, x_85);
lean_dec(x_88);
lean_dec(x_86);
lean_dec(x_26);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
x_97 = lean_ctor_get(x_93, 1);
lean_inc(x_97);
lean_dec(x_93);
x_98 = lean_ctor_get(x_95, 0);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
lean_dec(x_96);
x_100 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_1, x_99, x_3, x_4, x_5, x_6, x_97);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_100, 0);
lean_dec(x_102);
x_103 = lean_array_to_list(x_98);
lean_ctor_set(x_100, 0, x_103);
return x_100;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec(x_100);
x_105 = lean_array_to_list(x_98);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
uint8_t x_107; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_93);
if (x_107 == 0)
{
return x_93;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_93, 0);
x_109 = lean_ctor_get(x_93, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_93);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_82);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_111 = !lean_is_exclusive(x_83);
if (x_111 == 0)
{
return x_83;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_83, 0);
x_113 = lean_ctor_get(x_83, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_83);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_70);
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_131 = !lean_is_exclusive(x_74);
if (x_131 == 0)
{
return x_74;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_74, 0);
x_133 = lean_ctor_get(x_74, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_74);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
else
{
uint8_t x_135; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_135 = !lean_is_exclusive(x_31);
if (x_135 == 0)
{
return x_31;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_31, 0);
x_137 = lean_ctor_get(x_31, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_31);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
lean_object* x_139; 
lean_dec(x_15);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_139 = l_Lean_Meta_generalizeIndices_x27(x_1, x_2, x_24, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; size_t x_145; size_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = lean_ctor_get(x_140, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_140, 2);
lean_inc(x_143);
x_144 = lean_ctor_get(x_140, 1);
lean_inc(x_144);
lean_dec(x_140);
x_145 = lean_array_size(x_144);
x_146 = 0;
lean_inc(x_144);
x_147 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_145, x_146, x_144);
x_148 = l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3;
x_149 = l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1;
lean_inc(x_142);
x_150 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lambda__3___boxed), 13, 8);
lean_closure_set(x_150, 0, x_142);
lean_closure_set(x_150, 1, x_148);
lean_closure_set(x_150, 2, x_143);
lean_closure_set(x_150, 3, x_26);
lean_closure_set(x_150, 4, x_147);
lean_closure_set(x_150, 5, x_9);
lean_closure_set(x_150, 6, x_144);
lean_closure_set(x_150, 7, x_149);
x_151 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_142, x_150, x_3, x_4, x_5, x_6, x_141);
return x_151;
}
else
{
uint8_t x_152; 
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_152 = !lean_is_exclusive(x_139);
if (x_152 == 0)
{
return x_139;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_139, 0);
x_154 = lean_ctor_get(x_139, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_139);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
}
else
{
uint8_t x_156; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_156 = !lean_is_exclusive(x_25);
if (x_156 == 0)
{
return x_25;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_25, 0);
x_158 = lean_ctor_get(x_25, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_25);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_9);
x_160 = lean_ctor_get(x_19, 1);
lean_inc(x_160);
lean_dec(x_19);
x_161 = l_Lean_Meta_Grind_cases_throwInductiveExpected(x_1, x_2, lean_box(0), x_15, x_3, x_4, x_5, x_6, x_160);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_161;
}
}
else
{
uint8_t x_162; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = !lean_is_exclusive(x_19);
if (x_162 == 0)
{
return x_19;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_19, 0);
x_164 = lean_ctor_get(x_19, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_19);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
lean_object* x_166; 
lean_dec(x_17);
lean_dec(x_9);
x_166 = l_Lean_Meta_Grind_cases_throwInductiveExpected(x_1, x_2, lean_box(0), x_15, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_166;
}
}
else
{
uint8_t x_167; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_167 = !lean_is_exclusive(x_14);
if (x_167 == 0)
{
return x_14;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_14, 0);
x_169 = lean_ctor_get(x_14, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_14);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_11);
if (x_171 == 0)
{
return x_11;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_11, 0);
x_173 = lean_ctor_get(x_11, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_11);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_175 = !lean_is_exclusive(x_8);
if (x_175 == 0)
{
return x_8;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_8, 0);
x_177 = lean_ctor_get(x_8, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_8);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_Grind_cases___lambda__4), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___boxed(lean_object** _args) {
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
lean_object* x_19; 
x_19 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_Grind_cases___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3___boxed(lean_object** _args) {
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
lean_object* x_19; 
x_19 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4___boxed(lean_object** _args) {
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
lean_object* x_19; 
x_19 = l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; lean_object* x_15; 
x_14 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_15 = l_Lean_Meta_Grind_cases___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_cases___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; lean_object* x_15; 
x_14 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_15 = l_Lean_Meta_Grind_cases___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_7);
lean_dec(x_5);
return x_15;
}
}
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Cases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1 = _init_l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__1);
l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2 = _init_l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesTypes___closed__2);
l_Lean_Meta_Grind_instInhabitedCasesTypes = _init_l_Lean_Meta_Grind_instInhabitedCasesTypes();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesTypes);
l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1 = _init_l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesEntry___closed__1);
l_Lean_Meta_Grind_instInhabitedCasesEntry = _init_l_Lean_Meta_Grind_instInhabitedCasesEntry();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesEntry);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__1);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__2);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__3);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__4);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__5);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__6);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__7);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__8);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__9);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__10);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__11);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__12);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__13);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__14);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__15);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__16);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__17);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__18);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19 = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases___closed__19);
l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases = _init_l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Cases_0__Lean_Meta_Grind_builtinEagerCases);
l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__1();
l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_Meta_Grind_CasesTypes_contains___spec__2___closed__2();
l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at_Lean_Meta_Grind_CasesTypes_insert___spec__2___closed__1);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__1);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__2);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__3);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__4);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__5);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__6);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__7);
l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8 = _init_l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8();
lean_mark_persistent(l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197____closed__8);
if (builtin) {res = l_Lean_Meta_Grind_initFn____x40_Lean_Meta_Tactic_Grind_Cases___hyg_197_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_casesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_casesExt);
lean_dec_ref(res);
}l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1 = _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_resetCasesExt___rarg___closed__1);
l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2 = _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_resetCasesExt___rarg___closed__2);
l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3 = _init_l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_resetCasesExt___rarg___closed__3);
l_Lean_Meta_Grind_validateCasesAttr___closed__1 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__1);
l_Lean_Meta_Grind_validateCasesAttr___closed__2 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__2);
l_Lean_Meta_Grind_validateCasesAttr___closed__3 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__3);
l_Lean_Meta_Grind_validateCasesAttr___closed__4 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__4);
l_Lean_Meta_Grind_validateCasesAttr___closed__5 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__5);
l_Lean_Meta_Grind_validateCasesAttr___closed__6 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__6();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__6);
l_Lean_Meta_Grind_validateCasesAttr___closed__7 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__7();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__7);
l_Lean_Meta_Grind_validateCasesAttr___closed__8 = _init_l_Lean_Meta_Grind_validateCasesAttr___closed__8();
lean_mark_persistent(l_Lean_Meta_Grind_validateCasesAttr___closed__8);
l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1 = _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__1);
l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2 = _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__2);
l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3 = _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__3);
l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4 = _init_l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_CasesTypes_eraseDecl___closed__4);
l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1 = _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__1);
l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2 = _init_l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_ensureNotBuiltinCases___closed__2);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__1);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__2);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__3);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__4);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__5);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__6);
l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7 = _init_l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7();
lean_mark_persistent(l_Lean_Meta_Grind_cases_throwInductiveExpected___closed__7);
l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__1);
l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__2);
l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__3);
l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Meta_Grind_cases___spec__1___closed__4);
l_Lean_Meta_Grind_cases___lambda__2___closed__1 = _init_l_Lean_Meta_Grind_cases___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__2___closed__1);
l_Lean_Meta_Grind_cases___lambda__2___closed__2 = _init_l_Lean_Meta_Grind_cases___lambda__2___closed__2();
l_Lean_Meta_Grind_cases___lambda__2___closed__3 = _init_l_Lean_Meta_Grind_cases___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__2___closed__3);
l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1 = _init_l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__2___boxed__const__1);
l_Lean_Meta_Grind_cases___lambda__4___closed__1 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___closed__1);
l_Lean_Meta_Grind_cases___lambda__4___closed__2 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___closed__2);
l_Lean_Meta_Grind_cases___lambda__4___closed__3 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___closed__3);
l_Lean_Meta_Grind_cases___lambda__4___closed__4 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__4();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___closed__4);
l_Lean_Meta_Grind_cases___lambda__4___closed__5 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__5();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___closed__5);
l_Lean_Meta_Grind_cases___lambda__4___closed__6 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__6();
l_Lean_Meta_Grind_cases___lambda__4___closed__7 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__7();
l_Lean_Meta_Grind_cases___lambda__4___closed__8 = _init_l_Lean_Meta_Grind_cases___lambda__4___closed__8();
l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1 = _init_l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_Grind_cases___lambda__4___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
