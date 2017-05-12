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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t4083183608;
// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1445391160;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2749144121;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"
#include "UnityEngine_UnityEngine_GUILayoutGroup2749144121.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C"  void GUILayoutUtility__cctor_m2957755459 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C"  LayoutCache_t4083183608 * GUILayoutUtility_SelectIDList_m756828237 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, bool ___isWindow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C"  void GUILayoutUtility_Begin_m2360858304 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutUtility_BeginWindow_m488834212 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, GUIStyle_t3545875401 * ___style1, GUILayoutOptionU5BU5D_t1445391160* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C"  void GUILayoutUtility_Layout_m3812180708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C"  void GUILayoutUtility_LayoutFromEditorWindow_m1847418289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutFreeGroup_m1173219546 (Il2CppObject * __this /* static, unused */, GUILayoutGroup_t2749144121 * ___toplevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutSingleGroup_m3547078816 (Il2CppObject * __this /* static, unused */, GUILayoutGroup_t2749144121 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C"  GUIStyle_t3545875401 * GUILayoutUtility_get_spaceStyle_m1918520192 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C"  Rect_t2553848979  GUILayoutUtility_Internal_GetWindowRect_m1287880151 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_GetWindowRect(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect_m3236664463 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2553848979 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C"  void GUILayoutUtility_Internal_MoveWindow_m3217449419 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2553848979  ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m1347894376 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2553848979 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
