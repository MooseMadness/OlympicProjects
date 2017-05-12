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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t317395861;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m1266646666_gshared (UnityAction_1_t317395861 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m1266646666(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t317395861 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1266646666_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2702242020_gshared (UnityAction_1_t317395861 * __this, Vector2_t465617798  ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m2702242020(__this, ___arg00, method) ((  void (*) (UnityAction_1_t317395861 *, Vector2_t465617798 , const MethodInfo*))UnityAction_1_Invoke_m2702242020_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m4083379797_gshared (UnityAction_1_t317395861 * __this, Vector2_t465617798  ___arg00, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m4083379797(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t317395861 *, Vector2_t465617798 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m4083379797_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m539982532_gshared (UnityAction_1_t317395861 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m539982532(__this, ___result0, method) ((  void (*) (UnityAction_1_t317395861 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m539982532_gshared)(__this, ___result0, method)
