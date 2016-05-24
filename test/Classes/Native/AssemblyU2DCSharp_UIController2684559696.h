#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// PlayerStateManager
struct PlayerStateManager_t4277940093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2684559696  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image UIController::boostGage
	Image_t3354615620 * ___boostGage_2;
	// PlayerStateManager UIController::state
	PlayerStateManager_t4277940093 * ___state_3;
	// System.Single UIController::boostTimer
	float ___boostTimer_4;
	// System.Int32 UIController::meterCount
	int32_t ___meterCount_5;

public:
	inline static int32_t get_offset_of_boostGage_2() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___boostGage_2)); }
	inline Image_t3354615620 * get_boostGage_2() const { return ___boostGage_2; }
	inline Image_t3354615620 ** get_address_of_boostGage_2() { return &___boostGage_2; }
	inline void set_boostGage_2(Image_t3354615620 * value)
	{
		___boostGage_2 = value;
		Il2CppCodeGenWriteBarrier(&___boostGage_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___state_3)); }
	inline PlayerStateManager_t4277940093 * get_state_3() const { return ___state_3; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(PlayerStateManager_t4277940093 * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier(&___state_3, value);
	}

	inline static int32_t get_offset_of_boostTimer_4() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___boostTimer_4)); }
	inline float get_boostTimer_4() const { return ___boostTimer_4; }
	inline float* get_address_of_boostTimer_4() { return &___boostTimer_4; }
	inline void set_boostTimer_4(float value)
	{
		___boostTimer_4 = value;
	}

	inline static int32_t get_offset_of_meterCount_5() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___meterCount_5)); }
	inline int32_t get_meterCount_5() const { return ___meterCount_5; }
	inline int32_t* get_address_of_meterCount_5() { return &___meterCount_5; }
	inline void set_meterCount_5(int32_t value)
	{
		___meterCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
