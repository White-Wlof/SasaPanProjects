#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragToMove
struct  DragToMove_t612845408  : public MonoBehaviour_t4025988718
{
public:
	// System.Single DragToMove::speed
	float ___speed_3;
	// UnityEngine.Transform[] DragToMove::cubes
	TransformU5BU5D_t3681339876* ___cubes_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DragToMove::PositionsQueue
	List_1_t27321462 * ___PositionsQueue_5;
	// UnityEngine.Vector3[] DragToMove::cubeStartPositions
	Vector3U5BU5D_t3227571696* ___cubeStartPositions_6;
	// System.Int32 DragToMove::nextPosIndex
	int32_t ___nextPosIndex_7;
	// System.Single DragToMove::lerpTime
	float ___lerpTime_8;
	// System.Boolean DragToMove::recording
	bool ___recording_9;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_cubes_4() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___cubes_4)); }
	inline TransformU5BU5D_t3681339876* get_cubes_4() const { return ___cubes_4; }
	inline TransformU5BU5D_t3681339876** get_address_of_cubes_4() { return &___cubes_4; }
	inline void set_cubes_4(TransformU5BU5D_t3681339876* value)
	{
		___cubes_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubes_4, value);
	}

	inline static int32_t get_offset_of_PositionsQueue_5() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___PositionsQueue_5)); }
	inline List_1_t27321462 * get_PositionsQueue_5() const { return ___PositionsQueue_5; }
	inline List_1_t27321462 ** get_address_of_PositionsQueue_5() { return &___PositionsQueue_5; }
	inline void set_PositionsQueue_5(List_1_t27321462 * value)
	{
		___PositionsQueue_5 = value;
		Il2CppCodeGenWriteBarrier(&___PositionsQueue_5, value);
	}

	inline static int32_t get_offset_of_cubeStartPositions_6() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___cubeStartPositions_6)); }
	inline Vector3U5BU5D_t3227571696* get_cubeStartPositions_6() const { return ___cubeStartPositions_6; }
	inline Vector3U5BU5D_t3227571696** get_address_of_cubeStartPositions_6() { return &___cubeStartPositions_6; }
	inline void set_cubeStartPositions_6(Vector3U5BU5D_t3227571696* value)
	{
		___cubeStartPositions_6 = value;
		Il2CppCodeGenWriteBarrier(&___cubeStartPositions_6, value);
	}

	inline static int32_t get_offset_of_nextPosIndex_7() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___nextPosIndex_7)); }
	inline int32_t get_nextPosIndex_7() const { return ___nextPosIndex_7; }
	inline int32_t* get_address_of_nextPosIndex_7() { return &___nextPosIndex_7; }
	inline void set_nextPosIndex_7(int32_t value)
	{
		___nextPosIndex_7 = value;
	}

	inline static int32_t get_offset_of_lerpTime_8() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___lerpTime_8)); }
	inline float get_lerpTime_8() const { return ___lerpTime_8; }
	inline float* get_address_of_lerpTime_8() { return &___lerpTime_8; }
	inline void set_lerpTime_8(float value)
	{
		___lerpTime_8 = value;
	}

	inline static int32_t get_offset_of_recording_9() { return static_cast<int32_t>(offsetof(DragToMove_t612845408, ___recording_9)); }
	inline bool get_recording_9() const { return ___recording_9; }
	inline bool* get_address_of_recording_9() { return &___recording_9; }
	inline void set_recording_9(bool value)
	{
		___recording_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
