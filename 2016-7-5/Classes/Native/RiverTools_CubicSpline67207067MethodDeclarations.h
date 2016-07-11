#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CubicSpline
struct CubicSpline_t67207067;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void CubicSpline::.ctor(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Int32,System.Single,System.Boolean)
extern "C"  void CubicSpline__ctor_m3896546124 (CubicSpline_t67207067 * __this, List_1_t514686775 * ____cp, int32_t ____segment, float ____smoothness, bool ____isLocal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::updateSmoothness(System.Single)
extern "C"  void CubicSpline_updateSmoothness_m4030420136 (CubicSpline_t67207067 * __this, float ____smoothness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::updateSegment(System.Int32)
extern "C"  void CubicSpline_updateSegment_m3471439432 (CubicSpline_t67207067 * __this, int32_t ____seg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::updatePointsByGameobjects(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  void CubicSpline_updatePointsByGameobjects_m1608620878 (CubicSpline_t67207067 * __this, List_1_t514686775 * ____cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetCubicPoints()
extern "C"  List_1_t27321462 * CubicSpline_GetCubicPoints_m1833109584 (CubicSpline_t67207067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetLinearPoints()
extern "C"  List_1_t27321462 * CubicSpline_GetLinearPoints_m1867535847 (CubicSpline_t67207067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> CubicSpline::GetBazierPoints(System.Single)
extern "C"  List_1_t27321462 * CubicSpline_GetBazierPoints_m675329838 (CubicSpline_t67207067 * __this, float ____smoothness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::calculateLP()
extern "C"  void CubicSpline_calculateLP_m835076023 (CubicSpline_t67207067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::calculateBP()
extern "C"  void CubicSpline_calculateBP_m834778113 (CubicSpline_t67207067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CubicSpline::Linear(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  CubicSpline_Linear_m634855761 (CubicSpline_t67207067 * __this, Vector3_t3525329789  ___p0, Vector3_t3525329789  ___p1, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicSpline::calculateNP()
extern "C"  void CubicSpline_calculateNP_m835135605 (CubicSpline_t67207067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 CubicSpline::BinomCoefficient(System.Int64,System.Int64)
extern "C"  int64_t CubicSpline_BinomCoefficient_m1799399794 (Il2CppObject * __this /* static, unused */, int64_t ___n, int64_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CubicSpline::QuadraticN(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
extern "C"  Vector3_t3525329789  CubicSpline_QuadraticN_m878351283 (CubicSpline_t67207067 * __this, List_1_t27321462 * ___p, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
