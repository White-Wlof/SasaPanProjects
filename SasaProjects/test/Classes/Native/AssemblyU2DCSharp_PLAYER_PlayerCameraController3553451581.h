﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PLAYER.PlayerCameraController
struct  PlayerCameraController_t3553451581  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera PLAYER.PlayerCameraController::mainCamera
	Camera_t3533968274 * ___mainCamera_2;

public:
	inline static int32_t get_offset_of_mainCamera_2() { return static_cast<int32_t>(offsetof(PlayerCameraController_t3553451581, ___mainCamera_2)); }
	inline Camera_t3533968274 * get_mainCamera_2() const { return ___mainCamera_2; }
	inline Camera_t3533968274 ** get_address_of_mainCamera_2() { return &___mainCamera_2; }
	inline void set_mainCamera_2(Camera_t3533968274 * value)
	{
		___mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
