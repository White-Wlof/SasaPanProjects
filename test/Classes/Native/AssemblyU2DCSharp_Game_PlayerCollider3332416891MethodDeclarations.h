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

// Game.PlayerCollider
struct PlayerCollider_t3332416891;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void Game.PlayerCollider::.ctor()
extern "C"  void PlayerCollider__ctor_m3022094106 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::Start()
extern "C"  void PlayerCollider_Start_m1969231898 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionEnter_m2184665320 (PlayerCollider_t3332416891 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnCollisionStay(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionStay_m1118703923 (PlayerCollider_t3332416891 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
