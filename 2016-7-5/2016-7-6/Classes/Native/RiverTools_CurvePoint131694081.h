#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvePoint
struct  CurvePoint_t131694081  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CurvePoint::GizmoSize
	float ___GizmoSize_2;
	// System.Single CurvePoint::width
	float ___width_3;
	// UnityEngine.Color CurvePoint::color
	Color_t1588175760  ___color_4;

public:
	inline static int32_t get_offset_of_GizmoSize_2() { return static_cast<int32_t>(offsetof(CurvePoint_t131694081, ___GizmoSize_2)); }
	inline float get_GizmoSize_2() const { return ___GizmoSize_2; }
	inline float* get_address_of_GizmoSize_2() { return &___GizmoSize_2; }
	inline void set_GizmoSize_2(float value)
	{
		___GizmoSize_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(CurvePoint_t131694081, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(CurvePoint_t131694081, ___color_4)); }
	inline Color_t1588175760  get_color_4() const { return ___color_4; }
	inline Color_t1588175760 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color_t1588175760  value)
	{
		___color_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
