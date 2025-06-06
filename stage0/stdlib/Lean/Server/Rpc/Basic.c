// Lean compiler output
// Module: Lean.Server.Rpc.Basic
// Imports: Init.Dynamic Lean.Data.Json
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRpcRef;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2;
static lean_object* l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1;
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(lean_object*, size_t, size_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
static lean_object* l_Lean_Server_rpcReleaseRef___closed__1;
LEAN_EXPORT lean_object* l_Array_toJson___at_Lean_Server_instRpcEncodableArray___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(lean_object*, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_freshWithRpcRefId;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___rarg___boxed(lean_object*, lean_object*, lean_object*);
static size_t l_Lean_Lsp_instInhabitedRpcRef___closed__1;
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__5;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30_(size_t, size_t);
static size_t l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t, lean_object*);
static lean_object* l_Lean_Server_rpcStoreRef___rarg___closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRpcRef;
LEAN_EXPORT lean_object* l_Prod_toJson___at_Lean_Server_instRpcEncodableProd___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_USize_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_Lsp_instInhabitedRpcRef;
lean_object* l_Lean_PersistentHashMap_isUnaryNode___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187_(size_t);
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__7;
static lean_object* l_Lean_Server_WithRpcRef_mk___rarg___closed__1;
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__2;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6;
static lean_object* l_Lean_Lsp_instBEqRpcRef___closed__1;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRpcRef;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1(lean_object*, size_t);
uint64_t lean_usize_to_uint64(size_t);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13(lean_object*, size_t, size_t);
static lean_object* l_Lean_Server_rpcStoreRef___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1___boxed(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10;
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcRef;
LEAN_EXPORT uint64_t l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(size_t);
static lean_object* l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_Lean_Lsp_instHashableRpcRef___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7;
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__4;
static lean_object* l_Lean_Server_rpcStoreRef___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object*);
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1___boxed(lean_object*);
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_instToJsonRpcRef___closed__1;
static lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Lean_Server_rpcStoreRef___rarg___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14;
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_;
LEAN_EXPORT lean_object* l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___rarg(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_instFromJsonRpcRef___closed__1;
LEAN_EXPORT lean_object* l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef(size_t);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_bignumToJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___rarg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(lean_object*, size_t, size_t, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(lean_object*, size_t, size_t, size_t, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13;
size_t lean_usize_shift_left(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120_(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_rpcStoreRef___spec__15(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5(size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_Basic___hyg_289_(lean_object*);
static lean_object* l_Lean_Server_rpcGetRef___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7(lean_object*, lean_object*, size_t, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1(lean_object*);
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef___closed__1() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef() {
_start:
{
size_t x_1; 
x_1 = l_Lean_Lsp_instInhabitedRpcRef___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30_(size_t x_1, size_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_usize_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqRpcRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_beqRpcRef____x40_Lean_Server_Rpc_Basic___hyg_30____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqRpcRef() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instBEqRpcRef___closed__1;
return x_1;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(size_t x_1) {
_start:
{
uint64_t x_2; uint64_t x_3; uint64_t x_4; 
x_2 = 0;
x_3 = lean_usize_to_uint64(x_1);
x_4 = lean_uint64_mix_hash(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88____boxed(lean_object* x_1) {
_start:
{
size_t x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(x_2);
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instHashableRpcRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88____boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instHashableRpcRef() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instHashableRpcRef___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_USize_fromJson_x3f(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("p", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lsp", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RpcRef", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2;
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3;
x_3 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5;
x_2 = 1;
x_3 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7;
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10;
x_2 = 1;
x_3 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9;
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12;
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1;
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRpcRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRpcRef() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instFromJsonRpcRef___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_2, x_4);
x_1 = x_5;
x_2 = x_6;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187_(size_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_usize_to_nat(x_1);
x_3 = l_Lean_bignumToJson(x_2);
x_4 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1;
x_10 = l_List_flatMapTR_go___at___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____spec__1(x_8, x_9);
x_11 = l_Lean_Json_mkObj(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187_(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonRpcRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonRpcRef() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instToJsonRpcRef___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef(size_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_usize_to_nat(x_1);
x_3 = l_Nat_reprFast(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_instToStringRpcRef(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___rarg(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_Lean_Lsp_instInhabitedRpcRef___closed__1;
x_3 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_usize(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instInhabitedWithRpcRef___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_Basic___hyg_289_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_;
x_3 = lean_st_mk_ref(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_Server_WithRpcRef_mk___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_freshWithRpcRefId;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Server_WithRpcRef_mk___rarg___closed__1;
x_4 = lean_st_ref_take(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = 1;
x_8 = lean_unbox_usize(x_5);
x_9 = lean_usize_add(x_8, x_7);
x_10 = lean_box_usize(x_9);
x_11 = lean_st_ref_set(x_3, x_10, x_6);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; size_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_14, 0, x_1);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
lean_ctor_set_usize(x_14, 1, x_15);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_17, 0, x_1);
x_18 = lean_unbox_usize(x_5);
lean_dec(x_5);
lean_ctor_set_usize(x_17, 1, x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_4);
if (x_24 == 0)
{
return x_4;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_4, 0);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_4);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_WithRpcRef_mk___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5) {
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
lean_object* x_9; size_t x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_11 = lean_usize_dec_eq(x_5, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_16 = lean_unbox_usize(x_15);
lean_dec(x_15);
x_17 = lean_box_usize(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2(lean_object* x_1, size_t x_2, size_t x_3) {
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
x_7 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; size_t x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unbox_usize(x_12);
lean_dec(x_12);
x_15 = lean_usize_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_free_object(x_1);
x_16 = lean_box(0);
return x_16;
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
lean_object* x_17; size_t x_18; 
lean_free_object(x_1);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_usize_shift_right(x_2, x_6);
x_1 = x_17;
x_2 = x_18;
goto _start;
}
default: 
{
lean_object* x_20; 
lean_free_object(x_1);
x_20 = lean_box(0);
return x_20;
}
}
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = 5;
x_23 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_24 = lean_usize_land(x_2, x_23);
x_25 = lean_usize_to_nat(x_24);
x_26 = lean_box(2);
x_27 = lean_array_get(x_26, x_21, x_25);
lean_dec(x_25);
lean_dec(x_21);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; size_t x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unbox_usize(x_28);
lean_dec(x_28);
x_31 = lean_usize_dec_eq(x_3, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_29);
return x_33;
}
}
case 1:
{
lean_object* x_34; size_t x_35; 
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_usize_shift_right(x_2, x_22);
x_1 = x_34;
x_2 = x_35;
goto _start;
}
default: 
{
lean_object* x_37; 
x_37 = lean_box(0);
return x_37;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3(x_38, x_39, lean_box(0), x_40, x_3);
lean_dec(x_39);
lean_dec(x_38);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1(lean_object* x_1, size_t x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_usize_to_uint64(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* x_9; size_t x_10; lean_object* x_11; uint64_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_11 = lean_array_fget(x_3, x_5);
x_12 = l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(x_10);
x_13 = lean_uint64_to_usize(x_12);
x_14 = 1;
x_15 = lean_usize_sub(x_1, x_14);
x_16 = 5;
x_17 = lean_usize_mul(x_16, x_15);
x_18 = lean_usize_shift_right(x_13, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_5, x_19);
lean_dec(x_5);
x_21 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_6, x_18, x_1, x_10, x_11);
x_4 = lean_box(0);
x_5 = x_20;
x_6 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4) {
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
x_12 = lean_box_usize(x_3);
x_13 = lean_array_push(x_5, x_12);
x_14 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_15 = lean_box_usize(x_3);
x_16 = lean_array_push(x_5, x_15);
x_17 = lean_array_push(x_6, x_4);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; size_t x_20; uint8_t x_21; 
x_19 = lean_array_fget(x_5, x_2);
x_20 = lean_unbox_usize(x_19);
lean_dec(x_19);
x_21 = lean_usize_dec_eq(x_3, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
lean_dec(x_2);
x_2 = x_23;
goto _start;
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_1);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_1, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 0);
lean_dec(x_27);
x_28 = lean_box_usize(x_3);
x_29 = lean_array_fset(x_5, x_2, x_28);
x_30 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_30);
lean_ctor_set(x_1, 0, x_29);
return x_1;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
x_31 = lean_box_usize(x_3);
x_32 = lean_array_fset(x_5, x_2, x_31);
x_33 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(lean_object* x_1, size_t x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
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
lean_object* x_19; lean_object* x_20; size_t x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_unbox_usize(x_19);
x_22 = lean_usize_dec_eq(x_4, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_free_object(x_15);
x_23 = lean_box_usize(x_4);
x_24 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_23, x_5);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_array_fset(x_17, x_12, x_25);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_20);
lean_dec(x_19);
x_27 = lean_box_usize(x_4);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_27);
x_28 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_28);
return x_1;
}
}
else
{
lean_object* x_29; lean_object* x_30; size_t x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_unbox_usize(x_29);
x_32 = lean_usize_dec_eq(x_4, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_box_usize(x_4);
x_34 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_29, x_30, x_33, x_5);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_array_fset(x_17, x_12, x_35);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_36);
return x_1;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_30);
lean_dec(x_29);
x_37 = lean_box_usize(x_4);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_5);
x_39 = lean_array_fset(x_17, x_12, x_38);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
}
}
case 1:
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_usize_shift_right(x_2, x_9);
x_43 = lean_usize_add(x_3, x_8);
x_44 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_41, x_42, x_43, x_4, x_5);
lean_ctor_set(x_15, 0, x_44);
x_45 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
else
{
lean_object* x_46; size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_15, 0);
lean_inc(x_46);
lean_dec(x_15);
x_47 = lean_usize_shift_right(x_2, x_9);
x_48 = lean_usize_add(x_3, x_8);
x_49 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_46, x_47, x_48, x_4, x_5);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_array_fset(x_17, x_12, x_50);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_51);
return x_1;
}
}
default: 
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_box_usize(x_4);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_5);
x_54 = lean_array_fset(x_17, x_12, x_53);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_54);
return x_1;
}
}
}
}
else
{
lean_object* x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
lean_dec(x_1);
x_56 = 1;
x_57 = 5;
x_58 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_59 = lean_usize_land(x_2, x_58);
x_60 = lean_usize_to_nat(x_59);
x_61 = lean_array_get_size(x_55);
x_62 = lean_nat_dec_lt(x_60, x_61);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; 
lean_dec(x_60);
lean_dec(x_5);
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_55);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_array_fget(x_55, x_60);
x_65 = lean_box(0);
x_66 = lean_array_fset(x_55, x_60, x_65);
switch (lean_obj_tag(x_64)) {
case 0:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; size_t x_70; uint8_t x_71; 
x_67 = lean_ctor_get(x_64, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_64, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_69 = x_64;
} else {
 lean_dec_ref(x_64);
 x_69 = lean_box(0);
}
x_70 = lean_unbox_usize(x_67);
x_71 = lean_usize_dec_eq(x_4, x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_69);
x_72 = lean_box_usize(x_4);
x_73 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_67, x_68, x_72, x_5);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_array_fset(x_66, x_60, x_74);
lean_dec(x_60);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_68);
lean_dec(x_67);
x_77 = lean_box_usize(x_4);
if (lean_is_scalar(x_69)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_69;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_5);
x_79 = lean_array_fset(x_66, x_60, x_78);
lean_dec(x_60);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
}
case 1:
{
lean_object* x_81; lean_object* x_82; size_t x_83; size_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_81 = lean_ctor_get(x_64, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 x_82 = x_64;
} else {
 lean_dec_ref(x_64);
 x_82 = lean_box(0);
}
x_83 = lean_usize_shift_right(x_2, x_57);
x_84 = lean_usize_add(x_3, x_56);
x_85 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_81, x_83, x_84, x_4, x_5);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(1, 1, 0);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_85);
x_87 = lean_array_fset(x_66, x_60, x_86);
lean_dec(x_60);
x_88 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_88, 0, x_87);
return x_88;
}
default: 
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_box_usize(x_4);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_5);
x_91 = lean_array_fset(x_66, x_60, x_90);
lean_dec(x_60);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_91);
return x_92;
}
}
}
}
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_1);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; size_t x_96; uint8_t x_97; 
x_94 = lean_unsigned_to_nat(0u);
x_95 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7(x_1, x_94, x_4, x_5);
x_96 = 7;
x_97 = lean_usize_dec_le(x_96, x_3);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_98 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_95);
x_99 = lean_unsigned_to_nat(4u);
x_100 = lean_nat_dec_lt(x_98, x_99);
lean_dec(x_98);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_95, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_dec(x_95);
x_103 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1;
x_104 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6(x_3, x_101, x_102, lean_box(0), x_94, x_103);
lean_dec(x_102);
lean_dec(x_101);
return x_104;
}
else
{
return x_95;
}
}
else
{
return x_95;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; size_t x_110; uint8_t x_111; 
x_105 = lean_ctor_get(x_1, 0);
x_106 = lean_ctor_get(x_1, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_1);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(0u);
x_109 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7(x_107, x_108, x_4, x_5);
x_110 = 7;
x_111 = lean_usize_dec_le(x_110, x_3);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_112 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_109);
x_113 = lean_unsigned_to_nat(4u);
x_114 = lean_nat_dec_lt(x_112, x_113);
lean_dec(x_112);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_109, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_109, 1);
lean_inc(x_116);
lean_dec(x_109);
x_117 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1;
x_118 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6(x_3, x_115, x_116, lean_box(0), x_108, x_117);
lean_dec(x_116);
lean_dec(x_115);
return x_118;
}
else
{
return x_109;
}
}
else
{
return x_109;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* x_9; size_t x_10; lean_object* x_11; size_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_11 = lean_array_fget(x_3, x_5);
x_12 = lean_unbox_usize(x_11);
lean_dec(x_11);
x_13 = lean_usize_to_uint64(x_10);
x_14 = lean_uint64_to_usize(x_13);
x_15 = 1;
x_16 = lean_usize_sub(x_1, x_15);
x_17 = 5;
x_18 = lean_usize_mul(x_17, x_16);
x_19 = lean_usize_shift_right(x_14, x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
x_22 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_6, x_19, x_1, x_10, x_12);
x_4 = lean_box(0);
x_5 = x_21;
x_6 = x_22;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_box_usize(x_3);
x_13 = lean_array_push(x_5, x_12);
x_14 = lean_box_usize(x_4);
x_15 = lean_array_push(x_6, x_14);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_16 = lean_box_usize(x_3);
x_17 = lean_array_push(x_5, x_16);
x_18 = lean_box_usize(x_4);
x_19 = lean_array_push(x_6, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; size_t x_22; uint8_t x_23; 
x_21 = lean_array_fget(x_5, x_2);
x_22 = lean_unbox_usize(x_21);
lean_dec(x_21);
x_23 = lean_usize_dec_eq(x_3, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_6);
lean_dec(x_5);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_2, x_24);
lean_dec(x_2);
x_2 = x_25;
goto _start;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_1, 1);
lean_dec(x_28);
x_29 = lean_ctor_get(x_1, 0);
lean_dec(x_29);
x_30 = lean_box_usize(x_3);
x_31 = lean_array_fset(x_5, x_2, x_30);
x_32 = lean_box_usize(x_4);
x_33 = lean_array_fset(x_6, x_2, x_32);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_33);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
x_34 = lean_box_usize(x_3);
x_35 = lean_array_fset(x_5, x_2, x_34);
x_36 = lean_box_usize(x_4);
x_37 = lean_array_fset(x_6, x_2, x_36);
lean_dec(x_2);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(lean_object* x_1, size_t x_2, size_t x_3, size_t x_4, size_t x_5) {
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
x_10 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
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
lean_object* x_19; lean_object* x_20; size_t x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_unbox_usize(x_19);
x_22 = lean_usize_dec_eq(x_4, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_free_object(x_15);
x_23 = lean_box_usize(x_4);
x_24 = lean_box_usize(x_5);
x_25 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_23, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_array_fset(x_17, x_12, x_26);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_20);
lean_dec(x_19);
x_28 = lean_box_usize(x_4);
x_29 = lean_box_usize(x_5);
lean_ctor_set(x_15, 1, x_29);
lean_ctor_set(x_15, 0, x_28);
x_30 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_30);
return x_1;
}
}
else
{
lean_object* x_31; lean_object* x_32; size_t x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_unbox_usize(x_31);
x_34 = lean_usize_dec_eq(x_4, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_box_usize(x_4);
x_36 = lean_box_usize(x_5);
x_37 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_31, x_32, x_35, x_36);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_array_fset(x_17, x_12, x_38);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_32);
lean_dec(x_31);
x_40 = lean_box_usize(x_4);
x_41 = lean_box_usize(x_5);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_fset(x_17, x_12, x_42);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_43);
return x_1;
}
}
}
case 1:
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_15);
if (x_44 == 0)
{
lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_15, 0);
x_46 = lean_usize_shift_right(x_2, x_9);
x_47 = lean_usize_add(x_3, x_8);
x_48 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_45, x_46, x_47, x_4, x_5);
lean_ctor_set(x_15, 0, x_48);
x_49 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_49);
return x_1;
}
else
{
lean_object* x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_15, 0);
lean_inc(x_50);
lean_dec(x_15);
x_51 = lean_usize_shift_right(x_2, x_9);
x_52 = lean_usize_add(x_3, x_8);
x_53 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_50, x_51, x_52, x_4, x_5);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_array_fset(x_17, x_12, x_54);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_55);
return x_1;
}
}
default: 
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_box_usize(x_4);
x_57 = lean_box_usize(x_5);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_array_fset(x_17, x_12, x_58);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_59);
return x_1;
}
}
}
}
else
{
lean_object* x_60; size_t x_61; size_t x_62; size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_60 = lean_ctor_get(x_1, 0);
lean_inc(x_60);
lean_dec(x_1);
x_61 = 1;
x_62 = 5;
x_63 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_64 = lean_usize_land(x_2, x_63);
x_65 = lean_usize_to_nat(x_64);
x_66 = lean_array_get_size(x_60);
x_67 = lean_nat_dec_lt(x_65, x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
lean_dec(x_65);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_60);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_array_fget(x_60, x_65);
x_70 = lean_box(0);
x_71 = lean_array_fset(x_60, x_65, x_70);
switch (lean_obj_tag(x_69)) {
case 0:
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; size_t x_75; uint8_t x_76; 
x_72 = lean_ctor_get(x_69, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_74 = x_69;
} else {
 lean_dec_ref(x_69);
 x_74 = lean_box(0);
}
x_75 = lean_unbox_usize(x_72);
x_76 = lean_usize_dec_eq(x_4, x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_74);
x_77 = lean_box_usize(x_4);
x_78 = lean_box_usize(x_5);
x_79 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_72, x_73, x_77, x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_array_fset(x_71, x_65, x_80);
lean_dec(x_65);
x_82 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_82, 0, x_81);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_73);
lean_dec(x_72);
x_83 = lean_box_usize(x_4);
x_84 = lean_box_usize(x_5);
if (lean_is_scalar(x_74)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_74;
}
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_fset(x_71, x_65, x_85);
lean_dec(x_65);
x_87 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_87, 0, x_86);
return x_87;
}
}
case 1:
{
lean_object* x_88; lean_object* x_89; size_t x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_88 = lean_ctor_get(x_69, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 x_89 = x_69;
} else {
 lean_dec_ref(x_69);
 x_89 = lean_box(0);
}
x_90 = lean_usize_shift_right(x_2, x_62);
x_91 = lean_usize_add(x_3, x_61);
x_92 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_88, x_90, x_91, x_4, x_5);
if (lean_is_scalar(x_89)) {
 x_93 = lean_alloc_ctor(1, 1, 0);
} else {
 x_93 = x_89;
}
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_array_fset(x_71, x_65, x_93);
lean_dec(x_65);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
return x_95;
}
default: 
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_box_usize(x_4);
x_97 = lean_box_usize(x_5);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_array_fset(x_71, x_65, x_98);
lean_dec(x_65);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
}
}
}
else
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_1);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; size_t x_104; uint8_t x_105; 
x_102 = lean_unsigned_to_nat(0u);
x_103 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11(x_1, x_102, x_4, x_5);
x_104 = 7;
x_105 = lean_usize_dec_le(x_104, x_3);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_106 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_103);
x_107 = lean_unsigned_to_nat(4u);
x_108 = lean_nat_dec_lt(x_106, x_107);
lean_dec(x_106);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_103, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
lean_dec(x_103);
x_111 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1;
x_112 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10(x_3, x_109, x_110, lean_box(0), x_102, x_111);
lean_dec(x_110);
lean_dec(x_109);
return x_112;
}
else
{
return x_103;
}
}
else
{
return x_103;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; size_t x_118; uint8_t x_119; 
x_113 = lean_ctor_get(x_1, 0);
x_114 = lean_ctor_get(x_1, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_1);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_unsigned_to_nat(0u);
x_117 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11(x_115, x_116, x_4, x_5);
x_118 = 7;
x_119 = lean_usize_dec_le(x_118, x_3);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_120 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_117);
x_121 = lean_unsigned_to_nat(4u);
x_122 = lean_nat_dec_lt(x_120, x_121);
lean_dec(x_120);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_123 = lean_ctor_get(x_117, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_dec(x_117);
x_125 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1;
x_126 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10(x_3, x_123, x_124, lean_box(0), x_116, x_125);
lean_dec(x_124);
lean_dec(x_123);
return x_126;
}
else
{
return x_117;
}
}
else
{
return x_117;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = lean_usize_to_uint64(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5) {
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
lean_object* x_9; size_t x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_11 = lean_usize_dec_eq(x_5, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13(lean_object* x_1, size_t x_2, size_t x_3) {
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
x_7 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; size_t x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unbox_usize(x_12);
lean_dec(x_12);
x_15 = lean_usize_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_free_object(x_1);
x_16 = lean_box(0);
return x_16;
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
lean_object* x_17; size_t x_18; 
lean_free_object(x_1);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_usize_shift_right(x_2, x_6);
x_1 = x_17;
x_2 = x_18;
goto _start;
}
default: 
{
lean_object* x_20; 
lean_free_object(x_1);
x_20 = lean_box(0);
return x_20;
}
}
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = 5;
x_23 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_24 = lean_usize_land(x_2, x_23);
x_25 = lean_usize_to_nat(x_24);
x_26 = lean_box(2);
x_27 = lean_array_get(x_26, x_21, x_25);
lean_dec(x_25);
lean_dec(x_21);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; size_t x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unbox_usize(x_28);
lean_dec(x_28);
x_31 = lean_usize_dec_eq(x_3, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_29);
return x_33;
}
}
case 1:
{
lean_object* x_34; size_t x_35; 
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_usize_shift_right(x_2, x_22);
x_1 = x_34;
x_2 = x_35;
goto _start;
}
default: 
{
lean_object* x_37; 
x_37 = lean_box(0);
return x_37;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14(x_38, x_39, lean_box(0), x_40, x_3);
lean_dec(x_39);
lean_dec(x_38);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(lean_object* x_1, size_t x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13(x_1, x_4, x_2);
return x_5;
}
}
static lean_object* _init_l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = l_Lean_Lsp_instInhabitedRpcRef;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_rpcStoreRef___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Server.Rpc.Basic", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Server.rpcStoreRef", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Found object ID in `refsById` but not in `aliveRefs`.", 53, 53);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Server_rpcStoreRef___rarg___closed__1;
x_2 = l_Lean_Server_rpcStoreRef___rarg___closed__2;
x_3 = lean_unsigned_to_nat(99u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Server_rpcStoreRef___rarg___closed__3;
x_6 = l_mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; size_t x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_usize(x_3, 2);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get_usize(x_2, 1);
lean_inc(x_5);
x_9 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1(x_5, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_3, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
lean_inc(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_7);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_usize(x_15, 2, x_8);
x_16 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_4, x_6, x_15);
x_17 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8(x_5, x_8, x_6);
x_18 = 1;
x_19 = lean_usize_add(x_6, x_18);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_3, 0, x_16);
lean_ctor_set_usize(x_3, 2, x_19);
x_20 = lean_box_usize(x_6);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_3);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_3);
lean_inc(x_7);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_7);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set_usize(x_24, 2, x_8);
x_25 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_4, x_6, x_24);
x_26 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8(x_5, x_8, x_6);
x_27 = 1;
x_28 = lean_usize_add(x_6, x_27);
x_29 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set_usize(x_29, 2, x_28);
x_30 = lean_box_usize(x_6);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; size_t x_33; lean_object* x_34; 
lean_dec(x_1);
x_32 = lean_ctor_get(x_9, 0);
lean_inc(x_32);
lean_dec(x_9);
x_33 = lean_unbox_usize(x_32);
lean_inc(x_4);
x_34 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(x_4, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_32);
lean_dec(x_5);
lean_dec(x_4);
x_35 = l_Lean_Server_rpcStoreRef___rarg___closed__4;
x_36 = l_panic___at_Lean_Server_rpcStoreRef___spec__15(x_35);
x_37 = lean_unbox_usize(x_36);
lean_dec(x_36);
x_38 = lean_box_usize(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
return x_39;
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_3);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_3, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_3, 0);
lean_dec(x_42);
x_43 = lean_ctor_get(x_34, 0);
lean_inc(x_43);
lean_dec(x_34);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_43, 1);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_45, x_46);
lean_dec(x_45);
lean_ctor_set(x_43, 1, x_47);
x_48 = lean_unbox_usize(x_32);
x_49 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_4, x_48, x_43);
lean_ctor_set(x_3, 0, x_49);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_32);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
else
{
lean_object* x_51; size_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_ctor_get(x_43, 0);
x_52 = lean_ctor_get_usize(x_43, 2);
x_53 = lean_ctor_get(x_43, 1);
lean_inc(x_53);
lean_inc(x_51);
lean_dec(x_43);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_add(x_53, x_54);
lean_dec(x_53);
x_56 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set_usize(x_56, 2, x_52);
x_57 = lean_unbox_usize(x_32);
x_58 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_4, x_57, x_56);
lean_ctor_set(x_3, 0, x_58);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_32);
lean_ctor_set(x_59, 1, x_3);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; size_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; size_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_3);
x_60 = lean_ctor_get(x_34, 0);
lean_inc(x_60);
lean_dec(x_34);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get_usize(x_60, 2);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_64 = x_60;
} else {
 lean_dec_ref(x_60);
 x_64 = lean_box(0);
}
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_63, x_65);
lean_dec(x_63);
if (lean_is_scalar(x_64)) {
 x_67 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
} else {
 x_67 = x_64;
}
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set_usize(x_67, 2, x_62);
x_68 = lean_unbox_usize(x_32);
x_69 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_4, x_68, x_67);
x_70 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_5);
lean_ctor_set_usize(x_70, 2, x_6);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_32);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_rpcStoreRef___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_7 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__3(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_4 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__7(x_1, x_2, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5(x_1, x_6, x_7, x_8, x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_rpcStoreRef___spec__10(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_rpcStoreRef___spec__11(x_1, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__9(x_1, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__8(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_7 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_rpcStoreRef___spec__14(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__13(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_4 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_rpcStoreRef___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RPC reference '", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' is not valid", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RPC call type mismatch in reference '", 37, 37);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'\nexpected '", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("', ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("got '", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_rpcGetRef___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_6 = lean_usize_to_nat(x_2);
x_7 = l_Nat_reprFast(x_6);
x_8 = l_Lean_Server_rpcGetRef___rarg___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Lean_Server_rpcGetRef___rarg___closed__2;
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_usize(x_14, 2);
lean_dec(x_14);
x_17 = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___rarg(x_15, x_1);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_18 = lean_usize_to_nat(x_2);
x_19 = l_Nat_reprFast(x_18);
x_20 = l_Lean_Server_rpcGetRef___rarg___closed__3;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = l_Lean_Server_rpcGetRef___rarg___closed__4;
x_23 = lean_string_append(x_21, x_22);
x_24 = 1;
x_25 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6;
x_26 = l_Lean_Name_toString(x_1, x_24, x_25);
x_27 = lean_string_append(x_23, x_26);
lean_dec(x_26);
x_28 = l_Lean_Server_rpcGetRef___rarg___closed__5;
x_29 = lean_string_append(x_27, x_28);
x_30 = lean_ctor_get(x_15, 0);
lean_inc(x_30);
lean_dec(x_15);
x_31 = l_Lean_Name_toString(x_30, x_24, x_25);
x_32 = l_Lean_Server_rpcGetRef___rarg___closed__6;
x_33 = lean_string_append(x_32, x_31);
lean_dec(x_31);
x_34 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_35 = lean_string_append(x_33, x_34);
x_36 = lean_string_append(x_29, x_35);
lean_dec(x_35);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_36);
return x_5;
}
else
{
uint8_t x_37; 
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_17);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_17, 0);
x_39 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set_usize(x_39, 1, x_16);
lean_ctor_set(x_17, 0, x_39);
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
lean_inc(x_40);
lean_dec(x_17);
x_41 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set_usize(x_41, 1, x_16);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; size_t x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_5, 0);
lean_inc(x_43);
lean_dec(x_5);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get_usize(x_43, 2);
lean_dec(x_43);
x_46 = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___rarg(x_44, x_1);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_47 = lean_usize_to_nat(x_2);
x_48 = l_Nat_reprFast(x_47);
x_49 = l_Lean_Server_rpcGetRef___rarg___closed__3;
x_50 = lean_string_append(x_49, x_48);
lean_dec(x_48);
x_51 = l_Lean_Server_rpcGetRef___rarg___closed__4;
x_52 = lean_string_append(x_50, x_51);
x_53 = 1;
x_54 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6;
x_55 = l_Lean_Name_toString(x_1, x_53, x_54);
x_56 = lean_string_append(x_52, x_55);
lean_dec(x_55);
x_57 = l_Lean_Server_rpcGetRef___rarg___closed__5;
x_58 = lean_string_append(x_56, x_57);
x_59 = lean_ctor_get(x_44, 0);
lean_inc(x_59);
lean_dec(x_44);
x_60 = l_Lean_Name_toString(x_59, x_53, x_54);
x_61 = l_Lean_Server_rpcGetRef___rarg___closed__6;
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_64 = lean_string_append(x_62, x_63);
x_65 = lean_string_append(x_58, x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_44);
lean_dec(x_1);
x_67 = lean_ctor_get(x_46, 0);
lean_inc(x_67);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 x_68 = x_46;
} else {
 lean_dec_ref(x_46);
 x_68 = lean_box(0);
}
x_69 = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set_usize(x_69, 1, x_45);
if (lean_is_scalar(x_68)) {
 x_70 = lean_alloc_ctor(1, 1, 0);
} else {
 x_70 = x_68;
}
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_rpcGetRef___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_Server_rpcGetRef___rarg(x_1, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; size_t x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_usize_dec_eq(x_8, x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; size_t x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unbox_usize(x_11);
lean_dec(x_11);
x_13 = lean_usize_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_dec(x_8);
lean_dec(x_4);
return x_1;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_1, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_array_set(x_4, x_8, x_9);
x_24 = lean_usize_shift_right(x_2, x_5);
x_25 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(x_22, x_24, x_3);
lean_inc(x_25);
x_26 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
lean_ctor_set(x_10, 0, x_25);
x_27 = lean_array_set(x_23, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_25);
lean_free_object(x_10);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_array_set(x_23, x_8, x_28);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_30);
return x_1;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_28, 0);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_28);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_array_set(x_23, x_8, x_33);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_10, 0);
lean_inc(x_35);
lean_dec(x_10);
x_36 = lean_array_set(x_4, x_8, x_9);
x_37 = lean_usize_shift_right(x_2, x_5);
x_38 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(x_35, x_37, x_3);
lean_inc(x_38);
x_39 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_38);
x_41 = lean_array_set(x_36, x_8, x_40);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_38);
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_array_set(x_36, x_8, x_46);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; size_t x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_1);
x_48 = lean_ctor_get(x_10, 0);
lean_inc(x_48);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_49 = x_10;
} else {
 lean_dec_ref(x_10);
 x_49 = lean_box(0);
}
x_50 = lean_array_set(x_4, x_8, x_9);
x_51 = lean_usize_shift_right(x_2, x_5);
x_52 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(x_48, x_51, x_3);
lean_inc(x_52);
x_53 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
if (lean_is_scalar(x_49)) {
 x_54 = lean_alloc_ctor(1, 1, 0);
} else {
 x_54 = x_49;
}
lean_ctor_set(x_54, 0, x_52);
x_55 = lean_array_set(x_50, x_8, x_54);
lean_dec(x_8);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_52);
lean_dec(x_49);
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_60 = x_57;
} else {
 lean_dec_ref(x_57);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_array_set(x_50, x_8, x_61);
lean_dec(x_8);
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_62);
return x_63;
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
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_1, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3(x_64, x_3, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_dec(x_65);
lean_dec(x_64);
return x_1;
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_1);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_1, 1);
lean_dec(x_69);
x_70 = lean_ctor_get(x_1, 0);
lean_dec(x_70);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
lean_dec(x_67);
lean_inc(x_71);
x_72 = l_Array_eraseIdx___rarg(x_64, x_71, lean_box(0));
x_73 = l_Array_eraseIdx___rarg(x_65, x_71, lean_box(0));
lean_ctor_set(x_1, 1, x_73);
lean_ctor_set(x_1, 0, x_72);
return x_1;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_1);
x_74 = lean_ctor_get(x_67, 0);
lean_inc(x_74);
lean_dec(x_67);
lean_inc(x_74);
x_75 = l_Array_eraseIdx___rarg(x_64, x_74, lean_box(0));
x_76 = l_Array_eraseIdx___rarg(x_65, x_74, lean_box(0));
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(lean_object* x_1, size_t x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Lsp_hashRpcRef____x40_Lean_Server_Rpc_Basic___hyg_88_(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; size_t x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_usize_dec_eq(x_8, x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; size_t x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unbox_usize(x_11);
lean_dec(x_11);
x_13 = lean_usize_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_dec(x_8);
lean_dec(x_4);
return x_1;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_1, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_array_set(x_4, x_8, x_9);
x_24 = lean_usize_shift_right(x_2, x_5);
x_25 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(x_22, x_24, x_3);
lean_inc(x_25);
x_26 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
lean_ctor_set(x_10, 0, x_25);
x_27 = lean_array_set(x_23, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_25);
lean_free_object(x_10);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_array_set(x_23, x_8, x_28);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_30);
return x_1;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_28, 0);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_28);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_array_set(x_23, x_8, x_33);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_10, 0);
lean_inc(x_35);
lean_dec(x_10);
x_36 = lean_array_set(x_4, x_8, x_9);
x_37 = lean_usize_shift_right(x_2, x_5);
x_38 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(x_35, x_37, x_3);
lean_inc(x_38);
x_39 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_38);
x_41 = lean_array_set(x_36, x_8, x_40);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_38);
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_array_set(x_36, x_8, x_46);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; size_t x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_1);
x_48 = lean_ctor_get(x_10, 0);
lean_inc(x_48);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_49 = x_10;
} else {
 lean_dec_ref(x_10);
 x_49 = lean_box(0);
}
x_50 = lean_array_set(x_4, x_8, x_9);
x_51 = lean_usize_shift_right(x_2, x_5);
x_52 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(x_48, x_51, x_3);
lean_inc(x_52);
x_53 = l_Lean_PersistentHashMap_isUnaryNode___rarg(x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
if (lean_is_scalar(x_49)) {
 x_54 = lean_alloc_ctor(1, 1, 0);
} else {
 x_54 = x_49;
}
lean_ctor_set(x_54, 0, x_52);
x_55 = lean_array_set(x_50, x_8, x_54);
lean_dec(x_8);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_52);
lean_dec(x_49);
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_60 = x_57;
} else {
 lean_dec_ref(x_57);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_array_set(x_50, x_8, x_61);
lean_dec(x_8);
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_62);
return x_63;
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
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_1, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6(x_64, x_3, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_dec(x_65);
lean_dec(x_64);
return x_1;
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_1);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_1, 1);
lean_dec(x_69);
x_70 = lean_ctor_get(x_1, 0);
lean_dec(x_70);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
lean_dec(x_67);
lean_inc(x_71);
x_72 = l_Array_eraseIdx___rarg(x_64, x_71, lean_box(0));
x_73 = l_Array_eraseIdx___rarg(x_65, x_71, lean_box(0));
lean_ctor_set(x_1, 1, x_73);
lean_ctor_set(x_1, 0, x_72);
return x_1;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_1);
x_74 = lean_ctor_get(x_67, 0);
lean_inc(x_74);
lean_dec(x_67);
lean_inc(x_74);
x_75 = l_Array_eraseIdx___rarg(x_64, x_74, lean_box(0));
x_76 = l_Array_eraseIdx___rarg(x_65, x_74, lean_box(0));
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(lean_object* x_1, size_t x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_usize_to_uint64(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_rpcReleaseRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_rpcReleaseRef___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get_usize(x_2, 2);
lean_inc(x_3);
x_6 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_rpcStoreRef___spec__12(x_3, x_1);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_dec(x_6);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get_usize(x_13, 2);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
lean_inc(x_18);
lean_ctor_set(x_13, 1, x_18);
x_19 = l_Lean_Server_rpcReleaseRef___closed__1;
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_18, x_20);
lean_dec(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_3, x_1, x_13);
lean_ctor_set(x_2, 0, x_22);
x_23 = lean_box(0);
x_24 = lean_apply_2(x_19, x_23, x_2);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_13);
x_25 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(x_3, x_1);
x_26 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(x_4, x_15);
lean_ctor_set(x_2, 1, x_26);
lean_ctor_set(x_2, 0, x_25);
x_27 = lean_box(0);
x_28 = lean_apply_2(x_19, x_27, x_2);
return x_28;
}
}
else
{
lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get_usize(x_13, 2);
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
lean_inc(x_29);
lean_dec(x_13);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_sub(x_31, x_32);
lean_dec(x_31);
lean_inc(x_33);
x_34 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set_usize(x_34, 2, x_30);
x_35 = l_Lean_Server_rpcReleaseRef___closed__1;
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_dec_eq(x_33, x_36);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_3, x_1, x_34);
lean_ctor_set(x_2, 0, x_38);
x_39 = lean_box(0);
x_40 = lean_apply_2(x_35, x_39, x_2);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_34);
x_41 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(x_3, x_1);
x_42 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(x_4, x_30);
lean_ctor_set(x_2, 1, x_42);
lean_ctor_set(x_2, 0, x_41);
x_43 = lean_box(0);
x_44 = lean_apply_2(x_35, x_43, x_2);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_2);
x_45 = lean_ctor_get(x_6, 0);
lean_inc(x_45);
lean_dec(x_6);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get_usize(x_45, 2);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_49 = x_45;
} else {
 lean_dec_ref(x_45);
 x_49 = lean_box(0);
}
x_50 = lean_unsigned_to_nat(1u);
x_51 = lean_nat_sub(x_48, x_50);
lean_dec(x_48);
lean_inc(x_51);
if (lean_is_scalar(x_49)) {
 x_52 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
} else {
 x_52 = x_49;
}
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set_usize(x_52, 2, x_47);
x_53 = l_Lean_Server_rpcReleaseRef___closed__1;
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_nat_dec_eq(x_51, x_54);
lean_dec(x_51);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = l_Lean_PersistentHashMap_insert___at_Lean_Server_rpcStoreRef___spec__4(x_3, x_1, x_52);
x_57 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_4);
lean_ctor_set_usize(x_57, 2, x_5);
x_58 = lean_box(0);
x_59 = lean_apply_2(x_53, x_58, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_52);
x_60 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(x_3, x_1);
x_61 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(x_4, x_47);
x_62 = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set_usize(x_62, 2, x_5);
x_63 = lean_box(0);
x_64 = lean_apply_2(x_53, x_63, x_62);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__3(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__2(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_4 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Array_idxOfAux___at_Lean_Server_rpcReleaseRef___spec__6(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Lean_PersistentHashMap_eraseAux___at_Lean_Server_rpcReleaseRef___spec__5(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_4 = l_Lean_PersistentHashMap_erase___at_Lean_Server_rpcReleaseRef___spec__4(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_rpcReleaseRef___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Lean_Server_rpcReleaseRef(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonadExcept_ofExcept___at_Lean_Server_instRpcEncodableOfFromJsonOfToJson___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
static lean_object* _init_l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_9, x_8, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_ctor_set(x_2, 0, x_12);
x_13 = l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(x_2);
lean_dec(x_2);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
lean_ctor_set(x_2, 0, x_14);
x_16 = l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(x_2);
lean_dec(x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_2(x_19, x_18, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_23 = x_20;
} else {
 lean_dec_ref(x_20);
 x_23 = lean_box(0);
}
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_21);
x_25 = l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(x_24);
lean_dec(x_24);
if (lean_is_scalar(x_23)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_23;
}
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2(x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_9, x_8, x_3);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_free_object(x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_10, 0);
lean_ctor_set(x_5, 0, x_15);
lean_ctor_set(x_10, 0, x_5);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
lean_ctor_set(x_5, 0, x_16);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_5);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_5, 0);
lean_inc(x_18);
lean_dec(x_5);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_2(x_19, x_18, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 x_22 = x_20;
} else {
 lean_dec_ref(x_20);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(0, 1, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 x_25 = x_20;
} else {
 lean_dec_ref(x_20);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(1, 1, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___rarg___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Option_toJson___at_Lean_Server_instRpcEncodableOption___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_usize_dec_lt(x_3, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_9 = lean_array_uget(x_4, x_3);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_4, x_3, x_10);
x_12 = lean_apply_2(x_6, x_9, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_17 = lean_array_uset(x_11, x_3, x_13);
x_3 = x_16;
x_4 = x_17;
x_5 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_array_uset(x_7, x_2, x_5);
x_2 = x_9;
x_3 = x_10;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at_Lean_Server_instRpcEncodableArray___spec__2(lean_object* x_1) {
_start:
{
size_t x_2; size_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_array_size(x_1);
x_3 = 0;
x_4 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3(x_2, x_3, x_1);
x_5 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_8, x_2, x_6);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
static lean_object* _init_l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected JSON array, got '", 26, 26);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(80u);
x_3 = l_Lean_Json_pretty(x_1, x_2);
x_4 = l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1;
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(80u);
x_10 = l_Lean_Json_pretty(x_1, x_9);
x_11 = l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
case 4:
{
lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_array_size(x_16);
x_18 = 0;
x_19 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5(x_17, x_18, x_16);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_unsigned_to_nat(80u);
lean_inc(x_1);
x_21 = l_Lean_Json_pretty(x_1, x_20);
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_1, 0);
lean_dec(x_23);
x_24 = l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1;
x_25 = lean_string_append(x_24, x_21);
lean_dec(x_21);
x_26 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_27 = lean_string_append(x_25, x_26);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_28 = l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1;
x_29 = lean_string_append(x_28, x_21);
lean_dec(x_21);
x_30 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_usize_dec_lt(x_3, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_array_uget(x_4, x_3);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_4, x_3, x_10);
lean_inc(x_5);
x_12 = lean_apply_2(x_6, x_9, x_5);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
else
{
lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = 1;
x_18 = lean_usize_add(x_3, x_17);
x_19 = lean_array_uset(x_11, x_3, x_16);
x_3 = x_18;
x_4 = x_19;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_array_size(x_2);
x_5 = 0;
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg(x_1, x_4, x_5, x_2, x_3);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Array_toJson___at_Lean_Server_instRpcEncodableArray___spec__2(x_8);
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
x_12 = l_Array_toJson___at_Lean_Server_instRpcEncodableArray___spec__2(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4(x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_array_size(x_8);
x_10 = 0;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg(x_1, x_9, x_10, x_8, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___rarg___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__1___rarg(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__3(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__5(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__6___rarg(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Prod_toJson___at_Lean_Server_instRpcEncodableProd___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_box(0);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_5);
lean_ctor_set(x_1, 0, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_array_mk(x_6);
x_8 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_mk(x_13);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
static lean_object* _init_l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected pair, got '", 20, 20);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(80u);
x_3 = l_Lean_Json_pretty(x_1, x_2);
x_4 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(80u);
x_10 = l_Lean_Json_pretty(x_1, x_9);
x_11 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
case 4:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_array_get_size(x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_dec_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_16);
x_20 = lean_unsigned_to_nat(80u);
lean_inc(x_1);
x_21 = l_Lean_Json_pretty(x_1, x_20);
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_1, 0);
lean_dec(x_23);
x_24 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_25 = lean_string_append(x_24, x_21);
lean_dec(x_21);
x_26 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_27 = lean_string_append(x_25, x_26);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_27);
return x_1;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_28 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_29 = lean_string_append(x_28, x_21);
lean_dec(x_21);
x_30 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_1);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_1, 0);
lean_dec(x_34);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_array_fget(x_16, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_array_fget(x_16, x_37);
lean_dec(x_16);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_1);
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_array_fget(x_16, x_40);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_array_fget(x_16, x_42);
lean_dec(x_16);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
}
}
default: 
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_unsigned_to_nat(80u);
lean_inc(x_1);
x_47 = l_Lean_Json_pretty(x_1, x_46);
x_48 = !lean_is_exclusive(x_1);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_1, 0);
lean_dec(x_49);
x_50 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_51 = lean_string_append(x_50, x_47);
lean_dec(x_47);
x_52 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_53 = lean_string_append(x_51, x_52);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_53);
return x_1;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_1);
x_54 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1;
x_55 = lean_string_append(x_54, x_47);
lean_dec(x_47);
x_56 = l_Lean_Server_rpcGetRef___rarg___closed__7;
x_57 = lean_string_append(x_55, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_4);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_12, x_6, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_ctor_set(x_13, 1, x_15);
lean_ctor_set(x_13, 0, x_10);
x_17 = l_Prod_toJson___at_Lean_Server_instRpcEncodableProd___spec__1(x_13);
lean_ctor_set(x_8, 1, x_16);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Prod_toJson___at_Lean_Server_instRpcEncodableProd___spec__1(x_20);
lean_ctor_set(x_8, 1, x_19);
lean_ctor_set(x_8, 0, x_21);
return x_8;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_apply_2(x_24, x_6, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_26);
x_30 = l_Prod_toJson___at_Lean_Server_instRpcEncodableProd___spec__1(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_27);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_4);
x_14 = lean_apply_2(x_13, x_11, x_4);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_free_object(x_9);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_apply_2(x_19, x_12, x_4);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_18);
lean_free_object(x_9);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_20, 0);
lean_ctor_set(x_9, 1, x_25);
lean_ctor_set(x_9, 0, x_18);
lean_ctor_set(x_20, 0, x_9);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
lean_ctor_set(x_9, 1, x_26);
lean_ctor_set(x_9, 0, x_18);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_9);
return x_27;
}
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_9, 0);
x_29 = lean_ctor_get(x_9, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_9);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_dec(x_1);
lean_inc(x_4);
x_31 = lean_apply_2(x_30, x_28, x_4);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_29);
lean_dec(x_4);
lean_dec(x_2);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 1, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 0);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
lean_dec(x_2);
x_37 = lean_apply_2(x_36, x_29, x_4);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_39 = x_37;
} else {
 lean_dec_ref(x_37);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 1, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_38);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_42 = x_37;
} else {
 lean_dec_ref(x_37);
 x_42 = lean_box(0);
}
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_35);
lean_ctor_set(x_43, 1, x_41);
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(1, 1, 0);
} else {
 x_44 = x_42;
}
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___rarg___lambda__1), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___rarg___lambda__2), 4, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_4, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_alloc_closure((void*)(l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_alloc_closure((void*)(l_StateT_pure___at_Lean_Server_instRpcEncodableStateMRpcObjectStore___spec__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg___lambda__2), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Server_rpcStoreRef___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_8 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187_(x_7);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_12 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187_(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120_(x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
lean_object* x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_10 = l_Lean_Server_rpcGetRef___rarg(x_1, x_9, x_3);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init_Dynamic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Json(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Dynamic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedRpcRef___closed__1 = _init_l_Lean_Lsp_instInhabitedRpcRef___closed__1();
l_Lean_Lsp_instInhabitedRpcRef = _init_l_Lean_Lsp_instInhabitedRpcRef();
l_Lean_Lsp_instBEqRpcRef___closed__1 = _init_l_Lean_Lsp_instBEqRpcRef___closed__1();
lean_mark_persistent(l_Lean_Lsp_instBEqRpcRef___closed__1);
l_Lean_Lsp_instBEqRpcRef = _init_l_Lean_Lsp_instBEqRpcRef();
lean_mark_persistent(l_Lean_Lsp_instBEqRpcRef);
l_Lean_Lsp_instHashableRpcRef___closed__1 = _init_l_Lean_Lsp_instHashableRpcRef___closed__1();
lean_mark_persistent(l_Lean_Lsp_instHashableRpcRef___closed__1);
l_Lean_Lsp_instHashableRpcRef = _init_l_Lean_Lsp_instHashableRpcRef();
lean_mark_persistent(l_Lean_Lsp_instHashableRpcRef);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__1);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__2);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__3);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__4);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__5);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__6);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__7);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__8);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__9);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__10);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__11);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__12);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__13);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_fromJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_120____closed__14);
l_Lean_Lsp_instFromJsonRpcRef___closed__1 = _init_l_Lean_Lsp_instFromJsonRpcRef___closed__1();
lean_mark_persistent(l_Lean_Lsp_instFromJsonRpcRef___closed__1);
l_Lean_Lsp_instFromJsonRpcRef = _init_l_Lean_Lsp_instFromJsonRpcRef();
lean_mark_persistent(l_Lean_Lsp_instFromJsonRpcRef);
l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1 = _init_l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1();
lean_mark_persistent(l___private_Lean_Server_Rpc_Basic_0__Lean_Lsp_toJsonRpcRef____x40_Lean_Server_Rpc_Basic___hyg_187____closed__1);
l_Lean_Lsp_instToJsonRpcRef___closed__1 = _init_l_Lean_Lsp_instToJsonRpcRef___closed__1();
lean_mark_persistent(l_Lean_Lsp_instToJsonRpcRef___closed__1);
l_Lean_Lsp_instToJsonRpcRef = _init_l_Lean_Lsp_instToJsonRpcRef();
lean_mark_persistent(l_Lean_Lsp_instToJsonRpcRef);
l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_ = _init_l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_();
lean_mark_persistent(l_Lean_Server_initFn___boxed__const__1____x40_Lean_Server_Rpc_Basic___hyg_289_);
if (builtin) {res = l_Lean_Server_initFn____x40_Lean_Server_Rpc_Basic___hyg_289_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_freshWithRpcRefId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_freshWithRpcRefId);
lean_dec_ref(res);
}l_Lean_Server_WithRpcRef_mk___rarg___closed__1 = _init_l_Lean_Server_WithRpcRef_mk___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_WithRpcRef_mk___rarg___closed__1);
l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__1();
l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_rpcStoreRef___spec__2___closed__2();
l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at_Lean_Server_rpcStoreRef___spec__5___closed__1);
l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1 = _init_l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1();
lean_mark_persistent(l_panic___at_Lean_Server_rpcStoreRef___spec__15___boxed__const__1);
l_Lean_Server_rpcStoreRef___rarg___closed__1 = _init_l_Lean_Server_rpcStoreRef___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___rarg___closed__1);
l_Lean_Server_rpcStoreRef___rarg___closed__2 = _init_l_Lean_Server_rpcStoreRef___rarg___closed__2();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___rarg___closed__2);
l_Lean_Server_rpcStoreRef___rarg___closed__3 = _init_l_Lean_Server_rpcStoreRef___rarg___closed__3();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___rarg___closed__3);
l_Lean_Server_rpcStoreRef___rarg___closed__4 = _init_l_Lean_Server_rpcStoreRef___rarg___closed__4();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___rarg___closed__4);
l_Lean_Server_rpcGetRef___rarg___closed__1 = _init_l_Lean_Server_rpcGetRef___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__1);
l_Lean_Server_rpcGetRef___rarg___closed__2 = _init_l_Lean_Server_rpcGetRef___rarg___closed__2();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__2);
l_Lean_Server_rpcGetRef___rarg___closed__3 = _init_l_Lean_Server_rpcGetRef___rarg___closed__3();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__3);
l_Lean_Server_rpcGetRef___rarg___closed__4 = _init_l_Lean_Server_rpcGetRef___rarg___closed__4();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__4);
l_Lean_Server_rpcGetRef___rarg___closed__5 = _init_l_Lean_Server_rpcGetRef___rarg___closed__5();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__5);
l_Lean_Server_rpcGetRef___rarg___closed__6 = _init_l_Lean_Server_rpcGetRef___rarg___closed__6();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__6);
l_Lean_Server_rpcGetRef___rarg___closed__7 = _init_l_Lean_Server_rpcGetRef___rarg___closed__7();
lean_mark_persistent(l_Lean_Server_rpcGetRef___rarg___closed__7);
l_Lean_Server_rpcReleaseRef___closed__1 = _init_l_Lean_Server_rpcReleaseRef___closed__1();
lean_mark_persistent(l_Lean_Server_rpcReleaseRef___closed__1);
l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1 = _init_l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1();
lean_mark_persistent(l_Option_fromJson_x3f___at_Lean_Server_instRpcEncodableOption___spec__2___closed__1);
l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1 = _init_l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1();
lean_mark_persistent(l_Array_fromJson_x3f___at_Lean_Server_instRpcEncodableArray___spec__4___closed__1);
l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1 = _init_l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1();
lean_mark_persistent(l_Prod_fromJson_x3f___at_Lean_Server_instRpcEncodableProd___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
