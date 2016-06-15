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
// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.LoaderAnime
struct  LoaderAnime_t840794690  : public MonoBehaviour_t4025988718
{
public:
	// System.Single ExitGames.Demos.DemoAnimator.LoaderAnime::speed
	float ___speed_3;
	// System.Single ExitGames.Demos.DemoAnimator.LoaderAnime::radius
	float ___radius_4;
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.LoaderAnime::particles
	GameObject_t4012695102 * ___particles_5;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.LoaderAnime::_offset
	Vector3_t3525329789  ____offset_6;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.LoaderAnime::_transform
	Transform_t284553113 * ____transform_7;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.LoaderAnime::_particleTransform
	Transform_t284553113 * ____particleTransform_8;
	// System.Boolean ExitGames.Demos.DemoAnimator.LoaderAnime::_isAnimating
	bool ____isAnimating_9;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_particles_5() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___particles_5)); }
	inline GameObject_t4012695102 * get_particles_5() const { return ___particles_5; }
	inline GameObject_t4012695102 ** get_address_of_particles_5() { return &___particles_5; }
	inline void set_particles_5(GameObject_t4012695102 * value)
	{
		___particles_5 = value;
		Il2CppCodeGenWriteBarrier(&___particles_5, value);
	}

	inline static int32_t get_offset_of__offset_6() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____offset_6)); }
	inline Vector3_t3525329789  get__offset_6() const { return ____offset_6; }
	inline Vector3_t3525329789 * get_address_of__offset_6() { return &____offset_6; }
	inline void set__offset_6(Vector3_t3525329789  value)
	{
		____offset_6 = value;
	}

	inline static int32_t get_offset_of__transform_7() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____transform_7)); }
	inline Transform_t284553113 * get__transform_7() const { return ____transform_7; }
	inline Transform_t284553113 ** get_address_of__transform_7() { return &____transform_7; }
	inline void set__transform_7(Transform_t284553113 * value)
	{
		____transform_7 = value;
		Il2CppCodeGenWriteBarrier(&____transform_7, value);
	}

	inline static int32_t get_offset_of__particleTransform_8() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____particleTransform_8)); }
	inline Transform_t284553113 * get__particleTransform_8() const { return ____particleTransform_8; }
	inline Transform_t284553113 ** get_address_of__particleTransform_8() { return &____particleTransform_8; }
	inline void set__particleTransform_8(Transform_t284553113 * value)
	{
		____particleTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&____particleTransform_8, value);
	}

	inline static int32_t get_offset_of__isAnimating_9() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____isAnimating_9)); }
	inline bool get__isAnimating_9() const { return ____isAnimating_9; }
	inline bool* get_address_of__isAnimating_9() { return &____isAnimating_9; }
	inline void set__isAnimating_9(bool value)
	{
		____isAnimating_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
