﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084.h"
#include "UnityEngine_UnityEngine_ForceMode2D2553924141.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t3525329788  Rigidbody2D_get_velocity_m416159605 (Rigidbody2D_t3632243084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m100625302 (Rigidbody2D_t3632243084 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_get_velocity_m715507538 (Rigidbody2D_t3632243084 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m136509638 (Rigidbody2D_t3632243084 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C"  float Rigidbody2D_get_angularVelocity_m3714473050 (Rigidbody2D_t3632243084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C"  void Rigidbody2D_set_angularVelocity_m1393720209 (Rigidbody2D_t3632243084 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody2D_set_isKinematic_m222467693 (Rigidbody2D_t3632243084 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody2D::IsSleeping()
extern "C"  bool Rigidbody2D_IsSleeping_m4134977273 (Rigidbody2D_t3632243084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::Sleep()
extern "C"  void Rigidbody2D_Sleep_m1892894479 (Rigidbody2D_t3632243084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::WakeUp()
extern "C"  void Rigidbody2D_WakeUp_m224894601 (Rigidbody2D_t3632243084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m312397382 (Rigidbody2D_t3632243084 * __this, Vector2_t3525329788  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m2763823108 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t3632243084 * ___self, Vector2_t3525329788 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
