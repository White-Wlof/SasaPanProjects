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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass73_0
struct  U3CU3Ec__DisplayClass73_0_t2750254404  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions/<>c__DisplayClass73_0::to
	Vector3_t3525329789  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions/<>c__DisplayClass73_0::target
	Transform_t284553113 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t2750254404, ___to_0)); }
	inline Vector3_t3525329789  get_to_0() const { return ___to_0; }
	inline Vector3_t3525329789 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_t3525329789  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t2750254404, ___target_1)); }
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