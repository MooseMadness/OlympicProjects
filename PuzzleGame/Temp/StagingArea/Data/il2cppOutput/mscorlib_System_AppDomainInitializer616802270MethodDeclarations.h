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

// System.AppDomainInitializer
struct AppDomainInitializer_t616802270;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C"  void AppDomainInitializer__ctor_m1669835818 (AppDomainInitializer_t616802270 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C"  void AppDomainInitializer_Invoke_m3449211446 (AppDomainInitializer_t616802270 * __this, StringU5BU5D_t3764931161* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t616802270(Il2CppObject* delegate, StringU5BU5D_t3764931161* ___args0);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AppDomainInitializer_BeginInvoke_m2446455399 (AppDomainInitializer_t616802270 * __this, StringU5BU5D_t3764931161* ___args0, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C"  void AppDomainInitializer_EndInvoke_m4003801172 (AppDomainInitializer_t616802270 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
