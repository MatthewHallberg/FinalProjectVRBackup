﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t1210651633;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m1152901278 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetCameraDirection_m1185555680 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetCameraField_m711848676 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m2087319325 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___fovVectorContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldBool_m2888303282 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldFloat_m3884659222 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64_m2257095147 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64Range_m3459352038 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, IntPtr_t ___intRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldString_m3480342432 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, StringBuilder_t1221177846 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumCameraFields_m2571014198 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m1157853523 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m302402639 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m807781252 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m2016613001 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m970640227 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldBool_m2173082941 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldFloat_m225269101 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64_m1597940631 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64Range_m3390387310 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldString_m2308695447 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m161590340 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m3804486714 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m3074857167 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m3151693519 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_AddDistortionCoefficient_m3499897001 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_ClearDistortionCoefficients_m2289754423 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_delete_m1409602130 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_CustomViewerParameters_new_m265885501 (VuforiaNativeIosWrapper_t1210651633 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetButtonType_m2733103106 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetContainsMagnet_m4001863969 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetFieldOfView_m3367427213 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetInterLensDistance_m3945732435 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m2845567325 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetScreenToLensDistance_m1646022090 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetTrayAlignment_m4199441105 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m2512799187 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m3044531299 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m1857345412 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m3164449167 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m2185825815 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m344764689 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetExists_m2603130428 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m3058657915 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m2005700695 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m2596356640 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m299544149 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetLoad_m74301160 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_DeinitFrameState_m2554644580 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_Device_GetMode_m4140149265 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetSelectedViewer_m1505025856 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetViewerList_m4044609621 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_Device_IsViewerPresent_m3731987927 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_Device_SelectViewer_m2040586310 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_Device_SetMode_m1981898282 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_Device_SetViewerPresent_m754792458 (VuforiaNativeIosWrapper_t1210651633 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DeviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_DeviceIsEyewearDevice_m432492141 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMClearProfile_m2678252602 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m2591782878 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetCameraToEyePose_m3864084515 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetEyeProjection_m3756689217 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m662265504 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m74204045 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m1748450535 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m939325052 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m1362125829 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetCameraToEyePose_m3847257495 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetEyeProjection_m1699826485 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m1326722226 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceGetScreenOrientation_m127385927 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtended_m1147620486 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m86127519 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDualDisplay_m283177535 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m226493848 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsSeeThru_m3255744929 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceSetDisplayExtended_m3408200003 (VuforiaNativeIosWrapper_t1210651633 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceSetPredictiveTracking_m174335064 (VuforiaNativeIosWrapper_t1210651633 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m1022551552 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m2350038758 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m3444678698 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m1851885123 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m2508866847 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m610769791 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m2879492543 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_GetProjectionGL_m3958918218 (VuforiaNativeIosWrapper_t1210651633 * __this, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_GetVuforiaLibraryVersion_m2616556127 (VuforiaNativeIosWrapper_t1210651633 * __this, StringBuilder_t1221177846 * ___value0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m1411406811 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m761460217 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___name0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m1489038982 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m2028146589 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m1862534857 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m3689948729 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m3356595724 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m736427530 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m371823917 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m3989696179 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t1221177846 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m868907208 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_InitFrameState_m1012189235 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_InitPlatformNative_m1809835485 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::MultiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeIosWrapper_MultiTargetGetLargestSizeComponent_m3440076165 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m804931780 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m3030721496 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m3557428407 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m2817648219 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m2648798182 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m301844456 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m3393631373 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m424156371 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C"  void VuforiaNativeIosWrapper_OnPause_m2560128968 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C"  void VuforiaNativeIosWrapper_OnResume_m1408289077 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_OnSurfaceChanged_m307016283 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_QcarAddCameraFrame_m2904837623 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C"  void VuforiaNativeIosWrapper_QcarDeinit_m4207857047 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m3641959808 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarInit_m1620694890 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m913867524 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetHint_m2435668228 (VuforiaNativeIosWrapper_t1210651633 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4055328441 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m1516900789 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m2980521543 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionReset_m4122793900 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m4087028836 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m2047814053 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionStart_m2330593959 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionStop_m2134173667 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::RendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_RendererCreateNativeTexture_m1318632830 (VuforiaNativeIosWrapper_t1210651633 * __this, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C"  void VuforiaNativeIosWrapper_RendererEnd_m2703841983 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetGraphicsAPI_m1052861569 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m3849508297 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m900453101 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3496016516 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3369144807 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m3254069681 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m2671740442 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTexturePtr_m3975425300 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_DeleteCopy_m11704288 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMesh_m3898684507 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMeshSize_m1922283246 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionTextureViewport_m1194762575 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEffectiveFov_m2223623225 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m1048175274 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetNormalizedViewport_m2259441382 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetProjectionMatrix_m1170110928 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewport_m669351719 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m1483442813 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_UpdateCopy_m3173378786 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m680451865 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m2044223864 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetPosePrediction_m2933739195 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_Recenter_m2484813333 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m3151279954 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m814525146 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetPosePrediction_m691473712 (VuforiaNativeIosWrapper_t1210651633 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetApplicationEnvironment_m75822216 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SetHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SetHolographicAppCS_m735300802 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___appSpecifiedCS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_SetRenderBuffers_m3342542844 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetStateBufferSize_m3213366782 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m2495975253 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m1815804104 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m1251424812 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m609742430 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m3971717530 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m302996419 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m620295786 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m2783048279 (VuforiaNativeIosWrapper_t1210651633 * __this, float ___scaleToMillimenters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m3153159432 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m577155968 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m4069983977 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m3699635235 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m1012242156 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m2512364458 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m3256667455 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m589564163 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m1218004482 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m3657386603 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStop_m4086500612 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderUpdate_m1076763128 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m3865666793 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m2445974948 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m2540501350 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m3935154363 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerStart_m2974003764 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TrackerStop_m1449029388 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_UpdateQCAR_m3873847443 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_ContainsMagnet_m2238426861 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_copy_m4121762008 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_delete_m84076153 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetButtonType_m706654982 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetDistortionCoefficient_m1023272655 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_GetFieldOfView_m318242640 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetInterLensDistance_m2088129059 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetLensCentreToTrayDistance_m3517560929 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetManufacturer_m3196302280 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetName_m4134217462 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetNumDistortionCoefficients_m3279147659 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetScreenToLensDistance_m2226660214 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetTrayAlignment_m1934941145 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetVersion_m1358966946 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Begin_m606335884 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetByIndex_m3002845065 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetByNameManufacturer_m850916446 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetListForAuthoringTools_m3527778128 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Next_m81190180 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_ViewerParametersList_SetSDKFilter_m1583373230 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParametersList_Size_m3906509153 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m569539281 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m3672781762 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m208095882 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m3799741596 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_VuforiaGetRenderEventCallback_m2270251237 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTargetGetInstanceImage_m1152364951 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetOrigin_m381959105 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetVuMarkUserData_m72354746 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t1221177846 * ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m2733792703 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m1006111415 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m610684220 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m4291907338 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m4161474916 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordU_m3618658491 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m658467842 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m2040191253 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m871389696 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m3494697002 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m2653430156 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m3809084866 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m1883806888 (VuforiaNativeIosWrapper_t1210651633 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m3389547606 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m3110586468 (VuforiaNativeIosWrapper_t1210651633 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m661376283 (VuforiaNativeIosWrapper_t1210651633 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m2056443526 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m1587929918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraDirection_m1728649600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetCameraField_m4250172676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m55423933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___fovVectorContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldBool_m3981804370 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldFloat_m980178806 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64_m4045292235 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64Range_m1981884486 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___intRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldString_m3298608192 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t1221177846 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumCameraFields_m1875692502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m1830756723 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m1845583535 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m2633929252 (Il2CppObject * __this /* static, unused */, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m31442025 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3211847683 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldBool_m3266305245 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldFloat_m1615749773 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64_m3386135735 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64Range_m2453804430 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldString_m3821169527 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m1889761380 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m3175089050 (Il2CppObject * __this /* static, unused */, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m3208437935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m3032355887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_AddDistortionCoefficient_m2661110409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_ClearDistortionCoefficients_m2509496407 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_delete_m1145210226 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_customViewerParameters_new_m3768036445 (Il2CppObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetButtonType_m1021066530 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetContainsMagnet_m1887028353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetFieldOfView_m2159232301 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetInterLensDistance_m3121437811 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetLensCentreToTrayDistance_m3470445629 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetScreenToLensDistance_m2806871658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetTrayAlignment_m3316586673 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m2568397939 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m1846085059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m428031588 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m3134277167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m2330511863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m1211145585 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetExists_m1609124316 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m1607768155 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m84910199 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m273956672 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m1442588405 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetLoad_m3012062920 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_deinitFrameState_m897954500 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_device_GetMode_m250013105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetSelectedViewer_m2573141792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetViewerList_m4247101621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_device_IsViewerPresent_m1262156215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SelectViewer_m220684390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SetMode_m2592184458 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_device_SetViewerPresent_m3090035818 (Il2CppObject * __this /* static, unused */, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_deviceIsEyewearDevice_m2657808909 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m3345323802 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m4075121662 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetCameraToEyePose_m2830964739 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetEyeProjection_m3700712801 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m3578964992 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m2069979309 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m381538951 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m2918768860 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m614447077 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetCameraToEyePose_m2814137719 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetEyeProjection_m1643850069 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m3973334866 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceGetScreenOrientation_m3076880359 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtended_m2903419110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m849691199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDualDisplay_m904056287 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m3486033528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsSeeThru_m3205109121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetDisplayExtended_m3083391203 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetPredictiveTracking_m630864248 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m1907921952 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m1311367942 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m2836689226 (Il2CppObject * __this /* static, unused */, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m1522517795 (Il2CppObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m2098774975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m2069907807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_getCameraThreadID_m1781433375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_getProjectionGL_m2982094058 (Il2CppObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_getVuforiaLibraryVersion_m1793725823 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___value0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m2869422907 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m2202258393 (Il2CppObject * __this /* static, unused */, String_t* ___name0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m2951572518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m2143164861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m4228299177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m1835474969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m3782989548 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m3689507626 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m2957197453 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m2247848339 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t1221177846 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m1743081832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_initFrameState_m2026310867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_initPlatformNative_m3868192701 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::multiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeIosWrapper_multiTargetGetLargestSizeComponent_m2588386597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m3619084004 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m1549906424 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m3612744791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m2032962555 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m1309291462 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m3141081480 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m3210300269 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m1726601523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C"  void VuforiaNativeIosWrapper_onPause_m405923240 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C"  void VuforiaNativeIosWrapper_onResume_m1771188757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_onSurfaceChanged_m3315021947 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_qcarAddCameraFrame_m4004049239 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C"  void VuforiaNativeIosWrapper_qcarDeinit_m101946935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m1980761568 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarInit_m2366259850 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m3296300004 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetHint_m389356964 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m4226052121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m183654805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionIsReconstructing_m1879333735 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionReset_m569248588 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m4277845316 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m1798156037 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStart_m1276739271 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStop_m718400579 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::rendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_rendererCreateNativeTexture_m3522408734 (Il2CppObject * __this /* static, unused */, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C"  void VuforiaNativeIosWrapper_rendererEnd_m3748908575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetGraphicsAPI_m4081151137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m2093869481 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m2044882061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3555068388 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m2005124487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m103531345 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m549253946 (Il2CppObject * __this /* static, unused */, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTexturePtr_m3508335028 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_DeleteCopy_m2389955136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMesh_m4267271227 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMeshSize_m1314955982 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionTextureViewport_m2409313007 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEffectiveFov_m2153537433 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2110868810 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetNormalizedViewport_m921064390 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetProjectionMatrix_m3624445744 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewport_m3203698759 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m1840788573 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_UpdateCopy_m3416861250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1993917689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m4270789976 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetPosePrediction_m1624677915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_Recenter_m4061718453 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m1264565106 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3332665146 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetPosePrediction_m3698643088 (Il2CppObject * __this /* static, unused */, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setApplicationEnvironment_m3840656360 (Il2CppObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::setHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_setHolographicAppCS_m2821035810 (Il2CppObject * __this /* static, unused */, IntPtr_t ___appSpecifiedCS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_setRenderBuffers_m1506452892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setStateBufferSize_m1566900126 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m2389970357 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m1899014632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m3362073420 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m1922190526 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m3922169658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m1812618339 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m4050234314 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m3009738487 (Il2CppObject * __this /* static, unused */, float ___scaleToMillimenters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_startExtendedTracking_m3420814888 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m3952460832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_targetFinderClearTrackables_m1475907081 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m2013149251 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m2220507596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m747558922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m4025907359 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m2135083875 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m617810274 (Il2CppObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m3928355403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStop_m1692693988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderUpdate_m4158881560 (Il2CppObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m1206411465 (Il2CppObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m3530828036 (Il2CppObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m667500934 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m3140201755 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerStart_m2503881172 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_trackerStop_m1414063980 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_updateQCAR_m1735310899 (Il2CppObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_ContainsMagnet_m1930084045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_copy_m2582006584 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_delete_m48747289 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetButtonType_m1555090342 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetDistortionCoefficient_m3282973871 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_GetFieldOfView_m2602457840 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetInterLensDistance_m3435326787 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetLensCentreToTrayDistance_m1510126145 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetManufacturer_m2113922472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetName_m292468950 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetNumDistortionCoefficients_m431163115 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetScreenToLensDistance_m127583126 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetTrayAlignment_m1144067705 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetVersion_m1868306690 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Begin_m1351734828 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByIndex_m3688531817 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByNameManufacturer_m3451169470 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetListForAuthoringTools_m3822216112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Next_m245097348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_viewerParametersList_SetSDKFilter_m2503443406 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParametersList_Size_m263769793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m190867889 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m2462416034 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m1979993002 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m3646875708 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_vuforiaGetRenderEventCallback_m3666992453 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTargetGetInstanceImage_m4273202231 (Il2CppObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetOrigin_m685820321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetVuMarkUserData_m2375377050 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t1221177846 * ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m2667943135 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m2060470295 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m1601539420 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4169273642 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m1504486340 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordU_m2664139803 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m2975657186 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m4226219317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m3662038304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m938934346 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m1378839596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m1741071522 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m393179080 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m887358902 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m1241517508 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m4090943099 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m1166082790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C"  void VuforiaNativeIosWrapper__ctor_m421771357 (VuforiaNativeIosWrapper_t1210651633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
