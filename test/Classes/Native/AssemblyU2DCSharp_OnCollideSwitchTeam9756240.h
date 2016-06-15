#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "AssemblyU2DCSharp_PunTeams_Team2602621.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnCollideSwitchTeam
struct  OnCollideSwitchTeam_t9756240  : public MonoBehaviour_t4025988718
{
public:
	// PunTeams/Team OnCollideSwitchTeam::TeamToSwitchTo
	uint8_t ___TeamToSwitchTo_3;

public:
	inline static int32_t get_offset_of_TeamToSwitchTo_3() { return static_cast<int32_t>(offsetof(OnCollideSwitchTeam_t9756240, ___TeamToSwitchTo_3)); }
	inline uint8_t get_TeamToSwitchTo_3() const { return ___TeamToSwitchTo_3; }
	inline uint8_t* get_address_of_TeamToSwitchTo_3() { return &___TeamToSwitchTo_3; }
	inline void set_TeamToSwitchTo_3(uint8_t value)
	{
		___TeamToSwitchTo_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
