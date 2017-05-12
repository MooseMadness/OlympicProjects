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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t1970893579;
// UnityEngine.Component
struct Component_t1078601330;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t2917893875;
// UnityEngine.UI.IClippable
struct IClippable_t222545262;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t2029265218;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component1078601330.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UI_UnityEngine_UI_RectMask2D2917893875.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C"  void MaskUtilities__ctor_m1760365795 (MaskUtilities_t1970893579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_Notify2DMaskStateChanged_m1704785167 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_NotifyStencilStateChanged_m1527407683 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C"  Transform_t224878301 * MaskUtilities_FindRootSortOverrideCanvas_m433286381 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t MaskUtilities_GetStencilDepth_m3432755788 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___transform0, Transform_t224878301 * ___stopAfter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C"  RectMask2D_t2917893875 * MaskUtilities_GetRectMaskForClippable_m3534151072 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C"  void MaskUtilities_GetRectMasksForClip_m1540508301 (Il2CppObject * __this /* static, unused */, RectMask2D_t2917893875 * ___clipper0, List_1_t2029265218 * ___masks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
