#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_UIVertex1487928645.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t1487928645 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t465617797  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t465617797  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2763012723  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t465617798  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t465617798  ___uv1_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t465617796  ___tangent_5;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___position_0)); }
	inline Vector3_t465617797  get_position_0() const { return ___position_0; }
	inline Vector3_t465617797 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t465617797  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___normal_1)); }
	inline Vector3_t465617797  get_normal_1() const { return ___normal_1; }
	inline Vector3_t465617797 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t465617797  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___color_2)); }
	inline Color32_t2763012723  get_color_2() const { return ___color_2; }
	inline Color32_t2763012723 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2763012723  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___uv0_3)); }
	inline Vector2_t465617798  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t465617798 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t465617798  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___uv1_4)); }
	inline Vector2_t465617798  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t465617798 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t465617798  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_tangent_5() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645, ___tangent_5)); }
	inline Vector4_t465617796  get_tangent_5() const { return ___tangent_5; }
	inline Vector4_t465617796 * get_address_of_tangent_5() { return &___tangent_5; }
	inline void set_tangent_5(Vector4_t465617796  value)
	{
		___tangent_5 = value;
	}
};

struct UIVertex_t1487928645_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2763012723  ___s_DefaultColor_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t465617796  ___s_DefaultTangent_7;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t1487928645  ___simpleVert_8;

public:
	inline static int32_t get_offset_of_s_DefaultColor_6() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645_StaticFields, ___s_DefaultColor_6)); }
	inline Color32_t2763012723  get_s_DefaultColor_6() const { return ___s_DefaultColor_6; }
	inline Color32_t2763012723 * get_address_of_s_DefaultColor_6() { return &___s_DefaultColor_6; }
	inline void set_s_DefaultColor_6(Color32_t2763012723  value)
	{
		___s_DefaultColor_6 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645_StaticFields, ___s_DefaultTangent_7)); }
	inline Vector4_t465617796  get_s_DefaultTangent_7() const { return ___s_DefaultTangent_7; }
	inline Vector4_t465617796 * get_address_of_s_DefaultTangent_7() { return &___s_DefaultTangent_7; }
	inline void set_s_DefaultTangent_7(Vector4_t465617796  value)
	{
		___s_DefaultTangent_7 = value;
	}

	inline static int32_t get_offset_of_simpleVert_8() { return static_cast<int32_t>(offsetof(UIVertex_t1487928645_StaticFields, ___simpleVert_8)); }
	inline UIVertex_t1487928645  get_simpleVert_8() const { return ___simpleVert_8; }
	inline UIVertex_t1487928645 * get_address_of_simpleVert_8() { return &___simpleVert_8; }
	inline void set_simpleVert_8(UIVertex_t1487928645  value)
	{
		___simpleVert_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UIVertex
struct UIVertex_t1487928645_marshaled_pinvoke
{
	Vector3_t465617797_marshaled_pinvoke ___position_0;
	Vector3_t465617797_marshaled_pinvoke ___normal_1;
	Color32_t2763012723_marshaled_pinvoke ___color_2;
	Vector2_t465617798_marshaled_pinvoke ___uv0_3;
	Vector2_t465617798_marshaled_pinvoke ___uv1_4;
	Vector4_t465617796_marshaled_pinvoke ___tangent_5;
};
// Native definition for marshalling of: UnityEngine.UIVertex
struct UIVertex_t1487928645_marshaled_com
{
	Vector3_t465617797_marshaled_com ___position_0;
	Vector3_t465617797_marshaled_com ___normal_1;
	Color32_t2763012723_marshaled_com ___color_2;
	Vector2_t465617798_marshaled_com ___uv0_3;
	Vector2_t465617798_marshaled_com ___uv1_4;
	Vector4_t465617796_marshaled_com ___tangent_5;
};
