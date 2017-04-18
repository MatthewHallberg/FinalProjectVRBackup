#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t1288490777;
// System.Threading.Thread
struct Thread_t241561612;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_SocketType1143498533.h"
#include "System_System_Net_Sockets_ProtocolType2178963134.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t3821512045  : public Il2CppObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t1288490777 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t1288490777 * ___writeQ_1;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_2;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_3;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_6;
	// System.IntPtr System.Net.Sockets.Socket::socket
	IntPtr_t ___socket_7;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_8;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_9;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_10;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_11;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t241561612 * ___blocking_thread_12;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_13;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_15;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_16;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_17;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_18;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t4156119363 * ___seed_endpoint_19;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___readQ_0)); }
	inline Queue_t1288490777 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t1288490777 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t1288490777 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier(&___readQ_0, value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___writeQ_1)); }
	inline Queue_t1288490777 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t1288490777 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t1288490777 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier(&___writeQ_1, value);
	}

	inline static int32_t get_offset_of_MinListenPort_2() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___MinListenPort_2)); }
	inline int32_t get_MinListenPort_2() const { return ___MinListenPort_2; }
	inline int32_t* get_address_of_MinListenPort_2() { return &___MinListenPort_2; }
	inline void set_MinListenPort_2(int32_t value)
	{
		___MinListenPort_2 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_3() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___MaxListenPort_3)); }
	inline int32_t get_MaxListenPort_3() const { return ___MaxListenPort_3; }
	inline int32_t* get_address_of_MaxListenPort_3() { return &___MaxListenPort_3; }
	inline void set_MaxListenPort_3(int32_t value)
	{
		___MaxListenPort_3 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_6() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___linger_timeout_6)); }
	inline int32_t get_linger_timeout_6() const { return ___linger_timeout_6; }
	inline int32_t* get_address_of_linger_timeout_6() { return &___linger_timeout_6; }
	inline void set_linger_timeout_6(int32_t value)
	{
		___linger_timeout_6 = value;
	}

	inline static int32_t get_offset_of_socket_7() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___socket_7)); }
	inline IntPtr_t get_socket_7() const { return ___socket_7; }
	inline IntPtr_t* get_address_of_socket_7() { return &___socket_7; }
	inline void set_socket_7(IntPtr_t value)
	{
		___socket_7 = value;
	}

	inline static int32_t get_offset_of_address_family_8() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___address_family_8)); }
	inline int32_t get_address_family_8() const { return ___address_family_8; }
	inline int32_t* get_address_of_address_family_8() { return &___address_family_8; }
	inline void set_address_family_8(int32_t value)
	{
		___address_family_8 = value;
	}

	inline static int32_t get_offset_of_socket_type_9() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___socket_type_9)); }
	inline int32_t get_socket_type_9() const { return ___socket_type_9; }
	inline int32_t* get_address_of_socket_type_9() { return &___socket_type_9; }
	inline void set_socket_type_9(int32_t value)
	{
		___socket_type_9 = value;
	}

	inline static int32_t get_offset_of_protocol_type_10() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___protocol_type_10)); }
	inline int32_t get_protocol_type_10() const { return ___protocol_type_10; }
	inline int32_t* get_address_of_protocol_type_10() { return &___protocol_type_10; }
	inline void set_protocol_type_10(int32_t value)
	{
		___protocol_type_10 = value;
	}

	inline static int32_t get_offset_of_blocking_11() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___blocking_11)); }
	inline bool get_blocking_11() const { return ___blocking_11; }
	inline bool* get_address_of_blocking_11() { return &___blocking_11; }
	inline void set_blocking_11(bool value)
	{
		___blocking_11 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_12() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___blocking_thread_12)); }
	inline Thread_t241561612 * get_blocking_thread_12() const { return ___blocking_thread_12; }
	inline Thread_t241561612 ** get_address_of_blocking_thread_12() { return &___blocking_thread_12; }
	inline void set_blocking_thread_12(Thread_t241561612 * value)
	{
		___blocking_thread_12 = value;
		Il2CppCodeGenWriteBarrier(&___blocking_thread_12, value);
	}

	inline static int32_t get_offset_of_isbound_13() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___isbound_13)); }
	inline bool get_isbound_13() const { return ___isbound_13; }
	inline bool* get_address_of_isbound_13() { return &___isbound_13; }
	inline void set_isbound_13(bool value)
	{
		___isbound_13 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_15() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___max_bind_count_15)); }
	inline int32_t get_max_bind_count_15() const { return ___max_bind_count_15; }
	inline int32_t* get_address_of_max_bind_count_15() { return &___max_bind_count_15; }
	inline void set_max_bind_count_15(int32_t value)
	{
		___max_bind_count_15 = value;
	}

	inline static int32_t get_offset_of_connected_16() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___connected_16)); }
	inline bool get_connected_16() const { return ___connected_16; }
	inline bool* get_address_of_connected_16() { return &___connected_16; }
	inline void set_connected_16(bool value)
	{
		___connected_16 = value;
	}

	inline static int32_t get_offset_of_closed_17() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___closed_17)); }
	inline bool get_closed_17() const { return ___closed_17; }
	inline bool* get_address_of_closed_17() { return &___closed_17; }
	inline void set_closed_17(bool value)
	{
		___closed_17 = value;
	}

	inline static int32_t get_offset_of_disposed_18() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___disposed_18)); }
	inline bool get_disposed_18() const { return ___disposed_18; }
	inline bool* get_address_of_disposed_18() { return &___disposed_18; }
	inline void set_disposed_18(bool value)
	{
		___disposed_18 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_19() { return static_cast<int32_t>(offsetof(Socket_t3821512045, ___seed_endpoint_19)); }
	inline EndPoint_t4156119363 * get_seed_endpoint_19() const { return ___seed_endpoint_19; }
	inline EndPoint_t4156119363 ** get_address_of_seed_endpoint_19() { return &___seed_endpoint_19; }
	inline void set_seed_endpoint_19(EndPoint_t4156119363 * value)
	{
		___seed_endpoint_19 = value;
		Il2CppCodeGenWriteBarrier(&___seed_endpoint_19, value);
	}
};

struct Socket_t3821512045_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_4;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_5;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_14;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_20;

public:
	inline static int32_t get_offset_of_ipv4Supported_4() { return static_cast<int32_t>(offsetof(Socket_t3821512045_StaticFields, ___ipv4Supported_4)); }
	inline int32_t get_ipv4Supported_4() const { return ___ipv4Supported_4; }
	inline int32_t* get_address_of_ipv4Supported_4() { return &___ipv4Supported_4; }
	inline void set_ipv4Supported_4(int32_t value)
	{
		___ipv4Supported_4 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_5() { return static_cast<int32_t>(offsetof(Socket_t3821512045_StaticFields, ___ipv6Supported_5)); }
	inline int32_t get_ipv6Supported_5() const { return ___ipv6Supported_5; }
	inline int32_t* get_address_of_ipv6Supported_5() { return &___ipv6Supported_5; }
	inline void set_ipv6Supported_5(int32_t value)
	{
		___ipv6Supported_5 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_14() { return static_cast<int32_t>(offsetof(Socket_t3821512045_StaticFields, ___current_bind_count_14)); }
	inline int32_t get_current_bind_count_14() const { return ___current_bind_count_14; }
	inline int32_t* get_address_of_current_bind_count_14() { return &___current_bind_count_14; }
	inline void set_current_bind_count_14(int32_t value)
	{
		___current_bind_count_14 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_20() { return static_cast<int32_t>(offsetof(Socket_t3821512045_StaticFields, ___check_socket_policy_20)); }
	inline MethodInfo_t * get_check_socket_policy_20() const { return ___check_socket_policy_20; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_20() { return &___check_socket_policy_20; }
	inline void set_check_socket_policy_20(MethodInfo_t * value)
	{
		___check_socket_policy_20 = value;
		Il2CppCodeGenWriteBarrier(&___check_socket_policy_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
