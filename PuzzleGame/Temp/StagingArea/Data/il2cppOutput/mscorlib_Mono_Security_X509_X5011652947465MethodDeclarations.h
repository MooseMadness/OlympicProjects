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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2605720234;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN12605720234.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C"  void X501__cctor_m3795360380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C"  String_t* X501_ToString_m1314414886 (Il2CppObject * __this /* static, unused */, ASN1_t2605720234 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C"  String_t* X501_ToString_m388469888 (Il2CppObject * __this /* static, unused */, ASN1_t2605720234 * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C"  void X501_AppendEntry_m2418570900 (Il2CppObject * __this /* static, unused */, StringBuilder_t2393427626 * ___sb0, ASN1_t2605720234 * ___entry1, bool ___quotes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
