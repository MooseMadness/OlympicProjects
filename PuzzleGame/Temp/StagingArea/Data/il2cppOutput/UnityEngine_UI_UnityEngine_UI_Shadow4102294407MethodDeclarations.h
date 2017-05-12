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

// UnityEngine.UI.Shadow
struct Shadow_t4102294407;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t599299988;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3772919925;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper3772919925.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C"  void Shadow__ctor_m924057531 (Shadow_t4102294407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C"  Color_t2250949164  Shadow_get_effectColor_m792481977 (Shadow_t4102294407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C"  void Shadow_set_effectColor_m3110056844 (Shadow_t4102294407 * __this, Color_t2250949164  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C"  Vector2_t465617798  Shadow_get_effectDistance_m1859706485 (Shadow_t4102294407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C"  void Shadow_set_effectDistance_m1951993364 (Shadow_t4102294407 * __this, Vector2_t465617798  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C"  bool Shadow_get_useGraphicAlpha_m103020179 (Shadow_t4102294407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C"  void Shadow_set_useGraphicAlpha_m141905402 (Shadow_t4102294407 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadowZeroAlloc_m2132231878 (Shadow_t4102294407 * __this, List_1_t599299988 * ___verts0, Color32_t2763012723  ___color1, int32_t ___start2, int32_t ___end3, float ___x4, float ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadow_m1951874787 (Shadow_t4102294407 * __this, List_1_t599299988 * ___verts0, Color32_t2763012723  ___color1, int32_t ___start2, int32_t ___end3, float ___x4, float ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Shadow_ModifyMesh_m2723453831 (Shadow_t4102294407 * __this, VertexHelper_t3772919925 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
