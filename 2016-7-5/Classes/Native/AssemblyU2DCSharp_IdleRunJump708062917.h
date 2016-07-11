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
// PhotonView
struct PhotonView_t1498838369;
// PhotonTransformView
struct PhotonTransformView_t486317301;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IdleRunJump
struct  IdleRunJump_t708062917  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Animator IdleRunJump::animator
	Animator_t792326996 * ___animator_3;
	// System.Single IdleRunJump::DirectionDampTime
	float ___DirectionDampTime_4;
	// System.Boolean IdleRunJump::ApplyGravity
	bool ___ApplyGravity_5;
	// System.Single IdleRunJump::SynchronizedMaxSpeed
	float ___SynchronizedMaxSpeed_6;
	// System.Single IdleRunJump::TurnSpeedModifier
	float ___TurnSpeedModifier_7;
	// System.Single IdleRunJump::SynchronizedTurnSpeed
	float ___SynchronizedTurnSpeed_8;
	// System.Single IdleRunJump::SynchronizedSpeedAcceleration
	float ___SynchronizedSpeedAcceleration_9;
	// PhotonView IdleRunJump::m_PhotonView
	PhotonView_t1498838369 * ___m_PhotonView_10;
	// PhotonTransformView IdleRunJump::m_TransformView
	PhotonTransformView_t486317301 * ___m_TransformView_11;
	// System.Single IdleRunJump::m_SpeedModifier
	float ___m_SpeedModifier_12;

public:
	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___animator_3)); }
	inline Animator_t792326996 * get_animator_3() const { return ___animator_3; }
	inline Animator_t792326996 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t792326996 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_DirectionDampTime_4() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___DirectionDampTime_4)); }
	inline float get_DirectionDampTime_4() const { return ___DirectionDampTime_4; }
	inline float* get_address_of_DirectionDampTime_4() { return &___DirectionDampTime_4; }
	inline void set_DirectionDampTime_4(float value)
	{
		___DirectionDampTime_4 = value;
	}

	inline static int32_t get_offset_of_ApplyGravity_5() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___ApplyGravity_5)); }
	inline bool get_ApplyGravity_5() const { return ___ApplyGravity_5; }
	inline bool* get_address_of_ApplyGravity_5() { return &___ApplyGravity_5; }
	inline void set_ApplyGravity_5(bool value)
	{
		___ApplyGravity_5 = value;
	}

	inline static int32_t get_offset_of_SynchronizedMaxSpeed_6() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___SynchronizedMaxSpeed_6)); }
	inline float get_SynchronizedMaxSpeed_6() const { return ___SynchronizedMaxSpeed_6; }
	inline float* get_address_of_SynchronizedMaxSpeed_6() { return &___SynchronizedMaxSpeed_6; }
	inline void set_SynchronizedMaxSpeed_6(float value)
	{
		___SynchronizedMaxSpeed_6 = value;
	}

	inline static int32_t get_offset_of_TurnSpeedModifier_7() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___TurnSpeedModifier_7)); }
	inline float get_TurnSpeedModifier_7() const { return ___TurnSpeedModifier_7; }
	inline float* get_address_of_TurnSpeedModifier_7() { return &___TurnSpeedModifier_7; }
	inline void set_TurnSpeedModifier_7(float value)
	{
		___TurnSpeedModifier_7 = value;
	}

	inline static int32_t get_offset_of_SynchronizedTurnSpeed_8() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___SynchronizedTurnSpeed_8)); }
	inline float get_SynchronizedTurnSpeed_8() const { return ___SynchronizedTurnSpeed_8; }
	inline float* get_address_of_SynchronizedTurnSpeed_8() { return &___SynchronizedTurnSpeed_8; }
	inline void set_SynchronizedTurnSpeed_8(float value)
	{
		___SynchronizedTurnSpeed_8 = value;
	}

	inline static int32_t get_offset_of_SynchronizedSpeedAcceleration_9() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___SynchronizedSpeedAcceleration_9)); }
	inline float get_SynchronizedSpeedAcceleration_9() const { return ___SynchronizedSpeedAcceleration_9; }
	inline float* get_address_of_SynchronizedSpeedAcceleration_9() { return &___SynchronizedSpeedAcceleration_9; }
	inline void set_SynchronizedSpeedAcceleration_9(float value)
	{
		___SynchronizedSpeedAcceleration_9 = value;
	}

	inline static int32_t get_offset_of_m_PhotonView_10() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___m_PhotonView_10)); }
	inline PhotonView_t1498838369 * get_m_PhotonView_10() const { return ___m_PhotonView_10; }
	inline PhotonView_t1498838369 ** get_address_of_m_PhotonView_10() { return &___m_PhotonView_10; }
	inline void set_m_PhotonView_10(PhotonView_t1498838369 * value)
	{
		___m_PhotonView_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_10, value);
	}

	inline static int32_t get_offset_of_m_TransformView_11() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___m_TransformView_11)); }
	inline PhotonTransformView_t486317301 * get_m_TransformView_11() const { return ___m_TransformView_11; }
	inline PhotonTransformView_t486317301 ** get_address_of_m_TransformView_11() { return &___m_TransformView_11; }
	inline void set_m_TransformView_11(PhotonTransformView_t486317301 * value)
	{
		___m_TransformView_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransformView_11, value);
	}

	inline static int32_t get_offset_of_m_SpeedModifier_12() { return static_cast<int32_t>(offsetof(IdleRunJump_t708062917, ___m_SpeedModifier_12)); }
	inline float get_m_SpeedModifier_12() const { return ___m_SpeedModifier_12; }
	inline float* get_address_of_m_SpeedModifier_12() { return &___m_SpeedModifier_12; }
	inline void set_m_SpeedModifier_12(float value)
	{
		___m_SpeedModifier_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
