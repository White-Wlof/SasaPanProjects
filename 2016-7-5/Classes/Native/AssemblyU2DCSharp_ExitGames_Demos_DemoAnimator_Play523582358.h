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
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// ExitGames.Demos.DemoAnimator.PlayerManager
struct PlayerManager_t2866860973;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.PlayerUI
struct  PlayerUI_t523582358  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.PlayerUI::ScreenOffset
	Vector3_t3525329789  ___ScreenOffset_3;
	// UnityEngine.UI.Text ExitGames.Demos.DemoAnimator.PlayerUI::PlayerNameText
	Text_t3286458198 * ___PlayerNameText_4;
	// UnityEngine.UI.Slider ExitGames.Demos.DemoAnimator.PlayerUI::PlayerHealthSlider
	Slider_t1468074762 * ___PlayerHealthSlider_5;
	// ExitGames.Demos.DemoAnimator.PlayerManager ExitGames.Demos.DemoAnimator.PlayerUI::_target
	PlayerManager_t2866860973 * ____target_6;
	// System.Single ExitGames.Demos.DemoAnimator.PlayerUI::_characterControllerHeight
	float ____characterControllerHeight_7;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.PlayerUI::_targetTransform
	Transform_t284553113 * ____targetTransform_8;
	// UnityEngine.Renderer ExitGames.Demos.DemoAnimator.PlayerUI::_targetRenderer
	Renderer_t1092684080 * ____targetRenderer_9;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.PlayerUI::_targetPosition
	Vector3_t3525329789  ____targetPosition_10;

public:
	inline static int32_t get_offset_of_ScreenOffset_3() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ___ScreenOffset_3)); }
	inline Vector3_t3525329789  get_ScreenOffset_3() const { return ___ScreenOffset_3; }
	inline Vector3_t3525329789 * get_address_of_ScreenOffset_3() { return &___ScreenOffset_3; }
	inline void set_ScreenOffset_3(Vector3_t3525329789  value)
	{
		___ScreenOffset_3 = value;
	}

	inline static int32_t get_offset_of_PlayerNameText_4() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ___PlayerNameText_4)); }
	inline Text_t3286458198 * get_PlayerNameText_4() const { return ___PlayerNameText_4; }
	inline Text_t3286458198 ** get_address_of_PlayerNameText_4() { return &___PlayerNameText_4; }
	inline void set_PlayerNameText_4(Text_t3286458198 * value)
	{
		___PlayerNameText_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerNameText_4, value);
	}

	inline static int32_t get_offset_of_PlayerHealthSlider_5() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ___PlayerHealthSlider_5)); }
	inline Slider_t1468074762 * get_PlayerHealthSlider_5() const { return ___PlayerHealthSlider_5; }
	inline Slider_t1468074762 ** get_address_of_PlayerHealthSlider_5() { return &___PlayerHealthSlider_5; }
	inline void set_PlayerHealthSlider_5(Slider_t1468074762 * value)
	{
		___PlayerHealthSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerHealthSlider_5, value);
	}

	inline static int32_t get_offset_of__target_6() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ____target_6)); }
	inline PlayerManager_t2866860973 * get__target_6() const { return ____target_6; }
	inline PlayerManager_t2866860973 ** get_address_of__target_6() { return &____target_6; }
	inline void set__target_6(PlayerManager_t2866860973 * value)
	{
		____target_6 = value;
		Il2CppCodeGenWriteBarrier(&____target_6, value);
	}

	inline static int32_t get_offset_of__characterControllerHeight_7() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ____characterControllerHeight_7)); }
	inline float get__characterControllerHeight_7() const { return ____characterControllerHeight_7; }
	inline float* get_address_of__characterControllerHeight_7() { return &____characterControllerHeight_7; }
	inline void set__characterControllerHeight_7(float value)
	{
		____characterControllerHeight_7 = value;
	}

	inline static int32_t get_offset_of__targetTransform_8() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ____targetTransform_8)); }
	inline Transform_t284553113 * get__targetTransform_8() const { return ____targetTransform_8; }
	inline Transform_t284553113 ** get_address_of__targetTransform_8() { return &____targetTransform_8; }
	inline void set__targetTransform_8(Transform_t284553113 * value)
	{
		____targetTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&____targetTransform_8, value);
	}

	inline static int32_t get_offset_of__targetRenderer_9() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ____targetRenderer_9)); }
	inline Renderer_t1092684080 * get__targetRenderer_9() const { return ____targetRenderer_9; }
	inline Renderer_t1092684080 ** get_address_of__targetRenderer_9() { return &____targetRenderer_9; }
	inline void set__targetRenderer_9(Renderer_t1092684080 * value)
	{
		____targetRenderer_9 = value;
		Il2CppCodeGenWriteBarrier(&____targetRenderer_9, value);
	}

	inline static int32_t get_offset_of__targetPosition_10() { return static_cast<int32_t>(offsetof(PlayerUI_t523582358, ____targetPosition_10)); }
	inline Vector3_t3525329789  get__targetPosition_10() const { return ____targetPosition_10; }
	inline Vector3_t3525329789 * get_address_of__targetPosition_10() { return &____targetPosition_10; }
	inline void set__targetPosition_10(Vector3_t3525329789  value)
	{
		____targetPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
