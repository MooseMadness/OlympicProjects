#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SinglePuzzleScript[]
struct SinglePuzzleScriptU5BU5D_t2411412982;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PuzzlePieceScript
struct  PuzzlePieceScript_t3397438075  : public MonoBehaviour_t774292115
{
public:
	// SinglePuzzleScript[] PuzzlePieceScript::puzzles
	SinglePuzzleScriptU5BU5D_t2411412982* ___puzzles_2;
	// System.Int32 PuzzlePieceScript::renderOrder
	int32_t ___renderOrder_3;

public:
	inline static int32_t get_offset_of_puzzles_2() { return static_cast<int32_t>(offsetof(PuzzlePieceScript_t3397438075, ___puzzles_2)); }
	inline SinglePuzzleScriptU5BU5D_t2411412982* get_puzzles_2() const { return ___puzzles_2; }
	inline SinglePuzzleScriptU5BU5D_t2411412982** get_address_of_puzzles_2() { return &___puzzles_2; }
	inline void set_puzzles_2(SinglePuzzleScriptU5BU5D_t2411412982* value)
	{
		___puzzles_2 = value;
		Il2CppCodeGenWriteBarrier(&___puzzles_2, value);
	}

	inline static int32_t get_offset_of_renderOrder_3() { return static_cast<int32_t>(offsetof(PuzzlePieceScript_t3397438075, ___renderOrder_3)); }
	inline int32_t get_renderOrder_3() const { return ___renderOrder_3; }
	inline int32_t* get_address_of_renderOrder_3() { return &___renderOrder_3; }
	inline void set_renderOrder_3(int32_t value)
	{
		___renderOrder_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
