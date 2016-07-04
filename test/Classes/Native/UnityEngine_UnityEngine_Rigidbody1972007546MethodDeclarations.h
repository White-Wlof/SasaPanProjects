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

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_ForceMode759713627.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t3525329789  Rigidbody_get_velocity_m2696244068 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m799562119 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1063590501 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m484592601 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C"  Vector3_t3525329789  Rigidbody_get_angularVelocity_m1572208282 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m3510265645 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_angularVelocity_m3705279231 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1952192267 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_mass()
extern "C"  float Rigidbody_get_mass_m3953106025 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
extern "C"  void Rigidbody_set_mass_m1579962594 (Rigidbody_t1972007546 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C"  void Rigidbody_set_useGravity_m2620827635 (Rigidbody_t1972007546 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m294703295 (Rigidbody_t1972007546 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3682301239 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Vector3_t3525329789 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void Rigidbody_AddExplosionForce_m2669187207 (Rigidbody_t1972007546 * __this, float ___explosionForce, Vector3_t3525329789  ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddExplosionForce_m3109367769 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, float ___explosionForce, Vector3_t3525329789 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t3525329789  Rigidbody_get_position_m1751901360 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m428733873 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C"  Quaternion_t1891715979  Rigidbody_get_rotation_m3846953477 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m1932073294 (Rigidbody_t1972007546 * __this, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m1515094375 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_CALL_MovePosition_m2416276686 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Vector3_t3525329789 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m38358738 (Rigidbody_t1972007546 * __this, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_CALL_MoveRotation_m4110814929 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Quaternion_t1891715979 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C"  void Rigidbody_Sleep_m4049131361 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C"  void Rigidbody_INTERNAL_CALL_Sleep_m1292822714 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
extern "C"  bool Rigidbody_IsSleeping_m435617895 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::INTERNAL_CALL_IsSleeping(UnityEngine.Rigidbody)
extern "C"  bool Rigidbody_INTERNAL_CALL_IsSleeping_m4112513622 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::WakeUp()
extern "C"  void Rigidbody_WakeUp_m2643728503 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_WakeUp(UnityEngine.Rigidbody)
extern "C"  void Rigidbody_INTERNAL_CALL_WakeUp_m2627563334 (Il2CppObject * __this /* static, unused */, Rigidbody_t1972007546 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
