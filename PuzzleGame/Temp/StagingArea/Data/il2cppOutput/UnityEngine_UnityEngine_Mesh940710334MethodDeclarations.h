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

// UnityEngine.Mesh
struct Mesh_t940710334;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t3871956436;
// System.Object
struct Il2CppObject;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t411617773;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t3871956435;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1383993251;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3871956437;
// UnityEngine.Color32[]
struct Color32U5BU5D_t269272674;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t1874384066;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t559541940;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh940710334.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Array4136897760.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2975981674 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m1486058998 (Il2CppObject * __this /* static, unused */, Mesh_t940710334 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m3100797454 (Mesh_t940710334 * __this, bool ___keepVertexLayout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m231813403 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t897805512* Mesh_get_vertices_m626989480 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m3500868388 (Mesh_t940710334 * __this, List_1_t3871956436 * ___inVertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C"  void Mesh_SetVerticesInternal_m3265860032 (Mesh_t940710334 * __this, Il2CppObject * ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t897805512* Mesh_get_normals_m1837187359 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m3341225499 (Mesh_t940710334 * __this, List_1_t3871956436 * ___inNormals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C"  void Mesh_SetNormalsInternal_m1928495229 (Mesh_t940710334 * __this, Il2CppObject * ___normals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t411617773* Mesh_get_tangents_m2910922714 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m282399504 (Mesh_t940710334 * __this, List_1_t3871956435 * ___inTangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C"  void Mesh_SetTangentsInternal_m2315283937 (Mesh_t940710334 * __this, Il2CppObject * ___tangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t1383993251* Mesh_get_uv_m3811151337 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t1383993251* Mesh_get_uv2_m3215494975 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractListData(System.Object)
extern "C"  Il2CppArray * Mesh_ExtractListData_m3970372186 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVsInternal(System.Array,System.Int32,System.Int32,System.Int32)
extern "C"  void Mesh_SetUVsInternal_m541174016 (Mesh_t940710334 * __this, Il2CppArray * ___uvs0, int32_t ___channel1, int32_t ___dim2, int32_t ___arraySize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m841280343 (Mesh_t940710334 * __this, int32_t ___channel0, List_1_t3871956437 * ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t269272674* Mesh_get_colors32_m4153271224 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m3438776703 (Mesh_t940710334 * __this, List_1_t1874384066 * ___inColors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C"  void Mesh_SetColors32Internal_m935322186 (Mesh_t940710334 * __this, Il2CppObject * ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m3559909024 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m2017297103 (Mesh_t940710334 * __this, List_1_t559541940 * ___inTriangles0, int32_t ___submesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C"  void Mesh_SetTrianglesInternal_m2179012953 (Mesh_t940710334 * __this, Il2CppObject * ___triangles0, int32_t ___submesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t3315407976* Mesh_GetIndices_m3085881884 (Mesh_t940710334 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
