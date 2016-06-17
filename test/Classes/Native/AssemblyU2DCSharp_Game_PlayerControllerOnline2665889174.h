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
// Game.GameStateOnline
struct GameStateOnline_t3171627576;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Game_CharacterOperationMaster2712534982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.PlayerControllerOnline
struct  PlayerControllerOnline_t2665889174  : public CharacterOperationMaster_t2712534982
{
public:
	// UnityEngine.Transform Game.PlayerControllerOnline::center
	Transform_t284553113 * ___center_4;
	// UnityEngine.GameObject Game.PlayerControllerOnline::cannon
	GameObject_t4012695102 * ___cannon_5;
	// Game.GameStateOnline Game.PlayerControllerOnline::gameState
	GameStateOnline_t3171627576 * ___gameState_6;
	// PlayerStateManager Game.PlayerControllerOnline::state
	PlayerStateManager_t4277940093 * ___state_7;
	// PhotonView Game.PlayerControllerOnline::photonMethod
	PhotonView_t1498838369 * ___photonMethod_8;
	// UnityEngine.Rigidbody Game.PlayerControllerOnline::playerRb
	Rigidbody_t1972007546 * ___playerRb_9;
	// UnityEngine.GameObject Game.PlayerControllerOnline::cannonBall
	GameObject_t4012695102 * ___cannonBall_10;
	// System.String Game.PlayerControllerOnline::playerType
	String_t* ___playerType_11;
	// System.String Game.PlayerControllerOnline::shotPlayer
	String_t* ___shotPlayer_12;
	// System.Single Game.PlayerControllerOnline::O_Speed
	float ___O_Speed_13;

public:
	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___center_4)); }
	inline Transform_t284553113 * get_center_4() const { return ___center_4; }
	inline Transform_t284553113 ** get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(Transform_t284553113 * value)
	{
		___center_4 = value;
		Il2CppCodeGenWriteBarrier(&___center_4, value);
	}

	inline static int32_t get_offset_of_cannon_5() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___cannon_5)); }
	inline GameObject_t4012695102 * get_cannon_5() const { return ___cannon_5; }
	inline GameObject_t4012695102 ** get_address_of_cannon_5() { return &___cannon_5; }
	inline void set_cannon_5(GameObject_t4012695102 * value)
	{
		___cannon_5 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_5, value);
	}

	inline static int32_t get_offset_of_gameState_6() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___gameState_6)); }
	inline GameStateOnline_t3171627576 * get_gameState_6() const { return ___gameState_6; }
	inline GameStateOnline_t3171627576 ** get_address_of_gameState_6() { return &___gameState_6; }
	inline void set_gameState_6(GameStateOnline_t3171627576 * value)
	{
		___gameState_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameState_6, value);
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___state_7)); }
	inline PlayerStateManager_t4277940093 * get_state_7() const { return ___state_7; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(PlayerStateManager_t4277940093 * value)
	{
		___state_7 = value;
		Il2CppCodeGenWriteBarrier(&___state_7, value);
	}

	inline static int32_t get_offset_of_photonMethod_8() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___photonMethod_8)); }
	inline PhotonView_t1498838369 * get_photonMethod_8() const { return ___photonMethod_8; }
	inline PhotonView_t1498838369 ** get_address_of_photonMethod_8() { return &___photonMethod_8; }
	inline void set_photonMethod_8(PhotonView_t1498838369 * value)
	{
		___photonMethod_8 = value;
		Il2CppCodeGenWriteBarrier(&___photonMethod_8, value);
	}

	inline static int32_t get_offset_of_playerRb_9() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___playerRb_9)); }
	inline Rigidbody_t1972007546 * get_playerRb_9() const { return ___playerRb_9; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_9() { return &___playerRb_9; }
	inline void set_playerRb_9(Rigidbody_t1972007546 * value)
	{
		___playerRb_9 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_9, value);
	}

	inline static int32_t get_offset_of_cannonBall_10() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___cannonBall_10)); }
	inline GameObject_t4012695102 * get_cannonBall_10() const { return ___cannonBall_10; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_10() { return &___cannonBall_10; }
	inline void set_cannonBall_10(GameObject_t4012695102 * value)
	{
		___cannonBall_10 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_10, value);
	}

	inline static int32_t get_offset_of_playerType_11() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___playerType_11)); }
	inline String_t* get_playerType_11() const { return ___playerType_11; }
	inline String_t** get_address_of_playerType_11() { return &___playerType_11; }
	inline void set_playerType_11(String_t* value)
	{
		___playerType_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerType_11, value);
	}

	inline static int32_t get_offset_of_shotPlayer_12() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___shotPlayer_12)); }
	inline String_t* get_shotPlayer_12() const { return ___shotPlayer_12; }
	inline String_t** get_address_of_shotPlayer_12() { return &___shotPlayer_12; }
	inline void set_shotPlayer_12(String_t* value)
	{
		___shotPlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___shotPlayer_12, value);
	}

	inline static int32_t get_offset_of_O_Speed_13() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___O_Speed_13)); }
	inline float get_O_Speed_13() const { return ___O_Speed_13; }
	inline float* get_address_of_O_Speed_13() { return &___O_Speed_13; }
	inline void set_O_Speed_13(float value)
	{
		___O_Speed_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
