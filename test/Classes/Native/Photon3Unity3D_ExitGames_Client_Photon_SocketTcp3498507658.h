﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Object
struct Il2CppObject;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSock3731899444.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_t3498507658  : public IPhotonSocket_t3731899444
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_t150013987 * ___sock_8;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	Il2CppObject * ___syncer_9;

public:
	inline static int32_t get_offset_of_sock_8() { return static_cast<int32_t>(offsetof(SocketTcp_t3498507658, ___sock_8)); }
	inline Socket_t150013987 * get_sock_8() const { return ___sock_8; }
	inline Socket_t150013987 ** get_address_of_sock_8() { return &___sock_8; }
	inline void set_sock_8(Socket_t150013987 * value)
	{
		___sock_8 = value;
		Il2CppCodeGenWriteBarrier(&___sock_8, value);
	}

	inline static int32_t get_offset_of_syncer_9() { return static_cast<int32_t>(offsetof(SocketTcp_t3498507658, ___syncer_9)); }
	inline Il2CppObject * get_syncer_9() const { return ___syncer_9; }
	inline Il2CppObject ** get_address_of_syncer_9() { return &___syncer_9; }
	inline void set_syncer_9(Il2CppObject * value)
	{
		___syncer_9 = value;
		Il2CppCodeGenWriteBarrier(&___syncer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
