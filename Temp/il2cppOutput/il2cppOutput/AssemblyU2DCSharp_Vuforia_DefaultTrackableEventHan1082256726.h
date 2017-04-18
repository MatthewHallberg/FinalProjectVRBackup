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
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Vuforia.DefaultTrackableEventHandler::Gun
	GameObject_t1756533147 * ___Gun_2;
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_3;

public:
	inline static int32_t get_offset_of_Gun_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___Gun_2)); }
	inline GameObject_t1756533147 * get_Gun_2() const { return ___Gun_2; }
	inline GameObject_t1756533147 ** get_address_of_Gun_2() { return &___Gun_2; }
	inline void set_Gun_2(GameObject_t1756533147 * value)
	{
		___Gun_2 = value;
		Il2CppCodeGenWriteBarrier(&___Gun_2, value);
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_3)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_3() const { return ___mTrackableBehaviour_3; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_3() { return &___mTrackableBehaviour_3; }
	inline void set_mTrackableBehaviour_3(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
