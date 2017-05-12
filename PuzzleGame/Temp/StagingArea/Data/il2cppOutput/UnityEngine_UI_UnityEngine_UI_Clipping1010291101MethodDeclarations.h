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

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t2029265218;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C"  Rect_t2553848979  Clipping_FindCullAndClipWorldRect_m3959472775 (Il2CppObject * __this /* static, unused */, List_1_t2029265218 * ___rectMaskParents0, bool* ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  Rect_t2553848979  Clipping_RectIntersect_m2607162704 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___a0, Rect_t2553848979  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
