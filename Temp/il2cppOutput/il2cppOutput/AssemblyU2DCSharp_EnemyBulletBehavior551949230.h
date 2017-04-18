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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBulletBehavior
struct  EnemyBulletBehavior_t551949230  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyBulletBehavior::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.Rigidbody EnemyBulletBehavior::rb
	Rigidbody_t4233889191 * ___rb_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(EnemyBulletBehavior_t551949230, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(EnemyBulletBehavior_t551949230, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
