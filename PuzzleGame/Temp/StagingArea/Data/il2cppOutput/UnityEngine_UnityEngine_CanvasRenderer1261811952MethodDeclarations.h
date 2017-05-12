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

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t1261811952;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Mesh
struct Mesh_t940710334;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t599299988;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t3871956436;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t1874384066;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3871956437;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t3871956435;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t559541940;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_CanvasRenderer1261811952.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Mesh940710334.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C"  void CanvasRenderer_SetColor_m1241254365 (CanvasRenderer_t1261811952 * __this, Color_t2250949164  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_SetColor_m3342810068 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t1261811952 * ___self0, Color_t2250949164 * ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C"  Color_t2250949164  CanvasRenderer_GetColor_m3395389094 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_GetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_GetColor_m132373064 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t1261811952 * ___self0, Color_t2250949164 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
extern "C"  void CanvasRenderer_EnableRectClipping_m478557626 (CanvasRenderer_t1261811952 * __this, Rect_t2553848979  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m2214772297 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t1261811952 * ___self0, Rect_t2553848979 * ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C"  void CanvasRenderer_DisableRectClipping_m2720508088 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
extern "C"  void CanvasRenderer_set_hasPopInstruction_m1388844875 (CanvasRenderer_t1261811952 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C"  int32_t CanvasRenderer_get_materialCount_m2862217439 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
extern "C"  void CanvasRenderer_set_materialCount_m803316782 (CanvasRenderer_t1261811952 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetMaterial_m1462355522 (CanvasRenderer_t1261811952 * __this, Material_t2197338622 * ___material0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetMaterial_m1741420785 (CanvasRenderer_t1261811952 * __this, Material_t2197338622 * ___material0, Texture_t465682066 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C"  void CanvasRenderer_set_popMaterialCount_m3394823403 (CanvasRenderer_t1261811952 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetPopMaterial_m3522214039 (CanvasRenderer_t1261811952 * __this, Material_t2197338622 * ___material0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetTexture_m2394798173 (CanvasRenderer_t1261811952 * __this, Texture_t465682066 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
extern "C"  void CanvasRenderer_SetMesh_m2850571117 (CanvasRenderer_t1261811952 * __this, Mesh_t940710334 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C"  void CanvasRenderer_Clear_m2419751129 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_SplitUIVertexStreams_m2145837300 (Il2CppObject * __this /* static, unused */, List_1_t599299988 * ___verts0, List_1_t3871956436 * ___positions1, List_1_t1874384066 * ___colors2, List_1_t3871956437 * ___uv0S3, List_1_t3871956437 * ___uv1S4, List_1_t3871956436 * ___normals5, List_1_t3871956435 * ___tangents6, List_1_t559541940 * ___indicies7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitUIVertexStreamsInternal_m729405782 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts0, Il2CppObject * ___positions1, Il2CppObject * ___colors2, Il2CppObject * ___uv0S3, Il2CppObject * ___uv1S4, Il2CppObject * ___normals5, Il2CppObject * ___tangents6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitIndiciesStreamsInternal(System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitIndiciesStreamsInternal_m3005676420 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts0, Il2CppObject * ___indicies1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_CreateUIVertexStream_m197449703 (Il2CppObject * __this /* static, unused */, List_1_t599299988 * ___verts0, List_1_t3871956436 * ___positions1, List_1_t1874384066 * ___colors2, List_1_t3871956437 * ___uv0S3, List_1_t3871956437 * ___uv1S4, List_1_t3871956436 * ___normals5, List_1_t3871956435 * ___tangents6, List_1_t559541940 * ___indicies7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_CreateUIVertexStreamInternal_m2886336395 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts0, Il2CppObject * ___positions1, Il2CppObject * ___colors2, Il2CppObject * ___uv0S3, Il2CppObject * ___uv1S4, Il2CppObject * ___normals5, Il2CppObject * ___tangents6, Il2CppObject * ___indicies7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void CanvasRenderer_AddUIVertexStream_m1334037553 (Il2CppObject * __this /* static, unused */, List_1_t599299988 * ___verts0, List_1_t3871956436 * ___positions1, List_1_t1874384066 * ___colors2, List_1_t3871956437 * ___uv0S3, List_1_t3871956437 * ___uv1S4, List_1_t3871956436 * ___normals5, List_1_t3871956435 * ___tangents6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C"  bool CanvasRenderer_get_cull_m3577089379 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C"  void CanvasRenderer_set_cull_m1437892490 (CanvasRenderer_t1261811952 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C"  int32_t CanvasRenderer_get_absoluteDepth_m4243141 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C"  bool CanvasRenderer_get_hasMoved_m2428030996 (CanvasRenderer_t1261811952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
