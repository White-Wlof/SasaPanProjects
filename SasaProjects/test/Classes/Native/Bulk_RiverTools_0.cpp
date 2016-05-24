#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CubicSpline
struct CubicSpline_t67207067;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// CurvePoint
struct CurvePoint_t131694081;
// Point
struct Point_t77292912;
// RiverTool
struct RiverTool_t774771108;
// System.String
struct String_t;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1217738301;
// System.Object
struct Il2CppObject;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "RiverTools_U3CModuleU3E86524790.h"
#include "RiverTools_U3CModuleU3E86524790MethodDeclarations.h"
#include "RiverTools_CubicSpline67207067.h"
#include "RiverTools_CubicSpline67207067MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen27321462MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1755167990MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen27321462.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1755167990.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "mscorlib_System_Int642847414882.h"
#include "RiverTools_CurvePoint131694081.h"
#include "RiverTools_CurvePoint131694081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Gizmos3656267942MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "RiverTools_Point77292912.h"
#include "RiverTools_Point77292912MethodDeclarations.h"
#include "RiverTools_RiverTool774771108.h"
#include "RiverTools_RiverTool774771108MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mesh1525280346MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Shader3998140498MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MeshFilter4177078322MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_MeshRenderer1217738301.h"
#include "UnityEngine_UnityEngine_MeshFilter4177078322.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "mscorlib_System_Collections_Generic_List_1_gen874251881.h"
#include "mscorlib_System_Collections_Generic_List_1_gen874251881MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "mscorlib_System_IndexOutOfRangeException3760259642.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2385134729.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2385134729MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3644373756MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen27321461MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3644373756.h"
#include "mscorlib_System_Collections_Generic_List_1_gen27321461.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"

// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m1123549903_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m1123549903(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m1123549903_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t1217738301_m2779950442(__this, method) ((  MeshRenderer_t1217738301 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m1123549903_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t4177078322_m1840490005(__this, method) ((  MeshFilter_t4177078322 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m1123549903_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m3233378628_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m3233378628(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3233378628_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
#define GameObject_GetComponent_TisMeshFilter_t4177078322_m222210880(__this, method) ((  MeshFilter_t4177078322 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3233378628_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t1217738301_m2391872469(__this, method) ((  MeshRenderer_t1217738301 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3233378628_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t4177078322_m391985610(__this, method) ((  MeshFilter_t4177078322 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t1217738301_m2336630751(__this, method) ((  MeshRenderer_t1217738301 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CurvePoint>()
#define GameObject_GetComponent_TisCurvePoint_t131694081_m556656347(__this, method) ((  CurvePoint_t131694081 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3233378628_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubicSpline::.ctor(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Int32,System.Single,System.Boolean)
extern TypeInfo* List_1_t514686775_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t27321462_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1755167990_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3330911122_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3666403801_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3971247943_MethodInfo_var;
extern const uint32_t CubicSpline__ctor_m3896546124_MetadataUsageId;
extern "C"  void CubicSpline__ctor_m3896546124 (CubicSpline_t67207067 * __this, List_1_t514686775 * ____cp, int32_t ____segment, float ____smoothness, bool ____isLocal, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline__ctor_m3896546124_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set_smoothness_1((0.5f));
		__this->set_isLocal_2((bool)1);
		List_1_t514686775 * L_0 = (List_1_t514686775 *)il2cpp_codegen_object_new(List_1_t514686775_il2cpp_TypeInfo_var);
		List_1__ctor_m3330911122(L_0, /*hidden argument*/List_1__ctor_m3330911122_MethodInfo_var);
		__this->set_ep_3(L_0);
		List_1_t27321462 * L_1 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_1, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_cp_4(L_1);
		List_1_t27321462 * L_2 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_2, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_lp_5(L_2);
		List_1_t27321462 * L_3 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_3, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_np_6(L_3);
		List_1_t27321462 * L_4 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_4, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_bp_7(L_4);
		List_1_t1755167990 * L_5 = (List_1_t1755167990 *)il2cpp_codegen_object_new(List_1_t1755167990_il2cpp_TypeInfo_var);
		List_1__ctor_m3971247943(L_5, /*hidden argument*/List_1__ctor_m3971247943_MethodInfo_var);
		__this->set_t_8(L_5);
		List_1_t1755167990 * L_6 = (List_1_t1755167990 *)il2cpp_codegen_object_new(List_1_t1755167990_il2cpp_TypeInfo_var);
		List_1__ctor_m3971247943(L_6, /*hidden argument*/List_1__ctor_m3971247943_MethodInfo_var);
		__this->set_z_9(L_6);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		bool L_7 = ____isLocal;
		__this->set_isLocal_2(L_7);
		List_1_t27321462 * L_8 = __this->get_cp_4();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_8);
		V_0 = 0;
		goto IL_00da;
	}

IL_007c:
	{
		List_1_t514686775 * L_9 = ____cp;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		GameObject_t4012695102 * L_11 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_9, L_10);
		bool L_12 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_11, (Object_t3878351788 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		List_1_t514686775 * L_13 = ____cp;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_13, L_14);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15-(int32_t)1));
		goto IL_00d6;
	}

IL_0098:
	{
		bool L_16 = ____isLocal;
		if (!L_16)
		{
			goto IL_00ba;
		}
	}
	{
		List_1_t27321462 * L_17 = __this->get_cp_4();
		List_1_t514686775 * L_18 = ____cp;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		GameObject_t4012695102 * L_20 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_18, L_19);
		NullCheck(L_20);
		Transform_t284553113 * L_21 = GameObject_get_transform_m1278640159(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t3525329789  L_22 = Transform_get_localPosition_m668140784(L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_17, L_22);
		goto IL_00d6;
	}

IL_00ba:
	{
		List_1_t27321462 * L_23 = __this->get_cp_4();
		List_1_t514686775 * L_24 = ____cp;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		GameObject_t4012695102 * L_26 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_24, L_25);
		NullCheck(L_26);
		Transform_t284553113 * L_27 = GameObject_get_transform_m1278640159(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3525329789  L_28 = Transform_get_position_m2211398607(L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_23, L_28);
	}

IL_00d6:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00da:
	{
		int32_t L_30 = V_0;
		List_1_t514686775 * L_31 = ____cp;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_31);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_33 = ____segment;
		__this->set_segment_0(L_33);
		float L_34 = ____smoothness;
		__this->set_smoothness_1(L_34);
		return;
	}
}
// System.Void CubicSpline::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern TypeInfo* List_1_t514686775_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t27321462_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1755167990_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3330911122_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3666403801_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3971247943_MethodInfo_var;
extern const uint32_t CubicSpline__ctor_m735402480_MetadataUsageId;
extern "C"  void CubicSpline__ctor_m735402480 (CubicSpline_t67207067 * __this, List_1_t27321462 * ____cp, int32_t ____segment, float ____smoothness, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline__ctor_m735402480_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_smoothness_1((0.5f));
		__this->set_isLocal_2((bool)1);
		List_1_t514686775 * L_0 = (List_1_t514686775 *)il2cpp_codegen_object_new(List_1_t514686775_il2cpp_TypeInfo_var);
		List_1__ctor_m3330911122(L_0, /*hidden argument*/List_1__ctor_m3330911122_MethodInfo_var);
		__this->set_ep_3(L_0);
		List_1_t27321462 * L_1 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_1, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_cp_4(L_1);
		List_1_t27321462 * L_2 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_2, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_lp_5(L_2);
		List_1_t27321462 * L_3 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_3, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_np_6(L_3);
		List_1_t27321462 * L_4 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_4, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_bp_7(L_4);
		List_1_t1755167990 * L_5 = (List_1_t1755167990 *)il2cpp_codegen_object_new(List_1_t1755167990_il2cpp_TypeInfo_var);
		List_1__ctor_m3971247943(L_5, /*hidden argument*/List_1__ctor_m3971247943_MethodInfo_var);
		__this->set_t_8(L_5);
		List_1_t1755167990 * L_6 = (List_1_t1755167990 *)il2cpp_codegen_object_new(List_1_t1755167990_il2cpp_TypeInfo_var);
		List_1__ctor_m3971247943(L_6, /*hidden argument*/List_1__ctor_m3971247943_MethodInfo_var);
		__this->set_z_9(L_6);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		List_1_t27321462 * L_7 = __this->get_cp_4();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_7);
		List_1_t27321462 * L_8 = ____cp;
		__this->set_cp_4(L_8);
		int32_t L_9 = ____segment;
		__this->set_segment_0(L_9);
		float L_10 = ____smoothness;
		__this->set_smoothness_1(L_10);
		return;
	}
}
// System.Void CubicSpline::updateSmoothness(System.Single)
extern "C"  void CubicSpline_updateSmoothness_m4030420136 (CubicSpline_t67207067 * __this, float ____smoothness, const MethodInfo* method)
{
	{
		float L_0 = ____smoothness;
		__this->set_smoothness_1(L_0);
		return;
	}
}
// System.Void CubicSpline::updateSegment(System.Int32)
extern "C"  void CubicSpline_updateSegment_m3471439432 (CubicSpline_t67207067 * __this, int32_t ____seg, const MethodInfo* method)
{
	{
		int32_t L_0 = ____seg;
		__this->set_segment_0(L_0);
		return;
	}
}
// System.Void CubicSpline::updatePointsByPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void CubicSpline_updatePointsByPoints_m1863310584 (CubicSpline_t67207067 * __this, List_1_t27321462 * ____cp, const MethodInfo* method)
{
	{
		List_1_t27321462 * L_0 = __this->get_cp_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_0);
		List_1_t27321462 * L_1 = ____cp;
		__this->set_cp_4(L_1);
		return;
	}
}
// System.Void CubicSpline::updatePointsByGameobjects(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void CubicSpline_updatePointsByGameobjects_m1608620878 (CubicSpline_t67207067 * __this, List_1_t514686775 * ____cp, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		List_1_t27321462 * L_0 = __this->get_cp_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_0);
		V_0 = 0;
		goto IL_0071;
	}

IL_000f:
	{
		List_1_t514686775 * L_1 = ____cp;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		GameObject_t4012695102 * L_3 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_1, L_2);
		bool L_4 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_3, (Object_t3878351788 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		List_1_t514686775 * L_5 = ____cp;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_5, L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
		goto IL_006d;
	}

IL_002b:
	{
		bool L_8 = __this->get_isLocal_2();
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		List_1_t27321462 * L_9 = __this->get_cp_4();
		List_1_t514686775 * L_10 = ____cp;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		GameObject_t4012695102 * L_12 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_10, L_11);
		NullCheck(L_12);
		Transform_t284553113 * L_13 = GameObject_get_transform_m1278640159(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3525329789  L_14 = Transform_get_localPosition_m668140784(L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_9, L_14);
		goto IL_006d;
	}

IL_0051:
	{
		List_1_t27321462 * L_15 = __this->get_cp_4();
		List_1_t514686775 * L_16 = ____cp;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		GameObject_t4012695102 * L_18 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_16, L_17);
		NullCheck(L_18);
		Transform_t284553113 * L_19 = GameObject_get_transform_m1278640159(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3525329789  L_20 = Transform_get_position_m2211398607(L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_15, L_20);
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_22 = V_0;
		List_1_t514686775 * L_23 = ____cp;
		NullCheck(L_23);
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_23);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetCubicPoints()
extern "C"  List_1_t27321462 * CubicSpline_GetCubicPoints_m1833109584 (CubicSpline_t67207067 * __this, const MethodInfo* method)
{
	{
		CubicSpline_calculateNP_m835135605(__this, /*hidden argument*/NULL);
		List_1_t27321462 * L_0 = __this->get_np_6();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetLinearPoints()
extern "C"  List_1_t27321462 * CubicSpline_GetLinearPoints_m1867535847 (CubicSpline_t67207067 * __this, const MethodInfo* method)
{
	{
		CubicSpline_calculateLP_m835076023(__this, /*hidden argument*/NULL);
		List_1_t27321462 * L_0 = __this->get_lp_5();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetBazierPoints(System.Single)
extern "C"  List_1_t27321462 * CubicSpline_GetBazierPoints_m675329838 (CubicSpline_t67207067 * __this, float ____smoothness, const MethodInfo* method)
{
	{
		float L_0 = ____smoothness;
		__this->set_smoothness_1(L_0);
		CubicSpline_calculateLP_m835076023(__this, /*hidden argument*/NULL);
		CubicSpline_calculateNP_m835135605(__this, /*hidden argument*/NULL);
		CubicSpline_calculateBP_m834778113(__this, /*hidden argument*/NULL);
		List_1_t27321462 * L_1 = __this->get_bp_7();
		return L_1;
	}
}
// System.Void CubicSpline::calculateLP()
extern "C"  void CubicSpline_calculateLP_m835076023 (CubicSpline_t67207067 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		List_1_t27321462 * L_0 = __this->get_lp_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_0);
		V_0 = 1;
		List_1_t27321462 * L_1 = __this->get_lp_5();
		List_1_t27321462 * L_2 = __this->get_cp_4();
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_2, 0);
		NullCheck(L_1);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_1, L_3);
		V_1 = 0;
		goto IL_0084;
	}

IL_0028:
	{
		V_2 = 0;
		goto IL_0077;
	}

IL_002c:
	{
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0073;
		}
	}

IL_0032:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_2;
		int32_t L_8 = __this->get_segment_0();
		V_3 = ((float)((float)(((float)((float)L_7)))*(float)((float)((float)(1.0f)/(float)(((float)((float)L_8)))))));
		List_1_t27321462 * L_9 = __this->get_lp_5();
		List_1_t27321462 * L_10 = __this->get_cp_4();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Vector3_t3525329789  L_12 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_10, L_11);
		List_1_t27321462 * L_13 = __this->get_cp_4();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Vector3_t3525329789  L_15 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_13, ((int32_t)((int32_t)L_14+(int32_t)1)));
		float L_16 = V_3;
		Vector3_t3525329789  L_17 = CubicSpline_Linear_m634855761(__this, L_12, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_9, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = __this->get_segment_0();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_22 = V_1;
		List_1_t27321462 * L_23 = __this->get_cp_4();
		NullCheck(L_23);
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)L_24-(int32_t)1)))))
		{
			goto IL_0028;
		}
	}
	{
		List_1_t27321462 * L_25 = __this->get_lp_5();
		List_1_t27321462 * L_26 = __this->get_cp_4();
		List_1_t27321462 * L_27 = __this->get_cp_4();
		NullCheck(L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_27);
		NullCheck(L_26);
		Vector3_t3525329789  L_29 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_26, ((int32_t)((int32_t)L_28-(int32_t)1)));
		NullCheck(L_25);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_25, L_29);
		return;
	}
}
// System.Void CubicSpline::calculateBP()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_calculateBP_m834778113_MetadataUsageId;
extern "C"  void CubicSpline_calculateBP_m834778113 (CubicSpline_t67207067 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_calculateBP_m834778113_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		List_1_t27321462 * L_0 = __this->get_bp_7();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_0);
		V_0 = 0;
		goto IL_00e7;
	}

IL_0012:
	{
		int32_t L_1 = V_0;
		List_1_t27321462 * L_2 = __this->get_lp_5();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)((int32_t)L_3-(int32_t)1)))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		Vector3_t3525329789  L_4 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		List_1_t27321462 * L_5 = __this->get_np_6();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector3_t3525329789  L_7 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_5, L_6);
		float L_8 = L_7.get_x_1();
		List_1_t27321462 * L_9 = __this->get_lp_5();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Vector3_t3525329789  L_11 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_9, L_10);
		float L_12 = L_11.get_x_1();
		float L_13 = __this->get_smoothness_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_14 = Mathf_SmoothStep_m1876640478(NULL /*static, unused*/, L_8, L_12, ((float)((float)(1.0f)-(float)L_13)), /*hidden argument*/NULL);
		(&V_1)->set_x_1(L_14);
		List_1_t27321462 * L_15 = __this->get_np_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Vector3_t3525329789  L_17 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_15, L_16);
		float L_18 = L_17.get_y_2();
		List_1_t27321462 * L_19 = __this->get_lp_5();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		Vector3_t3525329789  L_21 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_19, L_20);
		float L_22 = L_21.get_y_2();
		float L_23 = __this->get_smoothness_1();
		float L_24 = Mathf_SmoothStep_m1876640478(NULL /*static, unused*/, L_18, L_22, ((float)((float)(1.0f)-(float)L_23)), /*hidden argument*/NULL);
		(&V_1)->set_y_2(L_24);
		List_1_t27321462 * L_25 = __this->get_np_6();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		Vector3_t3525329789  L_27 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_25, L_26);
		float L_28 = L_27.get_z_3();
		List_1_t27321462 * L_29 = __this->get_lp_5();
		int32_t L_30 = V_0;
		NullCheck(L_29);
		Vector3_t3525329789  L_31 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_29, L_30);
		float L_32 = L_31.get_z_3();
		float L_33 = __this->get_smoothness_1();
		float L_34 = Mathf_SmoothStep_m1876640478(NULL /*static, unused*/, L_28, L_32, ((float)((float)(1.0f)-(float)L_33)), /*hidden argument*/NULL);
		(&V_1)->set_z_3(L_34);
		List_1_t27321462 * L_35 = __this->get_bp_7();
		Vector3_t3525329789  L_36 = V_1;
		NullCheck(L_35);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_35, L_36);
		int32_t L_37 = V_0;
		V_0 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00e7:
	{
		int32_t L_38 = V_0;
		List_1_t27321462 * L_39 = __this->get_np_6();
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 CubicSpline::Linear(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_Linear_m634855761_MetadataUsageId;
extern "C"  Vector3_t3525329789  CubicSpline_Linear_m634855761 (CubicSpline_t67207067 * __this, Vector3_t3525329789  ___p0, Vector3_t3525329789  ___p1, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_Linear_m634855761_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2272733930(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ___t;
		float L_3 = (&___p0)->get_x_1();
		float L_4 = ___t;
		float L_5 = (&___p1)->get_x_1();
		(&V_0)->set_x_1(((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_2))*(float)L_3))+(float)((float)((float)L_4*(float)L_5)))));
		float L_6 = ___t;
		float L_7 = (&___p0)->get_y_2();
		float L_8 = ___t;
		float L_9 = (&___p1)->get_y_2();
		(&V_0)->set_y_2(((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_6))*(float)L_7))+(float)((float)((float)L_8*(float)L_9)))));
		float L_10 = ___t;
		float L_11 = (&___p0)->get_z_3();
		float L_12 = ___t;
		float L_13 = (&___p1)->get_z_3();
		(&V_0)->set_z_3(((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_10))*(float)L_11))+(float)((float)((float)L_12*(float)L_13)))));
		Vector3_t3525329789  L_14 = V_0;
		return L_14;
	}
}
// System.Void CubicSpline::calculateNP()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_calculateNP_m835135605_MetadataUsageId;
extern "C"  void CubicSpline_calculateNP_m835135605 (CubicSpline_t67207067 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_calculateNP_m835135605_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_segment_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_m510460741(NULL /*static, unused*/, L_0, 1, ((int32_t)100), /*hidden argument*/NULL);
		__this->set_segment_0(L_1);
		List_1_t27321462 * L_2 = __this->get_np_6();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_2);
		V_0 = 1;
		List_1_t27321462 * L_3 = __this->get_np_6();
		List_1_t27321462 * L_4 = __this->get_cp_4();
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_4, 0);
		NullCheck(L_3);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_3, L_5);
		List_1_t1755167990 * L_6 = __this->get_t_8();
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Single>::Clear() */, L_6);
		List_1_t1755167990 * L_7 = __this->get_z_9();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Single>::Clear() */, L_7);
		List_1_t1755167990 * L_8 = __this->get_t_8();
		NullCheck(L_8);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_8, (0.0f));
		List_1_t1755167990 * L_9 = __this->get_z_9();
		NullCheck(L_9);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_9, (0.0f));
		V_1 = 0;
		goto IL_0103;
	}

IL_0075:
	{
		V_2 = 0;
		goto IL_00f3;
	}

IL_0079:
	{
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ef;
		}
	}

IL_007f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_segment_0();
		List_1_t27321462 * L_14 = __this->get_cp_4();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_14);
		V_3 = ((float)((float)(((float)((float)L_12)))*(float)((float)((float)(1.0f)/(float)((float)((float)(((float)((float)L_13)))*(float)(((float)((float)((int32_t)((int32_t)L_15-(int32_t)1)))))))))));
		List_1_t1755167990 * L_16 = __this->get_t_8();
		float L_17 = V_3;
		NullCheck(L_16);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_16, L_17);
		List_1_t27321462 * L_18 = __this->get_np_6();
		List_1_t27321462 * L_19 = __this->get_cp_4();
		float L_20 = V_3;
		Vector3_t3525329789  L_21 = CubicSpline_QuadraticN_m878351283(__this, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_18, L_21);
		List_1_t1755167990 * L_22 = __this->get_z_9();
		List_1_t27321462 * L_23 = __this->get_np_6();
		List_1_t27321462 * L_24 = __this->get_np_6();
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_24);
		NullCheck(L_23);
		Vector3_t3525329789  L_26 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		float L_27 = L_26.get_z_3();
		NullCheck(L_22);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_22, L_27);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ef:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = __this->get_segment_0();
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0103:
	{
		int32_t L_33 = V_1;
		List_1_t27321462 * L_34 = __this->get_cp_4();
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)L_35-(int32_t)1)))))
		{
			goto IL_0075;
		}
	}
	{
		List_1_t27321462 * L_36 = __this->get_np_6();
		List_1_t27321462 * L_37 = __this->get_cp_4();
		List_1_t27321462 * L_38 = __this->get_cp_4();
		NullCheck(L_38);
		int32_t L_39 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_38);
		NullCheck(L_37);
		Vector3_t3525329789  L_40 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_37, ((int32_t)((int32_t)L_39-(int32_t)1)));
		NullCheck(L_36);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_36, L_40);
		return;
	}
}
// System.Int64 CubicSpline::BinomCoefficient(System.Int64,System.Int64)
extern "C"  int64_t CubicSpline_BinomCoefficient_m1799399794 (Il2CppObject * __this /* static, unused */, int64_t ___n, int64_t ___k, const MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int64_t L_0 = ___k;
		int64_t L_1 = ___n;
		if ((((int64_t)L_0) <= ((int64_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		return (((int64_t)((int64_t)0)));
	}

IL_0007:
	{
		int64_t L_2 = ___n;
		int64_t L_3 = ___k;
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (((int64_t)((int64_t)1)));
	}

IL_000e:
	{
		int64_t L_4 = ___k;
		int64_t L_5 = ___n;
		int64_t L_6 = ___k;
		if ((((int64_t)L_4) <= ((int64_t)((int64_t)((int64_t)L_5-(int64_t)L_6)))))
		{
			goto IL_0019;
		}
	}
	{
		int64_t L_7 = ___n;
		int64_t L_8 = ___k;
		___k = ((int64_t)((int64_t)L_7-(int64_t)L_8));
	}

IL_0019:
	{
		V_0 = (((int64_t)((int64_t)1)));
		V_1 = (((int64_t)((int64_t)1)));
		goto IL_0034;
	}

IL_0021:
	{
		int64_t L_9 = V_0;
		int64_t L_10 = ___n;
		int64_t L_11 = L_10;
		___n = ((int64_t)((int64_t)L_11-(int64_t)(((int64_t)((int64_t)1)))));
		V_0 = ((int64_t)((int64_t)L_9*(int64_t)L_11));
		int64_t L_12 = V_0;
		int64_t L_13 = V_1;
		V_0 = ((int64_t)((int64_t)L_12/(int64_t)L_13));
		int64_t L_14 = V_1;
		V_1 = ((int64_t)((int64_t)L_14+(int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0034:
	{
		int64_t L_15 = V_1;
		int64_t L_16 = ___k;
		if ((((int64_t)L_15) <= ((int64_t)L_16)))
		{
			goto IL_0021;
		}
	}
	{
		int64_t L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Vector3 CubicSpline::q5(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_q5_m712510657_MetadataUsageId;
extern "C"  Vector3_t3525329789  CubicSpline_q5_m712510657 (CubicSpline_t67207067 * __this, List_1_t27321462 * ___p, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_q5_m712510657_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_1 = powf(((float)((float)(1.0f)-(float)L_0)), (5.0f));
		List_1_t27321462 * L_2 = ___p;
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_2, 0);
		Vector3_t3525329789  L_4 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t3525329789  L_5 = V_0;
		int64_t L_6 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)5))), (((int64_t)((int64_t)1))), /*hidden argument*/NULL);
		float L_7 = ___t;
		float L_8 = ___t;
		float L_9 = powf(((float)((float)(1.0f)-(float)L_8)), (4.0f));
		List_1_t27321462 * L_10 = ___p;
		NullCheck(L_10);
		Vector3_t3525329789  L_11 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_10, 1);
		Vector3_t3525329789  L_12 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)L_6)))*(float)L_7))*(float)L_9)), L_11, /*hidden argument*/NULL);
		Vector3_t3525329789  L_13 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_5, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		Vector3_t3525329789  L_14 = V_0;
		int64_t L_15 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)5))), (((int64_t)((int64_t)2))), /*hidden argument*/NULL);
		float L_16 = ___t;
		float L_17 = powf(L_16, (2.0f));
		float L_18 = ___t;
		float L_19 = powf(((float)((float)(1.0f)-(float)L_18)), (3.0f));
		List_1_t27321462 * L_20 = ___p;
		NullCheck(L_20);
		Vector3_t3525329789  L_21 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_20, 2);
		Vector3_t3525329789  L_22 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)L_15)))*(float)L_17))*(float)L_19)), L_21, /*hidden argument*/NULL);
		Vector3_t3525329789  L_23 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_14, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		Vector3_t3525329789  L_24 = V_0;
		int64_t L_25 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)5))), (((int64_t)((int64_t)3))), /*hidden argument*/NULL);
		float L_26 = ___t;
		float L_27 = powf(L_26, (3.0f));
		float L_28 = ___t;
		float L_29 = powf(((float)((float)(1.0f)-(float)L_28)), (2.0f));
		List_1_t27321462 * L_30 = ___p;
		NullCheck(L_30);
		Vector3_t3525329789  L_31 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_30, 3);
		Vector3_t3525329789  L_32 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)L_25)))*(float)L_27))*(float)L_29)), L_31, /*hidden argument*/NULL);
		Vector3_t3525329789  L_33 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_24, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		Vector3_t3525329789  L_34 = V_0;
		int64_t L_35 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)5))), (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		float L_36 = ___t;
		float L_37 = powf(L_36, (4.0f));
		float L_38 = ___t;
		float L_39 = powf(((float)((float)(1.0f)-(float)L_38)), (1.0f));
		List_1_t27321462 * L_40 = ___p;
		NullCheck(L_40);
		Vector3_t3525329789  L_41 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_40, 4);
		Vector3_t3525329789  L_42 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)L_35)))*(float)L_37))*(float)L_39)), L_41, /*hidden argument*/NULL);
		Vector3_t3525329789  L_43 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_34, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		Vector3_t3525329789  L_44 = V_0;
		float L_45 = ___t;
		float L_46 = powf(L_45, (5.0f));
		List_1_t27321462 * L_47 = ___p;
		NullCheck(L_47);
		Vector3_t3525329789  L_48 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_47, 5);
		Vector3_t3525329789  L_49 = Vector3_op_Multiply_m3809076219(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		Vector3_t3525329789  L_50 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_44, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
		Vector3_t3525329789  L_51 = V_0;
		return L_51;
	}
}
// UnityEngine.Vector3 CubicSpline::QuadraticN(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_QuadraticN_m878351283_MetadataUsageId;
extern "C"  Vector3_t3525329789  CubicSpline_QuadraticN_m878351283 (CubicSpline_t67207067 * __this, List_1_t27321462 * ___p, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_QuadraticN_m878351283_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		List_1_t27321462 * L_0 = ___p;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		Vector3_t3525329789  L_2 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ___t;
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_5 = powf(((float)((float)(1.0f)-(float)L_3)), (((float)((float)L_4))));
		List_1_t27321462 * L_6 = ___p;
		NullCheck(L_6);
		Vector3_t3525329789  L_7 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_6, 0);
		float L_8 = L_7.get_x_1();
		(&V_1)->set_x_1(((float)((float)L_5*(float)L_8)));
		float L_9 = ___t;
		int32_t L_10 = V_0;
		float L_11 = powf(((float)((float)(1.0f)-(float)L_9)), (((float)((float)L_10))));
		List_1_t27321462 * L_12 = ___p;
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_12, 0);
		float L_14 = L_13.get_y_2();
		(&V_1)->set_y_2(((float)((float)L_11*(float)L_14)));
		float L_15 = ___t;
		int32_t L_16 = V_0;
		float L_17 = powf(((float)((float)(1.0f)-(float)L_15)), (((float)((float)L_16))));
		List_1_t27321462 * L_18 = ___p;
		NullCheck(L_18);
		Vector3_t3525329789  L_19 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_18, 0);
		float L_20 = L_19.get_z_3();
		(&V_1)->set_z_3(((float)((float)L_17*(float)L_20)));
		V_2 = 1;
		goto IL_013d;
	}

IL_007c:
	{
		Vector3_t3525329789 * L_21 = (&V_1);
		float L_22 = L_21->get_x_1();
		int32_t L_23 = V_0;
		int32_t L_24 = V_2;
		int64_t L_25 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_23))), (((int64_t)((int64_t)L_24))), /*hidden argument*/NULL);
		float L_26 = ___t;
		int32_t L_27 = V_0;
		int32_t L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_29 = powf(((float)((float)(1.0f)-(float)L_26)), (((float)((float)((int32_t)((int32_t)L_27-(int32_t)L_28))))));
		float L_30 = ___t;
		int32_t L_31 = V_2;
		float L_32 = powf(L_30, (((float)((float)L_31))));
		List_1_t27321462 * L_33 = ___p;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		Vector3_t3525329789  L_35 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_33, L_34);
		float L_36 = L_35.get_x_1();
		L_21->set_x_1(((float)((float)L_22+(float)((float)((float)((float)((float)(((float)((float)L_25)))*(float)L_29))*(float)((float)((float)L_32*(float)L_36)))))));
		Vector3_t3525329789 * L_37 = (&V_1);
		float L_38 = L_37->get_y_2();
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		int64_t L_41 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_39))), (((int64_t)((int64_t)L_40))), /*hidden argument*/NULL);
		float L_42 = ___t;
		int32_t L_43 = V_0;
		int32_t L_44 = V_2;
		float L_45 = powf(((float)((float)(1.0f)-(float)L_42)), (((float)((float)((int32_t)((int32_t)L_43-(int32_t)L_44))))));
		float L_46 = ___t;
		int32_t L_47 = V_2;
		float L_48 = powf(L_46, (((float)((float)L_47))));
		List_1_t27321462 * L_49 = ___p;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		Vector3_t3525329789  L_51 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_49, L_50);
		float L_52 = L_51.get_y_2();
		L_37->set_y_2(((float)((float)L_38+(float)((float)((float)((float)((float)(((float)((float)L_41)))*(float)L_45))*(float)((float)((float)L_48*(float)L_52)))))));
		Vector3_t3525329789 * L_53 = (&V_1);
		float L_54 = L_53->get_z_3();
		int32_t L_55 = V_0;
		int32_t L_56 = V_2;
		int64_t L_57 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_55))), (((int64_t)((int64_t)L_56))), /*hidden argument*/NULL);
		float L_58 = ___t;
		int32_t L_59 = V_0;
		int32_t L_60 = V_2;
		float L_61 = powf(((float)((float)(1.0f)-(float)L_58)), (((float)((float)((int32_t)((int32_t)L_59-(int32_t)L_60))))));
		float L_62 = ___t;
		int32_t L_63 = V_2;
		float L_64 = powf(L_62, (((float)((float)L_63))));
		List_1_t27321462 * L_65 = ___p;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		Vector3_t3525329789  L_67 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_65, L_66);
		float L_68 = L_67.get_z_3();
		L_53->set_z_3(((float)((float)L_54+(float)((float)((float)((float)((float)(((float)((float)L_57)))*(float)L_61))*(float)((float)((float)L_64*(float)L_68)))))));
		int32_t L_69 = V_2;
		V_2 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_0;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_007c;
		}
	}
	{
		Vector3_t3525329789 * L_72 = (&V_1);
		float L_73 = L_72->get_x_1();
		float L_74 = ___t;
		int32_t L_75 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_76 = powf(L_74, (((float)((float)L_75))));
		List_1_t27321462 * L_77 = ___p;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		Vector3_t3525329789  L_79 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_77, L_78);
		float L_80 = L_79.get_x_1();
		L_72->set_x_1(((float)((float)L_73+(float)((float)((float)L_76*(float)L_80)))));
		Vector3_t3525329789 * L_81 = (&V_1);
		float L_82 = L_81->get_y_2();
		float L_83 = ___t;
		int32_t L_84 = V_0;
		float L_85 = powf(L_83, (((float)((float)L_84))));
		List_1_t27321462 * L_86 = ___p;
		int32_t L_87 = V_0;
		NullCheck(L_86);
		Vector3_t3525329789  L_88 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_86, L_87);
		float L_89 = L_88.get_y_2();
		L_81->set_y_2(((float)((float)L_82+(float)((float)((float)L_85*(float)L_89)))));
		Vector3_t3525329789 * L_90 = (&V_1);
		float L_91 = L_90->get_z_3();
		float L_92 = ___t;
		int32_t L_93 = V_0;
		float L_94 = powf(L_92, (((float)((float)L_93))));
		List_1_t27321462 * L_95 = ___p;
		int32_t L_96 = V_0;
		NullCheck(L_95);
		Vector3_t3525329789  L_97 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_95, L_96);
		float L_98 = L_97.get_z_3();
		L_90->set_z_3(((float)((float)L_91+(float)((float)((float)L_94*(float)L_98)))));
		Vector3_t3525329789  L_99 = V_1;
		return L_99;
	}
}
// UnityEngine.Vector3 CubicSpline::RationalN(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t CubicSpline_RationalN_m37718121_MetadataUsageId;
extern "C"  Vector3_t3525329789  CubicSpline_RationalN_m37718121 (CubicSpline_t67207067 * __this, List_1_t27321462 * ___p, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CubicSpline_RationalN_m37718121_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3525329789  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3525329789  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		List_1_t27321462 * L_0 = ___p;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		Vector3_t3525329789  L_2 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t3525329789  L_3 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_3;
		Vector3_t3525329789  L_4 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0179;
	}

IL_0023:
	{
		Vector3_t3525329789 * L_5 = (&V_2);
		float L_6 = L_5->get_x_1();
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		int64_t L_9 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_7))), (((int64_t)((int64_t)L_8))), /*hidden argument*/NULL);
		float L_10 = ___t;
		int32_t L_11 = V_0;
		int32_t L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_13 = powf(((float)((float)(1.0f)-(float)L_10)), (((float)((float)((int32_t)((int32_t)L_11-(int32_t)L_12))))));
		List_1_t27321462 * L_14 = ___p;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t3525329789  L_16 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_14, L_15);
		float L_17 = L_16.get_x_1();
		L_5->set_x_1(((float)((float)L_6+(float)((float)((float)((float)((float)((float)((float)(((float)((float)L_9)))*(float)L_13))*(float)L_17))*(float)(1.0f))))));
		Vector3_t3525329789 * L_18 = (&V_2);
		float L_19 = L_18->get_y_2();
		int32_t L_20 = V_0;
		int32_t L_21 = V_4;
		int64_t L_22 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_20))), (((int64_t)((int64_t)L_21))), /*hidden argument*/NULL);
		float L_23 = ___t;
		int32_t L_24 = V_0;
		int32_t L_25 = V_4;
		float L_26 = powf(((float)((float)(1.0f)-(float)L_23)), (((float)((float)((int32_t)((int32_t)L_24-(int32_t)L_25))))));
		List_1_t27321462 * L_27 = ___p;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		Vector3_t3525329789  L_29 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_27, L_28);
		float L_30 = L_29.get_y_2();
		L_18->set_y_2(((float)((float)L_19+(float)((float)((float)((float)((float)((float)((float)(((float)((float)L_22)))*(float)L_26))*(float)L_30))*(float)(1.0f))))));
		Vector3_t3525329789 * L_31 = (&V_2);
		float L_32 = L_31->get_z_3();
		int32_t L_33 = V_0;
		int32_t L_34 = V_4;
		int64_t L_35 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_33))), (((int64_t)((int64_t)L_34))), /*hidden argument*/NULL);
		float L_36 = ___t;
		int32_t L_37 = V_0;
		int32_t L_38 = V_4;
		float L_39 = powf(((float)((float)(1.0f)-(float)L_36)), (((float)((float)((int32_t)((int32_t)L_37-(int32_t)L_38))))));
		List_1_t27321462 * L_40 = ___p;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		Vector3_t3525329789  L_42 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_40, L_41);
		float L_43 = L_42.get_z_3();
		L_31->set_z_3(((float)((float)L_32+(float)((float)((float)((float)((float)((float)((float)(((float)((float)L_35)))*(float)L_39))*(float)L_43))*(float)(1.0f))))));
		Vector3_t3525329789 * L_44 = (&V_3);
		float L_45 = L_44->get_x_1();
		int32_t L_46 = V_0;
		int32_t L_47 = V_4;
		int64_t L_48 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_46))), (((int64_t)((int64_t)L_47))), /*hidden argument*/NULL);
		float L_49 = ___t;
		int32_t L_50 = V_0;
		int32_t L_51 = V_4;
		float L_52 = powf(((float)((float)(1.0f)-(float)L_49)), (((float)((float)((int32_t)((int32_t)L_50-(int32_t)L_51))))));
		L_44->set_x_1(((float)((float)L_45+(float)((float)((float)((float)((float)(((float)((float)L_48)))*(float)L_52))*(float)(1.0f))))));
		Vector3_t3525329789 * L_53 = (&V_3);
		float L_54 = L_53->get_y_2();
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		int64_t L_57 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_55))), (((int64_t)((int64_t)L_56))), /*hidden argument*/NULL);
		float L_58 = ___t;
		int32_t L_59 = V_0;
		int32_t L_60 = V_4;
		float L_61 = powf(((float)((float)(1.0f)-(float)L_58)), (((float)((float)((int32_t)((int32_t)L_59-(int32_t)L_60))))));
		L_53->set_y_2(((float)((float)L_54+(float)((float)((float)((float)((float)(((float)((float)L_57)))*(float)L_61))*(float)(1.0f))))));
		Vector3_t3525329789 * L_62 = (&V_3);
		float L_63 = L_62->get_z_3();
		int32_t L_64 = V_0;
		int32_t L_65 = V_4;
		int64_t L_66 = CubicSpline_BinomCoefficient_m1799399794(NULL /*static, unused*/, (((int64_t)((int64_t)L_64))), (((int64_t)((int64_t)L_65))), /*hidden argument*/NULL);
		float L_67 = ___t;
		int32_t L_68 = V_0;
		int32_t L_69 = V_4;
		float L_70 = powf(((float)((float)(1.0f)-(float)L_67)), (((float)((float)((int32_t)((int32_t)L_68-(int32_t)L_69))))));
		L_62->set_z_3(((float)((float)L_63+(float)((float)((float)((float)((float)(((float)((float)L_66)))*(float)L_70))*(float)(1.0f))))));
		int32_t L_71 = V_4;
		V_4 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_0179:
	{
		int32_t L_72 = V_4;
		int32_t L_73 = V_0;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0023;
		}
	}
	{
		float L_74 = (&V_2)->get_x_1();
		float L_75 = (&V_3)->get_x_1();
		(&V_1)->set_x_1(((float)((float)L_74/(float)L_75)));
		float L_76 = (&V_2)->get_x_1();
		float L_77 = (&V_3)->get_y_2();
		(&V_1)->set_y_2(((float)((float)L_76/(float)L_77)));
		float L_78 = (&V_2)->get_x_1();
		float L_79 = (&V_3)->get_z_3();
		(&V_1)->set_z_3(((float)((float)L_78/(float)L_79)));
		Vector3_t3525329789  L_80 = V_1;
		return L_80;
	}
}
// System.Void CurvePoint::Start()
extern "C"  void CurvePoint_Start_m2454131835 (CurvePoint_t131694081 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CurvePoint::Update()
extern "C"  void CurvePoint_Update_m3069495026 (CurvePoint_t131694081 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CurvePoint::OnDrawGizmos()
extern "C"  void CurvePoint_OnDrawGizmos_m2009187653 (CurvePoint_t131694081 * __this, const MethodInfo* method)
{
	{
		Color_t1588175760  L_0 = Color_get_blue_m3657252170(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_GizmoSize_2();
		Gizmos_DrawSphere_m3958783357(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_t284553113 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = Transform_get_localScale_m3886572677(L_4, /*hidden argument*/NULL);
		float L_6 = CurvePoint_mag_m428215321(__this, L_5, /*hidden argument*/NULL);
		__this->set_width_3(L_6);
		return;
	}
}
// System.Single CurvePoint::mag(UnityEngine.Vector3)
extern "C"  float CurvePoint_mag_m428215321 (CurvePoint_t131694081 * __this, Vector3_t3525329789  ___v, const MethodInfo* method)
{
	{
		float L_0 = (&___v)->get_x_1();
		float L_1 = (&___v)->get_y_2();
		float L_2 = (&___v)->get_z_3();
		return ((float)((float)((float)((float)((float)((float)L_0+(float)L_1))+(float)L_2))/(float)(3.0f)));
	}
}
// System.Void CurvePoint::.ctor()
extern "C"  void CurvePoint__ctor_m3506994043 (CurvePoint_t131694081 * __this, const MethodInfo* method)
{
	{
		__this->set_GizmoSize_2((0.25f));
		Color_t1588175760  L_0 = Color_get_white_m3038282331(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_color_4(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Point::.ctor()
extern "C"  void Point__ctor_m1102953882 (Point_t77292912 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiverTool::Start()
extern TypeInfo* CubicSpline_t67207067_il2cpp_TypeInfo_var;
extern const uint32_t RiverTool_Start_m4058417510_MetadataUsageId;
extern "C"  void RiverTool_Start_m4058417510 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_Start_m4058417510_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_UpdateMesh_7();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t514686775 * L_1 = __this->get_points_8();
		int32_t L_2 = __this->get_segment_3();
		float L_3 = __this->get_Smoothness_2();
		CubicSpline_t67207067 * L_4 = (CubicSpline_t67207067 *)il2cpp_codegen_object_new(CubicSpline_t67207067_il2cpp_TypeInfo_var);
		CubicSpline__ctor_m3896546124(L_4, L_1, L_2, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_spline_10(L_4);
	}

IL_0026:
	{
		return;
	}
}
// System.String RiverTool::getSceneName()
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t RiverTool_getSceneName_m1534901308_MetadataUsageId;
extern "C"  String_t* RiverTool_getSceneName_m1534901308 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_getSceneName_m1534901308_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral0;
	}
}
// System.Void RiverTool::init()
extern const Il2CppType* RiverTool_t774771108_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mesh_t1525280346_il2cpp_TypeInfo_var;
extern TypeInfo* Material_t1886596500_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t1217738301_m2779950442_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t4177078322_m1840490005_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshFilter_t4177078322_m222210880_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t1217738301_m2391872469_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral78973420;
extern Il2CppCodeGenString* _stringLiteral3324122946;
extern Il2CppCodeGenString* _stringLiteral77120;
extern Il2CppCodeGenString* _stringLiteral2394637;
extern const uint32_t RiverTool_init_m3387854094_MetadataUsageId;
extern "C"  void RiverTool_init_m3387854094 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_init_m3387854094_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String RiverTool::getSceneName() */, __this);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(RiverTool_t774771108_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t3051965477* L_2 = Object_FindObjectsOfType_m975740280(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		V_2 = (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length))));
		String_t* L_3 = Int32_ToString_m1286526384((&V_2), /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral78973420, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t4012695102 * L_6 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		String_t* L_7 = V_1;
		NullCheck(L_6);
		Object_set_name_m1123518500(L_6, L_7, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_8 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_AddComponent_TisMeshRenderer_t1217738301_m2779950442(L_8, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t1217738301_m2779950442_MethodInfo_var);
		GameObject_t4012695102 * L_9 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_AddComponent_TisMeshFilter_t4177078322_m1840490005(L_9, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t4177078322_m1840490005_MethodInfo_var);
		Mesh_t1525280346 * L_10 = (Mesh_t1525280346 *)il2cpp_codegen_object_new(Mesh_t1525280346_il2cpp_TypeInfo_var);
		Mesh__ctor_m2684203808(L_10, /*hidden argument*/NULL);
		__this->set_mesh_19(L_10);
		Shader_t3998140498 * L_11 = Shader_Find_m4048047578(NULL /*static, unused*/, _stringLiteral3324122946, /*hidden argument*/NULL);
		Material_t1886596500 * L_12 = (Material_t1886596500 *)il2cpp_codegen_object_new(Material_t1886596500_il2cpp_TypeInfo_var);
		Material__ctor_m2685909642(L_12, L_11, /*hidden argument*/NULL);
		__this->set_mat_20(L_12);
		Material_t1886596500 * L_13 = __this->get_mat_20();
		GameObject_t4012695102 * L_14 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m3709440845(L_14, /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_m138640077(NULL /*static, unused*/, L_15, _stringLiteral77120, /*hidden argument*/NULL);
		NullCheck(L_13);
		Object_set_name_m1123518500(L_13, L_16, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_17 = __this->get_mesh_19();
		GameObject_t4012695102 * L_18 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = Object_get_name_m3709440845(L_18, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m138640077(NULL /*static, unused*/, L_19, _stringLiteral2394637, /*hidden argument*/NULL);
		NullCheck(L_17);
		Object_set_name_m1123518500(L_17, L_20, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_21 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		MeshFilter_t4177078322 * L_22 = GameObject_GetComponent_TisMeshFilter_t4177078322_m222210880(L_21, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t4177078322_m222210880_MethodInfo_var);
		Mesh_t1525280346 * L_23 = __this->get_mesh_19();
		NullCheck(L_22);
		MeshFilter_set_sharedMesh_m793190055(L_22, L_23, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_24 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		MeshRenderer_t1217738301 * L_25 = GameObject_GetComponent_TisMeshRenderer_t1217738301_m2391872469(L_24, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1217738301_m2391872469_MethodInfo_var);
		Material_t1886596500 * L_26 = __this->get_mat_20();
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m1064371045(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiverTool::OnDrawGizmos()
extern "C"  void RiverTool_OnDrawGizmos_m2068578810 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_UpdateMesh_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Matrix4x4_t277289660  L_2 = Transform_get_localToWorldMatrix_m3571020210(L_1, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3443030764(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		List_1_t514686775 * L_3 = __this->get_points_8();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_3);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t874251881 * L_5 = __this->get_P_9();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_5);
		List_1_t514686775 * L_7 = __this->get_points_8();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_7);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		bool L_9 = __this->get_showGizmos_5();
		if (!L_9)
		{
			goto IL_014a;
		}
	}
	{
		V_0 = 0;
		goto IL_00a5;
	}

IL_004e:
	{
		List_1_t874251881 * L_10 = __this->get_P_9();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Point_t77292912 * L_12 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_10, L_11);
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = L_12->get_p_0();
		List_1_t874251881 * L_14 = __this->get_P_9();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Point_t77292912 * L_16 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_14, L_15);
		List_1_t874251881 * L_17 = __this->get_P_9();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Point_t77292912 * L_19 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		RiverTool_drawGizmos_m3168624982(__this, L_13, L_16, L_19, /*hidden argument*/NULL);
		List_1_t874251881 * L_20 = __this->get_P_9();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Point_t77292912 * L_22 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_20, L_21);
		NullCheck(L_22);
		Vector3_t3525329789  L_23 = L_22->get_p_0();
		float L_24 = __this->get_gizmoSize_6();
		Gizmos_DrawSphere_m3958783357(NULL /*static, unused*/, L_23, ((float)((float)(0.1f)*(float)L_24)), /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_26 = V_0;
		List_1_t874251881 * L_27 = __this->get_P_9();
		NullCheck(L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)L_28-(int32_t)1)))))
		{
			goto IL_004e;
		}
	}
	{
		List_1_t874251881 * L_29 = __this->get_P_9();
		List_1_t874251881 * L_30 = __this->get_P_9();
		NullCheck(L_30);
		int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_30);
		NullCheck(L_29);
		Point_t77292912 * L_32 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_29, ((int32_t)((int32_t)L_31-(int32_t)1)));
		NullCheck(L_32);
		Vector3_t3525329789  L_33 = L_32->get_p_0();
		List_1_t874251881 * L_34 = __this->get_P_9();
		List_1_t874251881 * L_35 = __this->get_P_9();
		NullCheck(L_35);
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_35);
		NullCheck(L_34);
		Point_t77292912 * L_37 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_34, ((int32_t)((int32_t)L_36-(int32_t)1)));
		List_1_t874251881 * L_38 = __this->get_P_9();
		List_1_t874251881 * L_39 = __this->get_P_9();
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_39);
		NullCheck(L_38);
		Point_t77292912 * L_41 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_38, ((int32_t)((int32_t)L_40-(int32_t)2)));
		RiverTool_drawGizmos_m3168624982(__this, L_33, L_37, L_41, /*hidden argument*/NULL);
		List_1_t874251881 * L_42 = __this->get_P_9();
		List_1_t874251881 * L_43 = __this->get_P_9();
		NullCheck(L_43);
		int32_t L_44 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_43);
		NullCheck(L_42);
		Point_t77292912 * L_45 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_42, ((int32_t)((int32_t)L_44-(int32_t)1)));
		NullCheck(L_45);
		Vector3_t3525329789  L_46 = L_45->get_p_0();
		float L_47 = __this->get_gizmoSize_6();
		Gizmos_DrawSphere_m3958783357(NULL /*static, unused*/, L_46, ((float)((float)(0.1f)*(float)L_47)), /*hidden argument*/NULL);
		Color_t1588175760  L_48 = Color_get_white_m3038282331(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Color_t1588175760  L_49 = Color_get_blue_m3657252170(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
	}

IL_014a:
	{
		return;
	}
}
// System.Void RiverTool::drawNormal()
extern "C"  void RiverTool_drawNormal_m3311101641 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_2 = __this->get_mesh_19();
		NullCheck(L_2);
		Vector3U5BU5D_t3227571696* L_3 = Mesh_get_vertices_m3685486174(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		Vector3_t3525329789  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_1, (*(Vector3_t3525329789 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))), /*hidden argument*/NULL);
		Transform_t284553113 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3525329789  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_8 = __this->get_mesh_19();
		NullCheck(L_8);
		Vector3U5BU5D_t3227571696* L_9 = Mesh_get_vertices_m3685486174(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		Vector3_t3525329789  L_11 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_7, (*(Vector3_t3525329789 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))), /*hidden argument*/NULL);
		Mesh_t1525280346 * L_12 = __this->get_mesh_19();
		NullCheck(L_12);
		Vector3U5BU5D_t3227571696* L_13 = Mesh_get_normals_m3396909641(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		Vector3_t3525329789  L_15 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_11, (*(Vector3_t3525329789 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))), /*hidden argument*/NULL);
		Gizmos_DrawLine_m4199765284(NULL /*static, unused*/, L_5, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_17 = V_0;
		Mesh_t1525280346 * L_18 = __this->get_mesh_19();
		NullCheck(L_18);
		Vector3U5BU5D_t3227571696* L_19 = Mesh_get_normals_m3396909641(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void RiverTool::drawGizmos(UnityEngine.Vector3,Point,Point)
extern "C"  void RiverTool_drawGizmos_m3168624982 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___p, Point_t77292912 * ___A, Point_t77292912 * ___B, const MethodInfo* method)
{
	{
		Color_t1588175760  L_0 = Color_get_green_m2005284533(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Point_t77292912 * L_1 = ___A;
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = L_1->get_c1_1();
		float L_3 = __this->get_gizmoSize_6();
		Gizmos_DrawWireSphere_m2407913464(NULL /*static, unused*/, L_2, ((float)((float)(0.2f)*(float)L_3)), /*hidden argument*/NULL);
		Color_t1588175760  L_4 = Color_get_red_m4288945411(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Point_t77292912 * L_5 = ___A;
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = L_5->get_c2_2();
		float L_7 = __this->get_gizmoSize_6();
		Gizmos_DrawWireSphere_m2407913464(NULL /*static, unused*/, L_6, ((float)((float)(0.2f)*(float)L_7)), /*hidden argument*/NULL);
		Color_t1588175760  L_8 = Color_get_yellow_m599454500(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3649224910(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Point_t77292912 * L_9 = ___A;
		NullCheck(L_9);
		Vector3_t3525329789  L_10 = L_9->get_p_0();
		Point_t77292912 * L_11 = ___B;
		NullCheck(L_11);
		Vector3_t3525329789  L_12 = L_11->get_p_0();
		Gizmos_DrawLine_m4199765284(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiverTool::Update()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisMeshFilter_t4177078322_m391985610_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisMeshRenderer_t1217738301_m2336630751_MethodInfo_var;
extern const uint32_t RiverTool_Update_m1262743399_MetadataUsageId;
extern "C"  void RiverTool_Update_m1262743399 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_Update_m1262743399_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_UpdateMesh_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t514686775 * L_1 = __this->get_points_8();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_1);
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		int32_t L_3 = __this->get_segment_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Clamp_m510460741(NULL /*static, unused*/, L_3, 1, ((int32_t)30), /*hidden argument*/NULL);
		__this->set_segment_3(L_4);
		float L_5 = __this->get_Smoothness_2();
		float L_6 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_5, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_Smoothness_2(L_6);
		float L_7 = __this->get_c_21();
		__this->set_c_21(((float)((float)L_7+(float)(0.01f))));
		List_1_t27321462 * L_8 = __this->get_np_14();
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		CubicSpline_t67207067 * L_9 = __this->get_spline_10();
		if (L_9)
		{
			goto IL_006a;
		}
	}

IL_0069:
	{
		return;
	}

IL_006a:
	{
		CubicSpline_t67207067 * L_10 = __this->get_spline_10();
		int32_t L_11 = __this->get_segment_3();
		NullCheck(L_10);
		CubicSpline_updateSegment_m3471439432(L_10, L_11, /*hidden argument*/NULL);
		CubicSpline_t67207067 * L_12 = __this->get_spline_10();
		float L_13 = __this->get_Smoothness_2();
		NullCheck(L_12);
		CubicSpline_updateSmoothness_m4030420136(L_12, L_13, /*hidden argument*/NULL);
		CubicSpline_t67207067 * L_14 = __this->get_spline_10();
		List_1_t514686775 * L_15 = __this->get_points_8();
		NullCheck(L_14);
		CubicSpline_updatePointsByGameobjects_m1608620878(L_14, L_15, /*hidden argument*/NULL);
		List_1_t27321462 * L_16 = __this->get_np_14();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_16);
		float L_17 = __this->get_Smoothness_2();
		if ((!(((float)L_17) == ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		CubicSpline_t67207067 * L_18 = __this->get_spline_10();
		NullCheck(L_18);
		List_1_t27321462 * L_19 = CubicSpline_GetLinearPoints_m1867535847(L_18, /*hidden argument*/NULL);
		__this->set_np_14(L_19);
		goto IL_00ff;
	}

IL_00c8:
	{
		float L_20 = __this->get_Smoothness_2();
		if ((!(((float)L_20) == ((float)(1.0f)))))
		{
			goto IL_00e8;
		}
	}
	{
		CubicSpline_t67207067 * L_21 = __this->get_spline_10();
		NullCheck(L_21);
		List_1_t27321462 * L_22 = CubicSpline_GetCubicPoints_m1833109584(L_21, /*hidden argument*/NULL);
		__this->set_np_14(L_22);
		goto IL_00ff;
	}

IL_00e8:
	{
		CubicSpline_t67207067 * L_23 = __this->get_spline_10();
		float L_24 = __this->get_Smoothness_2();
		NullCheck(L_23);
		List_1_t27321462 * L_25 = CubicSpline_GetBazierPoints_m675329838(L_23, L_24, /*hidden argument*/NULL);
		__this->set_np_14(L_25);
	}

IL_00ff:
	{
		List_1_t27321462 * L_26 = __this->get_np_14();
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_26);
		if ((((int32_t)L_27) >= ((int32_t)3)))
		{
			goto IL_010e;
		}
	}
	{
		return;
	}

IL_010e:
	{
		RiverTool_getPfromNP_m780210148(__this, /*hidden argument*/NULL);
		List_1_t27321462 * L_28 = __this->get_np_14();
		if (!L_28)
		{
			goto IL_0134;
		}
	}
	{
		List_1_t874251881 * L_29 = __this->get_P_9();
		NullCheck(L_29);
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_29);
		List_1_t514686775 * L_31 = __this->get_points_8();
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_31);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_0135;
		}
	}

IL_0134:
	{
		return;
	}

IL_0135:
	{
		List_1_t27321462 * L_33 = __this->get_np_14();
		NullCheck(L_33);
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_33);
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_0149;
		}
	}
	{
		RiverTool_makeMesh_m691862457(__this, /*hidden argument*/NULL);
	}

IL_0149:
	{
		Material_t1886596500 * L_35 = __this->get_mat_20();
		bool L_36 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_35, (Object_t3878351788 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0158;
		}
	}
	{
		return;
	}

IL_0158:
	{
		MeshFilter_t4177078322 * L_37 = Component_GetComponent_TisMeshFilter_t4177078322_m391985610(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t4177078322_m391985610_MethodInfo_var);
		Mesh_t1525280346 * L_38 = __this->get_mesh_19();
		NullCheck(L_37);
		MeshFilter_set_sharedMesh_m793190055(L_37, L_38, /*hidden argument*/NULL);
		MeshRenderer_t1217738301 * L_39 = Component_GetComponent_TisMeshRenderer_t1217738301_m2336630751(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t1217738301_m2336630751_MethodInfo_var);
		Material_t1886596500 * L_40 = __this->get_mat_20();
		NullCheck(L_39);
		Renderer_set_sharedMaterial_m1064371045(L_39, L_40, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiverTool::getPfromNP()
extern TypeInfo* Point_t77292912_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern TypeInfo* ColorU5BU5D_t3477081137_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t3760259642_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCurvePoint_t131694081_m556656347_MethodInfo_var;
extern const uint32_t RiverTool_getPfromNP_m780210148_MetadataUsageId;
extern "C"  void RiverTool_getPfromNP_m780210148 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_getPfromNP_m780210148_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	ColorU5BU5D_t3477081137* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			List_1_t27321462 * L_0 = __this->get_np_14();
			NullCheck(L_0);
			int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_0);
			if (!L_1)
			{
				goto IL_001a;
			}
		}

IL_000d:
		{
			List_1_t514686775 * L_2 = __this->get_points_8();
			NullCheck(L_2);
			int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_2);
			if (L_3)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			goto IL_03fe;
		}

IL_001f:
		{
			List_1_t874251881 * L_4 = __this->get_P_9();
			NullCheck(L_4);
			VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<Point>::Clear() */, L_4);
			List_1_t874251881 * L_5 = __this->get_P_9();
			Point_t77292912 * L_6 = (Point_t77292912 *)il2cpp_codegen_object_new(Point_t77292912_il2cpp_TypeInfo_var);
			Point__ctor_m1102953882(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			VirtActionInvoker1< Point_t77292912 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Point>::Add(!0) */, L_5, L_6);
			List_1_t874251881 * L_7 = __this->get_P_9();
			NullCheck(L_7);
			Point_t77292912 * L_8 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_7, 0);
			List_1_t27321462 * L_9 = __this->get_np_14();
			NullCheck(L_9);
			Vector3_t3525329789  L_10 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_9, 0);
			NullCheck(L_8);
			L_8->set_p_0(L_10);
			List_1_t514686775 * L_11 = __this->get_points_8();
			NullCheck(L_11);
			GameObject_t4012695102 * L_12 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_11, 0);
			NullCheck(L_12);
			Transform_t284553113 * L_13 = GameObject_get_transform_m1278640159(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t3525329789  L_14 = Transform_get_localScale_m3886572677(L_13, /*hidden argument*/NULL);
			float L_15 = RiverTool_mag_m3279618806(__this, L_14, /*hidden argument*/NULL);
			List_1_t514686775 * L_16 = __this->get_points_8();
			NullCheck(L_16);
			GameObject_t4012695102 * L_17 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_16, 1);
			NullCheck(L_17);
			Transform_t284553113 * L_18 = GameObject_get_transform_m1278640159(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			Vector3_t3525329789  L_19 = Transform_get_localScale_m3886572677(L_18, /*hidden argument*/NULL);
			float L_20 = RiverTool_mag_m3279618806(__this, L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
			float L_21 = Mathf_SmoothStep_m1876640478(NULL /*static, unused*/, L_15, L_20, (0.0f), /*hidden argument*/NULL);
			float L_22 = __this->get_MeshWidth_4();
			V_0 = ((float)((float)L_21+(float)L_22));
			List_1_t874251881 * L_23 = __this->get_P_9();
			NullCheck(L_23);
			Point_t77292912 * L_24 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_23, 0);
			List_1_t27321462 * L_25 = __this->get_np_14();
			NullCheck(L_25);
			Vector3_t3525329789  L_26 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_25, 0);
			List_1_t27321462 * L_27 = __this->get_np_14();
			NullCheck(L_27);
			Vector3_t3525329789  L_28 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_27, 1);
			float L_29 = V_0;
			Vector3_t3525329789  L_30 = RiverTool_Cpoint_m2267032960(__this, L_26, L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_24);
			L_24->set_c1_1(L_30);
			List_1_t874251881 * L_31 = __this->get_P_9();
			NullCheck(L_31);
			Point_t77292912 * L_32 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_31, 0);
			List_1_t27321462 * L_33 = __this->get_np_14();
			NullCheck(L_33);
			Vector3_t3525329789  L_34 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_33, 0);
			List_1_t27321462 * L_35 = __this->get_np_14();
			NullCheck(L_35);
			Vector3_t3525329789  L_36 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_35, 1);
			float L_37 = V_0;
			Vector3_t3525329789  L_38 = RiverTool_Cpoint_m2267032960(__this, L_34, L_36, ((-L_37)), /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_c2_2(L_38);
			V_1 = 1;
			V_2 = 0;
			V_3 = (0.0f);
			List_1_t514686775 * L_39 = __this->get_points_8();
			NullCheck(L_39);
			int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_39);
			V_4 = ((ColorU5BU5D_t3477081137*)SZArrayNew(ColorU5BU5D_t3477081137_il2cpp_TypeInfo_var, (uint32_t)L_40));
			V_5 = 0;
			goto IL_014e;
		}

IL_0123:
		{
			ColorU5BU5D_t3477081137* L_41 = V_4;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
			List_1_t514686775 * L_43 = __this->get_points_8();
			int32_t L_44 = V_5;
			NullCheck(L_43);
			GameObject_t4012695102 * L_45 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_43, L_44);
			NullCheck(L_45);
			CurvePoint_t131694081 * L_46 = GameObject_GetComponent_TisCurvePoint_t131694081_m556656347(L_45, /*hidden argument*/GameObject_GetComponent_TisCurvePoint_t131694081_m556656347_MethodInfo_var);
			NullCheck(L_46);
			Color_t1588175760  L_47 = L_46->get_color_4();
			(*(Color_t1588175760 *)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))) = L_47;
			int32_t L_48 = V_5;
			V_5 = ((int32_t)((int32_t)L_48+(int32_t)1));
		}

IL_014e:
		{
			int32_t L_49 = V_5;
			List_1_t514686775 * L_50 = __this->get_points_8();
			NullCheck(L_50);
			int32_t L_51 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_50);
			if ((((int32_t)L_49) < ((int32_t)L_51)))
			{
				goto IL_0123;
			}
		}

IL_015d:
		{
			List_1_t2385134729 * L_52 = __this->get_tempcolors_15();
			NullCheck(L_52);
			VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Clear() */, L_52);
			List_1_t2385134729 * L_53 = __this->get_tempcolors_15();
			ColorU5BU5D_t3477081137* L_54 = V_4;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
			NullCheck(L_53);
			VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_53, (*(Color_t1588175760 *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
			V_6 = 1;
			goto IL_02da;
		}

IL_0188:
		{
			int32_t L_55 = V_6;
			int32_t L_56 = __this->get_segment_3();
			if (((int32_t)((int32_t)L_55%(int32_t)L_56)))
			{
				goto IL_01b6;
			}
		}

IL_0193:
		{
			List_1_t2385134729 * L_57 = __this->get_tempcolors_15();
			ColorU5BU5D_t3477081137* L_58 = V_4;
			int32_t L_59 = V_1;
			NullCheck(L_58);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
			NullCheck(L_57);
			VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_57, (*(Color_t1588175760 *)((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))));
			int32_t L_60 = V_1;
			V_1 = ((int32_t)((int32_t)L_60+(int32_t)1));
			V_2 = 0;
			goto IL_023a;
		}

IL_01b6:
		{
			int32_t L_61 = V_2;
			V_2 = ((int32_t)((int32_t)L_61+(int32_t)1));
			int32_t L_62 = V_2;
			int32_t L_63 = __this->get_segment_3();
			V_3 = ((float)((float)(((float)((float)L_62)))/(float)(((float)((float)L_63)))));
			List_1_t2385134729 * L_64 = __this->get_tempcolors_15();
			ColorU5BU5D_t3477081137* L_65 = V_4;
			int32_t L_66 = V_1;
			NullCheck(L_65);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)L_66-(int32_t)1)));
			ColorU5BU5D_t3477081137* L_67 = V_4;
			int32_t L_68 = V_1;
			NullCheck(L_67);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
			float L_69 = V_3;
			Color_t1588175760  L_70 = Color_Lerp_m3494628845(NULL /*static, unused*/, (*(Color_t1588175760 *)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_66-(int32_t)1)))))), (*(Color_t1588175760 *)((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))), L_69, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_64, L_70);
			List_1_t514686775 * L_71 = __this->get_points_8();
			int32_t L_72 = V_1;
			NullCheck(L_71);
			GameObject_t4012695102 * L_73 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_71, ((int32_t)((int32_t)L_72-(int32_t)1)));
			NullCheck(L_73);
			Transform_t284553113 * L_74 = GameObject_get_transform_m1278640159(L_73, /*hidden argument*/NULL);
			NullCheck(L_74);
			Vector3_t3525329789  L_75 = Transform_get_localScale_m3886572677(L_74, /*hidden argument*/NULL);
			float L_76 = RiverTool_mag_m3279618806(__this, L_75, /*hidden argument*/NULL);
			List_1_t514686775 * L_77 = __this->get_points_8();
			int32_t L_78 = V_1;
			NullCheck(L_77);
			GameObject_t4012695102 * L_79 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_77, L_78);
			NullCheck(L_79);
			Transform_t284553113 * L_80 = GameObject_get_transform_m1278640159(L_79, /*hidden argument*/NULL);
			NullCheck(L_80);
			Vector3_t3525329789  L_81 = Transform_get_localScale_m3886572677(L_80, /*hidden argument*/NULL);
			float L_82 = RiverTool_mag_m3279618806(__this, L_81, /*hidden argument*/NULL);
			float L_83 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
			float L_84 = Mathf_SmoothStep_m1876640478(NULL /*static, unused*/, L_76, L_82, L_83, /*hidden argument*/NULL);
			float L_85 = __this->get_MeshWidth_4();
			V_0 = ((float)((float)L_84+(float)L_85));
		}

IL_023a:
		{
			List_1_t874251881 * L_86 = __this->get_P_9();
			Point_t77292912 * L_87 = (Point_t77292912 *)il2cpp_codegen_object_new(Point_t77292912_il2cpp_TypeInfo_var);
			Point__ctor_m1102953882(L_87, /*hidden argument*/NULL);
			NullCheck(L_86);
			VirtActionInvoker1< Point_t77292912 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Point>::Add(!0) */, L_86, L_87);
			List_1_t874251881 * L_88 = __this->get_P_9();
			int32_t L_89 = V_6;
			NullCheck(L_88);
			Point_t77292912 * L_90 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_88, L_89);
			List_1_t27321462 * L_91 = __this->get_np_14();
			int32_t L_92 = V_6;
			NullCheck(L_91);
			Vector3_t3525329789  L_93 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_91, L_92);
			NullCheck(L_90);
			L_90->set_p_0(L_93);
			List_1_t874251881 * L_94 = __this->get_P_9();
			int32_t L_95 = V_6;
			NullCheck(L_94);
			Point_t77292912 * L_96 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_94, L_95);
			List_1_t27321462 * L_97 = __this->get_np_14();
			int32_t L_98 = V_6;
			NullCheck(L_97);
			Vector3_t3525329789  L_99 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_97, L_98);
			List_1_t27321462 * L_100 = __this->get_np_14();
			int32_t L_101 = V_6;
			NullCheck(L_100);
			Vector3_t3525329789  L_102 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_100, ((int32_t)((int32_t)L_101+(int32_t)1)));
			float L_103 = V_0;
			Vector3_t3525329789  L_104 = RiverTool_Cpoint_m2267032960(__this, L_99, L_102, L_103, /*hidden argument*/NULL);
			NullCheck(L_96);
			L_96->set_c1_1(L_104);
			List_1_t874251881 * L_105 = __this->get_P_9();
			int32_t L_106 = V_6;
			NullCheck(L_105);
			Point_t77292912 * L_107 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_105, L_106);
			List_1_t27321462 * L_108 = __this->get_np_14();
			int32_t L_109 = V_6;
			NullCheck(L_108);
			Vector3_t3525329789  L_110 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_108, L_109);
			List_1_t27321462 * L_111 = __this->get_np_14();
			int32_t L_112 = V_6;
			NullCheck(L_111);
			Vector3_t3525329789  L_113 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_111, ((int32_t)((int32_t)L_112+(int32_t)1)));
			float L_114 = V_0;
			Vector3_t3525329789  L_115 = RiverTool_Cpoint_m2267032960(__this, L_110, L_113, ((-L_114)), /*hidden argument*/NULL);
			NullCheck(L_107);
			L_107->set_c2_2(L_115);
			int32_t L_116 = V_6;
			V_6 = ((int32_t)((int32_t)L_116+(int32_t)1));
		}

IL_02da:
		{
			int32_t L_117 = V_6;
			List_1_t27321462 * L_118 = __this->get_np_14();
			NullCheck(L_118);
			int32_t L_119 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_118);
			if ((((int32_t)L_117) < ((int32_t)((int32_t)((int32_t)L_119-(int32_t)1)))))
			{
				goto IL_0188;
			}
		}

IL_02ee:
		{
			List_1_t2385134729 * L_120 = __this->get_tempcolors_15();
			ColorU5BU5D_t3477081137* L_121 = V_4;
			ColorU5BU5D_t3477081137* L_122 = V_4;
			NullCheck(L_122);
			NullCheck(L_121);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_121, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_122)->max_length))))-(int32_t)1)));
			NullCheck(L_120);
			VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_120, (*(Color_t1588175760 *)((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_122)->max_length))))-(int32_t)1)))))));
			List_1_t874251881 * L_123 = __this->get_P_9();
			Point_t77292912 * L_124 = (Point_t77292912 *)il2cpp_codegen_object_new(Point_t77292912_il2cpp_TypeInfo_var);
			Point__ctor_m1102953882(L_124, /*hidden argument*/NULL);
			NullCheck(L_123);
			VirtActionInvoker1< Point_t77292912 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Point>::Add(!0) */, L_123, L_124);
			List_1_t874251881 * L_125 = __this->get_P_9();
			List_1_t874251881 * L_126 = __this->get_P_9();
			NullCheck(L_126);
			int32_t L_127 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_126);
			NullCheck(L_125);
			Point_t77292912 * L_128 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_125, ((int32_t)((int32_t)L_127-(int32_t)1)));
			List_1_t27321462 * L_129 = __this->get_np_14();
			List_1_t27321462 * L_130 = __this->get_np_14();
			NullCheck(L_130);
			int32_t L_131 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_130);
			NullCheck(L_129);
			Vector3_t3525329789  L_132 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_129, ((int32_t)((int32_t)L_131-(int32_t)1)));
			NullCheck(L_128);
			L_128->set_p_0(L_132);
			List_1_t874251881 * L_133 = __this->get_P_9();
			List_1_t874251881 * L_134 = __this->get_P_9();
			NullCheck(L_134);
			int32_t L_135 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_134);
			NullCheck(L_133);
			Point_t77292912 * L_136 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_133, ((int32_t)((int32_t)L_135-(int32_t)1)));
			List_1_t27321462 * L_137 = __this->get_np_14();
			List_1_t27321462 * L_138 = __this->get_np_14();
			NullCheck(L_138);
			int32_t L_139 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_138);
			NullCheck(L_137);
			Vector3_t3525329789  L_140 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_137, ((int32_t)((int32_t)L_139-(int32_t)1)));
			List_1_t27321462 * L_141 = __this->get_np_14();
			List_1_t27321462 * L_142 = __this->get_np_14();
			NullCheck(L_142);
			int32_t L_143 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_142);
			NullCheck(L_141);
			Vector3_t3525329789  L_144 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_141, ((int32_t)((int32_t)L_143-(int32_t)2)));
			float L_145 = V_0;
			Vector3_t3525329789  L_146 = RiverTool_Cpoint_m2267032960(__this, L_140, L_144, ((-L_145)), /*hidden argument*/NULL);
			NullCheck(L_136);
			L_136->set_c1_1(L_146);
			List_1_t874251881 * L_147 = __this->get_P_9();
			List_1_t874251881 * L_148 = __this->get_P_9();
			NullCheck(L_148);
			int32_t L_149 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_148);
			NullCheck(L_147);
			Point_t77292912 * L_150 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_147, ((int32_t)((int32_t)L_149-(int32_t)1)));
			List_1_t27321462 * L_151 = __this->get_np_14();
			List_1_t27321462 * L_152 = __this->get_np_14();
			NullCheck(L_152);
			int32_t L_153 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_152);
			NullCheck(L_151);
			Vector3_t3525329789  L_154 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_151, ((int32_t)((int32_t)L_153-(int32_t)1)));
			List_1_t27321462 * L_155 = __this->get_np_14();
			List_1_t27321462 * L_156 = __this->get_np_14();
			NullCheck(L_156);
			int32_t L_157 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count() */, L_156);
			NullCheck(L_155);
			Vector3_t3525329789  L_158 = VirtFuncInvoker1< Vector3_t3525329789 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32) */, L_155, ((int32_t)((int32_t)L_157-(int32_t)2)));
			float L_159 = V_0;
			Vector3_t3525329789  L_160 = RiverTool_Cpoint_m2267032960(__this, L_154, L_158, L_159, /*hidden argument*/NULL);
			NullCheck(L_150);
			L_150->set_c2_2(L_160);
			goto IL_03fe;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t3760259642_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_03fb;
		throw e;
	}

CATCH_03fb:
	{ // begin catch(System.IndexOutOfRangeException)
		goto IL_03fe;
	} // end catch (depth: 1)

IL_03fe:
	{
		return;
	}
}
// System.Single RiverTool::mag(UnityEngine.Vector3)
extern "C"  float RiverTool_mag_m3279618806 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___v, const MethodInfo* method)
{
	{
		float L_0 = (&___v)->get_x_1();
		float L_1 = (&___v)->get_y_2();
		float L_2 = (&___v)->get_z_3();
		return ((float)((float)((float)((float)((float)((float)L_0+(float)L_1))+(float)L_2))/(float)(3.0f)));
	}
}
// UnityEngine.Vector3 RiverTool::Cpoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  RiverTool_Cpoint_m2267032960 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___A, Vector3_t3525329789  ___B, float ___D, const MethodInfo* method)
{
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3525329789  L_0 = ___A;
		Vector3_t3525329789  L_1 = ___B;
		Vector3_t3525329789  L_2 = ___A;
		Vector3_t3525329789  L_3 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = Vector3_Cross_m2894122475(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t3525329789  L_6 = Vector3_get_normalized_m2650940353((&V_1), /*hidden argument*/NULL);
		float L_7 = ___D;
		Vector3_t3525329789  L_8 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3525329789  L_9 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_0, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Vector3_t3525329789  L_10 = V_0;
		return L_10;
	}
}
// System.Void RiverTool::makeMesh()
extern const MethodInfo* List_1_ToArray_m3432390055_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m494705347_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3725793062_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3803983546_MethodInfo_var;
extern const uint32_t RiverTool_makeMesh_m691862457_MetadataUsageId;
extern "C"  void RiverTool_makeMesh_m691862457 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool_makeMesh_m691862457_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t27321462 * L_0 = __this->get_verts_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_0);
		List_1_t3644373756 * L_1 = __this->get_tris_12();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Int32>::Clear() */, L_1);
		List_1_t27321462 * L_2 = __this->get_norms_17();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear() */, L_2);
		List_1_t27321461 * L_3 = __this->get_uvs_18();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear() */, L_3);
		List_1_t2385134729 * L_4 = __this->get_colors_16();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Clear() */, L_4);
		List_1_t874251881 * L_5 = __this->get_P_9();
		NullCheck(L_5);
		Point_t77292912 * L_6 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_5, 0);
		List_1_t874251881 * L_7 = __this->get_P_9();
		NullCheck(L_7);
		Point_t77292912 * L_8 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_7, 1);
		RiverTool_calculatePlane_m2638207408(__this, L_6, L_8, 0, (bool)1, /*hidden argument*/NULL);
		V_0 = 1;
		goto IL_0083;
	}

IL_005b:
	{
		List_1_t874251881 * L_9 = __this->get_P_9();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Point_t77292912 * L_11 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_9, L_10);
		List_1_t874251881 * L_12 = __this->get_P_9();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Point_t77292912 * L_14 = VirtFuncInvoker1< Point_t77292912 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32) */, L_12, ((int32_t)((int32_t)L_13+(int32_t)1)));
		int32_t L_15 = V_0;
		RiverTool_calculatePlane_m2638207408(__this, L_11, L_14, ((int32_t)((int32_t)L_15*(int32_t)2)), (bool)0, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_17 = V_0;
		List_1_t874251881 * L_18 = __this->get_P_9();
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Point>::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)L_19-(int32_t)1)))))
		{
			goto IL_005b;
		}
	}
	{
		Mesh_t1525280346 * L_20 = __this->get_mesh_19();
		bool L_21 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_20, (Object_t3878351788 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		return;
	}

IL_00a2:
	{
		Mesh_t1525280346 * L_22 = __this->get_mesh_19();
		NullCheck(L_22);
		Mesh_Clear_m90337099(L_22, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_23 = __this->get_mesh_19();
		List_1_t27321462 * L_24 = __this->get_verts_11();
		NullCheck(L_24);
		Vector3U5BU5D_t3227571696* L_25 = List_1_ToArray_m3432390055(L_24, /*hidden argument*/List_1_ToArray_m3432390055_MethodInfo_var);
		NullCheck(L_23);
		Mesh_set_vertices_m2628866109(L_23, L_25, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_26 = __this->get_mesh_19();
		List_1_t3644373756 * L_27 = __this->get_tris_12();
		NullCheck(L_27);
		Int32U5BU5D_t1809983122* L_28 = List_1_ToArray_m494705347(L_27, /*hidden argument*/List_1_ToArray_m494705347_MethodInfo_var);
		NullCheck(L_26);
		Mesh_set_triangles_m2341339867(L_26, L_28, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_29 = __this->get_mesh_19();
		NullCheck(L_29);
		Mesh_RecalculateBounds_m3754336742(L_29, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_30 = __this->get_mesh_19();
		NullCheck(L_30);
		Mesh_RecalculateNormals_m1806625021(L_30, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_31 = __this->get_mesh_19();
		List_1_t27321461 * L_32 = __this->get_uvs_18();
		NullCheck(L_32);
		Vector2U5BU5D_t2741383957* L_33 = List_1_ToArray_m3725793062(L_32, /*hidden argument*/List_1_ToArray_m3725793062_MethodInfo_var);
		NullCheck(L_31);
		Mesh_set_uv_m498907190(L_31, L_33, /*hidden argument*/NULL);
		Mesh_t1525280346 * L_34 = __this->get_mesh_19();
		List_1_t2385134729 * L_35 = __this->get_colors_16();
		NullCheck(L_35);
		ColorU5BU5D_t3477081137* L_36 = List_1_ToArray_m3803983546(L_35, /*hidden argument*/List_1_ToArray_m3803983546_MethodInfo_var);
		NullCheck(L_34);
		Mesh_set_colors_m1701609395(L_34, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiverTool::calculatePlane(Point,Point,System.Int32,System.Boolean)
extern "C"  void RiverTool_calculatePlane_m2638207408 (RiverTool_t774771108 * __this, Point_t77292912 * ____P1, Point_t77292912 * ____P2, int32_t ___i, bool ___isFirst, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		bool L_0 = ___isFirst;
		if (!L_0)
		{
			goto IL_0172;
		}
	}
	{
		List_1_t27321462 * L_1 = __this->get_verts_11();
		Point_t77292912 * L_2 = ____P1;
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = L_2->get_c1_1();
		NullCheck(L_1);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_1, L_3);
		List_1_t27321462 * L_4 = __this->get_verts_11();
		Point_t77292912 * L_5 = ____P1;
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = L_5->get_c2_2();
		NullCheck(L_4);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_4, L_6);
		List_1_t27321462 * L_7 = __this->get_verts_11();
		Point_t77292912 * L_8 = ____P2;
		NullCheck(L_8);
		Vector3_t3525329789  L_9 = L_8->get_c1_1();
		NullCheck(L_7);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_7, L_9);
		List_1_t27321462 * L_10 = __this->get_verts_11();
		Point_t77292912 * L_11 = ____P2;
		NullCheck(L_11);
		Vector3_t3525329789  L_12 = L_11->get_c2_2();
		NullCheck(L_10);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_10, L_12);
		int32_t L_13 = ___i;
		V_0 = ((int32_t)((int32_t)L_13/(int32_t)4));
		int32_t L_14 = __this->get_segment_3();
		V_1 = (((float)((float)((float)((float)(1.0f)/(float)(((float)((float)L_14))))))));
		int32_t L_15 = V_0;
		float L_16 = V_1;
		V_2 = ((float)((float)(((float)((float)L_15)))*(float)L_16));
		List_1_t27321461 * L_17 = __this->get_uvs_18();
		float L_18 = V_2;
		Vector2_t3525329788  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_m1517109030(&L_19, L_18, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_17, L_19);
		List_1_t27321461 * L_20 = __this->get_uvs_18();
		float L_21 = V_2;
		Vector2_t3525329788  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector2__ctor_m1517109030(&L_22, L_21, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_20, L_22);
		List_1_t27321461 * L_23 = __this->get_uvs_18();
		float L_24 = V_2;
		float L_25 = V_1;
		Vector2_t3525329788  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m1517109030(&L_26, ((float)((float)L_24+(float)L_25)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_23, L_26);
		List_1_t27321461 * L_27 = __this->get_uvs_18();
		float L_28 = V_2;
		float L_29 = V_1;
		Vector2_t3525329788  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2__ctor_m1517109030(&L_30, ((float)((float)L_28+(float)L_29)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_27, L_30);
		List_1_t2385134729 * L_31 = __this->get_colors_16();
		List_1_t2385134729 * L_32 = __this->get_tempcolors_15();
		int32_t L_33 = V_0;
		NullCheck(L_32);
		Color_t1588175760  L_34 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_32, L_33);
		NullCheck(L_31);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_31, L_34);
		List_1_t2385134729 * L_35 = __this->get_colors_16();
		List_1_t2385134729 * L_36 = __this->get_tempcolors_15();
		int32_t L_37 = V_0;
		NullCheck(L_36);
		Color_t1588175760  L_38 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_35);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_35, L_38);
		List_1_t2385134729 * L_39 = __this->get_colors_16();
		List_1_t2385134729 * L_40 = __this->get_tempcolors_15();
		int32_t L_41 = V_0;
		NullCheck(L_40);
		Color_t1588175760  L_42 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_40, ((int32_t)((int32_t)L_41+(int32_t)1)));
		NullCheck(L_39);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_39, L_42);
		List_1_t2385134729 * L_43 = __this->get_colors_16();
		List_1_t2385134729 * L_44 = __this->get_tempcolors_15();
		int32_t L_45 = V_0;
		NullCheck(L_44);
		Color_t1588175760  L_46 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_44, ((int32_t)((int32_t)L_45+(int32_t)1)));
		NullCheck(L_43);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_43, L_46);
		List_1_t3644373756 * L_47 = __this->get_tris_12();
		int32_t L_48 = ___i;
		NullCheck(L_47);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_47, L_48);
		List_1_t3644373756 * L_49 = __this->get_tris_12();
		int32_t L_50 = ___i;
		NullCheck(L_49);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_49, ((int32_t)((int32_t)L_50+(int32_t)2)));
		List_1_t3644373756 * L_51 = __this->get_tris_12();
		int32_t L_52 = ___i;
		NullCheck(L_51);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_51, ((int32_t)((int32_t)L_52+(int32_t)1)));
		List_1_t3644373756 * L_53 = __this->get_tris_12();
		int32_t L_54 = ___i;
		NullCheck(L_53);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_53, ((int32_t)((int32_t)L_54+(int32_t)1)));
		List_1_t3644373756 * L_55 = __this->get_tris_12();
		int32_t L_56 = ___i;
		NullCheck(L_55);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_55, ((int32_t)((int32_t)L_56+(int32_t)2)));
		List_1_t3644373756 * L_57 = __this->get_tris_12();
		int32_t L_58 = ___i;
		NullCheck(L_57);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		return;
	}

IL_0172:
	{
		List_1_t27321462 * L_59 = __this->get_verts_11();
		Point_t77292912 * L_60 = ____P2;
		NullCheck(L_60);
		Vector3_t3525329789  L_61 = L_60->get_c1_1();
		NullCheck(L_59);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_59, L_61);
		List_1_t27321462 * L_62 = __this->get_verts_11();
		Point_t77292912 * L_63 = ____P2;
		NullCheck(L_63);
		Vector3_t3525329789  L_64 = L_63->get_c2_2();
		NullCheck(L_62);
		VirtActionInvoker1< Vector3_t3525329789  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0) */, L_62, L_64);
		int32_t L_65 = ___i;
		V_3 = ((int32_t)((int32_t)L_65/(int32_t)2));
		int32_t L_66 = __this->get_segment_3();
		V_4 = (((float)((float)((float)((float)(1.0f)/(float)(((float)((float)L_66))))))));
		int32_t L_67 = V_3;
		float L_68 = V_4;
		V_5 = ((float)((float)(((float)((float)L_67)))*(float)L_68));
		List_1_t27321461 * L_69 = __this->get_uvs_18();
		float L_70 = V_5;
		float L_71 = V_4;
		Vector2_t3525329788  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector2__ctor_m1517109030(&L_72, ((float)((float)L_70+(float)L_71)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_69, L_72);
		List_1_t27321461 * L_73 = __this->get_uvs_18();
		float L_74 = V_5;
		float L_75 = V_4;
		Vector2_t3525329788  L_76;
		memset(&L_76, 0, sizeof(L_76));
		Vector2__ctor_m1517109030(&L_76, ((float)((float)L_74+(float)L_75)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_73);
		VirtActionInvoker1< Vector2_t3525329788  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0) */, L_73, L_76);
		List_1_t2385134729 * L_77 = __this->get_colors_16();
		List_1_t2385134729 * L_78 = __this->get_tempcolors_15();
		int32_t L_79 = V_3;
		NullCheck(L_78);
		Color_t1588175760  L_80 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_78, ((int32_t)((int32_t)L_79+(int32_t)1)));
		NullCheck(L_77);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_77, L_80);
		List_1_t2385134729 * L_81 = __this->get_colors_16();
		List_1_t2385134729 * L_82 = __this->get_tempcolors_15();
		int32_t L_83 = V_3;
		NullCheck(L_82);
		Color_t1588175760  L_84 = VirtFuncInvoker1< Color_t1588175760 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, L_82, ((int32_t)((int32_t)L_83+(int32_t)1)));
		NullCheck(L_81);
		VirtActionInvoker1< Color_t1588175760  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0) */, L_81, L_84);
		List_1_t3644373756 * L_85 = __this->get_tris_12();
		int32_t L_86 = ___i;
		NullCheck(L_85);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_85, L_86);
		List_1_t3644373756 * L_87 = __this->get_tris_12();
		int32_t L_88 = ___i;
		NullCheck(L_87);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_87, ((int32_t)((int32_t)L_88+(int32_t)2)));
		List_1_t3644373756 * L_89 = __this->get_tris_12();
		int32_t L_90 = ___i;
		NullCheck(L_89);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_89, ((int32_t)((int32_t)L_90+(int32_t)1)));
		List_1_t3644373756 * L_91 = __this->get_tris_12();
		int32_t L_92 = ___i;
		NullCheck(L_91);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_91, ((int32_t)((int32_t)L_92+(int32_t)1)));
		List_1_t3644373756 * L_93 = __this->get_tris_12();
		int32_t L_94 = ___i;
		NullCheck(L_93);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_93, ((int32_t)((int32_t)L_94+(int32_t)2)));
		List_1_t3644373756 * L_95 = __this->get_tris_12();
		int32_t L_96 = ___i;
		NullCheck(L_95);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_95, ((int32_t)((int32_t)L_96+(int32_t)3)));
		return;
	}
}
// UnityEngine.Vector3 RiverTool::getNormal(Point,Point)
extern "C"  Vector3_t3525329789  RiverTool_getNormal_m3650471331 (RiverTool_t774771108 * __this, Point_t77292912 * ___p1, Point_t77292912 * ___p2, const MethodInfo* method)
{
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Point_t77292912 * L_0 = ___p1;
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = L_0->get_c1_1();
		Point_t77292912 * L_2 = ___p1;
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = L_2->get_c2_2();
		Vector3_t3525329789  L_4 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		Point_t77292912 * L_5 = ___p1;
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = L_5->get_c1_1();
		Point_t77292912 * L_7 = ___p2;
		NullCheck(L_7);
		Vector3_t3525329789  L_8 = L_7->get_c1_1();
		Vector3_t3525329789  L_9 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = Vector3_Cross_m2894122475(NULL /*static, unused*/, L_4, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t3525329789  L_11 = Vector3_get_normalized_m2650940353((&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t3525329789  L_12 = V_0;
		return L_12;
	}
}
// System.Void RiverTool::.ctor()
extern TypeInfo* List_1_t514686775_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t874251881_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t27321462_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t3644373756_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2385134729_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t27321461_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3330911122_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3807442832_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3666403801_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1339192537_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2230804268_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1168387864_MethodInfo_var;
extern const uint32_t RiverTool__ctor_m816312422_MetadataUsageId;
extern "C"  void RiverTool__ctor_m816312422 (RiverTool_t774771108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RiverTool__ctor_m816312422_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_Smoothness_2((1.0f));
		__this->set_segment_3(2);
		__this->set_MeshWidth_4((1.0f));
		__this->set_showGizmos_5((bool)1);
		__this->set_gizmoSize_6((1.0f));
		__this->set_UpdateMesh_7((bool)1);
		List_1_t514686775 * L_0 = (List_1_t514686775 *)il2cpp_codegen_object_new(List_1_t514686775_il2cpp_TypeInfo_var);
		List_1__ctor_m3330911122(L_0, /*hidden argument*/List_1__ctor_m3330911122_MethodInfo_var);
		__this->set_points_8(L_0);
		List_1_t874251881 * L_1 = (List_1_t874251881 *)il2cpp_codegen_object_new(List_1_t874251881_il2cpp_TypeInfo_var);
		List_1__ctor_m3807442832(L_1, /*hidden argument*/List_1__ctor_m3807442832_MethodInfo_var);
		__this->set_P_9(L_1);
		List_1_t27321462 * L_2 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_2, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_verts_11(L_2);
		List_1_t3644373756 * L_3 = (List_1_t3644373756 *)il2cpp_codegen_object_new(List_1_t3644373756_il2cpp_TypeInfo_var);
		List_1__ctor_m1339192537(L_3, /*hidden argument*/List_1__ctor_m1339192537_MethodInfo_var);
		__this->set_tris_12(L_3);
		Vector2_t3525329788  L_4 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_riverOffset_13(L_4);
		List_1_t27321462 * L_5 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_5, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_np_14(L_5);
		List_1_t2385134729 * L_6 = (List_1_t2385134729 *)il2cpp_codegen_object_new(List_1_t2385134729_il2cpp_TypeInfo_var);
		List_1__ctor_m2230804268(L_6, /*hidden argument*/List_1__ctor_m2230804268_MethodInfo_var);
		__this->set_tempcolors_15(L_6);
		List_1_t2385134729 * L_7 = (List_1_t2385134729 *)il2cpp_codegen_object_new(List_1_t2385134729_il2cpp_TypeInfo_var);
		List_1__ctor_m2230804268(L_7, /*hidden argument*/List_1__ctor_m2230804268_MethodInfo_var);
		__this->set_colors_16(L_7);
		List_1_t27321462 * L_8 = (List_1_t27321462 *)il2cpp_codegen_object_new(List_1_t27321462_il2cpp_TypeInfo_var);
		List_1__ctor_m3666403801(L_8, /*hidden argument*/List_1__ctor_m3666403801_MethodInfo_var);
		__this->set_norms_17(L_8);
		List_1_t27321461 * L_9 = (List_1_t27321461 *)il2cpp_codegen_object_new(List_1_t27321461_il2cpp_TypeInfo_var);
		List_1__ctor_m1168387864(L_9, /*hidden argument*/List_1__ctor_m1168387864_MethodInfo_var);
		__this->set_uvs_18(L_9);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
