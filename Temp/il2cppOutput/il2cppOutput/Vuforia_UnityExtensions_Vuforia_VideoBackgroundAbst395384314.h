﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t3732945727;
// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>
struct HashSet_1_t3896669254;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundAbstractBehaviour
struct  VideoBackgroundAbstractBehaviour_t395384314  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mClearBuffers
	int32_t ___mClearBuffers_2;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mSkipStateUpdates
	int32_t ___mSkipStateUpdates_3;
	// Vuforia.VuforiaARController Vuforia.VideoBackgroundAbstractBehaviour::mVuforiaARController
	VuforiaARController_t4061728485 * ___mVuforiaARController_4;
	// UnityEngine.Camera Vuforia.VideoBackgroundAbstractBehaviour::mCamera
	Camera_t189460977 * ___mCamera_5;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mBackgroundBehaviour
	BackgroundPlaneAbstractBehaviour_t3732945727 * ___mBackgroundBehaviour_6;
	// System.Single Vuforia.VideoBackgroundAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_7;
	// System.Boolean Vuforia.VideoBackgroundAbstractBehaviour::mResetMatrix
	bool ___mResetMatrix_10;
	// UnityEngine.Vector2 Vuforia.VideoBackgroundAbstractBehaviour::mVuforiaFrustumSkew
	Vector2_t2243707579  ___mVuforiaFrustumSkew_11;
	// UnityEngine.Vector2 Vuforia.VideoBackgroundAbstractBehaviour::mCenterToEyeAxis
	Vector2_t2243707579  ___mCenterToEyeAxis_12;
	// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer> Vuforia.VideoBackgroundAbstractBehaviour::mDisabledMeshRenderers
	HashSet_1_t3896669254 * ___mDisabledMeshRenderers_13;

public:
	inline static int32_t get_offset_of_mClearBuffers_2() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mClearBuffers_2)); }
	inline int32_t get_mClearBuffers_2() const { return ___mClearBuffers_2; }
	inline int32_t* get_address_of_mClearBuffers_2() { return &___mClearBuffers_2; }
	inline void set_mClearBuffers_2(int32_t value)
	{
		___mClearBuffers_2 = value;
	}

	inline static int32_t get_offset_of_mSkipStateUpdates_3() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mSkipStateUpdates_3)); }
	inline int32_t get_mSkipStateUpdates_3() const { return ___mSkipStateUpdates_3; }
	inline int32_t* get_address_of_mSkipStateUpdates_3() { return &___mSkipStateUpdates_3; }
	inline void set_mSkipStateUpdates_3(int32_t value)
	{
		___mSkipStateUpdates_3 = value;
	}

	inline static int32_t get_offset_of_mVuforiaARController_4() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mVuforiaARController_4)); }
	inline VuforiaARController_t4061728485 * get_mVuforiaARController_4() const { return ___mVuforiaARController_4; }
	inline VuforiaARController_t4061728485 ** get_address_of_mVuforiaARController_4() { return &___mVuforiaARController_4; }
	inline void set_mVuforiaARController_4(VuforiaARController_t4061728485 * value)
	{
		___mVuforiaARController_4 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaARController_4, value);
	}

	inline static int32_t get_offset_of_mCamera_5() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mCamera_5)); }
	inline Camera_t189460977 * get_mCamera_5() const { return ___mCamera_5; }
	inline Camera_t189460977 ** get_address_of_mCamera_5() { return &___mCamera_5; }
	inline void set_mCamera_5(Camera_t189460977 * value)
	{
		___mCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCamera_5, value);
	}

	inline static int32_t get_offset_of_mBackgroundBehaviour_6() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mBackgroundBehaviour_6)); }
	inline BackgroundPlaneAbstractBehaviour_t3732945727 * get_mBackgroundBehaviour_6() const { return ___mBackgroundBehaviour_6; }
	inline BackgroundPlaneAbstractBehaviour_t3732945727 ** get_address_of_mBackgroundBehaviour_6() { return &___mBackgroundBehaviour_6; }
	inline void set_mBackgroundBehaviour_6(BackgroundPlaneAbstractBehaviour_t3732945727 * value)
	{
		___mBackgroundBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundBehaviour_6, value);
	}

	inline static int32_t get_offset_of_mStereoDepth_7() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mStereoDepth_7)); }
	inline float get_mStereoDepth_7() const { return ___mStereoDepth_7; }
	inline float* get_address_of_mStereoDepth_7() { return &___mStereoDepth_7; }
	inline void set_mStereoDepth_7(float value)
	{
		___mStereoDepth_7 = value;
	}

	inline static int32_t get_offset_of_mResetMatrix_10() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mResetMatrix_10)); }
	inline bool get_mResetMatrix_10() const { return ___mResetMatrix_10; }
	inline bool* get_address_of_mResetMatrix_10() { return &___mResetMatrix_10; }
	inline void set_mResetMatrix_10(bool value)
	{
		___mResetMatrix_10 = value;
	}

	inline static int32_t get_offset_of_mVuforiaFrustumSkew_11() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mVuforiaFrustumSkew_11)); }
	inline Vector2_t2243707579  get_mVuforiaFrustumSkew_11() const { return ___mVuforiaFrustumSkew_11; }
	inline Vector2_t2243707579 * get_address_of_mVuforiaFrustumSkew_11() { return &___mVuforiaFrustumSkew_11; }
	inline void set_mVuforiaFrustumSkew_11(Vector2_t2243707579  value)
	{
		___mVuforiaFrustumSkew_11 = value;
	}

	inline static int32_t get_offset_of_mCenterToEyeAxis_12() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mCenterToEyeAxis_12)); }
	inline Vector2_t2243707579  get_mCenterToEyeAxis_12() const { return ___mCenterToEyeAxis_12; }
	inline Vector2_t2243707579 * get_address_of_mCenterToEyeAxis_12() { return &___mCenterToEyeAxis_12; }
	inline void set_mCenterToEyeAxis_12(Vector2_t2243707579  value)
	{
		___mCenterToEyeAxis_12 = value;
	}

	inline static int32_t get_offset_of_mDisabledMeshRenderers_13() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314, ___mDisabledMeshRenderers_13)); }
	inline HashSet_1_t3896669254 * get_mDisabledMeshRenderers_13() const { return ___mDisabledMeshRenderers_13; }
	inline HashSet_1_t3896669254 ** get_address_of_mDisabledMeshRenderers_13() { return &___mDisabledMeshRenderers_13; }
	inline void set_mDisabledMeshRenderers_13(HashSet_1_t3896669254 * value)
	{
		___mDisabledMeshRenderers_13 = value;
		Il2CppCodeGenWriteBarrier(&___mDisabledMeshRenderers_13, value);
	}
};

struct VideoBackgroundAbstractBehaviour_t395384314_StaticFields
{
public:
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mFrameCounter
	int32_t ___mFrameCounter_8;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mRenderCounter
	int32_t ___mRenderCounter_9;

public:
	inline static int32_t get_offset_of_mFrameCounter_8() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314_StaticFields, ___mFrameCounter_8)); }
	inline int32_t get_mFrameCounter_8() const { return ___mFrameCounter_8; }
	inline int32_t* get_address_of_mFrameCounter_8() { return &___mFrameCounter_8; }
	inline void set_mFrameCounter_8(int32_t value)
	{
		___mFrameCounter_8 = value;
	}

	inline static int32_t get_offset_of_mRenderCounter_9() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t395384314_StaticFields, ___mRenderCounter_9)); }
	inline int32_t get_mRenderCounter_9() const { return ___mRenderCounter_9; }
	inline int32_t* get_address_of_mRenderCounter_9() { return &___mRenderCounter_9; }
	inline void set_mRenderCounter_9(int32_t value)
	{
		___mRenderCounter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
