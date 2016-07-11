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
// UnityEngine.Transform
struct Transform_t284553113;
// Game.GameState
struct GameState_t3027501829;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.PlayerCameraController
struct  PlayerCameraController_t2657252648  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera Game.PlayerCameraController::mainCamera
	Camera_t3533968274 * ___mainCamera_2;
	// UnityEngine.Transform Game.PlayerCameraController::rival
	Transform_t284553113 * ___rival_3;
	// Game.GameState Game.PlayerCameraController::state
	GameState_t3027501829 * ___state_4;
	// UnityEngine.Camera Game.PlayerCameraController::backCamera
	Camera_t3533968274 * ___backCamera_5;
	// System.Boolean Game.PlayerCameraController::isRival
	bool ___isRival_6;

public:
	inline static int32_t get_offset_of_mainCamera_2() { return static_cast<int32_t>(offsetof(PlayerCameraController_t2657252648, ___mainCamera_2)); }
	inline Camera_t3533968274 * get_mainCamera_2() const { return ___mainCamera_2; }
	inline Camera_t3533968274 ** get_address_of_mainCamera_2() { return &___mainCamera_2; }
	inline void set_mainCamera_2(Camera_t3533968274 * value)
	{
		___mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_2, value);
	}

	inline static int32_t get_offset_of_rival_3() { return static_cast<int32_t>(offsetof(PlayerCameraController_t2657252648, ___rival_3)); }
	inline Transform_t284553113 * get_rival_3() const { return ___rival_3; }
	inline Transform_t284553113 ** get_address_of_rival_3() { return &___rival_3; }
	inline void set_rival_3(Transform_t284553113 * value)
	{
		___rival_3 = value;
		Il2CppCodeGenWriteBarrier(&___rival_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PlayerCameraController_t2657252648, ___state_4)); }
	inline GameState_t3027501829 * get_state_4() const { return ___state_4; }
	inline GameState_t3027501829 ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(GameState_t3027501829 * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_backCamera_5() { return static_cast<int32_t>(offsetof(PlayerCameraController_t2657252648, ___backCamera_5)); }
	inline Camera_t3533968274 * get_backCamera_5() const { return ___backCamera_5; }
	inline Camera_t3533968274 ** get_address_of_backCamera_5() { return &___backCamera_5; }
	inline void set_backCamera_5(Camera_t3533968274 * value)
	{
		___backCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___backCamera_5, value);
	}

	inline static int32_t get_offset_of_isRival_6() { return static_cast<int32_t>(offsetof(PlayerCameraController_t2657252648, ___isRival_6)); }
	inline bool get_isRival_6() const { return ___isRival_6; }
	inline bool* get_address_of_isRival_6() { return &___isRival_6; }
	inline void set_isRival_6(bool value)
	{
		___isRival_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
