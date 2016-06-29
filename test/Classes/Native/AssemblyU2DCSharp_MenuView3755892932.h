#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuView
struct  MenuView_t3755892932  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MenuView::selectPanel
	GameObject_t4012695102 * ___selectPanel_5;
	// UnityEngine.GameObject[] MenuView::childPanel
	GameObjectU5BU5D_t3499186955* ___childPanel_6;
	// UnityEngine.UI.Image MenuView::comment
	Image_t3354615620 * ___comment_7;
	// UnityEngine.UI.Button MenuView::grow
	Button_t990034267 * ___grow_8;
	// UnityEngine.UI.Button MenuView::play
	Button_t990034267 * ___play_9;
	// UnityEngine.UI.Button MenuView::create
	Button_t990034267 * ___create_10;
	// UnityEngine.UI.Button MenuView::back
	Button_t990034267 * ___back_11;

public:
	inline static int32_t get_offset_of_selectPanel_5() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___selectPanel_5)); }
	inline GameObject_t4012695102 * get_selectPanel_5() const { return ___selectPanel_5; }
	inline GameObject_t4012695102 ** get_address_of_selectPanel_5() { return &___selectPanel_5; }
	inline void set_selectPanel_5(GameObject_t4012695102 * value)
	{
		___selectPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectPanel_5, value);
	}

	inline static int32_t get_offset_of_childPanel_6() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___childPanel_6)); }
	inline GameObjectU5BU5D_t3499186955* get_childPanel_6() const { return ___childPanel_6; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_childPanel_6() { return &___childPanel_6; }
	inline void set_childPanel_6(GameObjectU5BU5D_t3499186955* value)
	{
		___childPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___childPanel_6, value);
	}

	inline static int32_t get_offset_of_comment_7() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___comment_7)); }
	inline Image_t3354615620 * get_comment_7() const { return ___comment_7; }
	inline Image_t3354615620 ** get_address_of_comment_7() { return &___comment_7; }
	inline void set_comment_7(Image_t3354615620 * value)
	{
		___comment_7 = value;
		Il2CppCodeGenWriteBarrier(&___comment_7, value);
	}

	inline static int32_t get_offset_of_grow_8() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___grow_8)); }
	inline Button_t990034267 * get_grow_8() const { return ___grow_8; }
	inline Button_t990034267 ** get_address_of_grow_8() { return &___grow_8; }
	inline void set_grow_8(Button_t990034267 * value)
	{
		___grow_8 = value;
		Il2CppCodeGenWriteBarrier(&___grow_8, value);
	}

	inline static int32_t get_offset_of_play_9() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___play_9)); }
	inline Button_t990034267 * get_play_9() const { return ___play_9; }
	inline Button_t990034267 ** get_address_of_play_9() { return &___play_9; }
	inline void set_play_9(Button_t990034267 * value)
	{
		___play_9 = value;
		Il2CppCodeGenWriteBarrier(&___play_9, value);
	}

	inline static int32_t get_offset_of_create_10() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___create_10)); }
	inline Button_t990034267 * get_create_10() const { return ___create_10; }
	inline Button_t990034267 ** get_address_of_create_10() { return &___create_10; }
	inline void set_create_10(Button_t990034267 * value)
	{
		___create_10 = value;
		Il2CppCodeGenWriteBarrier(&___create_10, value);
	}

	inline static int32_t get_offset_of_back_11() { return static_cast<int32_t>(offsetof(MenuView_t3755892932, ___back_11)); }
	inline Button_t990034267 * get_back_11() const { return ___back_11; }
	inline Button_t990034267 ** get_address_of_back_11() { return &___back_11; }
	inline void set_back_11(Button_t990034267 * value)
	{
		___back_11 = value;
		Il2CppCodeGenWriteBarrier(&___back_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
