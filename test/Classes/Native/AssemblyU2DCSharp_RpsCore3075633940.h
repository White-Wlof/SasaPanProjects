#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// PunTurnManager
struct PunTurnManager_t2757607879;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"
#include "AssemblyU2DCSharp_RpsCore_Hand2241679.h"
#include "AssemblyU2DCSharp_RpsCore_ResultType1421627671.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsCore
struct  RpsCore_t3075633940  : public PunBehaviour_t1644375368
{
public:
	// UnityEngine.UI.Text RpsCore::TurnText
	Text_t3286458198 * ___TurnText_3;
	// UnityEngine.UI.Text RpsCore::TimeText
	Text_t3286458198 * ___TimeText_4;
	// UnityEngine.UI.Text RpsCore::RemotePlayerText
	Text_t3286458198 * ___RemotePlayerText_5;
	// UnityEngine.UI.Text RpsCore::LocalPlayerText
	Text_t3286458198 * ___LocalPlayerText_6;
	// UnityEngine.UI.Image RpsCore::WinOrLossImage
	Image_t3354615620 * ___WinOrLossImage_7;
	// UnityEngine.UI.Image RpsCore::localSelectionImage
	Image_t3354615620 * ___localSelectionImage_8;
	// RpsCore/Hand RpsCore::localSelection
	int32_t ___localSelection_9;
	// UnityEngine.UI.Image RpsCore::remoteSelectionImage
	Image_t3354615620 * ___remoteSelectionImage_10;
	// RpsCore/Hand RpsCore::remoteSelection
	int32_t ___remoteSelection_11;
	// UnityEngine.Sprite RpsCore::SelectedRock
	Sprite_t4006040370 * ___SelectedRock_12;
	// UnityEngine.Sprite RpsCore::SelectedPaper
	Sprite_t4006040370 * ___SelectedPaper_13;
	// UnityEngine.Sprite RpsCore::SelectedScissors
	Sprite_t4006040370 * ___SelectedScissors_14;
	// UnityEngine.Sprite RpsCore::SpriteWin
	Sprite_t4006040370 * ___SpriteWin_15;
	// UnityEngine.Sprite RpsCore::SpriteLose
	Sprite_t4006040370 * ___SpriteLose_16;
	// UnityEngine.Sprite RpsCore::SpriteDraw
	Sprite_t4006040370 * ___SpriteDraw_17;
	// UnityEngine.RectTransform RpsCore::DisconnectedPanel
	RectTransform_t3317474837 * ___DisconnectedPanel_18;
	// RpsCore/ResultType RpsCore::result
	int32_t ___result_19;
	// PunTurnManager RpsCore::turnManager
	PunTurnManager_t2757607879 * ___turnManager_20;
	// RpsCore/Hand RpsCore::randomHand
	int32_t ___randomHand_21;

public:
	inline static int32_t get_offset_of_TurnText_3() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___TurnText_3)); }
	inline Text_t3286458198 * get_TurnText_3() const { return ___TurnText_3; }
	inline Text_t3286458198 ** get_address_of_TurnText_3() { return &___TurnText_3; }
	inline void set_TurnText_3(Text_t3286458198 * value)
	{
		___TurnText_3 = value;
		Il2CppCodeGenWriteBarrier(&___TurnText_3, value);
	}

	inline static int32_t get_offset_of_TimeText_4() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___TimeText_4)); }
	inline Text_t3286458198 * get_TimeText_4() const { return ___TimeText_4; }
	inline Text_t3286458198 ** get_address_of_TimeText_4() { return &___TimeText_4; }
	inline void set_TimeText_4(Text_t3286458198 * value)
	{
		___TimeText_4 = value;
		Il2CppCodeGenWriteBarrier(&___TimeText_4, value);
	}

	inline static int32_t get_offset_of_RemotePlayerText_5() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___RemotePlayerText_5)); }
	inline Text_t3286458198 * get_RemotePlayerText_5() const { return ___RemotePlayerText_5; }
	inline Text_t3286458198 ** get_address_of_RemotePlayerText_5() { return &___RemotePlayerText_5; }
	inline void set_RemotePlayerText_5(Text_t3286458198 * value)
	{
		___RemotePlayerText_5 = value;
		Il2CppCodeGenWriteBarrier(&___RemotePlayerText_5, value);
	}

	inline static int32_t get_offset_of_LocalPlayerText_6() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___LocalPlayerText_6)); }
	inline Text_t3286458198 * get_LocalPlayerText_6() const { return ___LocalPlayerText_6; }
	inline Text_t3286458198 ** get_address_of_LocalPlayerText_6() { return &___LocalPlayerText_6; }
	inline void set_LocalPlayerText_6(Text_t3286458198 * value)
	{
		___LocalPlayerText_6 = value;
		Il2CppCodeGenWriteBarrier(&___LocalPlayerText_6, value);
	}

	inline static int32_t get_offset_of_WinOrLossImage_7() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___WinOrLossImage_7)); }
	inline Image_t3354615620 * get_WinOrLossImage_7() const { return ___WinOrLossImage_7; }
	inline Image_t3354615620 ** get_address_of_WinOrLossImage_7() { return &___WinOrLossImage_7; }
	inline void set_WinOrLossImage_7(Image_t3354615620 * value)
	{
		___WinOrLossImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___WinOrLossImage_7, value);
	}

	inline static int32_t get_offset_of_localSelectionImage_8() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___localSelectionImage_8)); }
	inline Image_t3354615620 * get_localSelectionImage_8() const { return ___localSelectionImage_8; }
	inline Image_t3354615620 ** get_address_of_localSelectionImage_8() { return &___localSelectionImage_8; }
	inline void set_localSelectionImage_8(Image_t3354615620 * value)
	{
		___localSelectionImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___localSelectionImage_8, value);
	}

	inline static int32_t get_offset_of_localSelection_9() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___localSelection_9)); }
	inline int32_t get_localSelection_9() const { return ___localSelection_9; }
	inline int32_t* get_address_of_localSelection_9() { return &___localSelection_9; }
	inline void set_localSelection_9(int32_t value)
	{
		___localSelection_9 = value;
	}

	inline static int32_t get_offset_of_remoteSelectionImage_10() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___remoteSelectionImage_10)); }
	inline Image_t3354615620 * get_remoteSelectionImage_10() const { return ___remoteSelectionImage_10; }
	inline Image_t3354615620 ** get_address_of_remoteSelectionImage_10() { return &___remoteSelectionImage_10; }
	inline void set_remoteSelectionImage_10(Image_t3354615620 * value)
	{
		___remoteSelectionImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___remoteSelectionImage_10, value);
	}

	inline static int32_t get_offset_of_remoteSelection_11() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___remoteSelection_11)); }
	inline int32_t get_remoteSelection_11() const { return ___remoteSelection_11; }
	inline int32_t* get_address_of_remoteSelection_11() { return &___remoteSelection_11; }
	inline void set_remoteSelection_11(int32_t value)
	{
		___remoteSelection_11 = value;
	}

	inline static int32_t get_offset_of_SelectedRock_12() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedRock_12)); }
	inline Sprite_t4006040370 * get_SelectedRock_12() const { return ___SelectedRock_12; }
	inline Sprite_t4006040370 ** get_address_of_SelectedRock_12() { return &___SelectedRock_12; }
	inline void set_SelectedRock_12(Sprite_t4006040370 * value)
	{
		___SelectedRock_12 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedRock_12, value);
	}

	inline static int32_t get_offset_of_SelectedPaper_13() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedPaper_13)); }
	inline Sprite_t4006040370 * get_SelectedPaper_13() const { return ___SelectedPaper_13; }
	inline Sprite_t4006040370 ** get_address_of_SelectedPaper_13() { return &___SelectedPaper_13; }
	inline void set_SelectedPaper_13(Sprite_t4006040370 * value)
	{
		___SelectedPaper_13 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedPaper_13, value);
	}

	inline static int32_t get_offset_of_SelectedScissors_14() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SelectedScissors_14)); }
	inline Sprite_t4006040370 * get_SelectedScissors_14() const { return ___SelectedScissors_14; }
	inline Sprite_t4006040370 ** get_address_of_SelectedScissors_14() { return &___SelectedScissors_14; }
	inline void set_SelectedScissors_14(Sprite_t4006040370 * value)
	{
		___SelectedScissors_14 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedScissors_14, value);
	}

	inline static int32_t get_offset_of_SpriteWin_15() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteWin_15)); }
	inline Sprite_t4006040370 * get_SpriteWin_15() const { return ___SpriteWin_15; }
	inline Sprite_t4006040370 ** get_address_of_SpriteWin_15() { return &___SpriteWin_15; }
	inline void set_SpriteWin_15(Sprite_t4006040370 * value)
	{
		___SpriteWin_15 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteWin_15, value);
	}

	inline static int32_t get_offset_of_SpriteLose_16() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteLose_16)); }
	inline Sprite_t4006040370 * get_SpriteLose_16() const { return ___SpriteLose_16; }
	inline Sprite_t4006040370 ** get_address_of_SpriteLose_16() { return &___SpriteLose_16; }
	inline void set_SpriteLose_16(Sprite_t4006040370 * value)
	{
		___SpriteLose_16 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteLose_16, value);
	}

	inline static int32_t get_offset_of_SpriteDraw_17() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___SpriteDraw_17)); }
	inline Sprite_t4006040370 * get_SpriteDraw_17() const { return ___SpriteDraw_17; }
	inline Sprite_t4006040370 ** get_address_of_SpriteDraw_17() { return &___SpriteDraw_17; }
	inline void set_SpriteDraw_17(Sprite_t4006040370 * value)
	{
		___SpriteDraw_17 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteDraw_17, value);
	}

	inline static int32_t get_offset_of_DisconnectedPanel_18() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___DisconnectedPanel_18)); }
	inline RectTransform_t3317474837 * get_DisconnectedPanel_18() const { return ___DisconnectedPanel_18; }
	inline RectTransform_t3317474837 ** get_address_of_DisconnectedPanel_18() { return &___DisconnectedPanel_18; }
	inline void set_DisconnectedPanel_18(RectTransform_t3317474837 * value)
	{
		___DisconnectedPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&___DisconnectedPanel_18, value);
	}

	inline static int32_t get_offset_of_result_19() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___result_19)); }
	inline int32_t get_result_19() const { return ___result_19; }
	inline int32_t* get_address_of_result_19() { return &___result_19; }
	inline void set_result_19(int32_t value)
	{
		___result_19 = value;
	}

	inline static int32_t get_offset_of_turnManager_20() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___turnManager_20)); }
	inline PunTurnManager_t2757607879 * get_turnManager_20() const { return ___turnManager_20; }
	inline PunTurnManager_t2757607879 ** get_address_of_turnManager_20() { return &___turnManager_20; }
	inline void set_turnManager_20(PunTurnManager_t2757607879 * value)
	{
		___turnManager_20 = value;
		Il2CppCodeGenWriteBarrier(&___turnManager_20, value);
	}

	inline static int32_t get_offset_of_randomHand_21() { return static_cast<int32_t>(offsetof(RpsCore_t3075633940, ___randomHand_21)); }
	inline int32_t get_randomHand_21() const { return ___randomHand_21; }
	inline int32_t* get_address_of_randomHand_21() { return &___randomHand_21; }
	inline void set_randomHand_21(int32_t value)
	{
		___randomHand_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
