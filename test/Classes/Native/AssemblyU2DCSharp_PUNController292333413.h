#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PUNController
struct  PUNController_t292333413  : public MonoBehaviour_t4025988718
{
public:
	// System.Boolean PUNController::isWaiting
	bool ___isWaiting_3;
	// System.Int32 PUNController::online
	int32_t ___online_4;

public:
	inline static int32_t get_offset_of_isWaiting_3() { return static_cast<int32_t>(offsetof(PUNController_t292333413, ___isWaiting_3)); }
	inline bool get_isWaiting_3() const { return ___isWaiting_3; }
	inline bool* get_address_of_isWaiting_3() { return &___isWaiting_3; }
	inline void set_isWaiting_3(bool value)
	{
		___isWaiting_3 = value;
	}

	inline static int32_t get_offset_of_online_4() { return static_cast<int32_t>(offsetof(PUNController_t292333413, ___online_4)); }
	inline int32_t get_online_4() const { return ___online_4; }
	inline int32_t* get_address_of_online_4() { return &___online_4; }
	inline void set_online_4(int32_t value)
	{
		___online_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
