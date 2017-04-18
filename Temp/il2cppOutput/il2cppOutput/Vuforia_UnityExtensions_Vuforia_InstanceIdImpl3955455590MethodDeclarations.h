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

// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t3955455590;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType467315012.h"

// System.Void Vuforia.InstanceIdImpl::.ctor(System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32)
extern "C"  void InstanceIdImpl__ctor_m431159950 (InstanceIdImpl_t3955455590 * __this, ByteU5BU5D_t3397334013* ___buffer0, uint64_t ___numericValue1, int32_t ___dataType2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::get_DataType()
extern "C"  int32_t InstanceIdImpl_get_DataType_m306292916 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.InstanceIdImpl::get_Buffer()
extern "C"  ByteU5BU5D_t3397334013* InstanceIdImpl_get_Buffer_m2197602831 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.InstanceIdImpl::get_HexStringValue()
extern "C"  String_t* InstanceIdImpl_get_HexStringValue_m2871743341 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.InstanceIdImpl::get_StringValue()
extern "C"  String_t* InstanceIdImpl_get_StringValue_m1924037270 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Vuforia.InstanceIdImpl::get_NumericValue()
extern "C"  uint64_t InstanceIdImpl_get_NumericValue_m1364098803 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.InstanceIdImpl::ToString()
extern "C"  String_t* InstanceIdImpl_ToString_m1178136557 (InstanceIdImpl_t3955455590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
