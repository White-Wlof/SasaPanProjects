#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendRoomEnter
struct  FriendRoomEnter_t2699937183  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.UI.InputField FriendRoomEnter::inputField
	InputField_t2345609593 * ___inputField_3;
	// UnityEngine.UI.Text FriendRoomEnter::roomName
	Text_t3286458198 * ___roomName_4;
	// UnityEngine.UI.Button FriendRoomEnter::join
	Button_t990034267 * ___join_5;
	// UnityEngine.UI.Button FriendRoomEnter::paste
	Button_t990034267 * ___paste_6;
	// UnityEngine.GameObject FriendRoomEnter::panel
	GameObject_t4012695102 * ___panel_7;

public:
	inline static int32_t get_offset_of_inputField_3() { return static_cast<int32_t>(offsetof(FriendRoomEnter_t2699937183, ___inputField_3)); }
	inline InputField_t2345609593 * get_inputField_3() const { return ___inputField_3; }
	inline InputField_t2345609593 ** get_address_of_inputField_3() { return &___inputField_3; }
	inline void set_inputField_3(InputField_t2345609593 * value)
	{
		___inputField_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_3, value);
	}

	inline static int32_t get_offset_of_roomName_4() { return static_cast<int32_t>(offsetof(FriendRoomEnter_t2699937183, ___roomName_4)); }
	inline Text_t3286458198 * get_roomName_4() const { return ___roomName_4; }
	inline Text_t3286458198 ** get_address_of_roomName_4() { return &___roomName_4; }
	inline void set_roomName_4(Text_t3286458198 * value)
	{
		___roomName_4 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_4, value);
	}

	inline static int32_t get_offset_of_join_5() { return static_cast<int32_t>(offsetof(FriendRoomEnter_t2699937183, ___join_5)); }
	inline Button_t990034267 * get_join_5() const { return ___join_5; }
	inline Button_t990034267 ** get_address_of_join_5() { return &___join_5; }
	inline void set_join_5(Button_t990034267 * value)
	{
		___join_5 = value;
		Il2CppCodeGenWriteBarrier(&___join_5, value);
	}

	inline static int32_t get_offset_of_paste_6() { return static_cast<int32_t>(offsetof(FriendRoomEnter_t2699937183, ___paste_6)); }
	inline Button_t990034267 * get_paste_6() const { return ___paste_6; }
	inline Button_t990034267 ** get_address_of_paste_6() { return &___paste_6; }
	inline void set_paste_6(Button_t990034267 * value)
	{
		___paste_6 = value;
		Il2CppCodeGenWriteBarrier(&___paste_6, value);
	}

	inline static int32_t get_offset_of_panel_7() { return static_cast<int32_t>(offsetof(FriendRoomEnter_t2699937183, ___panel_7)); }
	inline GameObject_t4012695102 * get_panel_7() const { return ___panel_7; }
	inline GameObject_t4012695102 ** get_address_of_panel_7() { return &___panel_7; }
	inline void set_panel_7(GameObject_t4012695102 * value)
	{
		___panel_7 = value;
		Il2CppCodeGenWriteBarrier(&___panel_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
