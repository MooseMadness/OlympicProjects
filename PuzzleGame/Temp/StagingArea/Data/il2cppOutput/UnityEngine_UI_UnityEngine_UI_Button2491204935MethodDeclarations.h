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

// UnityEngine.UI.Button
struct Button_t2491204935;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t3753894607;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1309267026;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2893864196;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClicked3753894607.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1309267026.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2893864196.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C"  void Button__ctor_m975719067 (Button_t2491204935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t3753894607 * Button_get_onClick_m1595880935 (Button_t2491204935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C"  void Button_set_onClick_m1628519680 (Button_t2491204935 * __this, ButtonClickedEvent_t3753894607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C"  void Button_Press_m73991540 (Button_t2491204935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Button_OnPointerClick_m2524861687 (Button_t2491204935 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Button_OnSubmit_m1639047670 (Button_t2491204935 * __this, BaseEventData_t2893864196 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C"  Il2CppObject * Button_OnFinishSubmit_m1646528571 (Button_t2491204935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
