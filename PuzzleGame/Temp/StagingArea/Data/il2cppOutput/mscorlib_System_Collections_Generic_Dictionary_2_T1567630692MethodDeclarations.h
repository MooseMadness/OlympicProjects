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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t1567630692;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g84606005.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m974062490_gshared (Transform_1_t1567630692 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m974062490(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1567630692 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m974062490_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t84606005  Transform_1_Invoke_m4136847354_gshared (Transform_1_t1567630692 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4136847354(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t84606005  (*) (Transform_1_t1567630692 *, Il2CppObject *, bool, const MethodInfo*))Transform_1_Invoke_m4136847354_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2640141359_gshared (Transform_1_t1567630692 * __this, Il2CppObject * ___key0, bool ___value1, AsyncCallback_t889871978 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2640141359(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1567630692 *, Il2CppObject *, bool, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2640141359_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t84606005  Transform_1_EndInvoke_m3779953636_gshared (Transform_1_t1567630692 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3779953636(__this, ___result0, method) ((  KeyValuePair_2_t84606005  (*) (Transform_1_t1567630692 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3779953636_gshared)(__this, ___result0, method)
