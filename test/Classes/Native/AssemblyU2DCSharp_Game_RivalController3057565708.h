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

#include "AssemblyU2DCSharp_Game_CharacterOperationMaster2712534982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.RivalController
struct  RivalController_t3057565708  : public CharacterOperationMaster_t2712534982
{
public:
	// UnityEngine.Transform Game.RivalController::center
	Transform_t284553113 * ___center_4;
	// UnityEngine.GameObject Game.RivalController::cannon
	GameObject_t4012695102 * ___cannon_5;
	// UnityEngine.GameObject Game.RivalController::player
	GameObject_t4012695102 * ___player_6;
	// PlayerStateManager Game.RivalController::state
	PlayerStateManager_t4277940093 * ___state_7;
	// UnityEngine.Rigidbody Game.RivalController::rivalRb
	Rigidbody_t1972007546 * ___rivalRb_8;
	// UnityEngine.GameObject Game.RivalController::cannonBall
	GameObject_t4012695102 * ___cannonBall_9;
	// System.Single Game.RivalController::timer
	float ___timer_10;

public:
	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___center_4)); }
	inline Transform_t284553113 * get_center_4() const { return ___center_4; }
	inline Transform_t284553113 ** get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(Transform_t284553113 * value)
	{
		___center_4 = value;
		Il2CppCodeGenWriteBarrier(&___center_4, value);
	}

	inline static int32_t get_offset_of_cannon_5() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___cannon_5)); }
	inline GameObject_t4012695102 * get_cannon_5() const { return ___cannon_5; }
	inline GameObject_t4012695102 ** get_address_of_cannon_5() { return &___cannon_5; }
	inline void set_cannon_5(GameObject_t4012695102 * value)
	{
		___cannon_5 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___player_6)); }
	inline GameObject_t4012695102 * get_player_6() const { return ___player_6; }
	inline GameObject_t4012695102 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t4012695102 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___state_7)); }
	inline PlayerStateManager_t4277940093 * get_state_7() const { return ___state_7; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(PlayerStateManager_t4277940093 * value)
	{
		___state_7 = value;
		Il2CppCodeGenWriteBarrier(&___state_7, value);
	}

	inline static int32_t get_offset_of_rivalRb_8() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___rivalRb_8)); }
	inline Rigidbody_t1972007546 * get_rivalRb_8() const { return ___rivalRb_8; }
	inline Rigidbody_t1972007546 ** get_address_of_rivalRb_8() { return &___rivalRb_8; }
	inline void set_rivalRb_8(Rigidbody_t1972007546 * value)
	{
		___rivalRb_8 = value;
		Il2CppCodeGenWriteBarrier(&___rivalRb_8, value);
	}

	inline static int32_t get_offset_of_cannonBall_9() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___cannonBall_9)); }
	inline GameObject_t4012695102 * get_cannonBall_9() const { return ___cannonBall_9; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_9() { return &___cannonBall_9; }
	inline void set_cannonBall_9(GameObject_t4012695102 * value)
	{
		___cannonBall_9 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_9, value);
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(RivalController_t3057565708, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
