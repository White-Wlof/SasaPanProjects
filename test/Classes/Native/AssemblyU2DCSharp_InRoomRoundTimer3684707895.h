#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InRoomRoundTimer
struct  InRoomRoundTimer_t3684707895  : public MonoBehaviour_t4025988718
{
public:
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_4;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_5;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t1525428817  ___TextPos_6;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_7;

public:
	inline static int32_t get_offset_of_SecondsPerTurn_4() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___SecondsPerTurn_4)); }
	inline int32_t get_SecondsPerTurn_4() const { return ___SecondsPerTurn_4; }
	inline int32_t* get_address_of_SecondsPerTurn_4() { return &___SecondsPerTurn_4; }
	inline void set_SecondsPerTurn_4(int32_t value)
	{
		___SecondsPerTurn_4 = value;
	}

	inline static int32_t get_offset_of_StartTime_5() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___StartTime_5)); }
	inline double get_StartTime_5() const { return ___StartTime_5; }
	inline double* get_address_of_StartTime_5() { return &___StartTime_5; }
	inline void set_StartTime_5(double value)
	{
		___StartTime_5 = value;
	}

	inline static int32_t get_offset_of_TextPos_6() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___TextPos_6)); }
	inline Rect_t1525428817  get_TextPos_6() const { return ___TextPos_6; }
	inline Rect_t1525428817 * get_address_of_TextPos_6() { return &___TextPos_6; }
	inline void set_TextPos_6(Rect_t1525428817  value)
	{
		___TextPos_6 = value;
	}

	inline static int32_t get_offset_of_startRoundWhenTimeIsSynced_7() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t3684707895, ___startRoundWhenTimeIsSynced_7)); }
	inline bool get_startRoundWhenTimeIsSynced_7() const { return ___startRoundWhenTimeIsSynced_7; }
	inline bool* get_address_of_startRoundWhenTimeIsSynced_7() { return &___startRoundWhenTimeIsSynced_7; }
	inline void set_startRoundWhenTimeIsSynced_7(bool value)
	{
		___startRoundWhenTimeIsSynced_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
