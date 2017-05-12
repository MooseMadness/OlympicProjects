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

// UnityEngine.UI.Scrollbar
struct Scrollbar_t2555726085;
// UnityEngine.RectTransform
struct RectTransform_t2038051575;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t499458295;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1309267026;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1126774094;
// UnityEngine.UI.Selectable
struct Selectable_t346534971;
// UnityEngine.Transform
struct Transform_t224878301;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform2038051575.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction4219104283.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_ScrollEvent499458295.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate3603813582.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis2070941149.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1309267026.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD1126774094.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C"  void Scrollbar__ctor_m2244981801 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C"  RectTransform_t2038051575 * Scrollbar_get_handleRect_m3657594764 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Scrollbar_set_handleRect_m596734077 (Scrollbar_t2555726085 * __this, RectTransform_t2038051575 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C"  int32_t Scrollbar_get_direction_m3041952077 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C"  void Scrollbar_set_direction_m1388523458 (Scrollbar_t2555726085 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C"  float Scrollbar_get_value_m3913193633 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C"  void Scrollbar_set_value_m1056753036 (Scrollbar_t2555726085 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C"  float Scrollbar_get_size_m247135391 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C"  void Scrollbar_set_size_m2088196430 (Scrollbar_t2555726085 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C"  int32_t Scrollbar_get_numberOfSteps_m3604735905 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C"  void Scrollbar_set_numberOfSteps_m579707524 (Scrollbar_t2555726085 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C"  ScrollEvent_t499458295 * Scrollbar_get_onValueChanged_m2506773176 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C"  void Scrollbar_set_onValueChanged_m2954631035 (Scrollbar_t2555726085 * __this, ScrollEvent_t499458295 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C"  float Scrollbar_get_stepSize_m244845137 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Scrollbar_Rebuild_m3505386904 (Scrollbar_t2555726085 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::LayoutComplete()
extern "C"  void Scrollbar_LayoutComplete_m2444839688 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::GraphicUpdateComplete()
extern "C"  void Scrollbar_GraphicUpdateComplete_m3342840631 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C"  void Scrollbar_OnEnable_m3769727025 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C"  void Scrollbar_OnDisable_m2434913122 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C"  void Scrollbar_UpdateCachedReferences_m3295556124 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C"  void Scrollbar_Set_m244028386 (Scrollbar_t2555726085 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C"  void Scrollbar_Set_m3993445697 (Scrollbar_t2555726085 * __this, float ___input0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C"  void Scrollbar_OnRectTransformDimensionsChange_m330142657 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C"  int32_t Scrollbar_get_axis_m2254740629 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C"  bool Scrollbar_get_reverseValue_m1971418883 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C"  void Scrollbar_UpdateVisuals_m2935018543 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_UpdateDrag_m3839695926 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Scrollbar_MayDrag_m1332926026 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnBeginDrag_m574021735 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnDrag_m3231798634 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerDown_m1614863933 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C"  Il2CppObject * Scrollbar_ClickRepeat_m3403943364 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerUp_m3865268138 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Scrollbar_OnMove_m2464650737 (Scrollbar_t2555726085 * __this, AxisEventData_t1126774094 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C"  Selectable_t346534971 * Scrollbar_FindSelectableOnLeft_m2785583700 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C"  Selectable_t346534971 * Scrollbar_FindSelectableOnRight_m3219495255 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C"  Selectable_t346534971 * Scrollbar_FindSelectableOnUp_m3313045424 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C"  Selectable_t346534971 * Scrollbar_FindSelectableOnDown_m3010836929 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnInitializePotentialDrag_m3975375980 (Scrollbar_t2555726085 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C"  void Scrollbar_SetDirection_m3264558284 (Scrollbar_t2555726085 * __this, int32_t ___direction0, bool ___includeRectLayouts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m3563776232 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t224878301 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m2433956430 (Scrollbar_t2555726085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
