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

// System.Runtime.InteropServices.COMException
struct COMException_t569140122;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Runtime.InteropServices.COMException::.ctor()
extern "C"  void COMException__ctor_m488488930 (COMException_t569140122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void COMException__ctor_m3964879267 (COMException_t569140122 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.COMException::ToString()
extern "C"  String_t* COMException_ToString_m2763629127 (COMException_t569140122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
