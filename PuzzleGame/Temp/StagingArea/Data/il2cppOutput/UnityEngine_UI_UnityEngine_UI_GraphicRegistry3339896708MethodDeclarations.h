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

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t3339896708;
// UnityEngine.Canvas
struct Canvas_t177866473;
// UnityEngine.UI.Graphic
struct Graphic_t4081158439;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t30323737;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Canvas177866473.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic4081158439.h"

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C"  void GraphicRegistry__ctor_m226766314 (GraphicRegistry_t3339896708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C"  void GraphicRegistry__cctor_m4197769737 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C"  GraphicRegistry_t3339896708 * GraphicRegistry_get_instance_m2112667631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_RegisterGraphicForCanvas_m2284226562 (Il2CppObject * __this /* static, unused */, Canvas_t177866473 * ___c0, Graphic_t4081158439 * ___graphic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_UnregisterGraphicForCanvas_m820096873 (Il2CppObject * __this /* static, unused */, Canvas_t177866473 * ___c0, Graphic_t4081158439 * ___graphic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C"  Il2CppObject* GraphicRegistry_GetGraphicsForCanvas_m3873480384 (Il2CppObject * __this /* static, unused */, Canvas_t177866473 * ___canvas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
