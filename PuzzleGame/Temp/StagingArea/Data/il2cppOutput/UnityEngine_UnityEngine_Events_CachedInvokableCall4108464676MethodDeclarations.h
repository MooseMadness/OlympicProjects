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

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t4108464676;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m3238306320_gshared (CachedInvokableCall_1_t4108464676 * __this, Object_t1181371020 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3238306320(__this, ___target0, ___theFunction1, ___argument2, method) ((  void (*) (CachedInvokableCall_1_t4108464676 *, Object_t1181371020 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3238306320_gshared)(__this, ___target0, ___theFunction1, ___argument2, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m4097553971_gshared (CachedInvokableCall_1_t4108464676 * __this, ObjectU5BU5D_t3632007997* ___args0, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m4097553971(__this, ___args0, method) ((  void (*) (CachedInvokableCall_1_t4108464676 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))CachedInvokableCall_1_Invoke_m4097553971_gshared)(__this, ___args0, method)
