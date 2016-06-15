#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// PhotonView
struct PhotonView_t1498838369;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JumpAndRunMovement
struct  JumpAndRunMovement_t3956238833  : public MonoBehaviour_t4025988718
{
public:
	// System.Single JumpAndRunMovement::Speed
	float ___Speed_3;
	// System.Single JumpAndRunMovement::JumpForce
	float ___JumpForce_4;
	// UnityEngine.Animator JumpAndRunMovement::m_Animator
	Animator_t792326996 * ___m_Animator_5;
	// UnityEngine.Rigidbody2D JumpAndRunMovement::m_Body
	Rigidbody2D_t3632243084 * ___m_Body_6;
	// PhotonView JumpAndRunMovement::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_7;
	// System.Boolean JumpAndRunMovement::m_IsGrounded
	bool ___m_IsGrounded_8;

public:
	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}

	inline static int32_t get_offset_of_JumpForce_4() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___JumpForce_4)); }
	inline float get_JumpForce_4() const { return ___JumpForce_4; }
	inline float* get_address_of_JumpForce_4() { return &___JumpForce_4; }
	inline void set_JumpForce_4(float value)
	{
		___JumpForce_4 = value;
	}

	inline static int32_t get_offset_of_m_Animator_5() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_Animator_5)); }
	inline Animator_t792326996 * get_m_Animator_5() const { return ___m_Animator_5; }
	inline Animator_t792326996 ** get_address_of_m_Animator_5() { return &___m_Animator_5; }
	inline void set_m_Animator_5(Animator_t792326996 * value)
	{
		___m_Animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_5, value);
	}

	inline static int32_t get_offset_of_m_Body_6() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_Body_6)); }
	inline Rigidbody2D_t3632243084 * get_m_Body_6() const { return ___m_Body_6; }
	inline Rigidbody2D_t3632243084 ** get_address_of_m_Body_6() { return &___m_Body_6; }
	inline void set_m_Body_6(Rigidbody2D_t3632243084 * value)
	{
		___m_Body_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Body_6, value);
	}

	inline static int32_t get_offset_of_m_PhotonView_7() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_PhotonView_7)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_7() const { return ___m_PhotonView_7; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_7() { return &___m_PhotonView_7; }
	inline void set_m_PhotonView_7(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_7, value);
	}

	inline static int32_t get_offset_of_m_IsGrounded_8() { return static_cast<int32_t>(offsetof(JumpAndRunMovement_t3956238833, ___m_IsGrounded_8)); }
	inline bool get_m_IsGrounded_8() const { return ___m_IsGrounded_8; }
	inline bool* get_address_of_m_IsGrounded_8() { return &___m_IsGrounded_8; }
	inline void set_m_IsGrounded_8(bool value)
	{
		___m_IsGrounded_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
