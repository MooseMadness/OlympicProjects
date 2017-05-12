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

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t510938711;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte77837043.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReadDelegate__ctor_m885671467 (ReadDelegate_t510938711 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ReadDelegate_Invoke_m2091885836 (ReadDelegate_t510938711 * __this, ByteU5BU5D_t3835026402* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t510938711(Il2CppObject* delegate, ByteU5BU5D_t3835026402* ___buffer0, int32_t ___offset1, int32_t ___count2);
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReadDelegate_BeginInvoke_m2581745347 (ReadDelegate_t510938711 * __this, ByteU5BU5D_t3835026402* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t889871978 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C"  int32_t ReadDelegate_EndInvoke_m2765408527 (ReadDelegate_t510938711 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
