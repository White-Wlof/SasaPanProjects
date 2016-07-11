#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Animator
struct Animator_t792326996;
// PhotonView
struct PhotonView_t1498838369;
// PhotonTransformView
struct PhotonTransformView_t486317301;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RPGMovement
struct  RPGMovement_t618383768  : public MonoBehaviour_t4025988718
{
public:
	// System.Single RPGMovement::ForwardSpeed
	float ___ForwardSpeed_3;
	// System.Single RPGMovement::BackwardSpeed
	float ___BackwardSpeed_4;
	// System.Single RPGMovement::StrafeSpeed
	float ___StrafeSpeed_5;
	// System.Single RPGMovement::RotateSpeed
	float ___RotateSpeed_6;
	// UnityEngine.CharacterController RPGMovement::m_CharacterController
	CharacterController_t2029520850 * ___m_CharacterController_7;
	// UnityEngine.Vector3 RPGMovement::m_LastPosition
	Vector3_t3525329789  ___m_LastPosition_8;
	// UnityEngine.Animator RPGMovement::m_Animator
	Animator_t792326996 * ___m_Animator_9;
	// PhotonView RPGMovement::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_10;
	// PhotonTransformView RPGMovement::m_TransformView
	PhotonTransformView_t486317301 * ___m_TransformView_11;
	// System.Single RPGMovement::m_AnimatorSpeed
	float ___m_AnimatorSpeed_12;
	// UnityEngine.Vector3 RPGMovement::m_CurrentMovement
	Vector3_t3525329789  ___m_CurrentMovement_13;
	// System.Single RPGMovement::m_CurrentTurnSpeed
	float ___m_CurrentTurnSpeed_14;

public:
	inline static int32_t get_offset_of_ForwardSpeed_3() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___ForwardSpeed_3)); }
	inline float get_ForwardSpeed_3() const { return ___ForwardSpeed_3; }
	inline float* get_address_of_ForwardSpeed_3() { return &___ForwardSpeed_3; }
	inline void set_ForwardSpeed_3(float value)
	{
		___ForwardSpeed_3 = value;
	}

	inline static int32_t get_offset_of_BackwardSpeed_4() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___BackwardSpeed_4)); }
	inline float get_BackwardSpeed_4() const { return ___BackwardSpeed_4; }
	inline float* get_address_of_BackwardSpeed_4() { return &___BackwardSpeed_4; }
	inline void set_BackwardSpeed_4(float value)
	{
		___BackwardSpeed_4 = value;
	}

	inline static int32_t get_offset_of_StrafeSpeed_5() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___StrafeSpeed_5)); }
	inline float get_StrafeSpeed_5() const { return ___StrafeSpeed_5; }
	inline float* get_address_of_StrafeSpeed_5() { return &___StrafeSpeed_5; }
	inline void set_StrafeSpeed_5(float value)
	{
		___StrafeSpeed_5 = value;
	}

	inline static int32_t get_offset_of_RotateSpeed_6() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___RotateSpeed_6)); }
	inline float get_RotateSpeed_6() const { return ___RotateSpeed_6; }
	inline float* get_address_of_RotateSpeed_6() { return &___RotateSpeed_6; }
	inline void set_RotateSpeed_6(float value)
	{
		___RotateSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_CharacterController_7() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CharacterController_7)); }
	inline CharacterController_t2029520850 * get_m_CharacterController_7() const { return ___m_CharacterController_7; }
	inline CharacterController_t2029520850 ** get_address_of_m_CharacterController_7() { return &___m_CharacterController_7; }
	inline void set_m_CharacterController_7(CharacterController_t2029520850 * value)
	{
		___m_CharacterController_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_CharacterController_7, value);
	}

	inline static int32_t get_offset_of_m_LastPosition_8() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_LastPosition_8)); }
	inline Vector3_t3525329789  get_m_LastPosition_8() const { return ___m_LastPosition_8; }
	inline Vector3_t3525329789 * get_address_of_m_LastPosition_8() { return &___m_LastPosition_8; }
	inline void set_m_LastPosition_8(Vector3_t3525329789  value)
	{
		___m_LastPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_Animator_9() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_Animator_9)); }
	inline Animator_t792326996 * get_m_Animator_9() const { return ___m_Animator_9; }
	inline Animator_t792326996 ** get_address_of_m_Animator_9() { return &___m_Animator_9; }
	inline void set_m_Animator_9(Animator_t792326996 * value)
	{
		___m_Animator_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_9, value);
	}

	inline static int32_t get_offset_of_m_PhotonView_10() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_PhotonView_10)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_10() const { return ___m_PhotonView_10; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_10() { return &___m_PhotonView_10; }
	inline void set_m_PhotonView_10(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_10, value);
	}

	inline static int32_t get_offset_of_m_TransformView_11() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_TransformView_11)); }
	inline PhotonTransformView_t486317301 * get_m_TransformView_11() const { return ___m_TransformView_11; }
	inline PhotonTransformView_t486317301 ** get_address_of_m_TransformView_11() { return &___m_TransformView_11; }
	inline void set_m_TransformView_11(PhotonTransformView_t486317301 * value)
	{
		___m_TransformView_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransformView_11, value);
	}

	inline static int32_t get_offset_of_m_AnimatorSpeed_12() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_AnimatorSpeed_12)); }
	inline float get_m_AnimatorSpeed_12() const { return ___m_AnimatorSpeed_12; }
	inline float* get_address_of_m_AnimatorSpeed_12() { return &___m_AnimatorSpeed_12; }
	inline void set_m_AnimatorSpeed_12(float value)
	{
		___m_AnimatorSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentMovement_13() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CurrentMovement_13)); }
	inline Vector3_t3525329789  get_m_CurrentMovement_13() const { return ___m_CurrentMovement_13; }
	inline Vector3_t3525329789 * get_address_of_m_CurrentMovement_13() { return &___m_CurrentMovement_13; }
	inline void set_m_CurrentMovement_13(Vector3_t3525329789  value)
	{
		___m_CurrentMovement_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTurnSpeed_14() { return static_cast<int32_t>(offsetof(RPGMovement_t618383768, ___m_CurrentTurnSpeed_14)); }
	inline float get_m_CurrentTurnSpeed_14() const { return ___m_CurrentTurnSpeed_14; }
	inline float* get_address_of_m_CurrentTurnSpeed_14() { return &___m_CurrentTurnSpeed_14; }
	inline void set_m_CurrentTurnSpeed_14(float value)
	{
		___m_CurrentTurnSpeed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
