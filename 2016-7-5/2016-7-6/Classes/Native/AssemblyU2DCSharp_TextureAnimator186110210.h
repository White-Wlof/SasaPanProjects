#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextureAnimator
struct  TextureAnimator_t186110210  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 TextureAnimator::Speed
	Vector2_t3525329788  ___Speed_2;
	// System.Int32 TextureAnimator::frameSkip
	int32_t ___frameSkip_3;
	// System.Boolean TextureAnimator::zeroOffset
	bool ___zeroOffset_4;
	// System.Boolean TextureAnimator::updateInEditor
	bool ___updateInEditor_5;
	// System.Int32 TextureAnimator::frameCounter
	int32_t ___frameCounter_6;
	// UnityEngine.Renderer TextureAnimator::_renderer
	Renderer_t1092684080 * ____renderer_7;
	// UnityEngine.Material TextureAnimator::_material
	Material_t1886596500 * ____material_8;

public:
	inline static int32_t get_offset_of_Speed_2() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ___Speed_2)); }
	inline Vector2_t3525329788  get_Speed_2() const { return ___Speed_2; }
	inline Vector2_t3525329788 * get_address_of_Speed_2() { return &___Speed_2; }
	inline void set_Speed_2(Vector2_t3525329788  value)
	{
		___Speed_2 = value;
	}

	inline static int32_t get_offset_of_frameSkip_3() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ___frameSkip_3)); }
	inline int32_t get_frameSkip_3() const { return ___frameSkip_3; }
	inline int32_t* get_address_of_frameSkip_3() { return &___frameSkip_3; }
	inline void set_frameSkip_3(int32_t value)
	{
		___frameSkip_3 = value;
	}

	inline static int32_t get_offset_of_zeroOffset_4() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ___zeroOffset_4)); }
	inline bool get_zeroOffset_4() const { return ___zeroOffset_4; }
	inline bool* get_address_of_zeroOffset_4() { return &___zeroOffset_4; }
	inline void set_zeroOffset_4(bool value)
	{
		___zeroOffset_4 = value;
	}

	inline static int32_t get_offset_of_updateInEditor_5() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ___updateInEditor_5)); }
	inline bool get_updateInEditor_5() const { return ___updateInEditor_5; }
	inline bool* get_address_of_updateInEditor_5() { return &___updateInEditor_5; }
	inline void set_updateInEditor_5(bool value)
	{
		___updateInEditor_5 = value;
	}

	inline static int32_t get_offset_of_frameCounter_6() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ___frameCounter_6)); }
	inline int32_t get_frameCounter_6() const { return ___frameCounter_6; }
	inline int32_t* get_address_of_frameCounter_6() { return &___frameCounter_6; }
	inline void set_frameCounter_6(int32_t value)
	{
		___frameCounter_6 = value;
	}

	inline static int32_t get_offset_of__renderer_7() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ____renderer_7)); }
	inline Renderer_t1092684080 * get__renderer_7() const { return ____renderer_7; }
	inline Renderer_t1092684080 ** get_address_of__renderer_7() { return &____renderer_7; }
	inline void set__renderer_7(Renderer_t1092684080 * value)
	{
		____renderer_7 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_7, value);
	}

	inline static int32_t get_offset_of__material_8() { return static_cast<int32_t>(offsetof(TextureAnimator_t186110210, ____material_8)); }
	inline Material_t1886596500 * get__material_8() const { return ____material_8; }
	inline Material_t1886596500 ** get_address_of__material_8() { return &____material_8; }
	inline void set__material_8(Material_t1886596500 * value)
	{
		____material_8 = value;
		Il2CppCodeGenWriteBarrier(&____material_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
