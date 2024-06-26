// Lean compiler output
// Module: Init.Data.Int.Order
// Imports: Init.Data.Int.Lemmas Init.ByCases
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
LEAN_EXPORT lean_object* l_Int_instTransLtLe;
LEAN_EXPORT lean_object* l_Int_instTransLeLt;
LEAN_EXPORT lean_object* l_Int_instTransLt;
LEAN_EXPORT lean_object* l_Int_instTransLe;
static lean_object* _init_l_Int_instTransLe() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_Int_instTransLtLe() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_Int_instTransLeLt() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_Int_instTransLt() {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init_Data_Int_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Init_ByCases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Int_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Int_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_instTransLe = _init_l_Int_instTransLe();
l_Int_instTransLtLe = _init_l_Int_instTransLtLe();
l_Int_instTransLeLt = _init_l_Int_instTransLeLt();
l_Int_instTransLt = _init_l_Int_instTransLt();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
