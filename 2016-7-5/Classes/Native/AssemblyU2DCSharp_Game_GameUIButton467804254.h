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
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_Game_CharactorOperationMaster3360730064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.GameUIButton
struct  GameUIButton_t467804254  : public CharactorOperationMaster_t3360730064
{
public:
	// UnityEngine.Rigidbody Game.GameUIButton::playerRb
	Rigidbody_t1972007546 * ___playerRb_5;
	// UnityEngine.Transform Game.GameUIButton::playerCenter
	Transform_t284553113 * ___playerCenter_6;
	// UnityEngine.UI.Image Game.GameUIButton::lineEffect
	Image_t3354615620 * ___lineEffect_7;
	// UnityEngine.AudioSource Game.GameUIButton::boostAudio
	AudioSource_t3628549054 * ___boostAudio_8;
	// PlayerStateManager Game.GameUIButton::state
	PlayerStateManager_t4277940093 * ___state_9;

public:
	inline static int32_t get_offset_of_playerRb_5() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___playerRb_5)); }
	inline Rigidbody_t1972007546 * get_playerRb_5() const { return ___playerRb_5; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_5() { return &___playerRb_5; }
	inline void set_playerRb_5(Rigidbody_t1972007546 * value)
	{
		___playerRb_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_5, value);
	}

	inline static int32_t get_offset_of_playerCenter_6() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___playerCenter_6)); }
	inline Transform_t284553113 * get_playerCenter_6() const { return ___playerCenter_6; }
	inline Transform_t284553113 ** get_address_of_playerCenter_6() { return &___playerCenter_6; }
	inline void set_playerCenter_6(Transform_t284553113 * value)
	{
		___playerCenter_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerCenter_6, value);
	}

	inline static int32_t get_offset_of_lineEffect_7() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___lineEffect_7)); }
	inline Image_t3354615620 * get_lineEffect_7() const { return ___lineEffect_7; }
	inline Image_t3354615620 ** get_address_of_lineEffect_7() { return &___lineEffect_7; }
	inline void set_lineEffect_7(Image_t3354615620 * value)
	{
		___lineEffect_7 = value;
		Il2CppCodeGenWriteBarrier(&___lineEffect_7, value);
	}

	inline static int32_t get_offset_of_boostAudio_8() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___boostAudio_8)); }
	inline AudioSource_t3628549054 * get_boostAudio_8() const { return ___boostAudio_8; }
	inline AudioSource_t3628549054 ** get_address_of_boostAudio_8() { return &___boostAudio_8; }
	inline void set_boostAudio_8(AudioSource_t3628549054 * value)
	{
		___boostAudio_8 = value;
		Il2CppCodeGenWriteBarrier(&___boostAudio_8, value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254, ___state_9)); }
	inline PlayerStateManager_t4277940093 * get_state_9() const { return ___state_9; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(PlayerStateManager_t4277940093 * value)
	{
		___state_9 = value;
		Il2CppCodeGenWriteBarrier(&___state_9, value);
	}
};

struct GameUIButton_t467804254_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.GameUIButton::<>f__switch$map2
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map2_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_10() { return static_cast<int32_t>(offsetof(GameUIButton_t467804254_StaticFields, ___U3CU3Ef__switchU24map2_10)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map2_10() const { return ___U3CU3Ef__switchU24map2_10; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map2_10() { return &___U3CU3Ef__switchU24map2_10; }
	inline void set_U3CU3Ef__switchU24map2_10(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
