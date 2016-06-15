#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// UnityEngine.Animation
struct Animation_t350396337;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "AssemblyU2DCSharp_PickupCharacterState3111038116.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PickupController
struct  PickupController_t2804654936  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.AnimationClip PickupController::idleAnimation
	AnimationClip_t57566497 * ___idleAnimation_3;
	// UnityEngine.AnimationClip PickupController::walkAnimation
	AnimationClip_t57566497 * ___walkAnimation_4;
	// UnityEngine.AnimationClip PickupController::runAnimation
	AnimationClip_t57566497 * ___runAnimation_5;
	// UnityEngine.AnimationClip PickupController::jumpPoseAnimation
	AnimationClip_t57566497 * ___jumpPoseAnimation_6;
	// System.Single PickupController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_7;
	// System.Single PickupController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_8;
	// System.Single PickupController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_9;
	// System.Single PickupController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_10;
	// System.Single PickupController::landAnimationSpeed
	float ___landAnimationSpeed_11;
	// UnityEngine.Animation PickupController::_animation
	Animation_t350396337 * ____animation_12;
	// PickupCharacterState PickupController::_characterState
	int32_t ____characterState_13;
	// System.Single PickupController::walkSpeed
	float ___walkSpeed_14;
	// System.Single PickupController::trotSpeed
	float ___trotSpeed_15;
	// System.Single PickupController::runSpeed
	float ___runSpeed_16;
	// System.Single PickupController::inAirControlAcceleration
	float ___inAirControlAcceleration_17;
	// System.Single PickupController::jumpHeight
	float ___jumpHeight_18;
	// System.Single PickupController::gravity
	float ___gravity_19;
	// System.Single PickupController::speedSmoothing
	float ___speedSmoothing_20;
	// System.Single PickupController::rotateSpeed
	float ___rotateSpeed_21;
	// System.Single PickupController::trotAfterSeconds
	float ___trotAfterSeconds_22;
	// System.Boolean PickupController::canJump
	bool ___canJump_23;
	// System.Single PickupController::jumpRepeatTime
	float ___jumpRepeatTime_24;
	// System.Single PickupController::jumpTimeout
	float ___jumpTimeout_25;
	// System.Single PickupController::groundedTimeout
	float ___groundedTimeout_26;
	// System.Single PickupController::lockCameraTimer
	float ___lockCameraTimer_27;
	// UnityEngine.Vector3 PickupController::moveDirection
	Vector3_t3525329789  ___moveDirection_28;
	// System.Single PickupController::verticalSpeed
	float ___verticalSpeed_29;
	// System.Single PickupController::moveSpeed
	float ___moveSpeed_30;
	// UnityEngine.CollisionFlags PickupController::collisionFlags
	int32_t ___collisionFlags_31;
	// System.Boolean PickupController::jumping
	bool ___jumping_32;
	// System.Boolean PickupController::jumpingReachedApex
	bool ___jumpingReachedApex_33;
	// System.Boolean PickupController::movingBack
	bool ___movingBack_34;
	// System.Boolean PickupController::isMoving
	bool ___isMoving_35;
	// System.Single PickupController::walkTimeStart
	float ___walkTimeStart_36;
	// System.Single PickupController::lastJumpButtonTime
	float ___lastJumpButtonTime_37;
	// System.Single PickupController::lastJumpTime
	float ___lastJumpTime_38;
	// UnityEngine.Vector3 PickupController::inAirVelocity
	Vector3_t3525329789  ___inAirVelocity_39;
	// System.Single PickupController::lastGroundedTime
	float ___lastGroundedTime_40;
	// UnityEngine.Vector3 PickupController::velocity
	Vector3_t3525329789  ___velocity_41;
	// UnityEngine.Vector3 PickupController::lastPos
	Vector3_t3525329789  ___lastPos_42;
	// UnityEngine.Vector3 PickupController::remotePosition
	Vector3_t3525329789  ___remotePosition_43;
	// System.Boolean PickupController::isControllable
	bool ___isControllable_44;
	// System.Boolean PickupController::DoRotate
	bool ___DoRotate_45;
	// System.Single PickupController::RemoteSmoothing
	float ___RemoteSmoothing_46;
	// System.Boolean PickupController::AssignAsTagObject
	bool ___AssignAsTagObject_47;

public:
	inline static int32_t get_offset_of_idleAnimation_3() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___idleAnimation_3)); }
	inline AnimationClip_t57566497 * get_idleAnimation_3() const { return ___idleAnimation_3; }
	inline AnimationClip_t57566497 ** get_address_of_idleAnimation_3() { return &___idleAnimation_3; }
	inline void set_idleAnimation_3(AnimationClip_t57566497 * value)
	{
		___idleAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation_3, value);
	}

	inline static int32_t get_offset_of_walkAnimation_4() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkAnimation_4)); }
	inline AnimationClip_t57566497 * get_walkAnimation_4() const { return ___walkAnimation_4; }
	inline AnimationClip_t57566497 ** get_address_of_walkAnimation_4() { return &___walkAnimation_4; }
	inline void set_walkAnimation_4(AnimationClip_t57566497 * value)
	{
		___walkAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___walkAnimation_4, value);
	}

	inline static int32_t get_offset_of_runAnimation_5() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runAnimation_5)); }
	inline AnimationClip_t57566497 * get_runAnimation_5() const { return ___runAnimation_5; }
	inline AnimationClip_t57566497 ** get_address_of_runAnimation_5() { return &___runAnimation_5; }
	inline void set_runAnimation_5(AnimationClip_t57566497 * value)
	{
		___runAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___runAnimation_5, value);
	}

	inline static int32_t get_offset_of_jumpPoseAnimation_6() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpPoseAnimation_6)); }
	inline AnimationClip_t57566497 * get_jumpPoseAnimation_6() const { return ___jumpPoseAnimation_6; }
	inline AnimationClip_t57566497 ** get_address_of_jumpPoseAnimation_6() { return &___jumpPoseAnimation_6; }
	inline void set_jumpPoseAnimation_6(AnimationClip_t57566497 * value)
	{
		___jumpPoseAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___jumpPoseAnimation_6, value);
	}

	inline static int32_t get_offset_of_walkMaxAnimationSpeed_7() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkMaxAnimationSpeed_7)); }
	inline float get_walkMaxAnimationSpeed_7() const { return ___walkMaxAnimationSpeed_7; }
	inline float* get_address_of_walkMaxAnimationSpeed_7() { return &___walkMaxAnimationSpeed_7; }
	inline void set_walkMaxAnimationSpeed_7(float value)
	{
		___walkMaxAnimationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_trotMaxAnimationSpeed_8() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotMaxAnimationSpeed_8)); }
	inline float get_trotMaxAnimationSpeed_8() const { return ___trotMaxAnimationSpeed_8; }
	inline float* get_address_of_trotMaxAnimationSpeed_8() { return &___trotMaxAnimationSpeed_8; }
	inline void set_trotMaxAnimationSpeed_8(float value)
	{
		___trotMaxAnimationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_runMaxAnimationSpeed_9() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runMaxAnimationSpeed_9)); }
	inline float get_runMaxAnimationSpeed_9() const { return ___runMaxAnimationSpeed_9; }
	inline float* get_address_of_runMaxAnimationSpeed_9() { return &___runMaxAnimationSpeed_9; }
	inline void set_runMaxAnimationSpeed_9(float value)
	{
		___runMaxAnimationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_jumpAnimationSpeed_10() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpAnimationSpeed_10)); }
	inline float get_jumpAnimationSpeed_10() const { return ___jumpAnimationSpeed_10; }
	inline float* get_address_of_jumpAnimationSpeed_10() { return &___jumpAnimationSpeed_10; }
	inline void set_jumpAnimationSpeed_10(float value)
	{
		___jumpAnimationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_landAnimationSpeed_11() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___landAnimationSpeed_11)); }
	inline float get_landAnimationSpeed_11() const { return ___landAnimationSpeed_11; }
	inline float* get_address_of_landAnimationSpeed_11() { return &___landAnimationSpeed_11; }
	inline void set_landAnimationSpeed_11(float value)
	{
		___landAnimationSpeed_11 = value;
	}

	inline static int32_t get_offset_of__animation_12() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ____animation_12)); }
	inline Animation_t350396337 * get__animation_12() const { return ____animation_12; }
	inline Animation_t350396337 ** get_address_of__animation_12() { return &____animation_12; }
	inline void set__animation_12(Animation_t350396337 * value)
	{
		____animation_12 = value;
		Il2CppCodeGenWriteBarrier(&____animation_12, value);
	}

	inline static int32_t get_offset_of__characterState_13() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ____characterState_13)); }
	inline int32_t get__characterState_13() const { return ____characterState_13; }
	inline int32_t* get_address_of__characterState_13() { return &____characterState_13; }
	inline void set__characterState_13(int32_t value)
	{
		____characterState_13 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_14() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkSpeed_14)); }
	inline float get_walkSpeed_14() const { return ___walkSpeed_14; }
	inline float* get_address_of_walkSpeed_14() { return &___walkSpeed_14; }
	inline void set_walkSpeed_14(float value)
	{
		___walkSpeed_14 = value;
	}

	inline static int32_t get_offset_of_trotSpeed_15() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotSpeed_15)); }
	inline float get_trotSpeed_15() const { return ___trotSpeed_15; }
	inline float* get_address_of_trotSpeed_15() { return &___trotSpeed_15; }
	inline void set_trotSpeed_15(float value)
	{
		___trotSpeed_15 = value;
	}

	inline static int32_t get_offset_of_runSpeed_16() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___runSpeed_16)); }
	inline float get_runSpeed_16() const { return ___runSpeed_16; }
	inline float* get_address_of_runSpeed_16() { return &___runSpeed_16; }
	inline void set_runSpeed_16(float value)
	{
		___runSpeed_16 = value;
	}

	inline static int32_t get_offset_of_inAirControlAcceleration_17() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___inAirControlAcceleration_17)); }
	inline float get_inAirControlAcceleration_17() const { return ___inAirControlAcceleration_17; }
	inline float* get_address_of_inAirControlAcceleration_17() { return &___inAirControlAcceleration_17; }
	inline void set_inAirControlAcceleration_17(float value)
	{
		___inAirControlAcceleration_17 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_18() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpHeight_18)); }
	inline float get_jumpHeight_18() const { return ___jumpHeight_18; }
	inline float* get_address_of_jumpHeight_18() { return &___jumpHeight_18; }
	inline void set_jumpHeight_18(float value)
	{
		___jumpHeight_18 = value;
	}

	inline static int32_t get_offset_of_gravity_19() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___gravity_19)); }
	inline float get_gravity_19() const { return ___gravity_19; }
	inline float* get_address_of_gravity_19() { return &___gravity_19; }
	inline void set_gravity_19(float value)
	{
		___gravity_19 = value;
	}

	inline static int32_t get_offset_of_speedSmoothing_20() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___speedSmoothing_20)); }
	inline float get_speedSmoothing_20() const { return ___speedSmoothing_20; }
	inline float* get_address_of_speedSmoothing_20() { return &___speedSmoothing_20; }
	inline void set_speedSmoothing_20(float value)
	{
		___speedSmoothing_20 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_21() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___rotateSpeed_21)); }
	inline float get_rotateSpeed_21() const { return ___rotateSpeed_21; }
	inline float* get_address_of_rotateSpeed_21() { return &___rotateSpeed_21; }
	inline void set_rotateSpeed_21(float value)
	{
		___rotateSpeed_21 = value;
	}

	inline static int32_t get_offset_of_trotAfterSeconds_22() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___trotAfterSeconds_22)); }
	inline float get_trotAfterSeconds_22() const { return ___trotAfterSeconds_22; }
	inline float* get_address_of_trotAfterSeconds_22() { return &___trotAfterSeconds_22; }
	inline void set_trotAfterSeconds_22(float value)
	{
		___trotAfterSeconds_22 = value;
	}

	inline static int32_t get_offset_of_canJump_23() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___canJump_23)); }
	inline bool get_canJump_23() const { return ___canJump_23; }
	inline bool* get_address_of_canJump_23() { return &___canJump_23; }
	inline void set_canJump_23(bool value)
	{
		___canJump_23 = value;
	}

	inline static int32_t get_offset_of_jumpRepeatTime_24() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpRepeatTime_24)); }
	inline float get_jumpRepeatTime_24() const { return ___jumpRepeatTime_24; }
	inline float* get_address_of_jumpRepeatTime_24() { return &___jumpRepeatTime_24; }
	inline void set_jumpRepeatTime_24(float value)
	{
		___jumpRepeatTime_24 = value;
	}

	inline static int32_t get_offset_of_jumpTimeout_25() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpTimeout_25)); }
	inline float get_jumpTimeout_25() const { return ___jumpTimeout_25; }
	inline float* get_address_of_jumpTimeout_25() { return &___jumpTimeout_25; }
	inline void set_jumpTimeout_25(float value)
	{
		___jumpTimeout_25 = value;
	}

	inline static int32_t get_offset_of_groundedTimeout_26() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___groundedTimeout_26)); }
	inline float get_groundedTimeout_26() const { return ___groundedTimeout_26; }
	inline float* get_address_of_groundedTimeout_26() { return &___groundedTimeout_26; }
	inline void set_groundedTimeout_26(float value)
	{
		___groundedTimeout_26 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimer_27() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lockCameraTimer_27)); }
	inline float get_lockCameraTimer_27() const { return ___lockCameraTimer_27; }
	inline float* get_address_of_lockCameraTimer_27() { return &___lockCameraTimer_27; }
	inline void set_lockCameraTimer_27(float value)
	{
		___lockCameraTimer_27 = value;
	}

	inline static int32_t get_offset_of_moveDirection_28() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___moveDirection_28)); }
	inline Vector3_t3525329789  get_moveDirection_28() const { return ___moveDirection_28; }
	inline Vector3_t3525329789 * get_address_of_moveDirection_28() { return &___moveDirection_28; }
	inline void set_moveDirection_28(Vector3_t3525329789  value)
	{
		___moveDirection_28 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_29() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___verticalSpeed_29)); }
	inline float get_verticalSpeed_29() const { return ___verticalSpeed_29; }
	inline float* get_address_of_verticalSpeed_29() { return &___verticalSpeed_29; }
	inline void set_verticalSpeed_29(float value)
	{
		___verticalSpeed_29 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_30() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___moveSpeed_30)); }
	inline float get_moveSpeed_30() const { return ___moveSpeed_30; }
	inline float* get_address_of_moveSpeed_30() { return &___moveSpeed_30; }
	inline void set_moveSpeed_30(float value)
	{
		___moveSpeed_30 = value;
	}

	inline static int32_t get_offset_of_collisionFlags_31() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___collisionFlags_31)); }
	inline int32_t get_collisionFlags_31() const { return ___collisionFlags_31; }
	inline int32_t* get_address_of_collisionFlags_31() { return &___collisionFlags_31; }
	inline void set_collisionFlags_31(int32_t value)
	{
		___collisionFlags_31 = value;
	}

	inline static int32_t get_offset_of_jumping_32() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumping_32)); }
	inline bool get_jumping_32() const { return ___jumping_32; }
	inline bool* get_address_of_jumping_32() { return &___jumping_32; }
	inline void set_jumping_32(bool value)
	{
		___jumping_32 = value;
	}

	inline static int32_t get_offset_of_jumpingReachedApex_33() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___jumpingReachedApex_33)); }
	inline bool get_jumpingReachedApex_33() const { return ___jumpingReachedApex_33; }
	inline bool* get_address_of_jumpingReachedApex_33() { return &___jumpingReachedApex_33; }
	inline void set_jumpingReachedApex_33(bool value)
	{
		___jumpingReachedApex_33 = value;
	}

	inline static int32_t get_offset_of_movingBack_34() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___movingBack_34)); }
	inline bool get_movingBack_34() const { return ___movingBack_34; }
	inline bool* get_address_of_movingBack_34() { return &___movingBack_34; }
	inline void set_movingBack_34(bool value)
	{
		___movingBack_34 = value;
	}

	inline static int32_t get_offset_of_isMoving_35() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___isMoving_35)); }
	inline bool get_isMoving_35() const { return ___isMoving_35; }
	inline bool* get_address_of_isMoving_35() { return &___isMoving_35; }
	inline void set_isMoving_35(bool value)
	{
		___isMoving_35 = value;
	}

	inline static int32_t get_offset_of_walkTimeStart_36() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___walkTimeStart_36)); }
	inline float get_walkTimeStart_36() const { return ___walkTimeStart_36; }
	inline float* get_address_of_walkTimeStart_36() { return &___walkTimeStart_36; }
	inline void set_walkTimeStart_36(float value)
	{
		___walkTimeStart_36 = value;
	}

	inline static int32_t get_offset_of_lastJumpButtonTime_37() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastJumpButtonTime_37)); }
	inline float get_lastJumpButtonTime_37() const { return ___lastJumpButtonTime_37; }
	inline float* get_address_of_lastJumpButtonTime_37() { return &___lastJumpButtonTime_37; }
	inline void set_lastJumpButtonTime_37(float value)
	{
		___lastJumpButtonTime_37 = value;
	}

	inline static int32_t get_offset_of_lastJumpTime_38() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastJumpTime_38)); }
	inline float get_lastJumpTime_38() const { return ___lastJumpTime_38; }
	inline float* get_address_of_lastJumpTime_38() { return &___lastJumpTime_38; }
	inline void set_lastJumpTime_38(float value)
	{
		___lastJumpTime_38 = value;
	}

	inline static int32_t get_offset_of_inAirVelocity_39() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___inAirVelocity_39)); }
	inline Vector3_t3525329789  get_inAirVelocity_39() const { return ___inAirVelocity_39; }
	inline Vector3_t3525329789 * get_address_of_inAirVelocity_39() { return &___inAirVelocity_39; }
	inline void set_inAirVelocity_39(Vector3_t3525329789  value)
	{
		___inAirVelocity_39 = value;
	}

	inline static int32_t get_offset_of_lastGroundedTime_40() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastGroundedTime_40)); }
	inline float get_lastGroundedTime_40() const { return ___lastGroundedTime_40; }
	inline float* get_address_of_lastGroundedTime_40() { return &___lastGroundedTime_40; }
	inline void set_lastGroundedTime_40(float value)
	{
		___lastGroundedTime_40 = value;
	}

	inline static int32_t get_offset_of_velocity_41() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___velocity_41)); }
	inline Vector3_t3525329789  get_velocity_41() const { return ___velocity_41; }
	inline Vector3_t3525329789 * get_address_of_velocity_41() { return &___velocity_41; }
	inline void set_velocity_41(Vector3_t3525329789  value)
	{
		___velocity_41 = value;
	}

	inline static int32_t get_offset_of_lastPos_42() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___lastPos_42)); }
	inline Vector3_t3525329789  get_lastPos_42() const { return ___lastPos_42; }
	inline Vector3_t3525329789 * get_address_of_lastPos_42() { return &___lastPos_42; }
	inline void set_lastPos_42(Vector3_t3525329789  value)
	{
		___lastPos_42 = value;
	}

	inline static int32_t get_offset_of_remotePosition_43() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___remotePosition_43)); }
	inline Vector3_t3525329789  get_remotePosition_43() const { return ___remotePosition_43; }
	inline Vector3_t3525329789 * get_address_of_remotePosition_43() { return &___remotePosition_43; }
	inline void set_remotePosition_43(Vector3_t3525329789  value)
	{
		___remotePosition_43 = value;
	}

	inline static int32_t get_offset_of_isControllable_44() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___isControllable_44)); }
	inline bool get_isControllable_44() const { return ___isControllable_44; }
	inline bool* get_address_of_isControllable_44() { return &___isControllable_44; }
	inline void set_isControllable_44(bool value)
	{
		___isControllable_44 = value;
	}

	inline static int32_t get_offset_of_DoRotate_45() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___DoRotate_45)); }
	inline bool get_DoRotate_45() const { return ___DoRotate_45; }
	inline bool* get_address_of_DoRotate_45() { return &___DoRotate_45; }
	inline void set_DoRotate_45(bool value)
	{
		___DoRotate_45 = value;
	}

	inline static int32_t get_offset_of_RemoteSmoothing_46() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___RemoteSmoothing_46)); }
	inline float get_RemoteSmoothing_46() const { return ___RemoteSmoothing_46; }
	inline float* get_address_of_RemoteSmoothing_46() { return &___RemoteSmoothing_46; }
	inline void set_RemoteSmoothing_46(float value)
	{
		___RemoteSmoothing_46 = value;
	}

	inline static int32_t get_offset_of_AssignAsTagObject_47() { return static_cast<int32_t>(offsetof(PickupController_t2804654936, ___AssignAsTagObject_47)); }
	inline bool get_AssignAsTagObject_47() const { return ___AssignAsTagObject_47; }
	inline bool* get_address_of_AssignAsTagObject_47() { return &___AssignAsTagObject_47; }
	inline void set_AssignAsTagObject_47(bool value)
	{
		___AssignAsTagObject_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
