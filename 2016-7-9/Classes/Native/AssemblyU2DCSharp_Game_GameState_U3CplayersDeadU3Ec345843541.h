#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// Game.GameState
struct GameState_t3027501829;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.GameState/<playersDead>c__IteratorB
struct  U3CplayersDeadU3Ec__IteratorB_t345843541  : public Il2CppObject
{
public:
	// System.Int32 Game.GameState/<playersDead>c__IteratorB::$PC
	int32_t ___U24PC_0;
	// System.Object Game.GameState/<playersDead>c__IteratorB::$current
	Il2CppObject * ___U24current_1;
	// Game.GameState Game.GameState/<playersDead>c__IteratorB::<>f__this
	GameState_t3027501829 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CplayersDeadU3Ec__IteratorB_t345843541, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CplayersDeadU3Ec__IteratorB_t345843541, ___U24current_1)); }
	inline Il2CppObject * get_U24current_1() const { return ___U24current_1; }
	inline Il2CppObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(Il2CppObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CplayersDeadU3Ec__IteratorB_t345843541, ___U3CU3Ef__this_2)); }
	inline GameState_t3027501829 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline GameState_t3027501829 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(GameState_t3027501829 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
