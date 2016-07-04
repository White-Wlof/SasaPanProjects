#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundManager
struct SoundManager_t2444342206;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonTransition
struct  ButtonTransition_t85581383  : public MonoBehaviour_t3012272455
{
public:
	// SoundManager ButtonTransition::sound
	SoundManager_t2444342206 * ___sound_2;

public:
	inline static int32_t get_offset_of_sound_2() { return static_cast<int32_t>(offsetof(ButtonTransition_t85581383, ___sound_2)); }
	inline SoundManager_t2444342206 * get_sound_2() const { return ___sound_2; }
	inline SoundManager_t2444342206 ** get_address_of_sound_2() { return &___sound_2; }
	inline void set_sound_2(SoundManager_t2444342206 * value)
	{
		___sound_2 = value;
		Il2CppCodeGenWriteBarrier(&___sound_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
