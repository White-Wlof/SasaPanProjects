﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIFriendFinding
struct  GUIFriendFinding_t1593776560  : public MonoBehaviour_t4025988718
{
public:
	// System.String[] GUIFriendFinding::friendListOfSomeCommunity
	StringU5BU5D_t2956870243* ___friendListOfSomeCommunity_3;
	// UnityEngine.Rect GUIFriendFinding::GuiRect
	Rect_t1525428817  ___GuiRect_4;

public:
	inline static int32_t get_offset_of_friendListOfSomeCommunity_3() { return static_cast<int32_t>(offsetof(GUIFriendFinding_t1593776560, ___friendListOfSomeCommunity_3)); }
	inline StringU5BU5D_t2956870243* get_friendListOfSomeCommunity_3() const { return ___friendListOfSomeCommunity_3; }
	inline StringU5BU5D_t2956870243** get_address_of_friendListOfSomeCommunity_3() { return &___friendListOfSomeCommunity_3; }
	inline void set_friendListOfSomeCommunity_3(StringU5BU5D_t2956870243* value)
	{
		___friendListOfSomeCommunity_3 = value;
		Il2CppCodeGenWriteBarrier(&___friendListOfSomeCommunity_3, value);
	}

	inline static int32_t get_offset_of_GuiRect_4() { return static_cast<int32_t>(offsetof(GUIFriendFinding_t1593776560, ___GuiRect_4)); }
	inline Rect_t1525428817  get_GuiRect_4() const { return ___GuiRect_4; }
	inline Rect_t1525428817 * get_address_of_GuiRect_4() { return &___GuiRect_4; }
	inline void set_GuiRect_4(Rect_t1525428817  value)
	{
		___GuiRect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
