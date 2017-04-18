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
// UnityEngine.UI.Image
struct Image_t2042527209;
// gunController
struct gunController_t2445060590;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerController::blood
	GameObject_t1756533147 * ___blood_2;
	// UnityEngine.UI.Image PlayerController::bloodImage
	Image_t2042527209 * ___bloodImage_3;
	// System.Boolean PlayerController::shouldLerp
	bool ___shouldLerp_4;
	// gunController PlayerController::gc
	gunController_t2445060590 * ___gc_5;

public:
	inline static int32_t get_offset_of_blood_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___blood_2)); }
	inline GameObject_t1756533147 * get_blood_2() const { return ___blood_2; }
	inline GameObject_t1756533147 ** get_address_of_blood_2() { return &___blood_2; }
	inline void set_blood_2(GameObject_t1756533147 * value)
	{
		___blood_2 = value;
		Il2CppCodeGenWriteBarrier(&___blood_2, value);
	}

	inline static int32_t get_offset_of_bloodImage_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___bloodImage_3)); }
	inline Image_t2042527209 * get_bloodImage_3() const { return ___bloodImage_3; }
	inline Image_t2042527209 ** get_address_of_bloodImage_3() { return &___bloodImage_3; }
	inline void set_bloodImage_3(Image_t2042527209 * value)
	{
		___bloodImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___bloodImage_3, value);
	}

	inline static int32_t get_offset_of_shouldLerp_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shouldLerp_4)); }
	inline bool get_shouldLerp_4() const { return ___shouldLerp_4; }
	inline bool* get_address_of_shouldLerp_4() { return &___shouldLerp_4; }
	inline void set_shouldLerp_4(bool value)
	{
		___shouldLerp_4 = value;
	}

	inline static int32_t get_offset_of_gc_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gc_5)); }
	inline gunController_t2445060590 * get_gc_5() const { return ___gc_5; }
	inline gunController_t2445060590 ** get_address_of_gc_5() { return &___gc_5; }
	inline void set_gc_5(gunController_t2445060590 * value)
	{
		___gc_5 = value;
		Il2CppCodeGenWriteBarrier(&___gc_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
