#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t2038051575;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t499458295;
// UnityEngine.Coroutine
struct Coroutine_t3261918659;
struct Coroutine_t3261918659_marshaled_pinvoke;

#include "UnityEngine_UI_UnityEngine_UI_Selectable346534971.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction4219104283.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker764773929.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Scrollbar
struct  Scrollbar_t2555726085  : public Selectable_t346534971
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t2038051575 * ___m_HandleRect_16;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_18;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_19;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_20;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t499458295 * ___m_OnValueChanged_21;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t2038051575 * ___m_ContainerRect_22;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t465617798  ___m_Offset_23;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t764773929  ___m_Tracker_24;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t3261918659 * ___m_PointerDownRepeat_25;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_26;

public:
	inline static int32_t get_offset_of_m_HandleRect_16() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_HandleRect_16)); }
	inline RectTransform_t2038051575 * get_m_HandleRect_16() const { return ___m_HandleRect_16; }
	inline RectTransform_t2038051575 ** get_address_of_m_HandleRect_16() { return &___m_HandleRect_16; }
	inline void set_m_HandleRect_16(RectTransform_t2038051575 * value)
	{
		___m_HandleRect_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_HandleRect_16, value);
	}

	inline static int32_t get_offset_of_m_Direction_17() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_Direction_17)); }
	inline int32_t get_m_Direction_17() const { return ___m_Direction_17; }
	inline int32_t* get_address_of_m_Direction_17() { return &___m_Direction_17; }
	inline void set_m_Direction_17(int32_t value)
	{
		___m_Direction_17 = value;
	}

	inline static int32_t get_offset_of_m_Value_18() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_Value_18)); }
	inline float get_m_Value_18() const { return ___m_Value_18; }
	inline float* get_address_of_m_Value_18() { return &___m_Value_18; }
	inline void set_m_Value_18(float value)
	{
		___m_Value_18 = value;
	}

	inline static int32_t get_offset_of_m_Size_19() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_Size_19)); }
	inline float get_m_Size_19() const { return ___m_Size_19; }
	inline float* get_address_of_m_Size_19() { return &___m_Size_19; }
	inline void set_m_Size_19(float value)
	{
		___m_Size_19 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_20() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_NumberOfSteps_20)); }
	inline int32_t get_m_NumberOfSteps_20() const { return ___m_NumberOfSteps_20; }
	inline int32_t* get_address_of_m_NumberOfSteps_20() { return &___m_NumberOfSteps_20; }
	inline void set_m_NumberOfSteps_20(int32_t value)
	{
		___m_NumberOfSteps_20 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_21() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_OnValueChanged_21)); }
	inline ScrollEvent_t499458295 * get_m_OnValueChanged_21() const { return ___m_OnValueChanged_21; }
	inline ScrollEvent_t499458295 ** get_address_of_m_OnValueChanged_21() { return &___m_OnValueChanged_21; }
	inline void set_m_OnValueChanged_21(ScrollEvent_t499458295 * value)
	{
		___m_OnValueChanged_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_21, value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_22() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_ContainerRect_22)); }
	inline RectTransform_t2038051575 * get_m_ContainerRect_22() const { return ___m_ContainerRect_22; }
	inline RectTransform_t2038051575 ** get_address_of_m_ContainerRect_22() { return &___m_ContainerRect_22; }
	inline void set_m_ContainerRect_22(RectTransform_t2038051575 * value)
	{
		___m_ContainerRect_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_ContainerRect_22, value);
	}

	inline static int32_t get_offset_of_m_Offset_23() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_Offset_23)); }
	inline Vector2_t465617798  get_m_Offset_23() const { return ___m_Offset_23; }
	inline Vector2_t465617798 * get_address_of_m_Offset_23() { return &___m_Offset_23; }
	inline void set_m_Offset_23(Vector2_t465617798  value)
	{
		___m_Offset_23 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_24() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_Tracker_24)); }
	inline DrivenRectTransformTracker_t764773929  get_m_Tracker_24() const { return ___m_Tracker_24; }
	inline DrivenRectTransformTracker_t764773929 * get_address_of_m_Tracker_24() { return &___m_Tracker_24; }
	inline void set_m_Tracker_24(DrivenRectTransformTracker_t764773929  value)
	{
		___m_Tracker_24 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_25() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___m_PointerDownRepeat_25)); }
	inline Coroutine_t3261918659 * get_m_PointerDownRepeat_25() const { return ___m_PointerDownRepeat_25; }
	inline Coroutine_t3261918659 ** get_address_of_m_PointerDownRepeat_25() { return &___m_PointerDownRepeat_25; }
	inline void set_m_PointerDownRepeat_25(Coroutine_t3261918659 * value)
	{
		___m_PointerDownRepeat_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointerDownRepeat_25, value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_26() { return static_cast<int32_t>(offsetof(Scrollbar_t2555726085, ___isPointerDownAndNotDragging_26)); }
	inline bool get_isPointerDownAndNotDragging_26() const { return ___isPointerDownAndNotDragging_26; }
	inline bool* get_address_of_isPointerDownAndNotDragging_26() { return &___isPointerDownAndNotDragging_26; }
	inline void set_isPointerDownAndNotDragging_26(bool value)
	{
		___isPointerDownAndNotDragging_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
