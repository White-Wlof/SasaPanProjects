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
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t224472971;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.CharactorOperationMaster
struct  CharactorOperationMaster_t3360730064  : public MonoBehaviour_t3012272455
{
public:
	// System.String Game.CharactorOperationMaster::LEFT
	String_t* ___LEFT_2;
	// System.String Game.CharactorOperationMaster::RIGHT
	String_t* ___RIGHT_3;
	// UnityEngine.AudioSource[] Game.CharactorOperationMaster::audioSource
	AudioSourceU5BU5D_t224472971* ___audioSource_4;

public:
	inline static int32_t get_offset_of_LEFT_2() { return static_cast<int32_t>(offsetof(CharactorOperationMaster_t3360730064, ___LEFT_2)); }
	inline String_t* get_LEFT_2() const { return ___LEFT_2; }
	inline String_t** get_address_of_LEFT_2() { return &___LEFT_2; }
	inline void set_LEFT_2(String_t* value)
	{
		___LEFT_2 = value;
		Il2CppCodeGenWriteBarrier(&___LEFT_2, value);
	}

	inline static int32_t get_offset_of_RIGHT_3() { return static_cast<int32_t>(offsetof(CharactorOperationMaster_t3360730064, ___RIGHT_3)); }
	inline String_t* get_RIGHT_3() const { return ___RIGHT_3; }
	inline String_t** get_address_of_RIGHT_3() { return &___RIGHT_3; }
	inline void set_RIGHT_3(String_t* value)
	{
		___RIGHT_3 = value;
		Il2CppCodeGenWriteBarrier(&___RIGHT_3, value);
	}

	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(CharactorOperationMaster_t3360730064, ___audioSource_4)); }
	inline AudioSourceU5BU5D_t224472971* get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSourceU5BU5D_t224472971* value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
