#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PuzzleConnectionScript
struct PuzzleConnectionScript_t135406863;
// SinglePuzzleScript
struct SinglePuzzleScript_t1743205231;
// UnityEngine.Collider2D
struct Collider2D_t445179443;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PuzzleConnectionScript
struct  PuzzleConnectionScript_t135406863  : public MonoBehaviour_t774292115
{
public:
	// PuzzleConnectionScript PuzzleConnectionScript::pointToConnet
	PuzzleConnectionScript_t135406863 * ___pointToConnet_2;
	// SinglePuzzleScript PuzzleConnectionScript::myPuzzle
	SinglePuzzleScript_t1743205231 * ___myPuzzle_3;
	// System.Int32 PuzzleConnectionScript::connIndex
	int32_t ___connIndex_4;
	// System.Boolean PuzzleConnectionScript::isConnected
	bool ___isConnected_5;
	// UnityEngine.Collider2D PuzzleConnectionScript::<pointCollider>k__BackingField
	Collider2D_t445179443 * ___U3CpointColliderU3Ek__BackingField_6;
	// System.Boolean PuzzleConnectionScript::<canConnect>k__BackingField
	bool ___U3CcanConnectU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_pointToConnet_2() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___pointToConnet_2)); }
	inline PuzzleConnectionScript_t135406863 * get_pointToConnet_2() const { return ___pointToConnet_2; }
	inline PuzzleConnectionScript_t135406863 ** get_address_of_pointToConnet_2() { return &___pointToConnet_2; }
	inline void set_pointToConnet_2(PuzzleConnectionScript_t135406863 * value)
	{
		___pointToConnet_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointToConnet_2, value);
	}

	inline static int32_t get_offset_of_myPuzzle_3() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___myPuzzle_3)); }
	inline SinglePuzzleScript_t1743205231 * get_myPuzzle_3() const { return ___myPuzzle_3; }
	inline SinglePuzzleScript_t1743205231 ** get_address_of_myPuzzle_3() { return &___myPuzzle_3; }
	inline void set_myPuzzle_3(SinglePuzzleScript_t1743205231 * value)
	{
		___myPuzzle_3 = value;
		Il2CppCodeGenWriteBarrier(&___myPuzzle_3, value);
	}

	inline static int32_t get_offset_of_connIndex_4() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___connIndex_4)); }
	inline int32_t get_connIndex_4() const { return ___connIndex_4; }
	inline int32_t* get_address_of_connIndex_4() { return &___connIndex_4; }
	inline void set_connIndex_4(int32_t value)
	{
		___connIndex_4 = value;
	}

	inline static int32_t get_offset_of_isConnected_5() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___isConnected_5)); }
	inline bool get_isConnected_5() const { return ___isConnected_5; }
	inline bool* get_address_of_isConnected_5() { return &___isConnected_5; }
	inline void set_isConnected_5(bool value)
	{
		___isConnected_5 = value;
	}

	inline static int32_t get_offset_of_U3CpointColliderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___U3CpointColliderU3Ek__BackingField_6)); }
	inline Collider2D_t445179443 * get_U3CpointColliderU3Ek__BackingField_6() const { return ___U3CpointColliderU3Ek__BackingField_6; }
	inline Collider2D_t445179443 ** get_address_of_U3CpointColliderU3Ek__BackingField_6() { return &___U3CpointColliderU3Ek__BackingField_6; }
	inline void set_U3CpointColliderU3Ek__BackingField_6(Collider2D_t445179443 * value)
	{
		___U3CpointColliderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpointColliderU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CcanConnectU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PuzzleConnectionScript_t135406863, ___U3CcanConnectU3Ek__BackingField_7)); }
	inline bool get_U3CcanConnectU3Ek__BackingField_7() const { return ___U3CcanConnectU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CcanConnectU3Ek__BackingField_7() { return &___U3CcanConnectU3Ek__BackingField_7; }
	inline void set_U3CcanConnectU3Ek__BackingField_7(bool value)
	{
		___U3CcanConnectU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
