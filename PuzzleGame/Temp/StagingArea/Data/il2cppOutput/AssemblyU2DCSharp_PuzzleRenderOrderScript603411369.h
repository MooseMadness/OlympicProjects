#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<PuzzlePieceScript>
struct List_1_t2508809418;
// PuzzleRenderOrderScript
struct PuzzleRenderOrderScript_t603411369;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PuzzleRenderOrderScript
struct  PuzzleRenderOrderScript_t603411369  : public MonoBehaviour_t774292115
{
public:
	// System.Collections.Generic.List`1<PuzzlePieceScript> PuzzleRenderOrderScript::pieces
	List_1_t2508809418 * ___pieces_2;

public:
	inline static int32_t get_offset_of_pieces_2() { return static_cast<int32_t>(offsetof(PuzzleRenderOrderScript_t603411369, ___pieces_2)); }
	inline List_1_t2508809418 * get_pieces_2() const { return ___pieces_2; }
	inline List_1_t2508809418 ** get_address_of_pieces_2() { return &___pieces_2; }
	inline void set_pieces_2(List_1_t2508809418 * value)
	{
		___pieces_2 = value;
		Il2CppCodeGenWriteBarrier(&___pieces_2, value);
	}
};

struct PuzzleRenderOrderScript_t603411369_StaticFields
{
public:
	// PuzzleRenderOrderScript PuzzleRenderOrderScript::instance
	PuzzleRenderOrderScript_t603411369 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(PuzzleRenderOrderScript_t603411369_StaticFields, ___instance_3)); }
	inline PuzzleRenderOrderScript_t603411369 * get_instance_3() const { return ___instance_3; }
	inline PuzzleRenderOrderScript_t603411369 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(PuzzleRenderOrderScript_t603411369 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
