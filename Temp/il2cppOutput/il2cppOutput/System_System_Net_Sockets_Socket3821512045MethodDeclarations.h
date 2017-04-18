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

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.SocketAddress
struct SocketAddress_t838303055;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_SocketType1143498533.h"
#include "System_System_Net_Sockets_ProtocolType2178963134.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_SocketAddress838303055.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Sockets_SelectMode3413969319.h"
#include "System_System_Net_Sockets_SocketShutdown3247039417.h"
#include "System_System_Net_Sockets_SocketOptionLevel1505247880.h"
#include "System_System_Net_Sockets_SocketOptionName1089121285.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m2624772808 (Socket_t3821512045 * __this, int32_t ___family0, int32_t ___type1, int32_t ___proto2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C"  void Socket__cctor_m3749119652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Socket_BeginReceiveFrom_m2386560515 (Socket_t3821512045 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socket_flags3, EndPoint_t4156119363 ** ___remote_end4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___state6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Bind_internal_m4281173658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, SocketAddress_t838303055 * ___sa1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C"  void Socket_Bind_m2654205209 (Socket_t3821512045 * __this, EndPoint_t4156119363 * ___local_end0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern "C"  int32_t Socket_EndReceiveFrom_m1264441351 (Socket_t3821512045 * __this, Il2CppObject * ___result0, EndPoint_t4156119363 ** ___end_point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C"  Exception_t1927440687 * Socket_InvalidAsyncOp_m3344962652 (Socket_t3821512045 * __this, String_t* ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C"  int32_t Socket_RecvFrom_internal_m79644648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, SocketAddress_t838303055 ** ___sockaddr5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_m1771577797 (Socket_t3821512045 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, EndPoint_t4156119363 ** ___remote_end4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_exc_m1933643724 (Socket_t3821512045 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, EndPoint_t4156119363 ** ___remote_end4, bool ___throwOnError5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_real_m168010152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, SocketAddress_t838303055 * ___sa5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_m4275735503 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, SocketAddress_t838303055 * ___sa5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C"  int32_t Socket_SendTo_nochecks_m3603649797 (Socket_t3821512045 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, EndPoint_t4156119363 * ___remote_end4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C"  void Socket_CheckProtocolSupport_m2569734646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C"  IntPtr_t Socket_Socket_internal_m307948723 (Socket_t3821512045 * __this, int32_t ___family0, int32_t ___type1, int32_t ___proto2, int32_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C"  void Socket_Finalize_m3336654539 (Socket_t3821512045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C"  void Socket_Linger_m4029718536 (Socket_t3821512045 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C"  void Socket_Dispose_m3685131229 (Socket_t3821512045 * __this, bool ___explicitDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C"  void Socket_Dispose_m1829676876 (Socket_t3821512045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C"  void Socket_Close_internal_m71368480 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m1619676183 (Socket_t3821512045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C"  bool Socket_CheckEndPoint_m1488520937 (Il2CppObject * __this /* static, unused */, SocketAddress_t838303055 * ___sa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C"  MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m2876364325 (Il2CppObject * __this /* static, unused */, String_t* ___methodname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C"  bool Socket_Poll_internal_m2720943059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___mode1, int32_t ___timeout2, int32_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C"  void Socket_Shutdown_internal_m3459802987 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___how1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C"  void Socket_SetSocketOption_internal_m1264569669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___level1, int32_t ___name2, Il2CppObject * ___obj_val3, ByteU5BU5D_t3397334013* ___byte_val4, int32_t ___int_val5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
