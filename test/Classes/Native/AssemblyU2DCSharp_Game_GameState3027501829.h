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
};

struct GameState_t3027501829_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.GameState::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_9() { return static_cast<int32_t>(offsetof(GameState_t3027501829_StaticFields, ___U3CU3Ef__switchU24map1_9)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_9() const { return ___U3CU3Ef__switchU24map1_9; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_9() { return &___U3CU3Ef__switchU24map1_9; }
	inline void set_U3CU3Ef__switchU24map1_9(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
