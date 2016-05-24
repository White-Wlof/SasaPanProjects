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
// PlayerStateManager
struct PlayerStateManager_t4277940093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CannonPullSystem
struct  CannonPullSystem_t3255870929  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CannonPullSystem::center
	Transform_t284553113 * ___center_2;
	// PlayerStateManager CannonPullSystem::state
	PlayerStateManager_t4277940093 * ___state_3;
	// UnityEngine.Vector3 CannonPullSystem::touchPos
	Vector3_t3525329789  ___touchPos_4;
	// UnityEngine.Vector3 CannonPullSystem::detachPos
	Vector3_t3525329789  ___detachPos_5;
	// System.Single CannonPullSystem::degree
	float ___degree_6;
	// System.Single CannonPullSystem::length
	float ___length_7;

public:
	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___center_2)); }
	inline Transform_t284553113 * get_center_2() const { return ___center_2; }
	inline Transform_t284553113 ** get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Transform_t284553113 * value)
	{
		___center_2 = value;
		Il2CppCodeGenWriteBarrier(&___center_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___state_3)); }
	inline PlayerStateManager_t4277940093 * get_state_3() const { return ___state_3; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(PlayerStateManager_t4277940093 * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier(&___state_3, value);
	}

	inline static int32_t get_offset_of_touchPos_4() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___touchPos_4)); }
	inline Vector3_t3525329789  get_touchPos_4() const { return ___touchPos_4; }
	inline Vector3_t3525329789 * get_address_of_touchPos_4() { return &___touchPos_4; }
	inline void set_touchPos_4(Vector3_t3525329789  value)
	{
		___touchPos_4 = value;
	}

	inline static int32_t get_offset_of_detachPos_5() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___detachPos_5)); }
	inline Vector3_t3525329789  get_detachPos_5() const { return ___detachPos_5; }
	inline Vector3_t3525329789 * get_address_of_detachPos_5() { return &___detachPos_5; }
	inline void set_detachPos_5(Vector3_t3525329789  value)
	{
		___detachPos_5 = value;
	}

	inline static int32_t get_offset_of_degree_6() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___degree_6)); }
	inline float get_degree_6() const { return ___degree_6; }
	inline float* get_address_of_degree_6() { return &___degree_6; }
	inline void set_degree_6(float value)
	{
		___degree_6 = value;
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(CannonPullSystem_t3255870929, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
