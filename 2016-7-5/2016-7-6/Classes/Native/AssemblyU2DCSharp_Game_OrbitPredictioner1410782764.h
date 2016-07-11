#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t305781060;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// PlayerStateManager
struct PlayerStateManager_t4277940093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.OrbitPredictioner
struct  OrbitPredictioner_t1410782764  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Game.OrbitPredictioner::lengthOfLineRenderer
	int32_t ___lengthOfLineRenderer_2;
	// UnityEngine.LineRenderer Game.OrbitPredictioner::lineRenderer
	LineRenderer_t305781060 * ___lineRenderer_3;
	// UnityEngine.Rigidbody Game.OrbitPredictioner::playerRb
	Rigidbody_t1972007546 * ___playerRb_4;
	// UnityEngine.Transform Game.OrbitPredictioner::center
	Transform_t284553113 * ___center_5;
	// PlayerStateManager Game.OrbitPredictioner::state
	PlayerStateManager_t4277940093 * ___state_6;
	// UnityEngine.Vector2 Game.OrbitPredictioner::pos
	Vector2_t3525329788  ___pos_7;
	// System.Single Game.OrbitPredictioner::gravity
	float ___gravity_8;

public:
	inline static int32_t get_offset_of_lengthOfLineRenderer_2() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___lengthOfLineRenderer_2)); }
	inline int32_t get_lengthOfLineRenderer_2() const { return ___lengthOfLineRenderer_2; }
	inline int32_t* get_address_of_lengthOfLineRenderer_2() { return &___lengthOfLineRenderer_2; }
	inline void set_lengthOfLineRenderer_2(int32_t value)
	{
		___lengthOfLineRenderer_2 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_3() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___lineRenderer_3)); }
	inline LineRenderer_t305781060 * get_lineRenderer_3() const { return ___lineRenderer_3; }
	inline LineRenderer_t305781060 ** get_address_of_lineRenderer_3() { return &___lineRenderer_3; }
	inline void set_lineRenderer_3(LineRenderer_t305781060 * value)
	{
		___lineRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___lineRenderer_3, value);
	}

	inline static int32_t get_offset_of_playerRb_4() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___playerRb_4)); }
	inline Rigidbody_t1972007546 * get_playerRb_4() const { return ___playerRb_4; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_4() { return &___playerRb_4; }
	inline void set_playerRb_4(Rigidbody_t1972007546 * value)
	{
		___playerRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_4, value);
	}

	inline static int32_t get_offset_of_center_5() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___center_5)); }
	inline Transform_t284553113 * get_center_5() const { return ___center_5; }
	inline Transform_t284553113 ** get_address_of_center_5() { return &___center_5; }
	inline void set_center_5(Transform_t284553113 * value)
	{
		___center_5 = value;
		Il2CppCodeGenWriteBarrier(&___center_5, value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___state_6)); }
	inline PlayerStateManager_t4277940093 * get_state_6() const { return ___state_6; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(PlayerStateManager_t4277940093 * value)
	{
		___state_6 = value;
		Il2CppCodeGenWriteBarrier(&___state_6, value);
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___pos_7)); }
	inline Vector2_t3525329788  get_pos_7() const { return ___pos_7; }
	inline Vector2_t3525329788 * get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(Vector2_t3525329788  value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_gravity_8() { return static_cast<int32_t>(offsetof(OrbitPredictioner_t1410782764, ___gravity_8)); }
	inline float get_gravity_8() const { return ___gravity_8; }
	inline float* get_address_of_gravity_8() { return &___gravity_8; }
	inline void set_gravity_8(float value)
	{
		___gravity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
