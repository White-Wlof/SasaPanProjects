﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomOptions
struct  RoomOptions_t979675427  : public Il2CppObject
{
public:
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField_0;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField_1;
	// System.Byte RoomOptions::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField_4;
	// ExitGames.Client.Photon.Hashtable RoomOptions::customRoomProperties
	Hashtable_t223732124 * ___customRoomProperties_5;
	// System.String[] RoomOptions::customRoomPropertiesForLobby
	StringU5BU5D_t2956870243* ___customRoomPropertiesForLobby_6;
	// System.String[] RoomOptions::plugins
	StringU5BU5D_t2956870243* ___plugins_7;
	// System.Boolean RoomOptions::suppressRoomEventsField
	bool ___suppressRoomEventsField_8;
	// System.Boolean RoomOptions::publishUserIdField
	bool ___publishUserIdField_9;

public:
	inline static int32_t get_offset_of_isVisibleField_0() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___isVisibleField_0)); }
	inline bool get_isVisibleField_0() const { return ___isVisibleField_0; }
	inline bool* get_address_of_isVisibleField_0() { return &___isVisibleField_0; }
	inline void set_isVisibleField_0(bool value)
	{
		___isVisibleField_0 = value;
	}

	inline static int32_t get_offset_of_isOpenField_1() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___isOpenField_1)); }
	inline bool get_isOpenField_1() const { return ___isOpenField_1; }
	inline bool* get_address_of_isOpenField_1() { return &___isOpenField_1; }
	inline void set_isOpenField_1(bool value)
	{
		___isOpenField_1 = value;
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeaveField_4() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___cleanupCacheOnLeaveField_4)); }
	inline bool get_cleanupCacheOnLeaveField_4() const { return ___cleanupCacheOnLeaveField_4; }
	inline bool* get_address_of_cleanupCacheOnLeaveField_4() { return &___cleanupCacheOnLeaveField_4; }
	inline void set_cleanupCacheOnLeaveField_4(bool value)
	{
		___cleanupCacheOnLeaveField_4 = value;
	}

	inline static int32_t get_offset_of_customRoomProperties_5() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___customRoomProperties_5)); }
	inline Hashtable_t223732124 * get_customRoomProperties_5() const { return ___customRoomProperties_5; }
	inline Hashtable_t223732124 ** get_address_of_customRoomProperties_5() { return &___customRoomProperties_5; }
	inline void set_customRoomProperties_5(Hashtable_t223732124 * value)
	{
		___customRoomProperties_5 = value;
		Il2CppCodeGenWriteBarrier(&___customRoomProperties_5, value);
	}

	inline static int32_t get_offset_of_customRoomPropertiesForLobby_6() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___customRoomPropertiesForLobby_6)); }
	inline StringU5BU5D_t2956870243* get_customRoomPropertiesForLobby_6() const { return ___customRoomPropertiesForLobby_6; }
	inline StringU5BU5D_t2956870243** get_address_of_customRoomPropertiesForLobby_6() { return &___customRoomPropertiesForLobby_6; }
	inline void set_customRoomPropertiesForLobby_6(StringU5BU5D_t2956870243* value)
	{
		___customRoomPropertiesForLobby_6 = value;
		Il2CppCodeGenWriteBarrier(&___customRoomPropertiesForLobby_6, value);
	}

	inline static int32_t get_offset_of_plugins_7() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___plugins_7)); }
	inline StringU5BU5D_t2956870243* get_plugins_7() const { return ___plugins_7; }
	inline StringU5BU5D_t2956870243** get_address_of_plugins_7() { return &___plugins_7; }
	inline void set_plugins_7(StringU5BU5D_t2956870243* value)
	{
		___plugins_7 = value;
		Il2CppCodeGenWriteBarrier(&___plugins_7, value);
	}

	inline static int32_t get_offset_of_suppressRoomEventsField_8() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___suppressRoomEventsField_8)); }
	inline bool get_suppressRoomEventsField_8() const { return ___suppressRoomEventsField_8; }
	inline bool* get_address_of_suppressRoomEventsField_8() { return &___suppressRoomEventsField_8; }
	inline void set_suppressRoomEventsField_8(bool value)
	{
		___suppressRoomEventsField_8 = value;
	}

	inline static int32_t get_offset_of_publishUserIdField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t979675427, ___publishUserIdField_9)); }
	inline bool get_publishUserIdField_9() const { return ___publishUserIdField_9; }
	inline bool* get_address_of_publishUserIdField_9() { return &___publishUserIdField_9; }
	inline void set_publishUserIdField_9(bool value)
	{
		___publishUserIdField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
