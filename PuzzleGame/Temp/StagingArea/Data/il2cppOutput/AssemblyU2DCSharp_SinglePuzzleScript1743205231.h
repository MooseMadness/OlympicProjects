#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// PuzzleConnectionScript[]
struct PuzzleConnectionScriptU5BU5D_t933179862;
// PuzzlePieceScript
struct PuzzlePieceScript_t3397438075;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3863917503;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SinglePuzzleScript
struct  SinglePuzzleScript_t1743205231  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector3[] SinglePuzzleScript::offsets
	Vector3U5BU5D_t897805512* ___offsets_2;
	// PuzzleConnectionScript[] SinglePuzzleScript::puzzleConnections
	PuzzleConnectionScriptU5BU5D_t933179862* ___puzzleConnections_3;
	// PuzzlePieceScript SinglePuzzleScript::currPiece
	PuzzlePieceScript_t3397438075 * ___currPiece_4;
	// UnityEngine.SpriteRenderer SinglePuzzleScript::sRender
	SpriteRenderer_t3863917503 * ___sRender_5;
	// UnityEngine.Vector3 SinglePuzzleScript::dragOffset
	Vector3_t465617797  ___dragOffset_6;

public:
	inline static int32_t get_offset_of_offsets_2() { return static_cast<int32_t>(offsetof(SinglePuzzleScript_t1743205231, ___offsets_2)); }
	inline Vector3U5BU5D_t897805512* get_offsets_2() const { return ___offsets_2; }
	inline Vector3U5BU5D_t897805512** get_address_of_offsets_2() { return &___offsets_2; }
	inline void set_offsets_2(Vector3U5BU5D_t897805512* value)
	{
		___offsets_2 = value;
		Il2CppCodeGenWriteBarrier(&___offsets_2, value);
	}

	inline static int32_t get_offset_of_puzzleConnections_3() { return static_cast<int32_t>(offsetof(SinglePuzzleScript_t1743205231, ___puzzleConnections_3)); }
	inline PuzzleConnectionScriptU5BU5D_t933179862* get_puzzleConnections_3() const { return ___puzzleConnections_3; }
	inline PuzzleConnectionScriptU5BU5D_t933179862** get_address_of_puzzleConnections_3() { return &___puzzleConnections_3; }
	inline void set_puzzleConnections_3(PuzzleConnectionScriptU5BU5D_t933179862* value)
	{
		___puzzleConnections_3 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleConnections_3, value);
	}

	inline static int32_t get_offset_of_currPiece_4() { return static_cast<int32_t>(offsetof(SinglePuzzleScript_t1743205231, ___currPiece_4)); }
	inline PuzzlePieceScript_t3397438075 * get_currPiece_4() const { return ___currPiece_4; }
	inline PuzzlePieceScript_t3397438075 ** get_address_of_currPiece_4() { return &___currPiece_4; }
	inline void set_currPiece_4(PuzzlePieceScript_t3397438075 * value)
	{
		___currPiece_4 = value;
		Il2CppCodeGenWriteBarrier(&___currPiece_4, value);
	}

	inline static int32_t get_offset_of_sRender_5() { return static_cast<int32_t>(offsetof(SinglePuzzleScript_t1743205231, ___sRender_5)); }
	inline SpriteRenderer_t3863917503 * get_sRender_5() const { return ___sRender_5; }
	inline SpriteRenderer_t3863917503 ** get_address_of_sRender_5() { return &___sRender_5; }
	inline void set_sRender_5(SpriteRenderer_t3863917503 * value)
	{
		___sRender_5 = value;
		Il2CppCodeGenWriteBarrier(&___sRender_5, value);
	}

	inline static int32_t get_offset_of_dragOffset_6() { return static_cast<int32_t>(offsetof(SinglePuzzleScript_t1743205231, ___dragOffset_6)); }
	inline Vector3_t465617797  get_dragOffset_6() const { return ___dragOffset_6; }
	inline Vector3_t465617797 * get_address_of_dragOffset_6() { return &___dragOffset_6; }
	inline void set_dragOffset_6(Vector3_t465617797  value)
	{
		___dragOffset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
