﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ColorPerPlayer
struct ColorPerPlayer_t2366540379;
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPerPlayerApply
struct  ColorPerPlayerApply_t2273921491  : public PunBehaviour_t1644375368
{
public:
	// ColorPerPlayer ColorPerPlayerApply::colorPicker
	ColorPerPlayer_t2366540379 * ___colorPicker_3;
	// UnityEngine.Renderer ColorPerPlayerApply::rendererComponent
	Renderer_t1092684080 * ___rendererComponent_4;

public:
	inline static int32_t get_offset_of_colorPicker_3() { return static_cast<int32_t>(offsetof(ColorPerPlayerApply_t2273921491, ___colorPicker_3)); }
	inline ColorPerPlayer_t2366540379 * get_colorPicker_3() const { return ___colorPicker_3; }
	inline ColorPerPlayer_t2366540379 ** get_address_of_colorPicker_3() { return &___colorPicker_3; }
	inline void set_colorPicker_3(ColorPerPlayer_t2366540379 * value)
	{
		___colorPicker_3 = value;
		Il2CppCodeGenWriteBarrier(&___colorPicker_3, value);
	}

	inline static int32_t get_offset_of_rendererComponent_4() { return static_cast<int32_t>(offsetof(ColorPerPlayerApply_t2273921491, ___rendererComponent_4)); }
	inline Renderer_t1092684080 * get_rendererComponent_4() const { return ___rendererComponent_4; }
	inline Renderer_t1092684080 ** get_address_of_rendererComponent_4() { return &___rendererComponent_4; }
	inline void set_rendererComponent_4(Renderer_t1092684080 * value)
	{
		___rendererComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___rendererComponent_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
