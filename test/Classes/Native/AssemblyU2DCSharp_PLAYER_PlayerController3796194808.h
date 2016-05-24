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

#include "AssemblyU2DCSharp_PLAYER_CharacterOperationMaster3608733915.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PLAYER.PlayerController
struct  PlayerController_t3796194808  : public CharacterOperationMaster_t3608733915
{
public:
	// UnityEngine.Transform PLAYER.PlayerController::center
	Transform_t284553113 * ___center_4;
	// UnityEngine.GameObject PLAYER.PlayerController::cannon
	GameObject_t4012695102 * ___cannon_5;
	// PlayerStateManager PLAYER.PlayerController::state
	PlayerStateManager_t4277940093 * ___state_6;
	// UnityEngine.Rigidbody PLAYER.PlayerController::playerRb
	Rigidbody_t1972007546 * ___playerRb_7;
	// UnityEngine.GameObject PLAYER.PlayerController::cannonBall
	GameObject_t4012695102 * ___cannonBall_8;

public:
	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(PlayerController_t3796194808, ___center_4)); }
	inline Transform_t284553113 * get_center_4() const { return ___center_4; }
	inline Transform_t284553113 ** get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(Transform_t284553113 * value)
	{
		___center_4 = value;
		Il2CppCodeGenWriteBarrier(&___center_4, value);
	}

	inline static int32_t get_offset_of_cannon_5() { return static_cast<int32_t>(offsetof(PlayerController_t3796194808, ___cannon_5)); }
	inline GameObject_t4012695102 * get_cannon_5() const { return ___cannon_5; }
	inline GameObject_t4012695102 ** get_address_of_cannon_5() { return &___cannon_5; }
	inline void set_cannon_5(GameObject_t4012695102 * value)
	{
		___cannon_5 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_5, value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(PlayerController_t3796194808, ___state_6)); }
	inline PlayerStateManager_t4277940093 * get_state_6() const { return ___state_6; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(PlayerStateManager_t4277940093 * value)
	{
		___state_6 = value;
		Il2CppCodeGenWriteBarrier(&___state_6, value);
	}

	inline static int32_t get_offset_of_playerRb_7() { return static_cast<int32_t>(offsetof(PlayerController_t3796194808, ___playerRb_7)); }
	inline Rigidbody_t1972007546 * get_playerRb_7() const { return ___playerRb_7; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_7() { return &___playerRb_7; }
	inline void set_playerRb_7(Rigidbody_t1972007546 * value)
	{
		___playerRb_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_7, value);
	}

	inline static int32_t get_offset_of_cannonBall_8() { return static_cast<int32_t>(offsetof(PlayerController_t3796194808, ___cannonBall_8)); }
	inline GameObject_t4012695102 * get_cannonBall_8() const { return ___cannonBall_8; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_8() { return &___cannonBall_8; }
	inline void set_cannonBall_8(GameObject_t4012695102 * value)
	{
		___cannonBall_8 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
