#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3921196294;
// GameManagerScript
struct GameManagerScript_t3648479706;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManagerScript
struct  GameManagerScript_t3648479706  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 GameManagerScript::score
	int32_t ___score_2;
	// System.Int32 GameManagerScript::puzzlePieceCount
	int32_t ___puzzlePieceCount_3;
	// System.Int32 GameManagerScript::scoreSub
	int32_t ___scoreSub_4;
	// System.Single GameManagerScript::timeToStartSub
	float ___timeToStartSub_5;
	// UnityEngine.UI.Text GameManagerScript::scoreText
	Text_t3921196294 * ___scoreText_6;
	// UnityEngine.UI.Text GameManagerScript::timeText
	Text_t3921196294 * ___timeText_7;
	// System.Single GameManagerScript::timer
	float ___timer_9;
	// System.Single GameManagerScript::prevSubTime
	float ___prevSubTime_10;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_puzzlePieceCount_3() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___puzzlePieceCount_3)); }
	inline int32_t get_puzzlePieceCount_3() const { return ___puzzlePieceCount_3; }
	inline int32_t* get_address_of_puzzlePieceCount_3() { return &___puzzlePieceCount_3; }
	inline void set_puzzlePieceCount_3(int32_t value)
	{
		___puzzlePieceCount_3 = value;
	}

	inline static int32_t get_offset_of_scoreSub_4() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___scoreSub_4)); }
	inline int32_t get_scoreSub_4() const { return ___scoreSub_4; }
	inline int32_t* get_address_of_scoreSub_4() { return &___scoreSub_4; }
	inline void set_scoreSub_4(int32_t value)
	{
		___scoreSub_4 = value;
	}

	inline static int32_t get_offset_of_timeToStartSub_5() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___timeToStartSub_5)); }
	inline float get_timeToStartSub_5() const { return ___timeToStartSub_5; }
	inline float* get_address_of_timeToStartSub_5() { return &___timeToStartSub_5; }
	inline void set_timeToStartSub_5(float value)
	{
		___timeToStartSub_5 = value;
	}

	inline static int32_t get_offset_of_scoreText_6() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___scoreText_6)); }
	inline Text_t3921196294 * get_scoreText_6() const { return ___scoreText_6; }
	inline Text_t3921196294 ** get_address_of_scoreText_6() { return &___scoreText_6; }
	inline void set_scoreText_6(Text_t3921196294 * value)
	{
		___scoreText_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_6, value);
	}

	inline static int32_t get_offset_of_timeText_7() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___timeText_7)); }
	inline Text_t3921196294 * get_timeText_7() const { return ___timeText_7; }
	inline Text_t3921196294 ** get_address_of_timeText_7() { return &___timeText_7; }
	inline void set_timeText_7(Text_t3921196294 * value)
	{
		___timeText_7 = value;
		Il2CppCodeGenWriteBarrier(&___timeText_7, value);
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}

	inline static int32_t get_offset_of_prevSubTime_10() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___prevSubTime_10)); }
	inline float get_prevSubTime_10() const { return ___prevSubTime_10; }
	inline float* get_address_of_prevSubTime_10() { return &___prevSubTime_10; }
	inline void set_prevSubTime_10(float value)
	{
		___prevSubTime_10 = value;
	}
};

struct GameManagerScript_t3648479706_StaticFields
{
public:
	// GameManagerScript GameManagerScript::instance
	GameManagerScript_t3648479706 * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706_StaticFields, ___instance_8)); }
	inline GameManagerScript_t3648479706 * get_instance_8() const { return ___instance_8; }
	inline GameManagerScript_t3648479706 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(GameManagerScript_t3648479706 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier(&___instance_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
