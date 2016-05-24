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
// System.Collections.Generic.List`1<Point>
struct List_1_t874251881;
// CubicSpline
struct CubicSpline_t67207067;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t2385134729;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RiverTool
struct  RiverTool_t774771108  : public MonoBehaviour_t3012272455
{
public:
	// System.Single RiverTool::Smoothness
	float ___Smoothness_2;
	// System.Int32 RiverTool::segment
	int32_t ___segment_3;
	// System.Single RiverTool::MeshWidth
	float ___MeshWidth_4;
	// System.Boolean RiverTool::showGizmos
	bool ___showGizmos_5;
	// System.Single RiverTool::gizmoSize
	float ___gizmoSize_6;
	// System.Boolean RiverTool::UpdateMesh
	bool ___UpdateMesh_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RiverTool::points
	List_1_t514686775 * ___points_8;
	// System.Collections.Generic.List`1<Point> RiverTool::P
	List_1_t874251881 * ___P_9;
	// CubicSpline RiverTool::spline
	CubicSpline_t67207067 * ___spline_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> RiverTool::verts
	List_1_t27321462 * ___verts_11;
	// System.Collections.Generic.List`1<System.Int32> RiverTool::tris
	List_1_t3644373756 * ___tris_12;
	// UnityEngine.Vector2 RiverTool::riverOffset
	Vector2_t3525329788  ___riverOffset_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> RiverTool::np
	List_1_t27321462 * ___np_14;
	// System.Collections.Generic.List`1<UnityEngine.Color> RiverTool::tempcolors
	List_1_t2385134729 * ___tempcolors_15;
	// System.Collections.Generic.List`1<UnityEngine.Color> RiverTool::colors
	List_1_t2385134729 * ___colors_16;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> RiverTool::norms
	List_1_t27321462 * ___norms_17;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> RiverTool::uvs
	List_1_t27321461 * ___uvs_18;
	// UnityEngine.Mesh RiverTool::mesh
	Mesh_t1525280346 * ___mesh_19;
	// UnityEngine.Material RiverTool::mat
	Material_t1886596500 * ___mat_20;
	// System.Single RiverTool::c
	float ___c_21;

public:
	inline static int32_t get_offset_of_Smoothness_2() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___Smoothness_2)); }
	inline float get_Smoothness_2() const { return ___Smoothness_2; }
	inline float* get_address_of_Smoothness_2() { return &___Smoothness_2; }
	inline void set_Smoothness_2(float value)
	{
		___Smoothness_2 = value;
	}

	inline static int32_t get_offset_of_segment_3() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___segment_3)); }
	inline int32_t get_segment_3() const { return ___segment_3; }
	inline int32_t* get_address_of_segment_3() { return &___segment_3; }
	inline void set_segment_3(int32_t value)
	{
		___segment_3 = value;
	}

	inline static int32_t get_offset_of_MeshWidth_4() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___MeshWidth_4)); }
	inline float get_MeshWidth_4() const { return ___MeshWidth_4; }
	inline float* get_address_of_MeshWidth_4() { return &___MeshWidth_4; }
	inline void set_MeshWidth_4(float value)
	{
		___MeshWidth_4 = value;
	}

	inline static int32_t get_offset_of_showGizmos_5() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___showGizmos_5)); }
	inline bool get_showGizmos_5() const { return ___showGizmos_5; }
	inline bool* get_address_of_showGizmos_5() { return &___showGizmos_5; }
	inline void set_showGizmos_5(bool value)
	{
		___showGizmos_5 = value;
	}

	inline static int32_t get_offset_of_gizmoSize_6() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___gizmoSize_6)); }
	inline float get_gizmoSize_6() const { return ___gizmoSize_6; }
	inline float* get_address_of_gizmoSize_6() { return &___gizmoSize_6; }
	inline void set_gizmoSize_6(float value)
	{
		___gizmoSize_6 = value;
	}

	inline static int32_t get_offset_of_UpdateMesh_7() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___UpdateMesh_7)); }
	inline bool get_UpdateMesh_7() const { return ___UpdateMesh_7; }
	inline bool* get_address_of_UpdateMesh_7() { return &___UpdateMesh_7; }
	inline void set_UpdateMesh_7(bool value)
	{
		___UpdateMesh_7 = value;
	}

	inline static int32_t get_offset_of_points_8() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___points_8)); }
	inline List_1_t514686775 * get_points_8() const { return ___points_8; }
	inline List_1_t514686775 ** get_address_of_points_8() { return &___points_8; }
	inline void set_points_8(List_1_t514686775 * value)
	{
		___points_8 = value;
		Il2CppCodeGenWriteBarrier(&___points_8, value);
	}

	inline static int32_t get_offset_of_P_9() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___P_9)); }
	inline List_1_t874251881 * get_P_9() const { return ___P_9; }
	inline List_1_t874251881 ** get_address_of_P_9() { return &___P_9; }
	inline void set_P_9(List_1_t874251881 * value)
	{
		___P_9 = value;
		Il2CppCodeGenWriteBarrier(&___P_9, value);
	}

	inline static int32_t get_offset_of_spline_10() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___spline_10)); }
	inline CubicSpline_t67207067 * get_spline_10() const { return ___spline_10; }
	inline CubicSpline_t67207067 ** get_address_of_spline_10() { return &___spline_10; }
	inline void set_spline_10(CubicSpline_t67207067 * value)
	{
		___spline_10 = value;
		Il2CppCodeGenWriteBarrier(&___spline_10, value);
	}

	inline static int32_t get_offset_of_verts_11() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___verts_11)); }
	inline List_1_t27321462 * get_verts_11() const { return ___verts_11; }
	inline List_1_t27321462 ** get_address_of_verts_11() { return &___verts_11; }
	inline void set_verts_11(List_1_t27321462 * value)
	{
		___verts_11 = value;
		Il2CppCodeGenWriteBarrier(&___verts_11, value);
	}

	inline static int32_t get_offset_of_tris_12() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___tris_12)); }
	inline List_1_t3644373756 * get_tris_12() const { return ___tris_12; }
	inline List_1_t3644373756 ** get_address_of_tris_12() { return &___tris_12; }
	inline void set_tris_12(List_1_t3644373756 * value)
	{
		___tris_12 = value;
		Il2CppCodeGenWriteBarrier(&___tris_12, value);
	}

	inline static int32_t get_offset_of_riverOffset_13() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___riverOffset_13)); }
	inline Vector2_t3525329788  get_riverOffset_13() const { return ___riverOffset_13; }
	inline Vector2_t3525329788 * get_address_of_riverOffset_13() { return &___riverOffset_13; }
	inline void set_riverOffset_13(Vector2_t3525329788  value)
	{
		___riverOffset_13 = value;
	}

	inline static int32_t get_offset_of_np_14() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___np_14)); }
	inline List_1_t27321462 * get_np_14() const { return ___np_14; }
	inline List_1_t27321462 ** get_address_of_np_14() { return &___np_14; }
	inline void set_np_14(List_1_t27321462 * value)
	{
		___np_14 = value;
		Il2CppCodeGenWriteBarrier(&___np_14, value);
	}

	inline static int32_t get_offset_of_tempcolors_15() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___tempcolors_15)); }
	inline List_1_t2385134729 * get_tempcolors_15() const { return ___tempcolors_15; }
	inline List_1_t2385134729 ** get_address_of_tempcolors_15() { return &___tempcolors_15; }
	inline void set_tempcolors_15(List_1_t2385134729 * value)
	{
		___tempcolors_15 = value;
		Il2CppCodeGenWriteBarrier(&___tempcolors_15, value);
	}

	inline static int32_t get_offset_of_colors_16() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___colors_16)); }
	inline List_1_t2385134729 * get_colors_16() const { return ___colors_16; }
	inline List_1_t2385134729 ** get_address_of_colors_16() { return &___colors_16; }
	inline void set_colors_16(List_1_t2385134729 * value)
	{
		___colors_16 = value;
		Il2CppCodeGenWriteBarrier(&___colors_16, value);
	}

	inline static int32_t get_offset_of_norms_17() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___norms_17)); }
	inline List_1_t27321462 * get_norms_17() const { return ___norms_17; }
	inline List_1_t27321462 ** get_address_of_norms_17() { return &___norms_17; }
	inline void set_norms_17(List_1_t27321462 * value)
	{
		___norms_17 = value;
		Il2CppCodeGenWriteBarrier(&___norms_17, value);
	}

	inline static int32_t get_offset_of_uvs_18() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___uvs_18)); }
	inline List_1_t27321461 * get_uvs_18() const { return ___uvs_18; }
	inline List_1_t27321461 ** get_address_of_uvs_18() { return &___uvs_18; }
	inline void set_uvs_18(List_1_t27321461 * value)
	{
		___uvs_18 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_18, value);
	}

	inline static int32_t get_offset_of_mesh_19() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___mesh_19)); }
	inline Mesh_t1525280346 * get_mesh_19() const { return ___mesh_19; }
	inline Mesh_t1525280346 ** get_address_of_mesh_19() { return &___mesh_19; }
	inline void set_mesh_19(Mesh_t1525280346 * value)
	{
		___mesh_19 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_19, value);
	}

	inline static int32_t get_offset_of_mat_20() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___mat_20)); }
	inline Material_t1886596500 * get_mat_20() const { return ___mat_20; }
	inline Material_t1886596500 ** get_address_of_mat_20() { return &___mat_20; }
	inline void set_mat_20(Material_t1886596500 * value)
	{
		___mat_20 = value;
		Il2CppCodeGenWriteBarrier(&___mat_20, value);
	}

	inline static int32_t get_offset_of_c_21() { return static_cast<int32_t>(offsetof(RiverTool_t774771108, ___c_21)); }
	inline float get_c_21() const { return ___c_21; }
	inline float* get_address_of_c_21() { return &___c_21; }
	inline void set_c_21(float value)
	{
		___c_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
