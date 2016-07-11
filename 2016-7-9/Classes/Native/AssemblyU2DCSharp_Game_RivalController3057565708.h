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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "AssemblyU2DCSharp_Game_CharactorOperationMaster3360730064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.RivalController
struct  RivalController_t3057565708  : public CharactorOperationMaster_t3360730064
{
public:
	// UnityEngine.Transform Game.RivalController::center
	Transform_t284553113 * ___center_5;
	// UnityEngine.GameObject Game.RivalController::cannon
	GameObject_t4012695102 * ___cannon_6;
	// UnityEngine.GameObject Game.RivalController::player
	GameObject_t4012695102 * ___player_7;
	// UnityEngine.BoxCollider Game.RivalController::col
	BoxCollider_t131631884 * ___col_8;
	// PlayerStateManager Game.RivalController::state
	PlayerStateManager_t4277940093 * ___state_9;
	// UnityEngine.Rigidbody Game.RivalController::rivalRb
	Rigidbody_t1972007546 * ___rivalRb_10;
	// UnityEngine.GameObject Game.RivalController::cannonBall
	GameObject_t4012695102 * ___cannonBall_11;
	// System.Single Game.RivalController::timer
	float ___timer_12;

public:
	inline static int32_t get_offset_of_center_5() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___center_5)); }
	inline Transform_t284553113 * get_center_5() const { return ___center_5; }
	inline Transform_t284553113 ** get_address_of_center_5() { return &___center_5; }
	inline void set_center_5(Transform_t284553113 * value)
	{
		___center_5 = value;
		Il2CppCodeGenWriteBarrier(&___center_5, value);
	}

	inline static int32_t get_offset_of_cannon_6() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___cannon_6)); }
	inline GameObject_t4012695102 * get_cannon_6() const { return ___cannon_6; }
	inline GameObject_t4012695102 ** get_address_of_cannon_6() { return &___cannon_6; }
	inline void set_cannon_6(GameObject_t4012695102 * value)
	{
		___cannon_6 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___player_7)); }
	inline GameObject_t4012695102 * get_player_7() const { return ___player_7; }
	inline GameObject_t4012695102 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t4012695102 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_col_8() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___col_8)); }
	inline BoxCollider_t131631884 * get_col_8() const { return ___col_8; }
	inline BoxCollider_t131631884 ** get_address_of_col_8() { return &___col_8; }
	inline void set_col_8(BoxCollider_t131631884 * value)
	{
		___col_8 = value;
		Il2CppCodeGenWriteBarrier(&___col_8, value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___state_9)); }
	inline PlayerStateManager_t4277940093 * get_state_9() const { return ___state_9; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(PlayerStateManager_t4277940093 * value)
	{
		___state_9 = value;
		Il2CppCodeGenWriteBarrier(&___state_9, value);
	}

	inline static int32_t get_offset_of_rivalRb_10() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___rivalRb_10)); }
	inline Rigidbody_t1972007546 * get_rivalRb_10() const { return ___rivalRb_10; }
	inline Rigidbody_t1972007546 ** get_address_of_rivalRb_10() { return &___rivalRb_10; }
	inline void set_rivalRb_10(Rigidbody_t1972007546 * value)
	{
		___rivalRb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rivalRb_10, value);
	}

	inline static int32_t get_offset_of_cannonBall_11() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___cannonBall_11)); }
	inline GameObject_t4012695102 * get_cannonBall_11() const { return ___cannonBall_11; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_11() { return &___cannonBall_11; }
	inline void set_cannonBall_11(GameObject_t4012695102 * value)
	{
		___cannonBall_11 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_11, value);
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
