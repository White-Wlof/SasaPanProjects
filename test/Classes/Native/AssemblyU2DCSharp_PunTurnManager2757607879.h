#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// IPunTurnManagerCallbacks
struct IPunTurnManagerCallbacks_t1296962654;
// System.Collections.Generic.HashSet`1<PhotonPlayer>
struct HashSet_1_t4099198780;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTurnManager
struct  PunTurnManager_t2757607879  : public PunBehaviour_t1644375368
{
public:
	// System.Int32 PunTurnManager::TurnDuration
	int32_t ___TurnDuration_6;
	// System.Collections.Generic.List`1<System.Int32> PunTurnManager::ActionList
	List_1_t3644373756 * ___ActionList_7;
	// IPunTurnManagerCallbacks PunTurnManager::TurnManagerListener
	Il2CppObject * ___TurnManagerListener_8;
	// System.Collections.Generic.HashSet`1<PhotonPlayer> PunTurnManager::finishedPlayers
	HashSet_1_t4099198780 * ___finishedPlayers_9;

public:
	inline static int32_t get_offset_of_TurnDuration_6() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___TurnDuration_6)); }
	inline int32_t get_TurnDuration_6() const { return ___TurnDuration_6; }
	inline int32_t* get_address_of_TurnDuration_6() { return &___TurnDuration_6; }
	inline void set_TurnDuration_6(int32_t value)
	{
		___TurnDuration_6 = value;
	}

	inline static int32_t get_offset_of_ActionList_7() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___ActionList_7)); }
	inline List_1_t3644373756 * get_ActionList_7() const { return ___ActionList_7; }
	inline List_1_t3644373756 ** get_address_of_ActionList_7() { return &___ActionList_7; }
	inline void set_ActionList_7(List_1_t3644373756 * value)
	{
		___ActionList_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionList_7, value);
	}

	inline static int32_t get_offset_of_TurnManagerListener_8() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___TurnManagerListener_8)); }
	inline Il2CppObject * get_TurnManagerListener_8() const { return ___TurnManagerListener_8; }
	inline Il2CppObject ** get_address_of_TurnManagerListener_8() { return &___TurnManagerListener_8; }
	inline void set_TurnManagerListener_8(Il2CppObject * value)
	{
		___TurnManagerListener_8 = value;
		Il2CppCodeGenWriteBarrier(&___TurnManagerListener_8, value);
	}

	inline static int32_t get_offset_of_finishedPlayers_9() { return static_cast<int32_t>(offsetof(PunTurnManager_t2757607879, ___finishedPlayers_9)); }
	inline HashSet_1_t4099198780 * get_finishedPlayers_9() const { return ___finishedPlayers_9; }
	inline HashSet_1_t4099198780 ** get_address_of_finishedPlayers_9() { return &___finishedPlayers_9; }
	inline void set_finishedPlayers_9(HashSet_1_t4099198780 * value)
	{
		___finishedPlayers_9 = value;
		Il2CppCodeGenWriteBarrier(&___finishedPlayers_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
