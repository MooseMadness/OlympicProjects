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

// System.EventHandler
struct EventHandler_t1189809773;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t591428026;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_EventArgs591428026.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler__ctor_m3447735595 (EventHandler_t1189809773 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void EventHandler_Invoke_m1137722757 (EventHandler_t1189809773 * __this, Il2CppObject * ___sender0, EventArgs_t591428026 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1189809773(Il2CppObject* delegate, Il2CppObject * ___sender0, EventArgs_t591428026 * ___e1);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_BeginInvoke_m3027583606 (EventHandler_t1189809773 * __this, Il2CppObject * ___sender0, EventArgs_t591428026 * ___e1, AsyncCallback_t889871978 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_EndInvoke_m512077257 (EventHandler_t1189809773 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
