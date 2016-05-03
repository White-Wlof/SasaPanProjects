#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1755167990;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubicSpline
struct  CubicSpline_t67207067  : public Il2CppObject
{
public:
	// System.Int32 CubicSpline::segment
	int32_t ___segment_0;
	// System.Single CubicSpline::smoothness
	float ___smoothness_1;
	// System.Boolean CubicSpline::isLocal
	bool ___isLocal_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CubicSpline::ep
	List_1_t514686775 * ___ep_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::cp
	List_1_t27321462 * ___cp_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::lp
	List_1_t27321462 * ___lp_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::np
	List_1_t27321462 * ___np_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::bp
	List_1_t27321462 * ___bp_7;
	// System.Collections.Generic.List`1<System.Single> CubicSpline::t
	List_1_t1755167990 * ___t_8;
	// System.Collections.Generic.List`1<System.Single> CubicSpline::z
	List_1_t1755167990 * ___z_9;

public:
	inline static int32_t get_offset_of_segment_0() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___segment_0)); }
	inline int32_t get_segment_0() const { return ___segment_0; }
	inline int32_t* get_address_of_segment_0() { return &___segment_0; }
	inline void set_segment_0(int32_t value)
	{
		___segment_0 = value;
	}

	inline static int32_t get_offset_of_smoothness_1() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___smoothness_1)); }
	inline float get_smoothness_1() const { return ___smoothness_1; }
	inline float* get_address_of_smoothness_1() { return &___smoothness_1; }
	inline void set_smoothness_1(float value)
	{
		___smoothness_1 = value;
	}

	inline static int32_t get_offset_of_isLocal_2() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___isLocal_2)); }
	inline bool get_isLocal_2() const { return ___isLocal_2; }
	inline bool* get_address_of_isLocal_2() { return &___isLocal_2; }
	inline void set_isLocal_2(bool value)
	{
		___isLocal_2 = value;
	}

	inline static int32_t get_offset_of_ep_3() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___ep_3)); }
	inline List_1_t514686775 * get_ep_3() const { return ___ep_3; }
	inline List_1_t514686775 ** get_address_of_ep_3() { return &___ep_3; }
	inline void set_ep_3(List_1_t514686775 * value)
	{
		___ep_3 = value;
		Il2CppCodeGenWriteBarrier(&___ep_3, value);
	}

	inline static int32_t get_offset_of_cp_4() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___cp_4)); }
	inline List_1_t27321462 * get_cp_4() const { return ___cp_4; }
	inline List_1_t27321462 ** get_address_of_cp_4() { return &___cp_4; }
	inline void set_cp_4(List_1_t27321462 * value)
	{
		___cp_4 = value;
		Il2CppCodeGenWriteBarrier(&___cp_4, value);
	}

	inline static int32_t get_offset_of_lp_5() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___lp_5)); }
	inline List_1_t27321462 * get_lp_5() const { return ___lp_5; }
	inline List_1_t27321462 ** get_address_of_lp_5() { return &___lp_5; }
	inline void set_lp_5(List_1_t27321462 * value)
	{
		___lp_5 = value;
		Il2CppCodeGenWriteBarrier(&___lp_5, value);
	}

	inline static int32_t get_offset_of_np_6() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___np_6)); }
	inline List_1_t27321462 * get_np_6() const { return ___np_6; }
	inline List_1_t27321462 ** get_address_of_np_6() { return &___np_6; }
	inline void set_np_6(List_1_t27321462 * value)
	{
		___np_6 = value;
		Il2CppCodeGenWriteBarrier(&___np_6, value);
	}

	inline static int32_t get_offset_of_bp_7() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___bp_7)); }
	inline List_1_t27321462 * get_bp_7() const { return ___bp_7; }
	inline List_1_t27321462 ** get_address_of_bp_7() { return &___bp_7; }
	inline void set_bp_7(List_1_t27321462 * value)
	{
		___bp_7 = value;
		Il2CppCodeGenWriteBarrier(&___bp_7, value);
	}

	inline static int32_t get_offset_of_t_8() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___t_8)); }
	inline List_1_t1755167990 * get_t_8() const { return ___t_8; }
	inline List_1_t1755167990 ** get_address_of_t_8() { return &___t_8; }
	inline void set_t_8(List_1_t1755167990 * value)
	{
		___t_8 = value;
		Il2CppCodeGenWriteBarrier(&___t_8, value);
	}

	inline static int32_t get_offset_of_z_9() { return static_cast<int32_t>(offsetof(CubicSpline_t67207067, ___z_9)); }
	inline List_1_t1755167990 * get_z_9() const { return ___z_9; }
	inline List_1_t1755167990 ** get_address_of_z_9() { return &___z_9; }
	inline void set_z_9(List_1_t1755167990 * value)
	{
		___z_9 = value;
		Il2CppCodeGenWriteBarrier(&___z_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
