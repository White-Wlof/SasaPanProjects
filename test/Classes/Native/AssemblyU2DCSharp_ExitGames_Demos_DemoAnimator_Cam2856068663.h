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

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.CameraWork
struct  CameraWork_t2856068663  : public MonoBehaviour_t4025988718
{
public:
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::distance
	float ___distance_3;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::height
	float ___height_4;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::heightSmoothLag
	float ___heightSmoothLag_5;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.CameraWork::centerOffset
	Vector3_t3525329789  ___centerOffset_6;
	// System.Boolean ExitGames.Demos.DemoAnimator.CameraWork::followOnStart
	bool ___followOnStart_7;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.CameraWork::cameraTransform
	Transform_t284553113 * ___cameraTransform_8;
	// System.Boolean ExitGames.Demos.DemoAnimator.CameraWork::isFollowing
	bool ___isFollowing_9;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::heightVelocity
	float ___heightVelocity_10;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::targetHeight
	float ___targetHeight_11;

public:
	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_heightSmoothLag_5() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___heightSmoothLag_5)); }
	inline float get_heightSmoothLag_5() const { return ___heightSmoothLag_5; }
	inline float* get_address_of_heightSmoothLag_5() { return &___heightSmoothLag_5; }
	inline void set_heightSmoothLag_5(float value)
	{
		___heightSmoothLag_5 = value;
	}

	inline static int32_t get_offset_of_centerOffset_6() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___centerOffset_6)); }
	inline Vector3_t3525329789  get_centerOffset_6() const { return ___centerOffset_6; }
	inline Vector3_t3525329789 * get_address_of_centerOffset_6() { return &___centerOffset_6; }
	inline void set_centerOffset_6(Vector3_t3525329789  value)
	{
		___centerOffset_6 = value;
	}

	inline static int32_t get_offset_of_followOnStart_7() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___followOnStart_7)); }
	inline bool get_followOnStart_7() const { return ___followOnStart_7; }
	inline bool* get_address_of_followOnStart_7() { return &___followOnStart_7; }
	inline void set_followOnStart_7(bool value)
	{
		___followOnStart_7 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_8() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___cameraTransform_8)); }
	inline Transform_t284553113 * get_cameraTransform_8() const { return ___cameraTransform_8; }
	inline Transform_t284553113 ** get_address_of_cameraTransform_8() { return &___cameraTransform_8; }
	inline void set_cameraTransform_8(Transform_t284553113 * value)
	{
		___cameraTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_8, value);
	}

	inline static int32_t get_offset_of_isFollowing_9() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___isFollowing_9)); }
	inline bool get_isFollowing_9() const { return ___isFollowing_9; }
	inline bool* get_address_of_isFollowing_9() { return &___isFollowing_9; }
	inline void set_isFollowing_9(bool value)
	{
		___isFollowing_9 = value;
	}

	inline static int32_t get_offset_of_heightVelocity_10() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___heightVelocity_10)); }
	inline float get_heightVelocity_10() const { return ___heightVelocity_10; }
	inline float* get_address_of_heightVelocity_10() { return &___heightVelocity_10; }
	inline void set_heightVelocity_10(float value)
	{
		___heightVelocity_10 = value;
	}

	inline static int32_t get_offset_of_targetHeight_11() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___targetHeight_11)); }
	inline float get_targetHeight_11() const { return ___targetHeight_11; }
	inline float* get_address_of_targetHeight_11() { return &___targetHeight_11; }
	inline void set_targetHeight_11(float value)
	{
		___targetHeight_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
