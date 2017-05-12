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

// System.ResolveEventHandler
struct ResolveEventHandler_t2076475665;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.ResolveEventArgs
struct ResolveEventArgs_t1046333458;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_ResolveEventArgs1046333458.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ResolveEventHandler__ctor_m3098271043 (ResolveEventHandler_t2076475665 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Assembly_t141003736 * ResolveEventHandler_Invoke_m3343892466 (ResolveEventHandler_t2076475665 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1046333458 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t141003736 * pinvoke_delegate_wrapper_ResolveEventHandler_t2076475665(Il2CppObject* delegate, Il2CppObject * ___sender0, ResolveEventArgs_t1046333458 * ___args1);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResolveEventHandler_BeginInvoke_m916075374 (ResolveEventHandler_t2076475665 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t1046333458 * ___args1, AsyncCallback_t889871978 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Assembly_t141003736 * ResolveEventHandler_EndInvoke_m1489338158 (ResolveEventHandler_t2076475665 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
