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

// UnityEngine.RectTransform
struct RectTransform_t2038051575;
// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Canvas
struct Canvas_t177866473;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform2038051575.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Canvas177866473.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C"  void RectTransformUtility__cctor_m1866023382 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_RectangleContainsScreenPoint_m1244853728 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, Vector2_t465617798  ___screenPoint1, Camera_t2805735124 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3362263993 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, Vector2_t465617798 * ___screenPoint1, Camera_t2805735124 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C"  Vector2_t465617798  RectTransformUtility_PixelAdjustPoint_m560908615 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___point0, Transform_t224878301 * ___elementTransform1, Canvas_t177866473 * ___canvas2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_PixelAdjustPoint_m2939996260 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___point0, Transform_t224878301 * ___elementTransform1, Canvas_t177866473 * ___canvas2, Vector2_t465617798 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m2153046669 (Il2CppObject * __this /* static, unused */, Vector2_t465617798 * ___point0, Transform_t224878301 * ___elementTransform1, Canvas_t177866473 * ___canvas2, Vector2_t465617798 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C"  Rect_t2553848979  RectTransformUtility_PixelAdjustRect_m93024038 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rectTransform0, Canvas_t177866473 * ___canvas1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustRect_m1237215542 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rectTransform0, Canvas_t177866473 * ___canvas1, Rect_t2553848979 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m2304638810 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, Vector2_t465617798  ___screenPoint1, Camera_t2805735124 * ___cam2, Vector3_t465617797 * ___worldPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C"  bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2398565080 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, Vector2_t465617798  ___screenPoint1, Camera_t2805735124 * ___cam2, Vector2_t465617798 * ___localPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C"  Ray_t4121084637  RectTransformUtility_ScreenPointToRay_m1842507230 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam0, Vector2_t465617798  ___screenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutOnAxis_m3920364518 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, int32_t ___axis1, bool ___keepPositioning2, bool ___recursive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutAxes_m532748168 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, bool ___keepPositioning1, bool ___recursive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C"  Vector2_t465617798  RectTransformUtility_GetTransposed_m1770338235 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
