﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1137456562;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DistortionRenderingBehaviour
struct  DistortionRenderingBehaviour_t2945034146  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mSingleTexture
	bool ___mSingleTexture_2;
	// System.Int32 Vuforia.DistortionRenderingBehaviour::mRenderLayer
	int32_t ___mRenderLayer_3;
	// System.Int32[] Vuforia.DistortionRenderingBehaviour::mOriginalCullingMasks
	Int32U5BU5D_t3030399641* ___mOriginalCullingMasks_4;
	// UnityEngine.Camera[] Vuforia.DistortionRenderingBehaviour::mStereoCameras
	CameraU5BU5D_t3079764780* ___mStereoCameras_5;
	// UnityEngine.GameObject[] Vuforia.DistortionRenderingBehaviour::mMeshes
	GameObjectU5BU5D_t3057952154* ___mMeshes_6;
	// UnityEngine.RenderTexture[] Vuforia.DistortionRenderingBehaviour::mTextures
	RenderTextureU5BU5D_t1137456562* ___mTextures_7;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mStarted
	bool ___mStarted_8;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mVideoBackgroundChanged
	bool ___mVideoBackgroundChanged_9;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalLeftViewport
	Rect_t3681755626  ___mOriginalLeftViewport_10;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalRightViewport
	Rect_t3681755626  ___mOriginalRightViewport_11;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureLeftViewport
	Rect_t3681755626  ___mDualTextureLeftViewport_12;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureRightViewport
	Rect_t3681755626  ___mDualTextureRightViewport_13;

public:
	inline static int32_t get_offset_of_mSingleTexture_2() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mSingleTexture_2)); }
	inline bool get_mSingleTexture_2() const { return ___mSingleTexture_2; }
	inline bool* get_address_of_mSingleTexture_2() { return &___mSingleTexture_2; }
	inline void set_mSingleTexture_2(bool value)
	{
		___mSingleTexture_2 = value;
	}

	inline static int32_t get_offset_of_mRenderLayer_3() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mRenderLayer_3)); }
	inline int32_t get_mRenderLayer_3() const { return ___mRenderLayer_3; }
	inline int32_t* get_address_of_mRenderLayer_3() { return &___mRenderLayer_3; }
	inline void set_mRenderLayer_3(int32_t value)
	{
		___mRenderLayer_3 = value;
	}

	inline static int32_t get_offset_of_mOriginalCullingMasks_4() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mOriginalCullingMasks_4)); }
	inline Int32U5BU5D_t3030399641* get_mOriginalCullingMasks_4() const { return ___mOriginalCullingMasks_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_mOriginalCullingMasks_4() { return &___mOriginalCullingMasks_4; }
	inline void set_mOriginalCullingMasks_4(Int32U5BU5D_t3030399641* value)
	{
		___mOriginalCullingMasks_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginalCullingMasks_4, value);
	}

	inline static int32_t get_offset_of_mStereoCameras_5() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mStereoCameras_5)); }
	inline CameraU5BU5D_t3079764780* get_mStereoCameras_5() const { return ___mStereoCameras_5; }
	inline CameraU5BU5D_t3079764780** get_address_of_mStereoCameras_5() { return &___mStereoCameras_5; }
	inline void set_mStereoCameras_5(CameraU5BU5D_t3079764780* value)
	{
		___mStereoCameras_5 = value;
		Il2CppCodeGenWriteBarrier(&___mStereoCameras_5, value);
	}

	inline static int32_t get_offset_of_mMeshes_6() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mMeshes_6)); }
	inline GameObjectU5BU5D_t3057952154* get_mMeshes_6() const { return ___mMeshes_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mMeshes_6() { return &___mMeshes_6; }
	inline void set_mMeshes_6(GameObjectU5BU5D_t3057952154* value)
	{
		___mMeshes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMeshes_6, value);
	}

	inline static int32_t get_offset_of_mTextures_7() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mTextures_7)); }
	inline RenderTextureU5BU5D_t1137456562* get_mTextures_7() const { return ___mTextures_7; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_mTextures_7() { return &___mTextures_7; }
	inline void set_mTextures_7(RenderTextureU5BU5D_t1137456562* value)
	{
		___mTextures_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTextures_7, value);
	}

	inline static int32_t get_offset_of_mStarted_8() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mStarted_8)); }
	inline bool get_mStarted_8() const { return ___mStarted_8; }
	inline bool* get_address_of_mStarted_8() { return &___mStarted_8; }
	inline void set_mStarted_8(bool value)
	{
		___mStarted_8 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundChanged_9() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mVideoBackgroundChanged_9)); }
	inline bool get_mVideoBackgroundChanged_9() const { return ___mVideoBackgroundChanged_9; }
	inline bool* get_address_of_mVideoBackgroundChanged_9() { return &___mVideoBackgroundChanged_9; }
	inline void set_mVideoBackgroundChanged_9(bool value)
	{
		___mVideoBackgroundChanged_9 = value;
	}

	inline static int32_t get_offset_of_mOriginalLeftViewport_10() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mOriginalLeftViewport_10)); }
	inline Rect_t3681755626  get_mOriginalLeftViewport_10() const { return ___mOriginalLeftViewport_10; }
	inline Rect_t3681755626 * get_address_of_mOriginalLeftViewport_10() { return &___mOriginalLeftViewport_10; }
	inline void set_mOriginalLeftViewport_10(Rect_t3681755626  value)
	{
		___mOriginalLeftViewport_10 = value;
	}

	inline static int32_t get_offset_of_mOriginalRightViewport_11() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mOriginalRightViewport_11)); }
	inline Rect_t3681755626  get_mOriginalRightViewport_11() const { return ___mOriginalRightViewport_11; }
	inline Rect_t3681755626 * get_address_of_mOriginalRightViewport_11() { return &___mOriginalRightViewport_11; }
	inline void set_mOriginalRightViewport_11(Rect_t3681755626  value)
	{
		___mOriginalRightViewport_11 = value;
	}

	inline static int32_t get_offset_of_mDualTextureLeftViewport_12() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mDualTextureLeftViewport_12)); }
	inline Rect_t3681755626  get_mDualTextureLeftViewport_12() const { return ___mDualTextureLeftViewport_12; }
	inline Rect_t3681755626 * get_address_of_mDualTextureLeftViewport_12() { return &___mDualTextureLeftViewport_12; }
	inline void set_mDualTextureLeftViewport_12(Rect_t3681755626  value)
	{
		___mDualTextureLeftViewport_12 = value;
	}

	inline static int32_t get_offset_of_mDualTextureRightViewport_13() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t2945034146, ___mDualTextureRightViewport_13)); }
	inline Rect_t3681755626  get_mDualTextureRightViewport_13() const { return ___mDualTextureRightViewport_13; }
	inline Rect_t3681755626 * get_address_of_mDualTextureRightViewport_13() { return &___mDualTextureRightViewport_13; }
	inline void set_mDualTextureRightViewport_13(Rect_t3681755626  value)
	{
		___mDualTextureRightViewport_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
