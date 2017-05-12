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

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t391976031;
// UnityEngine.Canvas
struct Canvas_t177866473;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1309267026;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3302994562;
// UnityEngine.Camera
struct Camera_t2805735124;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t3192529782;
// UnityEngine.UI.Graphic
struct Graphic_t4081158439;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Blo1612389109.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1309267026.h"
#include "UnityEngine_UnityEngine_Canvas177866473.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic4081158439.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C"  void GraphicRaycaster__ctor_m900848387 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C"  void GraphicRaycaster__cctor_m3347039106 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_sortOrderPriority_m569298904 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_renderOrderPriority_m3600007576 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C"  bool GraphicRaycaster_get_ignoreReversedGraphics_m2757724367 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C"  void GraphicRaycaster_set_ignoreReversedGraphics_m3329065662 (GraphicRaycaster_t391976031 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C"  int32_t GraphicRaycaster_get_blockingObjects_m1447656241 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C"  void GraphicRaycaster_set_blockingObjects_m1623398080 (GraphicRaycaster_t391976031 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C"  Canvas_t177866473 * GraphicRaycaster_get_canvas_m3772552762 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GraphicRaycaster_Raycast_m2720700075 (GraphicRaycaster_t391976031 * __this, PointerEventData_t1309267026 * ___eventData0, List_1_t3302994562 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C"  Camera_t2805735124 * GraphicRaycaster_get_eventCamera_m4031517334 (GraphicRaycaster_t391976031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C"  void GraphicRaycaster_Raycast_m1206612976 (Il2CppObject * __this /* static, unused */, Canvas_t177866473 * ___canvas0, Camera_t2805735124 * ___eventCamera1, Vector2_t465617798  ___pointerPosition2, List_1_t3192529782 * ___results3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__3(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GraphicRaycaster_U3CRaycastU3Em__3_m4270506050 (Il2CppObject * __this /* static, unused */, Graphic_t4081158439 * ___g10, Graphic_t4081158439 * ___g21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
