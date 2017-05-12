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

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1924158714;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_2__ctor_m3717034779_gshared (UnityEvent_2_t1924158714 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m3717034779(__this, method) ((  void (*) (UnityEvent_2_t1924158714 *, const MethodInfo*))UnityEvent_2__ctor_m3717034779_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2783251718_gshared (UnityEvent_2_t1924158714 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m2783251718(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t1924158714 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m2783251718_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_2_GetDelegate_m2147273130_gshared (UnityEvent_2_t1924158714 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m2147273130(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_2_t1924158714 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m2147273130_gshared)(__this, ___target0, ___theFunction1, method)
