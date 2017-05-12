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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t3304039235;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes4191623219.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1567825400_gshared (Predicate_1_t3304039235 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m1567825400(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t3304039235 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1567825400_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3860206640_gshared (Predicate_1_t3304039235 * __this, RaycastResult_t4191623219  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3860206640(__this, ___obj0, method) ((  bool (*) (Predicate_1_t3304039235 *, RaycastResult_t4191623219 , const MethodInfo*))Predicate_1_Invoke_m3860206640_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m4068629879_gshared (Predicate_1_t3304039235 * __this, RaycastResult_t4191623219  ___obj0, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m4068629879(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t3304039235 *, RaycastResult_t4191623219 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m4068629879_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m973058386_gshared (Predicate_1_t3304039235 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m973058386(__this, ___result0, method) ((  bool (*) (Predicate_1_t3304039235 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m973058386_gshared)(__this, ___result0, method)
