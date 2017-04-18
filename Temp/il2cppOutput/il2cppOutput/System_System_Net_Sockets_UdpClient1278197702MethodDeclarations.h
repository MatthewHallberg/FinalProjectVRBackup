#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Sockets.UdpClient
struct UdpClient_t1278197702;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
extern "C"  void UdpClient__ctor_m2819550893 (UdpClient_t1278197702 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::System.IDisposable.Dispose()
extern "C"  void UdpClient_System_IDisposable_Dispose_m3664529459 (UdpClient_t1278197702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::InitSocket(System.Net.EndPoint)
extern "C"  void UdpClient_InitSocket_m3011230328 (UdpClient_t1278197702 * __this, EndPoint_t4156119363 * ___localEP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UdpClient_BeginReceive_m3219495788 (UdpClient_t1278197702 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern "C"  ByteU5BU5D_t3397334013* UdpClient_EndReceive_m1059013247 (UdpClient_t1278197702 * __this, Il2CppObject * ___asyncResult0, IPEndPoint_t2615413766 ** ___remoteEP1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Dispose(System.Boolean)
extern "C"  void UdpClient_Dispose_m2051482172 (UdpClient_t1278197702 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Finalize()
extern "C"  void UdpClient_Finalize_m3567066892 (UdpClient_t1278197702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::CheckDisposed()
extern "C"  void UdpClient_CheckDisposed_m705034929 (UdpClient_t1278197702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
