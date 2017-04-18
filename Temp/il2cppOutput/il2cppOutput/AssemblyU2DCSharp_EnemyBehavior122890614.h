#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBehavior
struct  EnemyBehavior_t122890614  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyBehavior::player
	GameObject_t1756533147 * ___player_2;
	// System.Boolean EnemyBehavior::turning
	bool ___turning_3;
	// System.Boolean EnemyBehavior::turnWasStarted
	bool ___turnWasStarted_4;
	// System.Int32 EnemyBehavior::hitCount
	int32_t ___hitCount_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_turning_3() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___turning_3)); }
	inline bool get_turning_3() const { return ___turning_3; }
	inline bool* get_address_of_turning_3() { return &___turning_3; }
	inline void set_turning_3(bool value)
	{
		___turning_3 = value;
	}

	inline static int32_t get_offset_of_turnWasStarted_4() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___turnWasStarted_4)); }
	inline bool get_turnWasStarted_4() const { return ___turnWasStarted_4; }
	inline bool* get_address_of_turnWasStarted_4() { return &___turnWasStarted_4; }
	inline void set_turnWasStarted_4(bool value)
	{
		___turnWasStarted_4 = value;
	}

	inline static int32_t get_offset_of_hitCount_5() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___hitCount_5)); }
	inline int32_t get_hitCount_5() const { return ___hitCount_5; }
	inline int32_t* get_address_of_hitCount_5() { return &___hitCount_5; }
	inline void set_hitCount_5(int32_t value)
	{
		___hitCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
