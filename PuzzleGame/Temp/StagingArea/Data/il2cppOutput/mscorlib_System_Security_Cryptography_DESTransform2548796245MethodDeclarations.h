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

// System.Security.Cryptography.DESTransform
struct DESTransform_t2548796245;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4145793369;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.UInt32[]
struct UInt32U5BU5D_t3352404215;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg4145793369.h"

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void DESTransform__ctor_m4096028381 (DESTransform_t2548796245 * __this, SymmetricAlgorithm_t4145793369 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t3835026402* ___key2, ByteU5BU5D_t3835026402* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C"  void DESTransform__cctor_m1179482644 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C"  uint32_t DESTransform_CipherFunct_m3559419566 (DESTransform_t2548796245 * __this, uint32_t ___r0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C"  void DESTransform_Permutation_m4174035780 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___input0, ByteU5BU5D_t3835026402* ___output1, UInt32U5BU5D_t3352404215* ___permTab2, bool ___preSwap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C"  void DESTransform_BSwap_m1629053297 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___byteBuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C"  void DESTransform_SetKey_m113668963 (DESTransform_t2548796245 * __this, ByteU5BU5D_t3835026402* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C"  void DESTransform_ProcessBlock_m2826669227 (DESTransform_t2548796245 * __this, ByteU5BU5D_t3835026402* ___input0, ByteU5BU5D_t3835026402* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void DESTransform_ECB_m2629024873 (DESTransform_t2548796245 * __this, ByteU5BU5D_t3835026402* ___input0, ByteU5BU5D_t3835026402* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C"  ByteU5BU5D_t3835026402* DESTransform_GetStrongKey_m1223870891 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
