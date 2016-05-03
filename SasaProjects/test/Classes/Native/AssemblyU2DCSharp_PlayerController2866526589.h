#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 PlayerController::center
	Vector3_t3525329789  ___center_2;
	// UnityEngine.Camera PlayerController::mainCamera
	Camera_t3533968274 * ___mainCamera_3;
	// UnityEngine.Rigidbody PlayerController::playerRb
	Rigidbody_t1972007546 * ___playerRb_4;
	// System.Boolean PlayerController::boost_flag
	bool ___boost_flag_5;

public:
	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___center_2)); }
	inline Vector3_t3525329789  get_center_2() const { return ___center_2; }
	inline Vector3_t3525329789 * get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Vector3_t3525329789  value)
	{
		___center_2 = value;
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___mainCamera_3)); }
	inline Camera_t3533968274 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline Camera_t3533968274 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(Camera_t3533968274 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_3, value);
	}

	inline static int32_t get_offset_of_playerRb_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerRb_4)); }
	inline Rigidbody_t1972007546 * get_playerRb_4() const { return ___playerRb_4; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_4() { return &___playerRb_4; }
	inline void set_playerRb_4(Rigidbody_t1972007546 * value)
	{
		___playerRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_4, value);
	}

	inline static int32_t get_offset_of_boost_flag_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boost_flag_5)); }
	inline bool get_boost_flag_5() const { return ___boost_flag_5; }
	inline bool* get_address_of_boost_flag_5() { return &___boost_flag_5; }
	inline void set_boost_flag_5(bool value)
	{
		___boost_flag_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
