#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Point
struct  Point_t77292912  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Point::p
	Vector3_t3525329789  ___p_0;
	// UnityEngine.Vector3 Point::c1
	Vector3_t3525329789  ___c1_1;
	// UnityEngine.Vector3 Point::c2
	Vector3_t3525329789  ___c2_2;
	// System.Single Point::scale
	float ___scale_3;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(Point_t77292912, ___p_0)); }
	inline Vector3_t3525329789  get_p_0() const { return ___p_0; }
	inline Vector3_t3525329789 * get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(Vector3_t3525329789  value)
	{
		___p_0 = value;
	}

	inline static int32_t get_offset_of_c1_1() { return static_cast<int32_t>(offsetof(Point_t77292912, ___c1_1)); }
	inline Vector3_t3525329789  get_c1_1() const { return ___c1_1; }
	inline Vector3_t3525329789 * get_address_of_c1_1() { return &___c1_1; }
	inline void set_c1_1(Vector3_t3525329789  value)
	{
		___c1_1 = value;
	}

	inline static int32_t get_offset_of_c2_2() { return static_cast<int32_t>(offsetof(Point_t77292912, ___c2_2)); }
	inline Vector3_t3525329789  get_c2_2() const { return ___c2_2; }
	inline Vector3_t3525329789 * get_address_of_c2_2() { return &___c2_2; }
	inline void set_c2_2(Vector3_t3525329789  value)
	{
		___c2_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(Point_t77292912, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
