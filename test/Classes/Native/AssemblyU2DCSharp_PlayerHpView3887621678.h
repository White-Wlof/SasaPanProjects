#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t1468074762;
// PlayerStateManager
struct PlayerStateManager_t4277940093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHpView
struct  PlayerHpView_t3887621678  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Slider PlayerHpView::ownHpSlider
	Slider_t1468074762 * ___ownHpSlider_2;
	// UnityEngine.UI.Slider PlayerHpView::rivalHpSlider
	Slider_t1468074762 * ___rivalHpSlider_3;
	// PlayerStateManager PlayerHpView::state
	PlayerStateManager_t4277940093 * ___state_4;

public:
	inline static int32_t get_offset_of_ownHpSlider_2() { return static_cast<int32_t>(offsetof(PlayerHpView_t3887621678, ___ownHpSlider_2)); }
	inline Slider_t1468074762 * get_ownHpSlider_2() const { return ___ownHpSlider_2; }
	inline Slider_t1468074762 ** get_address_of_ownHpSlider_2() { return &___ownHpSlider_2; }
	inline void set_ownHpSlider_2(Slider_t1468074762 * value)
	{
		___ownHpSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___ownHpSlider_2, value);
	}

	inline static int32_t get_offset_of_rivalHpSlider_3() { return static_cast<int32_t>(offsetof(PlayerHpView_t3887621678, ___rivalHpSlider_3)); }
	inline Slider_t1468074762 * get_rivalHpSlider_3() const { return ___rivalHpSlider_3; }
	inline Slider_t1468074762 ** get_address_of_rivalHpSlider_3() { return &___rivalHpSlider_3; }
	inline void set_rivalHpSlider_3(Slider_t1468074762 * value)
	{
		___rivalHpSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&___rivalHpSlider_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PlayerHpView_t3887621678, ___state_4)); }
	inline PlayerStateManager_t4277940093 * get_state_4() const { return ___state_4; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(PlayerStateManager_t4277940093 * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
