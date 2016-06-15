#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RPGCamera
struct RPGCamera_t402829902;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoRPGMovement
struct  DemoRPGMovement_t58001333  : public MonoBehaviour_t4025988718
{
public:
	// RPGCamera DemoRPGMovement::Camera
	RPGCamera_t402829902 * ___Camera_3;

public:
	inline static int32_t get_offset_of_Camera_3() { return static_cast<int32_t>(offsetof(DemoRPGMovement_t58001333, ___Camera_3)); }
	inline RPGCamera_t402829902 * get_Camera_3() const { return ___Camera_3; }
	inline RPGCamera_t402829902 ** get_address_of_Camera_3() { return &___Camera_3; }
	inline void set_Camera_3(RPGCamera_t402829902 * value)
	{
		___Camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
