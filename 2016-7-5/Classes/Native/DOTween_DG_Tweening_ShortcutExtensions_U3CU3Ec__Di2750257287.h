﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_t2750257287  : public Il2CppObject
{
public:
	// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0::to
	Quaternion_t1891715979  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0::target
	Transform_t284553113 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t2750257287, ___to_0)); }
	inline Quaternion_t1891715979  get_to_0() const { return ___to_0; }
	inline Quaternion_t1891715979 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Quaternion_t1891715979  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t2750257287, ___target_1)); }
	inline Transform_t284553113 * get_target_1() const { return ___target_1; }
	inline Transform_t284553113 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t284553113 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
