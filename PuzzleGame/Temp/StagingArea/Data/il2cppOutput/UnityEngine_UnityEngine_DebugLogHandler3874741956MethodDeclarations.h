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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t3874741956;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.Exception
struct Exception_t1145979430;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType3079013523.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m3134219506 (DebugLogHandler_t3874741956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m3491540823 (Il2CppObject * __this /* static, unused */, int32_t ___level0, String_t* ___msg1, Object_t1181371020 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_LogException_m317712981 (Il2CppObject * __this /* static, unused */, Exception_t1145979430 * ___exception0, Object_t1181371020 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m177245518 (DebugLogHandler_t3874741956 * __this, int32_t ___logType0, Object_t1181371020 * ___context1, String_t* ___format2, ObjectU5BU5D_t3632007997* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_LogException_m769094553 (DebugLogHandler_t3874741956 * __this, Exception_t1145979430 * ___exception0, Object_t1181371020 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
