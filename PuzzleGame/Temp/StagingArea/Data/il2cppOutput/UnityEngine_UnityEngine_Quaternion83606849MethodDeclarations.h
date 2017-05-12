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
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m952616600 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___a0, Quaternion_t83606849  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t83606849  Quaternion_Inverse_m3931399088 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m1043108654 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849 * ___rotation0, Quaternion_t83606849 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2638853272 (Quaternion_t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2270520528 (Quaternion_t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3730391696 (Quaternion_t83606849 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Quaternion_op_Multiply_m1483423721 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___rotation0, Vector3_t465617797  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m3629786166 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___lhs0, Quaternion_t83606849  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t83606849;
struct Quaternion_t83606849_marshaled_pinvoke;

extern "C" void Quaternion_t83606849_marshal_pinvoke(const Quaternion_t83606849& unmarshaled, Quaternion_t83606849_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t83606849_marshal_pinvoke_back(const Quaternion_t83606849_marshaled_pinvoke& marshaled, Quaternion_t83606849& unmarshaled);
extern "C" void Quaternion_t83606849_marshal_pinvoke_cleanup(Quaternion_t83606849_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t83606849;
struct Quaternion_t83606849_marshaled_com;

extern "C" void Quaternion_t83606849_marshal_com(const Quaternion_t83606849& unmarshaled, Quaternion_t83606849_marshaled_com& marshaled);
extern "C" void Quaternion_t83606849_marshal_com_back(const Quaternion_t83606849_marshaled_com& marshaled, Quaternion_t83606849& unmarshaled);
extern "C" void Quaternion_t83606849_marshal_com_cleanup(Quaternion_t83606849_marshaled_com& marshaled);
