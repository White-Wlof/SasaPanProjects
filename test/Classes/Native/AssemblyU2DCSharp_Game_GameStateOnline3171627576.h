#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
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

// Game.GameStateOnline
struct  GameStateOnline_t3171627576  : public MonoBehaviour_t4025988718
{
public:
	// System.Boolean Game.GameStateOnline::GameStart
	bool ___GameStart_3;
	// System.Boolean Game.GameStateOnline::GameFinish
	bool ___GameFinish_4;
	// System.Boolean Game.GameStateOnline::OnStarting
	bool ___OnStarting_5;
	// System.Int32 Game.GameStateOnline::textOrder
	int32_t ___textOrder_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Game.GameStateOnline::players
	List_1_t514686775 * ___players_7;
	// UnityEngine.UI.Text Game.GameStateOnline::stateText
	Text_t3286458198 * ___stateText_8;
	// UnityEngine.Transform Game.GameStateOnline::goalLine
	Transform_t284553113 * ___goalLine_9;
	// UnityEngine.GameObject Game.GameStateOnline::awardPanel
	GameObject_t4012695102 * ___awardPanel_10;
	// UnityEngine.UI.Text Game.GameStateOnline::awardText
	Text_t3286458198 * ___awardText_11;
	// UnityEngine.UI.Text Game.GameStateOnline::playerName
	Text_t3286458198 * ___playerName_12;
	// UnityEngine.UI.Text Game.GameStateOnline::rivalName
	Text_t3286458198 * ___rivalName_13;
	// UnityEngine.UI.Text Game.GameStateOnline::getSasaNum
	Text_t3286458198 * ___getSasaNum_14;
	// UnityEngine.AudioSource[] Game.GameStateOnline::audioSource
	AudioSourceU5BU5D_t224472971* ___audioSource_15;

public:
	inline static int32_t get_offset_of_GameStart_3() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___GameStart_3)); }
	inline bool get_GameStart_3() const { return ___GameStart_3; }
	inline bool* get_address_of_GameStart_3() { return &___GameStart_3; }
	inline void set_GameStart_3(bool value)
	{
		___GameStart_3 = value;
	}

	inline static int32_t get_offset_of_GameFinish_4() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___GameFinish_4)); }
	inline bool get_GameFinish_4() const { return ___GameFinish_4; }
	inline bool* get_address_of_GameFinish_4() { return &___GameFinish_4; }
	inline void set_GameFinish_4(bool value)
	{
		___GameFinish_4 = value;
	}

	inline static int32_t get_offset_of_OnStarting_5() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___OnStarting_5)); }
	inline bool get_OnStarting_5() const { return ___OnStarting_5; }
	inline bool* get_address_of_OnStarting_5() { return &___OnStarting_5; }
	inline void set_OnStarting_5(bool value)
	{
		___OnStarting_5 = value;
	}

	inline static int32_t get_offset_of_textOrder_6() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___textOrder_6)); }
	inline int32_t get_textOrder_6() const { return ___textOrder_6; }
	inline int32_t* get_address_of_textOrder_6() { return &___textOrder_6; }
	inline void set_textOrder_6(int32_t value)
	{
		___textOrder_6 = value;
	}

	inline static int32_t get_offset_of_players_7() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___players_7)); }
	inline List_1_t514686775 * get_players_7() const { return ___players_7; }
	inline List_1_t514686775 ** get_address_of_players_7() { return &___players_7; }
	inline void set_players_7(List_1_t514686775 * value)
	{
		___players_7 = value;
		Il2CppCodeGenWriteBarrier(&___players_7, value);
	}

	inline static int32_t get_offset_of_stateText_8() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___stateText_8)); }
	inline Text_t3286458198 * get_stateText_8() const { return ___stateText_8; }
	inline Text_t3286458198 ** get_address_of_stateText_8() { return &___stateText_8; }
	inline void set_stateText_8(Text_t3286458198 * value)
	{
		___stateText_8 = value;
		Il2CppCodeGenWriteBarrier(&___stateText_8, value);
	}

	inline static int32_t get_offset_of_goalLine_9() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___goalLine_9)); }
	inline Transform_t284553113 * get_goalLine_9() const { return ___goalLine_9; }
	inline Transform_t284553113 ** get_address_of_goalLine_9() { return &___goalLine_9; }
	inline void set_goalLine_9(Transform_t284553113 * value)
	{
		___goalLine_9 = value;
		Il2CppCodeGenWriteBarrier(&___goalLine_9, value);
	}

	inline static int32_t get_offset_of_awardPanel_10() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___awardPanel_10)); }
	inline GameObject_t4012695102 * get_awardPanel_10() const { return ___awardPanel_10; }
	inline GameObject_t4012695102 ** get_address_of_awardPanel_10() { return &___awardPanel_10; }
	inline void set_awardPanel_10(GameObject_t4012695102 * value)
	{
		___awardPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___awardPanel_10, value);
	}

	inline static int32_t get_offset_of_awardText_11() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___awardText_11)); }
	inline Text_t3286458198 * get_awardText_11() const { return ___awardText_11; }
	inline Text_t3286458198 ** get_address_of_awardText_11() { return &___awardText_11; }
	inline void set_awardText_11(Text_t3286458198 * value)
	{
		___awardText_11 = value;
		Il2CppCodeGenWriteBarrier(&___awardText_11, value);
	}

	inline static int32_t get_offset_of_playerName_12() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___playerName_12)); }
	inline Text_t3286458198 * get_playerName_12() const { return ___playerName_12; }
	inline Text_t3286458198 ** get_address_of_playerName_12() { return &___playerName_12; }
	inline void set_playerName_12(Text_t3286458198 * value)
	{
		___playerName_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_12, value);
	}

	inline static int32_t get_offset_of_rivalName_13() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___rivalName_13)); }
	inline Text_t3286458198 * get_rivalName_13() const { return ___rivalName_13; }
	inline Text_t3286458198 ** get_address_of_rivalName_13() { return &___rivalName_13; }
	inline void set_rivalName_13(Text_t3286458198 * value)
	{
		___rivalName_13 = value;
		Il2CppCodeGenWriteBarrier(&___rivalName_13, value);
	}

	inline static int32_t get_offset_of_getSasaNum_14() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___getSasaNum_14)); }
	inline Text_t3286458198 * get_getSasaNum_14() const { return ___getSasaNum_14; }
	inline Text_t3286458198 ** get_address_of_getSasaNum_14() { return &___getSasaNum_14; }
	inline void set_getSasaNum_14(Text_t3286458198 * value)
	{
		___getSasaNum_14 = value;
		Il2CppCodeGenWriteBarrier(&___getSasaNum_14, value);
	}

	inline static int32_t get_offset_of_audioSource_15() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576, ___audioSource_15)); }
	inline AudioSourceU5BU5D_t224472971* get_audioSource_15() const { return ___audioSource_15; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_audioSource_15() { return &___audioSource_15; }
	inline void set_audioSource_15(AudioSourceU5BU5D_t224472971* value)
	{
		___audioSource_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_15, value);
	}
};

struct GameStateOnline_t3171627576_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.GameStateOnline::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_16() { return static_cast<int32_t>(offsetof(GameStateOnline_t3171627576_StaticFields, ___U3CU3Ef__switchU24map1_16)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_16() const { return ___U3CU3Ef__switchU24map1_16; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_16() { return &___U3CU3Ef__switchU24map1_16; }
	inline void set_U3CU3Ef__switchU24map1_16(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
