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
// UnityEngine.UI.Button
struct Button_t990034267;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineModeSelect
struct  OnlineModeSelect_t740007762  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject OnlineModeSelect::Panel_0
	GameObject_t4012695102 * ___Panel_0_3;
	// UnityEngine.GameObject OnlineModeSelect::Panel_1
	GameObject_t4012695102 * ___Panel_1_4;
	// UnityEngine.UI.Button OnlineModeSelect::withFriend
	Button_t990034267 * ___withFriend_5;
	// UnityEngine.UI.Button OnlineModeSelect::back
	Button_t990034267 * ___back_6;

public:
	inline static int32_t get_offset_of_Panel_0_3() { return static_cast<int32_t>(offsetof(OnlineModeSelect_t740007762, ___Panel_0_3)); }
	inline GameObject_t4012695102 * get_Panel_0_3() const { return ___Panel_0_3; }
	inline GameObject_t4012695102 ** get_address_of_Panel_0_3() { return &___Panel_0_3; }
	inline void set_Panel_0_3(GameObject_t4012695102 * value)
	{
		___Panel_0_3 = value;
		Il2CppCodeGenWriteBarrier(&___Panel_0_3, value);
	}

	inline static int32_t get_offset_of_Panel_1_4() { return static_cast<int32_t>(offsetof(OnlineModeSelect_t740007762, ___Panel_1_4)); }
	inline GameObject_t4012695102 * get_Panel_1_4() const { return ___Panel_1_4; }
	inline GameObject_t4012695102 ** get_address_of_Panel_1_4() { return &___Panel_1_4; }
	inline void set_Panel_1_4(GameObject_t4012695102 * value)
	{
		___Panel_1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Panel_1_4, value);
	}

	inline static int32_t get_offset_of_withFriend_5() { return static_cast<int32_t>(offsetof(OnlineModeSelect_t740007762, ___withFriend_5)); }
	inline Button_t990034267 * get_withFriend_5() const { return ___withFriend_5; }
	inline Button_t990034267 ** get_address_of_withFriend_5() { return &___withFriend_5; }
	inline void set_withFriend_5(Button_t990034267 * value)
	{
		___withFriend_5 = value;
		Il2CppCodeGenWriteBarrier(&___withFriend_5, value);
	}

	inline static int32_t get_offset_of_back_6() { return static_cast<int32_t>(offsetof(OnlineModeSelect_t740007762, ___back_6)); }
	inline Button_t990034267 * get_back_6() const { return ___back_6; }
	inline Button_t990034267 ** get_address_of_back_6() { return &___back_6; }
	inline void set_back_6(Button_t990034267 * value)
	{
		___back_6 = value;
		Il2CppCodeGenWriteBarrier(&___back_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
