#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3302994562;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1126774094;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t4221943136;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2893864196;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour191418348.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t1497998840  : public UIBehaviour_t191418348
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t3302994562 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t1126774094 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t4221943136 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t2893864196 * ___m_BaseEventData_5;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_2() { return static_cast<int32_t>(offsetof(BaseInputModule_t1497998840, ___m_RaycastResultCache_2)); }
	inline List_1_t3302994562 * get_m_RaycastResultCache_2() const { return ___m_RaycastResultCache_2; }
	inline List_1_t3302994562 ** get_address_of_m_RaycastResultCache_2() { return &___m_RaycastResultCache_2; }
	inline void set_m_RaycastResultCache_2(List_1_t3302994562 * value)
	{
		___m_RaycastResultCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RaycastResultCache_2, value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_3() { return static_cast<int32_t>(offsetof(BaseInputModule_t1497998840, ___m_AxisEventData_3)); }
	inline AxisEventData_t1126774094 * get_m_AxisEventData_3() const { return ___m_AxisEventData_3; }
	inline AxisEventData_t1126774094 ** get_address_of_m_AxisEventData_3() { return &___m_AxisEventData_3; }
	inline void set_m_AxisEventData_3(AxisEventData_t1126774094 * value)
	{
		___m_AxisEventData_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AxisEventData_3, value);
	}

	inline static int32_t get_offset_of_m_EventSystem_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t1497998840, ___m_EventSystem_4)); }
	inline EventSystem_t4221943136 * get_m_EventSystem_4() const { return ___m_EventSystem_4; }
	inline EventSystem_t4221943136 ** get_address_of_m_EventSystem_4() { return &___m_EventSystem_4; }
	inline void set_m_EventSystem_4(EventSystem_t4221943136 * value)
	{
		___m_EventSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventSystem_4, value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t1497998840, ___m_BaseEventData_5)); }
	inline BaseEventData_t2893864196 * get_m_BaseEventData_5() const { return ___m_BaseEventData_5; }
	inline BaseEventData_t2893864196 ** get_address_of_m_BaseEventData_5() { return &___m_BaseEventData_5; }
	inline void set_m_BaseEventData_5(BaseEventData_t2893864196 * value)
	{
		___m_BaseEventData_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseEventData_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
