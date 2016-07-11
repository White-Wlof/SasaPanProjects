#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// ToHubButton
struct ToHubButton_t2876583980;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToHubButton
struct  ToHubButton_t2876583980  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Texture2D ToHubButton::ButtonTexture
	Texture2D_t2509538522 * ___ButtonTexture_3;
	// UnityEngine.Rect ToHubButton::ButtonRect
	Rect_t1525428817  ___ButtonRect_4;

public:
	inline static int32_t get_offset_of_ButtonTexture_3() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980, ___ButtonTexture_3)); }
	inline Texture2D_t2509538522 * get_ButtonTexture_3() const { return ___ButtonTexture_3; }
	inline Texture2D_t2509538522 ** get_address_of_ButtonTexture_3() { return &___ButtonTexture_3; }
	inline void set_ButtonTexture_3(Texture2D_t2509538522 * value)
	{
		___ButtonTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonTexture_3, value);
	}

	inline static int32_t get_offset_of_ButtonRect_4() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980, ___ButtonRect_4)); }
	inline Rect_t1525428817  get_ButtonRect_4() const { return ___ButtonRect_4; }
	inline Rect_t1525428817 * get_address_of_ButtonRect_4() { return &___ButtonRect_4; }
	inline void set_ButtonRect_4(Rect_t1525428817  value)
	{
		___ButtonRect_4 = value;
	}
};

struct ToHubButton_t2876583980_StaticFields
{
public:
	// ToHubButton ToHubButton::instance
	ToHubButton_t2876583980 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(ToHubButton_t2876583980_StaticFields, ___instance_5)); }
	inline ToHubButton_t2876583980 * get_instance_5() const { return ___instance_5; }
	inline ToHubButton_t2876583980 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(ToHubButton_t2876583980 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
