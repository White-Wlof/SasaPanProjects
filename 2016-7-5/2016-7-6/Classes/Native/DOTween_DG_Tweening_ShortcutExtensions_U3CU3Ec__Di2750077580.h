﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t1596303683;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t2750077580  : public Il2CppObject
{
public:
	// UnityEngine.Light DG.Tweening.ShortcutExtensions/<>c__DisplayClass15_0::target
	Light_t1596303683 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t2750077580, ___target_0)); }
	inline Light_t1596303683 * get_target_0() const { return ___target_0; }
	inline Light_t1596303683 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Light_t1596303683 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif