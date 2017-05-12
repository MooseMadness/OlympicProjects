#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t302200277;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3438229060_gshared (Comparison_1_t302200277 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m3438229060(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t302200277 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3438229060_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m4047872872_gshared (Comparison_1_t302200277 * __this, Vector3_t465617797  ___x0, Vector3_t465617797  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m4047872872(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t302200277 *, Vector3_t465617797 , Vector3_t465617797 , const MethodInfo*))Comparison_1_Invoke_m4047872872_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1103040431_gshared (Comparison_1_t302200277 * __this, Vector3_t465617797  ___x0, Vector3_t465617797  ___y1, AsyncCallback_t889871978 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1103040431(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t302200277 *, Vector3_t465617797 , Vector3_t465617797 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1103040431_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2678763282_gshared (Comparison_1_t302200277 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2678763282(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t302200277 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2678763282_gshared)(__this, ___result0, method)
