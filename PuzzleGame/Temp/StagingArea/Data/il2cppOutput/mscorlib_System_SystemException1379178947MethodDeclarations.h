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

// System.SystemException
struct SystemException_t1379178947;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void System.SystemException::.ctor()
extern "C"  void SystemException__ctor_m3487796677 (SystemException_t1379178947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m4001391027 (SystemException_t1379178947 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m2688248668 (SystemException_t1379178947 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C"  void SystemException__ctor_m3356086419 (SystemException_t1379178947 * __this, String_t* ___message0, Exception_t1145979430 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
