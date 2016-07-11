#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t224472971;

#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_gen1774517059.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2444342206  : public SingletonMonoBehaviour_1_t1774517059
{
public:
	// UnityEngine.AudioSource[] SoundManager::audioSource
	AudioSourceU5BU5D_t224472971* ___audioSource_3;

public:
	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___audioSource_3)); }
	inline AudioSourceU5BU5D_t224472971* get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSourceU5BU5D_t224472971* value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
