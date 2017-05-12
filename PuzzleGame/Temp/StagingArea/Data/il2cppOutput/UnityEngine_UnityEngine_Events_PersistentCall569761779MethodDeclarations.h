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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t569761779;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2658639251;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t1749942528;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerM4177510448.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase1749942528.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache2658639251.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C"  void PersistentCall__ctor_m2079279187 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t1181371020 * PersistentCall_get_target_m380082118 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m2279595219 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m775523786 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t2658639251 * PersistentCall_get_arguments_m3775191318 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m3478768035 (PersistentCall_t569761779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t1711298336 * PersistentCall_GetRuntimeCall_m1957889272 (PersistentCall_t569761779 * __this, UnityEventBase_t1749942528 * ___theEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t1711298336 * PersistentCall_GetObjectCall_m4123094223 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___target0, MethodInfo_t * ___method1, ArgumentCache_t2658639251 * ___arguments2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
