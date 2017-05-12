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

// UnityEngine.UI.Text
struct Text_t3921196294;
// UnityEngine.Font
struct Font_t2560754878;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3921196294.h"
#include "UnityEngine_UnityEngine_Font2560754878.h"

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C"  void FontUpdateTracker__cctor_m920790922 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C"  void FontUpdateTracker_TrackText_m1295609677 (Il2CppObject * __this /* static, unused */, Text_t3921196294 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C"  void FontUpdateTracker_RebuildForFont_m650875994 (Il2CppObject * __this /* static, unused */, Font_t2560754878 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C"  void FontUpdateTracker_UntrackText_m3827316510 (Il2CppObject * __this /* static, unused */, Text_t3921196294 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
