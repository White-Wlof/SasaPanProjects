#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_Game_CharacterOperationMaster2712534982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.GameUIButton
struct  GameUIButton_t467804254  : public CharacterOperationMaster_t2712534982
{
public:
	// UnityEngine.Rigidbody Game.GameUIButton::playerRb
	Rigidbody_t1972007546 * ___playerRb_4;
	// UnityEngine.Transform Game.GameUIButton::playerCenter
	Transform_t284553113 * ___playerCenter_5;
	// PlayerStateManager Game.GameUIButton::state
	PlayerStateManager_t4277940093 * ___state_6;

public:
	inline static int32_t get_offset_of_playerRb_4() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___playerRb_4)); }
	inline Rigidbody_t1972007546 * get_playerRb_4() const { return ___playerRb_4; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_4() { return &___playerRb_4; }
	inline void set_playerRb_4(Rigidbody_t1972007546 * value)
	{
		___playerRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_4, value);
	}

	inline static int32_t get_offset_of_playerCenter_5() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___playerCenter_5)); }
	inline Transform_t284553113 * get_playerCenter_5() const { return ___playerCenter_5; }
	inline Transform_t284553113 ** get_address_of_playerCenter_5() { return &___playerCenter_5; }
	inline void set_playerCenter_5(Transform_t284553113 * value)
	{
		___playerCenter_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerCenter_5, value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___state_6)); }
	inline PlayerStateManager_t4277940093 * get_state_6() const { return ___state_6; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(PlayerStateManager_t4277940093 * value)
	{
		___state_6 = value;
		Il2CppCodeGenWriteBarrier(&___state_6, value);
	}
};

struct GameUIButton_t467804254_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.GameUIButton::<>f__switch$map3
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map3_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_7() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254_StaticFields, ___U3CU3Ef__switchU24map3_7)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map3_7() const { return ___U3CU3Ef__switchU24map3_7; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map3_7() { return &___U3CU3Ef__switchU24map3_7; }
	inline void set_U3CU3Ef__switchU24map3_7(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map3_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
