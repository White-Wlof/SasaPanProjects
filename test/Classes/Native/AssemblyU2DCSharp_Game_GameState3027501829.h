#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t224472971;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.GameState
struct  GameState_t3027501829  : public MonoBehaviour_t4025988718
{
public:
	// System.Boolean Game.GameState::GameStart
	bool ___GameStart_3;
	// System.Boolean Game.GameState::GameFinish
	bool ___GameFinish_4;
	// System.Int32 Game.GameState::textOrder
	int32_t ___textOrder_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Game.GameState::players
	List_1_t1081512082 * ___players_6;
	// UnityEngine.UI.Text Game.GameState::stateText
	Text_t3286458198 * ___stateText_7;
	// UnityEngine.Transform Game.GameState::goalLine
	Transform_t284553113 * ___goalLine_8;
	// UnityEngine.GameObject Game.GameState::awardPanel
	GameObject_t4012695102 * ___awardPanel_9;
	// UnityEngine.UI.Text Game.GameState::awardText
	Text_t3286458198 * ___awardText_10;
	// UnityEngine.UI.Text Game.GameState::playerName
	Text_t3286458198 * ___playerName_11;
	// UnityEngine.UI.Text Game.GameState::rivalName
	Text_t3286458198 * ___rivalName_12;
	// UnityEngine.UI.Text Game.GameState::getSasaNum
	Text_t3286458198 * ___getSasaNum_13;
	// UnityEngine.AudioSource[] Game.GameState::audioSource
	AudioSourceU5BU5D_t224472971* ___audioSource_14;

public:
	inline static int32_t get_offset_of_GameStart_3() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___GameStart_3)); }
	inline bool get_GameStart_3() const { return ___GameStart_3; }
	inline bool* get_address_of_GameStart_3() { return &___GameStart_3; }
	inline void set_GameStart_3(bool value)
	{
		___GameStart_3 = value;
	}

	inline static int32_t get_offset_of_GameFinish_4() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___GameFinish_4)); }
	inline bool get_GameFinish_4() const { return ___GameFinish_4; }
	inline bool* get_address_of_GameFinish_4() { return &___GameFinish_4; }
	inline void set_GameFinish_4(bool value)
	{
		___GameFinish_4 = value;
	}

	inline static int32_t get_offset_of_textOrder_5() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___textOrder_5)); }
	inline int32_t get_textOrder_5() const { return ___textOrder_5; }
	inline int32_t* get_address_of_textOrder_5() { return &___textOrder_5; }
	inline void set_textOrder_5(int32_t value)
	{
		___textOrder_5 = value;
	}

	inline static int32_t get_offset_of_players_6() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___players_6)); }
	inline List_1_t1081512082 * get_players_6() const { return ___players_6; }
	inline List_1_t1081512082 ** get_address_of_players_6() { return &___players_6; }
	inline void set_players_6(List_1_t1081512082 * value)
	{
		___players_6 = value;
		Il2CppCodeGenWriteBarrier(&___players_6, value);
	}

	inline static int32_t get_offset_of_stateText_7() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___stateText_7)); }
	inline Text_t3286458198 * get_stateText_7() const { return ___stateText_7; }
	inline Text_t3286458198 ** get_address_of_stateText_7() { return &___stateText_7; }
	inline void set_stateText_7(Text_t3286458198 * value)
	{
		___stateText_7 = value;
		Il2CppCodeGenWriteBarrier(&___stateText_7, value);
	}

	inline static int32_t get_offset_of_goalLine_8() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___goalLine_8)); }
	inline Transform_t284553113 * get_goalLine_8() const { return ___goalLine_8; }
	inline Transform_t284553113 ** get_address_of_goalLine_8() { return &___goalLine_8; }
	inline void set_goalLine_8(Transform_t284553113 * value)
	{
		___goalLine_8 = value;
		Il2CppCodeGenWriteBarrier(&___goalLine_8, value);
	}

	inline static int32_t get_offset_of_awardPanel_9() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___awardPanel_9)); }
	inline GameObject_t4012695102 * get_awardPanel_9() const { return ___awardPanel_9; }
	inline GameObject_t4012695102 ** get_address_of_awardPanel_9() { return &___awardPanel_9; }
	inline void set_awardPanel_9(GameObject_t4012695102 * value)
	{
		___awardPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___awardPanel_9, value);
	}

	inline static int32_t get_offset_of_awardText_10() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___awardText_10)); }
	inline Text_t3286458198 * get_awardText_10() const { return ___awardText_10; }
	inline Text_t3286458198 ** get_address_of_awardText_10() { return &___awardText_10; }
	inline void set_awardText_10(Text_t3286458198 * value)
	{
		___awardText_10 = value;
		Il2CppCodeGenWriteBarrier(&___awardText_10, value);
	}

	inline static int32_t get_offset_of_playerName_11() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___playerName_11)); }
	inline Text_t3286458198 * get_playerName_11() const { return ___playerName_11; }
	inline Text_t3286458198 ** get_address_of_playerName_11() { return &___playerName_11; }
	inline void set_playerName_11(Text_t3286458198 * value)
	{
		___playerName_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_11, value);
	}

	inline static int32_t get_offset_of_rivalName_12() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___rivalName_12)); }
	inline Text_t3286458198 * get_rivalName_12() const { return ___rivalName_12; }
	inline Text_t3286458198 ** get_address_of_rivalName_12() { return &___rivalName_12; }
	inline void set_rivalName_12(Text_t3286458198 * value)
	{
		___rivalName_12 = value;
		Il2CppCodeGenWriteBarrier(&___rivalName_12, value);
	}

	inline static int32_t get_offset_of_getSasaNum_13() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___getSasaNum_13)); }
	inline Text_t3286458198 * get_getSasaNum_13() const { return ___getSasaNum_13; }
	inline Text_t3286458198 ** get_address_of_getSasaNum_13() { return &___getSasaNum_13; }
	inline void set_getSasaNum_13(Text_t3286458198 * value)
	{
		___getSasaNum_13 = value;
		Il2CppCodeGenWriteBarrier(&___getSasaNum_13, value);
	}

	inline static int32_t get_offset_of_audioSource_14() { return static_cast<int32_t>(offsetof(GameState_t3027501829, ___audioSource_14)); }
	inline AudioSourceU5BU5D_t224472971* get_audioSource_14() const { return ___audioSource_14; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_audioSource_14() { return &___audioSource_14; }
	inline void set_audioSource_14(AudioSourceU5BU5D_t224472971* value)
	{
		___audioSource_14 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_14, value);
	}
};

struct GameState_t3027501829_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.GameState::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_15() { return static_cast<int32_t>(offsetof(GameState_t3027501829_StaticFields, ___U3CU3Ef__switchU24map0_15)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_15() const { return ___U3CU3Ef__switchU24map0_15; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_15() { return &___U3CU3Ef__switchU24map0_15; }
	inline void set_U3CU3Ef__switchU24map0_15(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
