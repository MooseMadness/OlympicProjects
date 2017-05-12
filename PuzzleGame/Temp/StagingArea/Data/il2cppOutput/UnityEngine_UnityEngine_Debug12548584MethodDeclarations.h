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

// UnityEngine.ILogger
struct ILogger_t1298135912;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m2981642087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C"  Il2CppObject * Debug_get_logger_m4173808038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3715728798 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogError_m865553560 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, Object_t1181371020 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m1861430175 (Il2CppObject * __this /* static, unused */, Exception_t1145979430 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Debug_LogException_m3078170301 (Il2CppObject * __this /* static, unused */, Exception_t1145979430 * ___exception0, Object_t1181371020 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2503577968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m1280021602 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, Object_t1181371020 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
