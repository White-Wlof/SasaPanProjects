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
// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerDiamond
struct  PlayerDiamond_t812023571  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Transform PlayerDiamond::HeadTransform
	Transform_t284553113 * ___HeadTransform_3;
	// System.Single PlayerDiamond::HeightOffset
	float ___HeightOffset_4;
	// PhotonView PlayerDiamond::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_5;
	// UnityEngine.Renderer PlayerDiamond::m_DiamondRenderer
	Renderer_t1092684080 * ___m_DiamondRenderer_6;
	// System.Single PlayerDiamond::m_Rotation
	float ___m_Rotation_7;
	// System.Single PlayerDiamond::m_Height
	float ___m_Height_8;

public:
	inline static int32_t get_offset_of_HeadTransform_3() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___HeadTransform_3)); }
	inline Transform_t284553113 * get_HeadTransform_3() const { return ___HeadTransform_3; }
	inline Transform_t284553113 ** get_address_of_HeadTransform_3() { return &___HeadTransform_3; }
	inline void set_HeadTransform_3(Transform_t284553113 * value)
	{
		___HeadTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___HeadTransform_3, value);
	}

	inline static int32_t get_offset_of_HeightOffset_4() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___HeightOffset_4)); }
	inline float get_HeightOffset_4() const { return ___HeightOffset_4; }
	inline float* get_address_of_HeightOffset_4() { return &___HeightOffset_4; }
	inline void set_HeightOffset_4(float value)
	{
		___HeightOffset_4 = value;
	}

	inline static int32_t get_offset_of_m_PhotonView_5() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___m_PhotonView_5)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_5() const { return ___m_PhotonView_5; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_5() { return &___m_PhotonView_5; }
	inline void set_m_PhotonView_5(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_5, value);
	}

	inline static int32_t get_offset_of_m_DiamondRenderer_6() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___m_DiamondRenderer_6)); }
	inline Renderer_t1092684080 * get_m_DiamondRenderer_6() const { return ___m_DiamondRenderer_6; }
	inline Renderer_t1092684080 ** get_address_of_m_DiamondRenderer_6() { return &___m_DiamondRenderer_6; }
	inline void set_m_DiamondRenderer_6(Renderer_t1092684080 * value)
	{
		___m_DiamondRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_DiamondRenderer_6, value);
	}

	inline static int32_t get_offset_of_m_Rotation_7() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___m_Rotation_7)); }
	inline float get_m_Rotation_7() const { return ___m_Rotation_7; }
	inline float* get_address_of_m_Rotation_7() { return &___m_Rotation_7; }
	inline void set_m_Rotation_7(float value)
	{
		___m_Rotation_7 = value;
	}

	inline static int32_t get_offset_of_m_Height_8() { return static_cast<int32_t>(offsetof(PlayerDiamond_t812023571, ___m_Height_8)); }
	inline float get_m_Height_8() const { return ___m_Height_8; }
	inline float* get_address_of_m_Height_8() { return &___m_Height_8; }
	inline void set_m_Height_8(float value)
	{
		___m_Height_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
