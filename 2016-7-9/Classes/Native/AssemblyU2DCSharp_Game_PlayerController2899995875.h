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
// Game.GameState
struct GameState_t3027501829;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
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

// Game.PlayerController
struct  PlayerController_t2899995875  : public CharactorOperationMaster_t3360730064
{
public:
	// UnityEngine.Transform Game.PlayerController::center
	Transform_t284553113 * ___center_5;
	// UnityEngine.GameObject Game.PlayerController::cannon
	GameObject_t4012695102 * ___cannon_6;
	// UnityEngine.BoxCollider Game.PlayerController::col
	BoxCollider_t131631884 * ___col_7;
	// Game.GameState Game.PlayerController::gameState
	GameState_t3027501829 * ___gameState_8;
	// UnityEngine.AudioSource Game.PlayerController::cannonAudio
	AudioSource_t3628549054 * ___cannonAudio_9;
	// PlayerStateManager Game.PlayerController::state
	PlayerStateManager_t4277940093 * ___state_10;
	// UnityEngine.Rigidbody Game.PlayerController::playerRb
	Rigidbody_t1972007546 * ___playerRb_11;
	// UnityEngine.GameObject Game.PlayerController::cannonBall
	GameObject_t4012695102 * ___cannonBall_12;

public:
	inline static int32_t get_offset_of_center_5() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___center_5)); }
	inline Transform_t284553113 * get_center_5() const { return ___center_5; }
	inline Transform_t284553113 ** get_address_of_center_5() { return &___center_5; }
	inline void set_center_5(Transform_t284553113 * value)
	{
		___center_5 = value;
		Il2CppCodeGenWriteBarrier(&___center_5, value);
	}

	inline static int32_t get_offset_of_cannon_6() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___cannon_6)); }
	inline GameObject_t4012695102 * get_cannon_6() const { return ___cannon_6; }
	inline GameObject_t4012695102 ** get_address_of_cannon_6() { return &___cannon_6; }
	inline void set_cannon_6(GameObject_t4012695102 * value)
	{
		___cannon_6 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_6, value);
	}

	inline static int32_t get_offset_of_col_7() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___col_7)); }
	inline BoxCollider_t131631884 * get_col_7() const { return ___col_7; }
	inline BoxCollider_t131631884 ** get_address_of_col_7() { return &___col_7; }
	inline void set_col_7(BoxCollider_t131631884 * value)
	{
		___col_7 = value;
		Il2CppCodeGenWriteBarrier(&___col_7, value);
	}

	inline static int32_t get_offset_of_gameState_8() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___gameState_8)); }
	inline GameState_t3027501829 * get_gameState_8() const { return ___gameState_8; }
	inline GameState_t3027501829 ** get_address_of_gameState_8() { return &___gameState_8; }
	inline void set_gameState_8(GameState_t3027501829 * value)
	{
		___gameState_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameState_8, value);
	}

	inline static int32_t get_offset_of_cannonAudio_9() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___cannonAudio_9)); }
	inline AudioSource_t3628549054 * get_cannonAudio_9() const { return ___cannonAudio_9; }
	inline AudioSource_t3628549054 ** get_address_of_cannonAudio_9() { return &___cannonAudio_9; }
	inline void set_cannonAudio_9(AudioSource_t3628549054 * value)
	{
		___cannonAudio_9 = value;
		Il2CppCodeGenWriteBarrier(&___cannonAudio_9, value);
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___state_10)); }
	inline PlayerStateManager_t4277940093 * get_state_10() const { return ___state_10; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(PlayerStateManager_t4277940093 * value)
	{
		___state_10 = value;
		Il2CppCodeGenWriteBarrier(&___state_10, value);
	}

	inline static int32_t get_offset_of_playerRb_11() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___playerRb_11)); }
	inline Rigidbody_t1972007546 * get_playerRb_11() const { return ___playerRb_11; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_11() { return &___playerRb_11; }
	inline void set_playerRb_11(Rigidbody_t1972007546 * value)
	{
		___playerRb_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_11, value);
	}

	inline static int32_t get_offset_of_cannonBall_12() { return static_cast<int32_t>(offsetof(PlayerController_t2899995875, ___cannonBall_12)); }
	inline GameObject_t4012695102 * get_cannonBall_12() const { return ___cannonBall_12; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_12() { return &___cannonBall_12; }
	inline void set_cannonBall_12(GameObject_t4012695102 * value)
	{
		___cannonBall_12 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
