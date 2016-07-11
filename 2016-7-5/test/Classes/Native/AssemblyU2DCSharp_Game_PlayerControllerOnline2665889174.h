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
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
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

#include "AssemblyU2DCSharp_Game_CharactorOperationMaster3360730064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.PlayerControllerOnline
struct  PlayerControllerOnline_t2665889174  : public CharactorOperationMaster_t3360730064
{
public:
	// UnityEngine.Transform Game.PlayerControllerOnline::center
	Transform_t284553113 * ___center_5;
	// UnityEngine.GameObject Game.PlayerControllerOnline::cannon
	GameObject_t4012695102 * ___cannon_6;
	// UnityEngine.AudioSource Game.PlayerControllerOnline::cannonAudio
	AudioSource_t3628549054 * ___cannonAudio_7;
	// UnityEngine.BoxCollider Game.PlayerControllerOnline::col
	BoxCollider_t131631884 * ___col_8;
	// Game.GameStateOnline Game.PlayerControllerOnline::gameState
	GameStateOnline_t3171627576 * ___gameState_9;
	// PlayerStateManager Game.PlayerControllerOnline::state
	PlayerStateManager_t4277940093 * ___state_10;
	// PhotonView Game.PlayerControllerOnline::photonMethod
	PhotonView_t1498838369 * ___photonMethod_11;
	// UnityEngine.Rigidbody Game.PlayerControllerOnline::playerRb
	Rigidbody_t1972007546 * ___playerRb_12;
	// UnityEngine.GameObject Game.PlayerControllerOnline::cannonBall
	GameObject_t4012695102 * ___cannonBall_13;
	// System.String Game.PlayerControllerOnline::playerType
	String_t* ___playerType_14;
	// System.String Game.PlayerControllerOnline::shotPlayer
	String_t* ___shotPlayer_15;
	// System.Single Game.PlayerControllerOnline::O_Speed
	float ___O_Speed_16;

public:
	inline static int32_t get_offset_of_center_5() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___center_5)); }
	inline Transform_t284553113 * get_center_5() const { return ___center_5; }
	inline Transform_t284553113 ** get_address_of_center_5() { return &___center_5; }
	inline void set_center_5(Transform_t284553113 * value)
	{
		___center_5 = value;
		Il2CppCodeGenWriteBarrier(&___center_5, value);
	}

	inline static int32_t get_offset_of_cannon_6() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___cannon_6)); }
	inline GameObject_t4012695102 * get_cannon_6() const { return ___cannon_6; }
	inline GameObject_t4012695102 ** get_address_of_cannon_6() { return &___cannon_6; }
	inline void set_cannon_6(GameObject_t4012695102 * value)
	{
		___cannon_6 = value;
		Il2CppCodeGenWriteBarrier(&___cannon_6, value);
	}

	inline static int32_t get_offset_of_cannonAudio_7() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___cannonAudio_7)); }
	inline AudioSource_t3628549054 * get_cannonAudio_7() const { return ___cannonAudio_7; }
	inline AudioSource_t3628549054 ** get_address_of_cannonAudio_7() { return &___cannonAudio_7; }
	inline void set_cannonAudio_7(AudioSource_t3628549054 * value)
	{
		___cannonAudio_7 = value;
		Il2CppCodeGenWriteBarrier(&___cannonAudio_7, value);
	}

	inline static int32_t get_offset_of_col_8() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___col_8)); }
	inline BoxCollider_t131631884 * get_col_8() const { return ___col_8; }
	inline BoxCollider_t131631884 ** get_address_of_col_8() { return &___col_8; }
	inline void set_col_8(BoxCollider_t131631884 * value)
	{
		___col_8 = value;
		Il2CppCodeGenWriteBarrier(&___col_8, value);
	}

	inline static int32_t get_offset_of_gameState_9() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___gameState_9)); }
	inline GameStateOnline_t3171627576 * get_gameState_9() const { return ___gameState_9; }
	inline GameStateOnline_t3171627576 ** get_address_of_gameState_9() { return &___gameState_9; }
	inline void set_gameState_9(GameStateOnline_t3171627576 * value)
	{
		___gameState_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameState_9, value);
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___state_10)); }
	inline PlayerStateManager_t4277940093 * get_state_10() const { return ___state_10; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(PlayerStateManager_t4277940093 * value)
	{
		___state_10 = value;
		Il2CppCodeGenWriteBarrier(&___state_10, value);
	}

	inline static int32_t get_offset_of_photonMethod_11() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___photonMethod_11)); }
	inline PhotonView_t1498838369 * get_photonMethod_11() const { return ___photonMethod_11; }
	inline PhotonView_t1498838369 ** get_address_of_photonMethod_11() { return &___photonMethod_11; }
	inline void set_photonMethod_11(PhotonView_t1498838369 * value)
	{
		___photonMethod_11 = value;
		Il2CppCodeGenWriteBarrier(&___photonMethod_11, value);
	}

	inline static int32_t get_offset_of_playerRb_12() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___playerRb_12)); }
	inline Rigidbody_t1972007546 * get_playerRb_12() const { return ___playerRb_12; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_12() { return &___playerRb_12; }
	inline void set_playerRb_12(Rigidbody_t1972007546 * value)
	{
		___playerRb_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_12, value);
	}

	inline static int32_t get_offset_of_cannonBall_13() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___cannonBall_13)); }
	inline GameObject_t4012695102 * get_cannonBall_13() const { return ___cannonBall_13; }
	inline GameObject_t4012695102 ** get_address_of_cannonBall_13() { return &___cannonBall_13; }
	inline void set_cannonBall_13(GameObject_t4012695102 * value)
	{
		___cannonBall_13 = value;
		Il2CppCodeGenWriteBarrier(&___cannonBall_13, value);
	}

	inline static int32_t get_offset_of_playerType_14() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___playerType_14)); }
	inline String_t* get_playerType_14() const { return ___playerType_14; }
	inline String_t** get_address_of_playerType_14() { return &___playerType_14; }
	inline void set_playerType_14(String_t* value)
	{
		___playerType_14 = value;
		Il2CppCodeGenWriteBarrier(&___playerType_14, value);
	}

	inline static int32_t get_offset_of_shotPlayer_15() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___shotPlayer_15)); }
	inline String_t* get_shotPlayer_15() const { return ___shotPlayer_15; }
	inline String_t** get_address_of_shotPlayer_15() { return &___shotPlayer_15; }
	inline void set_shotPlayer_15(String_t* value)
	{
		___shotPlayer_15 = value;
		Il2CppCodeGenWriteBarrier(&___shotPlayer_15, value);
	}

	inline static int32_t get_offset_of_O_Speed_16() { return static_cast<int32_t>(offsetof(PlayerControllerOnline_t2665889174, ___O_Speed_16)); }
	inline float get_O_Speed_16() const { return ___O_Speed_16; }
	inline float* get_address_of_O_Speed_16() { return &___O_Speed_16; }
	inline void set_O_Speed_16(float value)
	{
		___O_Speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
