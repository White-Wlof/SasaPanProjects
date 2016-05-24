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

// RiverTool
struct RiverTool_t774771108;
// System.String
struct String_t;
// Point
struct Point_t77292912;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "RiverTools_Point77292912.h"

// System.Void RiverTool::Start()
extern "C"  void RiverTool_Start_m4058417510 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RiverTool::getSceneName()
extern "C"  String_t* RiverTool_getSceneName_m1534901308 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::init()
extern "C"  void RiverTool_init_m3387854094 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::OnDrawGizmos()
extern "C"  void RiverTool_OnDrawGizmos_m2068578810 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::drawNormal()
extern "C"  void RiverTool_drawNormal_m3311101641 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::drawGizmos(UnityEngine.Vector3,Point,Point)
extern "C"  void RiverTool_drawGizmos_m3168624982 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___p, Point_t77292912 * ___A, Point_t77292912 * ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::Update()
extern "C"  void RiverTool_Update_m1262743399 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::getPfromNP()
extern "C"  void RiverTool_getPfromNP_m780210148 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RiverTool::mag(UnityEngine.Vector3)
extern "C"  float RiverTool_mag_m3279618806 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 RiverTool::Cpoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  RiverTool_Cpoint_m2267032960 (RiverTool_t774771108 * __this, Vector3_t3525329789  ___A, Vector3_t3525329789  ___B, float ___D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::makeMesh()
extern "C"  void RiverTool_makeMesh_m691862457 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::calculatePlane(Point,Point,System.Int32,System.Boolean)
extern "C"  void RiverTool_calculatePlane_m2638207408 (RiverTool_t774771108 * __this, Point_t77292912 * ____P1, Point_t77292912 * ____P2, int32_t ___i, bool ___isFirst, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 RiverTool::getNormal(Point,Point)
extern "C"  Vector3_t3525329789  RiverTool_getNormal_m3650471331 (RiverTool_t774771108 * __this, Point_t77292912 * ___p1, Point_t77292912 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RiverTool::.ctor()
extern "C"  void RiverTool__ctor_m816312422 (RiverTool_t774771108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
