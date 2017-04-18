﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer2933102835.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4137084396.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRendererImpl
struct  VuforiaRendererImpl_t3510735303  : public VuforiaRenderer_t2933102835
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::mVideoBGConfig
	VideoBGCfgData_t4137084396  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRendererImpl::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRendererImpl::mVideoBackgroundTexture
	Texture_t2243626319 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRendererImpl::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRendererImpl::mNativeRenderingCallback
	IntPtr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t4137084396  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t4137084396 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t4137084396  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mVideoBackgroundTexture_3)); }
	inline Texture_t2243626319 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t2243626319 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t2243626319 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundTexture_3, value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3510735303, ___mNativeRenderingCallback_6)); }
	inline IntPtr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline IntPtr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(IntPtr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
