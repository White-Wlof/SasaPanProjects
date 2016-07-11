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
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UserDataManager
struct UserDataManager_t271735736;
// SoundManager
struct SoundManager_t2444342206;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendRoomCreate
struct  FriendRoomCreate_t2039659285  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.UI.Text FriendRoomCreate::roomId
	Text_t3286458198 * ___roomId_3;
	// UnityEngine.UI.Button FriendRoomCreate::copy
	Button_t990034267 * ___copy_4;
	// UnityEngine.GameObject FriendRoomCreate::panel
	GameObject_t4012695102 * ___panel_5;
	// System.Collections.Generic.List`1<System.String> FriendRoomCreate::roomList
	List_1_t1765447871 * ___roomList_6;
	// UserDataManager FriendRoomCreate::data
	UserDataManager_t271735736 * ___data_7;
	// SoundManager FriendRoomCreate::sound
	SoundManager_t2444342206 * ___sound_8;

public:
	inline static int32_t get_offset_of_roomId_3() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___roomId_3)); }
	inline Text_t3286458198 * get_roomId_3() const { return ___roomId_3; }
	inline Text_t3286458198 ** get_address_of_roomId_3() { return &___roomId_3; }
	inline void set_roomId_3(Text_t3286458198 * value)
	{
		___roomId_3 = value;
		Il2CppCodeGenWriteBarrier(&___roomId_3, value);
	}

	inline static int32_t get_offset_of_copy_4() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___copy_4)); }
	inline Button_t990034267 * get_copy_4() const { return ___copy_4; }
	inline Button_t990034267 ** get_address_of_copy_4() { return &___copy_4; }
	inline void set_copy_4(Button_t990034267 * value)
	{
		___copy_4 = value;
		Il2CppCodeGenWriteBarrier(&___copy_4, value);
	}

	inline static int32_t get_offset_of_panel_5() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___panel_5)); }
	inline GameObject_t4012695102 * get_panel_5() const { return ___panel_5; }
	inline GameObject_t4012695102 ** get_address_of_panel_5() { return &___panel_5; }
	inline void set_panel_5(GameObject_t4012695102 * value)
	{
		___panel_5 = value;
		Il2CppCodeGenWriteBarrier(&___panel_5, value);
	}

	inline static int32_t get_offset_of_roomList_6() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___roomList_6)); }
	inline List_1_t1765447871 * get_roomList_6() const { return ___roomList_6; }
	inline List_1_t1765447871 ** get_address_of_roomList_6() { return &___roomList_6; }
	inline void set_roomList_6(List_1_t1765447871 * value)
	{
		___roomList_6 = value;
		Il2CppCodeGenWriteBarrier(&___roomList_6, value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___data_7)); }
	inline UserDataManager_t271735736 * get_data_7() const { return ___data_7; }
	inline UserDataManager_t271735736 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(UserDataManager_t271735736 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}

	inline static int32_t get_offset_of_sound_8() { return static_cast<int32_t>(offsetof(FriendRoomCreate_t2039659285, ___sound_8)); }
	inline SoundManager_t2444342206 * get_sound_8() const { return ___sound_8; }
	inline SoundManager_t2444342206 ** get_address_of_sound_8() { return &___sound_8; }
	inline void set_sound_8(SoundManager_t2444342206 * value)
	{
		___sound_8 = value;
		Il2CppCodeGenWriteBarrier(&___sound_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
