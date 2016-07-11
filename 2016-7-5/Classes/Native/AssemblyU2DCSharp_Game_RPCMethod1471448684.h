#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Game.PlayerControllerOnline
struct PlayerControllerOnline_t2665889174;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.RPCMethod
struct  RPCMethod_t1471448684  : public MonoBehaviour_t4025988718
{
public:
	// Game.PlayerControllerOnline Game.RPCMethod::player
	PlayerControllerOnline_t2665889174 * ___player_3;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(RPCMethod_t1471448684, ___player_3)); }
	inline PlayerControllerOnline_t2665889174 * get_player_3() const { return ___player_3; }
	inline PlayerControllerOnline_t2665889174 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(PlayerControllerOnline_t2665889174 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
