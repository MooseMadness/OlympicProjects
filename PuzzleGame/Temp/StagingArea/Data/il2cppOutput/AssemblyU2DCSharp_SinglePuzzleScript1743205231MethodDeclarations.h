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

// SinglePuzzleScript
struct SinglePuzzleScript_t1743205231;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1309267026;
// System.Collections.IEnumerable
struct IEnumerable_t1471344431;
// PuzzleConnectionScript
struct PuzzleConnectionScript_t135406863;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1309267026.h"
#include "AssemblyU2DCSharp_PuzzleConnectionScript135406863.h"

// System.Void SinglePuzzleScript::.ctor()
extern "C"  void SinglePuzzleScript__ctor_m1668679846 (SinglePuzzleScript_t1743205231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePuzzleScript::Awake()
extern "C"  void SinglePuzzleScript_Awake_m3556673387 (SinglePuzzleScript_t1743205231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePuzzleScript::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SinglePuzzleScript_OnBeginDrag_m867968646 (SinglePuzzleScript_t1743205231 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePuzzleScript::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SinglePuzzleScript_OnDrag_m649175015 (SinglePuzzleScript_t1743205231 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePuzzleScript::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SinglePuzzleScript_OnEndDrag_m2474383482 (SinglePuzzleScript_t1743205231 * __this, PointerEventData_t1309267026 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable SinglePuzzleScript::GetConnected()
extern "C"  Il2CppObject * SinglePuzzleScript_GetConnected_m3526046671 (SinglePuzzleScript_t1743205231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SinglePuzzleScript::CheckPuzzle()
extern "C"  bool SinglePuzzleScript_CheckPuzzle_m1125115664 (SinglePuzzleScript_t1743205231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SinglePuzzleScript::Connect(PuzzleConnectionScript)
extern "C"  void SinglePuzzleScript_Connect_m3966816221 (SinglePuzzleScript_t1743205231 * __this, PuzzleConnectionScript_t135406863 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
