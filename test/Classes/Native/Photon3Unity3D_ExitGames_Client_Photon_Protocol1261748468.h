﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.IProtocol
struct IProtocol_t2724506835;
// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t415630378;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t1337383780;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Protocol
struct  Protocol_t1261748468  : public Il2CppObject
{
public:

public:
};

struct Protocol_t1261748468_StaticFields
{
public:
	// ExitGames.Client.IProtocol ExitGames.Client.Photon.Protocol::GpBinaryV16
	IProtocol_t2724506835 * ___GpBinaryV16_0;
	// ExitGames.Client.IProtocol ExitGames.Client.Photon.Protocol::ProtocolDefault
	IProtocol_t2724506835 * ___ProtocolDefault_1;
	// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::TypeDict
	Dictionary_2_t415630378 * ___TypeDict_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::CodeDict
	Dictionary_2_t1337383780 * ___CodeDict_3;

public:
	inline static int32_t get_offset_of_GpBinaryV16_0() { return static_cast<int32_t>(offsetof(Protocol_t1261748468_StaticFields, ___GpBinaryV16_0)); }
	inline IProtocol_t2724506835 * get_GpBinaryV16_0() const { return ___GpBinaryV16_0; }
	inline IProtocol_t2724506835 ** get_address_of_GpBinaryV16_0() { return &___GpBinaryV16_0; }
	inline void set_GpBinaryV16_0(IProtocol_t2724506835 * value)
	{
		___GpBinaryV16_0 = value;
		Il2CppCodeGenWriteBarrier(&___GpBinaryV16_0, value);
	}

	inline static int32_t get_offset_of_ProtocolDefault_1() { return static_cast<int32_t>(offsetof(Protocol_t1261748468_StaticFields, ___ProtocolDefault_1)); }
	inline IProtocol_t2724506835 * get_ProtocolDefault_1() const { return ___ProtocolDefault_1; }
	inline IProtocol_t2724506835 ** get_address_of_ProtocolDefault_1() { return &___ProtocolDefault_1; }
	inline void set_ProtocolDefault_1(IProtocol_t2724506835 * value)
	{
		___ProtocolDefault_1 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolDefault_1, value);
	}

	inline static int32_t get_offset_of_TypeDict_2() { return static_cast<int32_t>(offsetof(Protocol_t1261748468_StaticFields, ___TypeDict_2)); }
	inline Dictionary_2_t415630378 * get_TypeDict_2() const { return ___TypeDict_2; }
	inline Dictionary_2_t415630378 ** get_address_of_TypeDict_2() { return &___TypeDict_2; }
	inline void set_TypeDict_2(Dictionary_2_t415630378 * value)
	{
		___TypeDict_2 = value;
		Il2CppCodeGenWriteBarrier(&___TypeDict_2, value);
	}

	inline static int32_t get_offset_of_CodeDict_3() { return static_cast<int32_t>(offsetof(Protocol_t1261748468_StaticFields, ___CodeDict_3)); }
	inline Dictionary_2_t1337383780 * get_CodeDict_3() const { return ___CodeDict_3; }
	inline Dictionary_2_t1337383780 ** get_address_of_CodeDict_3() { return &___CodeDict_3; }
	inline void set_CodeDict_3(Dictionary_2_t1337383780 * value)
	{
		___CodeDict_3 = value;
		Il2CppCodeGenWriteBarrier(&___CodeDict_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
