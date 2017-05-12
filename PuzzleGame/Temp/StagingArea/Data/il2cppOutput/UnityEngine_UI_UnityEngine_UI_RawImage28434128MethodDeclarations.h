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

// UnityEngine.UI.RawImage
struct RawImage_t28434128;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3772919925;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper3772919925.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C"  void RawImage__ctor_m527845386 (RawImage_t28434128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C"  Texture_t465682066 * RawImage_get_mainTexture_m3865646934 (RawImage_t28434128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C"  Texture_t465682066 * RawImage_get_texture_m2258734143 (RawImage_t28434128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C"  void RawImage_set_texture_m2400157626 (RawImage_t28434128 * __this, Texture_t465682066 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C"  Rect_t2553848979  RawImage_get_uvRect_m2051606962 (RawImage_t28434128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C"  void RawImage_set_uvRect_m3807597783 (RawImage_t28434128 * __this, Rect_t2553848979  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C"  void RawImage_SetNativeSize_m672994452 (RawImage_t28434128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void RawImage_OnPopulateMesh_m1575353317 (RawImage_t28434128 * __this, VertexHelper_t3772919925 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
