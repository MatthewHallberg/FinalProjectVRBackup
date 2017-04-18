﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Image
struct Image_t1391689025;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t2944021518;

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3421455115.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3150040852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordImpl
struct  WordImpl_t1843145168  : public TrackableImpl_t3421455115
{
public:
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t2243707579  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t1391689025 * ___mLetterMask_4;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t3150040852  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t2944021518* ___mLetterBoundingBoxes_6;

public:
	inline static int32_t get_offset_of_mText_2() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mText_2)); }
	inline String_t* get_mText_2() const { return ___mText_2; }
	inline String_t** get_address_of_mText_2() { return &___mText_2; }
	inline void set_mText_2(String_t* value)
	{
		___mText_2 = value;
		Il2CppCodeGenWriteBarrier(&___mText_2, value);
	}

	inline static int32_t get_offset_of_mSize_3() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mSize_3)); }
	inline Vector2_t2243707579  get_mSize_3() const { return ___mSize_3; }
	inline Vector2_t2243707579 * get_address_of_mSize_3() { return &___mSize_3; }
	inline void set_mSize_3(Vector2_t2243707579  value)
	{
		___mSize_3 = value;
	}

	inline static int32_t get_offset_of_mLetterMask_4() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mLetterMask_4)); }
	inline Image_t1391689025 * get_mLetterMask_4() const { return ___mLetterMask_4; }
	inline Image_t1391689025 ** get_address_of_mLetterMask_4() { return &___mLetterMask_4; }
	inline void set_mLetterMask_4(Image_t1391689025 * value)
	{
		___mLetterMask_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLetterMask_4, value);
	}

	inline static int32_t get_offset_of_mLetterImageHeader_5() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mLetterImageHeader_5)); }
	inline ImageHeaderData_t3150040852  get_mLetterImageHeader_5() const { return ___mLetterImageHeader_5; }
	inline ImageHeaderData_t3150040852 * get_address_of_mLetterImageHeader_5() { return &___mLetterImageHeader_5; }
	inline void set_mLetterImageHeader_5(ImageHeaderData_t3150040852  value)
	{
		___mLetterImageHeader_5 = value;
	}

	inline static int32_t get_offset_of_mLetterBoundingBoxes_6() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mLetterBoundingBoxes_6)); }
	inline RectangleDataU5BU5D_t2944021518* get_mLetterBoundingBoxes_6() const { return ___mLetterBoundingBoxes_6; }
	inline RectangleDataU5BU5D_t2944021518** get_address_of_mLetterBoundingBoxes_6() { return &___mLetterBoundingBoxes_6; }
	inline void set_mLetterBoundingBoxes_6(RectangleDataU5BU5D_t2944021518* value)
	{
		___mLetterBoundingBoxes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mLetterBoundingBoxes_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
