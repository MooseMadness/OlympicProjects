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

// UnityEngine.UI.Image
struct Image_t2058862956;
// UnityEngine.Sprite
struct Sprite_t1118776648;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3772919925;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Camera
struct Camera_t2805735124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite1118776648.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type693074472.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod123652080.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper3772919925.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"

// System.Void UnityEngine.UI.Image::.ctor()
extern "C"  void Image__ctor_m3385503596 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
extern "C"  void Image__cctor_m1797185889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t1118776648 * Image_get_sprite_m1702267215 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m1800056820 (Image_t2058862956 * __this, Sprite_t1118776648 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
extern "C"  Sprite_t1118776648 * Image_get_overrideSprite_m706080347 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C"  void Image_set_overrideSprite_m3362535904 (Image_t2058862956 * __this, Sprite_t1118776648 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
extern "C"  int32_t Image_get_type_m949318765 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C"  void Image_set_type_m69643106 (Image_t2058862956 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
extern "C"  bool Image_get_preserveAspect_m2161836851 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
extern "C"  void Image_set_preserveAspect_m1325053150 (Image_t2058862956 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
extern "C"  bool Image_get_fillCenter_m3441725367 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
extern "C"  void Image_set_fillCenter_m781881046 (Image_t2058862956 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
extern "C"  int32_t Image_get_fillMethod_m2984914013 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C"  void Image_set_fillMethod_m949767682 (Image_t2058862956 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C"  float Image_get_fillAmount_m3354146540 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m2220966753 (Image_t2058862956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
extern "C"  bool Image_get_fillClockwise_m621033254 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
extern "C"  void Image_set_fillClockwise_m2802322391 (Image_t2058862956 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
extern "C"  int32_t Image_get_fillOrigin_m3413920124 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C"  void Image_set_fillOrigin_m1750123057 (Image_t2058862956 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
extern "C"  float Image_get_eventAlphaThreshold_m2293878722 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
extern "C"  void Image_set_eventAlphaThreshold_m218014453 (Image_t2058862956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
extern "C"  Texture_t465682066 * Image_get_mainTexture_m1027716278 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
extern "C"  bool Image_get_hasBorder_m2086686369 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
extern "C"  float Image_get_pixelsPerUnit_m4104195799 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
extern "C"  void Image_OnBeforeSerialize_m776520124 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
extern "C"  void Image_OnAfterDeserialize_m457193290 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
extern "C"  Vector4_t465617796  Image_GetDrawingDimensions_m1769786949 (Image_t2058862956 * __this, bool ___shouldPreserveAspect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
extern "C"  void Image_SetNativeSize_m3580044470 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Image_OnPopulateMesh_m2488416937 (Image_t2058862956 * __this, VertexHelper_t3772919925 * ___toFill0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C"  void Image_GenerateSimpleSprite_m4275440988 (Image_t2058862956 * __this, VertexHelper_t3772919925 * ___vh0, bool ___lPreserveAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(UnityEngine.UI.VertexHelper)
extern "C"  void Image_GenerateSlicedSprite_m2271691243 (Image_t2058862956 * __this, VertexHelper_t3772919925 * ___toFill0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper)
extern "C"  void Image_GenerateTiledSprite_m1691142815 (Image_t2058862956 * __this, VertexHelper_t3772919925 * ___toFill0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector3[],UnityEngine.Color32,UnityEngine.Vector3[])
extern "C"  void Image_AddQuad_m1600600902 (Il2CppObject * __this /* static, unused */, VertexHelper_t3772919925 * ___vertexHelper0, Vector3U5BU5D_t897805512* ___quadPositions1, Color32_t2763012723  ___color2, Vector3U5BU5D_t897805512* ___quadUVs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Image_AddQuad_m1603575622 (Il2CppObject * __this /* static, unused */, VertexHelper_t3772919925 * ___vertexHelper0, Vector2_t465617798  ___posMin1, Vector2_t465617798  ___posMax2, Color32_t2763012723  ___color3, Vector2_t465617798  ___uvMin4, Vector2_t465617798  ___uvMax5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C"  Vector4_t465617796  Image_GetAdjustedBorders_m2250675187 (Image_t2058862956 * __this, Vector4_t465617796  ___border0, Rect_t2553848979  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C"  void Image_GenerateFilledSprite_m2688695206 (Image_t2058862956 * __this, VertexHelper_t3772919925 * ___toFill0, bool ___preserveAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,System.Int32)
extern "C"  bool Image_RadialCut_m3229543088 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t897805512* ___xy0, Vector3U5BU5D_t897805512* ___uv1, float ___fill2, bool ___invert3, int32_t ___corner4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C"  void Image_RadialCut_m4187327884 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t897805512* ___xy0, float ___cos1, float ___sin2, bool ___invert3, int32_t ___corner4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
extern "C"  void Image_CalculateLayoutInputHorizontal_m3275149860 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
extern "C"  void Image_CalculateLayoutInputVertical_m1340533162 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
extern "C"  float Image_get_minWidth_m1809071077 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
extern "C"  float Image_get_preferredWidth_m3468165894 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
extern "C"  float Image_get_flexibleWidth_m2228375124 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
extern "C"  float Image_get_minHeight_m311948906 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
extern "C"  float Image_get_preferredHeight_m1045199335 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
extern "C"  float Image_get_flexibleHeight_m1120907647 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
extern "C"  int32_t Image_get_layoutPriority_m2151045813 (Image_t2058862956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Image_IsRaycastLocationValid_m864962354 (Image_t2058862956 * __this, Vector2_t465617798  ___screenPoint0, Camera_t2805735124 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Vector2_t465617798  Image_MapCoordinate_m2674604540 (Image_t2058862956 * __this, Vector2_t465617798  ___local0, Rect_t2553848979  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
