#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t2614611333;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowStatusWhenConnecting
struct  ShowStatusWhenConnecting_t3278922977  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GUISkin ShowStatusWhenConnecting::Skin
	GUISkin_t2614611333 * ___Skin_3;

public:
	inline static int32_t get_offset_of_Skin_3() { return static_cast<int32_t>(offsetof(ShowStatusWhenConnecting_t3278922977, ___Skin_3)); }
	inline GUISkin_t2614611333 * get_Skin_3() const { return ___Skin_3; }
	inline GUISkin_t2614611333 ** get_address_of_Skin_3() { return &___Skin_3; }
	inline void set_Skin_3(GUISkin_t2614611333 * value)
	{
		___Skin_3 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
