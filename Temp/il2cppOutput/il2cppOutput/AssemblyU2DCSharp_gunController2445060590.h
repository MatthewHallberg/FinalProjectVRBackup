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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gunController
struct  gunController_t2445060590  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean gunController::walking
	bool ___walking_2;
	// System.Single gunController::speed
	float ___speed_3;
	// UnityEngine.GameObject gunController::shield
	GameObject_t1756533147 * ___shield_4;
	// System.Boolean gunController::shieldIsUp
	bool ___shieldIsUp_5;
	// System.Boolean gunController::firing
	bool ___firing_6;
	// System.Single gunController::fireRate
	float ___fireRate_7;
	// System.Single gunController::nextFire
	float ___nextFire_8;
	// UnityEngine.AudioSource gunController::audio
	AudioSource_t1135106623 * ___audio_9;
	// UnityEngine.GameObject gunController::bullet
	GameObject_t1756533147 * ___bullet_10;
	// UnityEngine.GameObject gunController::spawnPoint
	GameObject_t1756533147 * ___spawnPoint_11;
	// UnityEngine.GameObject gunController::Gun
	GameObject_t1756533147 * ___Gun_12;

public:
	inline static int32_t get_offset_of_walking_2() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___walking_2)); }
	inline bool get_walking_2() const { return ___walking_2; }
	inline bool* get_address_of_walking_2() { return &___walking_2; }
	inline void set_walking_2(bool value)
	{
		___walking_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_shield_4() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___shield_4)); }
	inline GameObject_t1756533147 * get_shield_4() const { return ___shield_4; }
	inline GameObject_t1756533147 ** get_address_of_shield_4() { return &___shield_4; }
	inline void set_shield_4(GameObject_t1756533147 * value)
	{
		___shield_4 = value;
		Il2CppCodeGenWriteBarrier(&___shield_4, value);
	}

	inline static int32_t get_offset_of_shieldIsUp_5() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___shieldIsUp_5)); }
	inline bool get_shieldIsUp_5() const { return ___shieldIsUp_5; }
	inline bool* get_address_of_shieldIsUp_5() { return &___shieldIsUp_5; }
	inline void set_shieldIsUp_5(bool value)
	{
		___shieldIsUp_5 = value;
	}

	inline static int32_t get_offset_of_firing_6() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___firing_6)); }
	inline bool get_firing_6() const { return ___firing_6; }
	inline bool* get_address_of_firing_6() { return &___firing_6; }
	inline void set_firing_6(bool value)
	{
		___firing_6 = value;
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}

	inline static int32_t get_offset_of_audio_9() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___audio_9)); }
	inline AudioSource_t1135106623 * get_audio_9() const { return ___audio_9; }
	inline AudioSource_t1135106623 ** get_address_of_audio_9() { return &___audio_9; }
	inline void set_audio_9(AudioSource_t1135106623 * value)
	{
		___audio_9 = value;
		Il2CppCodeGenWriteBarrier(&___audio_9, value);
	}

	inline static int32_t get_offset_of_bullet_10() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___bullet_10)); }
	inline GameObject_t1756533147 * get_bullet_10() const { return ___bullet_10; }
	inline GameObject_t1756533147 ** get_address_of_bullet_10() { return &___bullet_10; }
	inline void set_bullet_10(GameObject_t1756533147 * value)
	{
		___bullet_10 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_10, value);
	}

	inline static int32_t get_offset_of_spawnPoint_11() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___spawnPoint_11)); }
	inline GameObject_t1756533147 * get_spawnPoint_11() const { return ___spawnPoint_11; }
	inline GameObject_t1756533147 ** get_address_of_spawnPoint_11() { return &___spawnPoint_11; }
	inline void set_spawnPoint_11(GameObject_t1756533147 * value)
	{
		___spawnPoint_11 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_11, value);
	}

	inline static int32_t get_offset_of_Gun_12() { return static_cast<int32_t>(offsetof(gunController_t2445060590, ___Gun_12)); }
	inline GameObject_t1756533147 * get_Gun_12() const { return ___Gun_12; }
	inline GameObject_t1756533147 ** get_address_of_Gun_12() { return &___Gun_12; }
	inline void set_Gun_12(GameObject_t1756533147 * value)
	{
		___Gun_12 = value;
		Il2CppCodeGenWriteBarrier(&___Gun_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
