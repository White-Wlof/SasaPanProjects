#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRoomMatching
struct  RandomRoomMatching_t856125051  : public MonoBehaviour_t4025988718
{
public:
	// System.Boolean RandomRoomMatching::isWaiting
	bool ___isWaiting_3;
	// System.Int32 RandomRoomMatching::online
	int32_t ___online_4;
	// System.Collections.Generic.List`1<System.String> RandomRoomMatching::roomList
	List_1_t1765447871 * ___roomList_5;

public:
	inline static int32_t get_offset_of_isWaiting_3() { return static_cast<int32_t>(offsetof(RandomRoomMatching_t856125051, ___isWaiting_3)); }
	inline bool get_isWaiting_3() const { return ___isWaiting_3; }
	inline bool* get_address_of_isWaiting_3() { return &___isWaiting_3; }
	inline void set_isWaiting_3(bool value)
	{
		___isWaiting_3 = value;
	}

	inline static int32_t get_offset_of_online_4() { return static_cast<int32_t>(offsetof(RandomRoomMatching_t856125051, ___online_4)); }
	inline int32_t get_online_4() const { return ___online_4; }
	inline int32_t* get_address_of_online_4() { return &___online_4; }
	inline void set_online_4(int32_t value)
	{
		___online_4 = value;
	}

	inline static int32_t get_offset_of_roomList_5() { return static_cast<int32_t>(offsetof(RandomRoomMatching_t856125051, ___roomList_5)); }
	inline List_1_t1765447871 * get_roomList_5() const { return ___roomList_5; }
	inline List_1_t1765447871 ** get_address_of_roomList_5() { return &___roomList_5; }
	inline void set_roomList_5(List_1_t1765447871 * value)
	{
		___roomList_5 = value;
		Il2CppCodeGenWriteBarrier(&___roomList_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
