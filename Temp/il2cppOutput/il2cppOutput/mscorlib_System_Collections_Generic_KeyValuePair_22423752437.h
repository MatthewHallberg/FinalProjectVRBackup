﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr3432166560.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct  KeyValuePair_2_t2423752437 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t1329355276  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseAgeEntry_t3432166560  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2423752437, ___key_0)); }
	inline TrackableIdPair_t1329355276  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t1329355276 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t1329355276  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2423752437, ___value_1)); }
	inline PoseAgeEntry_t3432166560  get_value_1() const { return ___value_1; }
	inline PoseAgeEntry_t3432166560 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseAgeEntry_t3432166560  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
