#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeafSpawner
struct  LeafSpawner_t299321354  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject LeafSpawner::leaf
	GameObject_t4012695102 * ___leaf_2;
	// UnityEngine.Vector3[] LeafSpawner::points
	Vector3U5BU5D_t3227571696* ___points_3;

public:
	inline static int32_t get_offset_of_leaf_2() { return static_cast<int32_t>(offsetof(LeafSpawner_t299321354, ___leaf_2)); }
	inline GameObject_t4012695102 * get_leaf_2() const { return ___leaf_2; }
	inline GameObject_t4012695102 ** get_address_of_leaf_2() { return &___leaf_2; }
	inline void set_leaf_2(GameObject_t4012695102 * value)
	{
		___leaf_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaf_2, value);
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(LeafSpawner_t299321354, ___points_3)); }
	inline Vector3U5BU5D_t3227571696* get_points_3() const { return ___points_3; }
	inline Vector3U5BU5D_t3227571696** get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(Vector3U5BU5D_t3227571696* value)
	{
		___points_3 = value;
		Il2CppCodeGenWriteBarrier(&___points_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
