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

// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Texture
struct Texture_t465682066;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "mscorlib_System_String1967731336.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m1440882780 (Material_t2197338622 * __this, Material_t2197338622 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t465682066 * Material_get_mainTexture_m432794412 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t465682066 * Material_GetTexture_m1257877102 (Material_t2197338622 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t465682066 * Material_GetTexture_m648312929 (Material_t2197338622 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m1926275467 (Material_t2197338622 * __this, String_t* ___propertyName0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m953675160 (Material_t2197338622 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m522302436 (Material_t2197338622 * __this, String_t* ___propertyName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m3511389613 (Material_t2197338622 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m3175512802 (Material_t2197338622 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2907597451 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___mono0, Material_t2197338622 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3724752646 (Material_t2197338622 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m1204728089 (Material_t2197338622 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
