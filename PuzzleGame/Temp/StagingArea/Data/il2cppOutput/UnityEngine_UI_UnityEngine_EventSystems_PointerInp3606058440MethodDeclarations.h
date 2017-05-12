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

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t3606058440;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t526553799;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1309267026;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven602536404.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2528470631.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1309267026.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
extern "C"  void MouseState__ctor_m3076609805 (MouseState_t3606058440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
extern "C"  bool MouseState_AnyPressesThisFrame_m942422561 (MouseState_t3606058440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
extern "C"  bool MouseState_AnyReleasesThisFrame_m985115530 (MouseState_t3606058440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  ButtonState_t526553799 * MouseState_GetButtonState_m337580068 (MouseState_t3606058440 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
extern "C"  void MouseState_SetButtonState_m2329922363 (MouseState_t3606058440 * __this, int32_t ___button0, int32_t ___stateForMouseButton1, PointerEventData_t1309267026 * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
