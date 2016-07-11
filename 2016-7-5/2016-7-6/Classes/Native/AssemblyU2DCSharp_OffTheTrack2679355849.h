#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OffTheTrack
struct  OffTheTrack_t2679355849  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform OffTheTrack::goal
	Transform_t284553113 * ___goal_2;

public:
	inline static int32_t get_offset_of_goal_2() { return static_cast<int32_t>(offsetof(OffTheTrack_t2679355849, ___goal_2)); }
	inline Transform_t284553113 * get_goal_2() const { return ___goal_2; }
	inline Transform_t284553113 ** get_address_of_goal_2() { return &___goal_2; }
	inline void set_goal_2(Transform_t284553113 * value)
	{
		___goal_2 = value;
		Il2CppCodeGenWriteBarrier(&___goal_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
