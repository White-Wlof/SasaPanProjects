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

// ButtonTransition
struct ButtonTransition_t85581383;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ButtonTransition::.ctor()
extern "C"  void ButtonTransition__ctor_m4292044852 (ButtonTransition_t85581383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ButtonTransition::sceneTransition(System.String)
extern "C"  void ButtonTransition_sceneTransition_m1673445103 (ButtonTransition_t85581383 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ButtonTransition::sceneTransitionAdditive(System.String)
extern "C"  void ButtonTransition_sceneTransitionAdditive_m2768640899 (ButtonTransition_t85581383 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ButtonTransition::sceneTransitionLoading(System.String)
extern "C"  void ButtonTransition_sceneTransitionLoading_m522010615 (ButtonTransition_t85581383 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ButtonTransition::LoadNext(System.String)
extern "C"  Il2CppObject * ButtonTransition_LoadNext_m1641786001 (ButtonTransition_t85581383 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
