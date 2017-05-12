#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t465682066;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic3021215747.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t28434128  : public MaskableGraphic_t3021215747
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t465682066 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t2553848979  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t28434128, ___m_Texture_28)); }
	inline Texture_t465682066 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t465682066 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t465682066 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_28, value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t28434128, ___m_UVRect_29)); }
	inline Rect_t2553848979  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t2553848979 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t2553848979  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
