#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct Dictionary_2_t1507849619;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams
struct  PunTeams_t1679509581  : public MonoBehaviour_t4025988718
{
public:

public:
};

struct PunTeams_t1679509581_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>> PunTeams::PlayersPerTeam
	Dictionary_2_t1507849619 * ___PlayersPerTeam_4;

public:
	inline static int32_t get_offset_of_PlayersPerTeam_4() { return static_cast<int32_t>(offsetof(PunTeams_t1679509581_StaticFields, ___PlayersPerTeam_4)); }
	inline Dictionary_2_t1507849619 * get_PlayersPerTeam_4() const { return ___PlayersPerTeam_4; }
	inline Dictionary_2_t1507849619 ** get_address_of_PlayersPerTeam_4() { return &___PlayersPerTeam_4; }
	inline void set_PlayersPerTeam_4(Dictionary_2_t1507849619 * value)
	{
		___PlayersPerTeam_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayersPerTeam_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
