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
	// PlayerStateManager Game.RivalController::state
	PlayerStateManager_t4277940093 * ___state_8;
	// UnityEngine.Rigidbody Game.RivalController::rivalRb
	Rigidbody_t1972007546 * ___rivalRb_9;
	// UnityEngine.GameObject Game.RivalController::cannonBall
	GameObject_t4012695102 * ___cannonBall_10;
	// System.Single Game.RivalController::timer
	float ___timer_11;

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

	inline static int32_t get_offset_of_state_8() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___state_8)); }
	inline PlayerStateManager_t4277940093 * get_state_8() const { return ___state_8; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_8() { return &___state_8; }
	inline void set_state_8(PlayerStateManager_t4277940093 * value)
	{
		___state_8 = value;
		Il2CppCodeGenWriteBarrier(&___state_8, value);
	}

	inline static int32_t get_offset_of_rivalRb_9() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___rivalRb_9)); }
	inline Rigidbody_t1972007546 * get_rivalRb_9() const { return ___rivalRb_9; }
	inline Rigidbody_t1972007546 ** get_address_of_rivalRb_9() { return &___rivalRb_9; }
	inline void set_rivalRb_9(Rigidbody_t1972007546 * value)
	{
		___rivalRb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rivalRb_9, value);
	}

	inline static int32_t get_offset_of_cannonBall_10() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___cannonBall_10)); }
	inline GameObject_t4012695102 * get_cannonBall_10() const { return ___cannonBall_10; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_10() { return &___cannonBall_10; }
	inline void set_cannonBall_10(GameObject_t4012695102 * value)
	{
		___cannonBall_10 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_10, value);
	}

	inline static int32_t get_offset_of_timer_11() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___timer_11)); }
	inline float get_timer_11() const { return ___timer_11; }
	inline float* get_address_of_timer_11() { return &___timer_11; }
	inline void set_timer_11(float value)
	{
		___timer_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
