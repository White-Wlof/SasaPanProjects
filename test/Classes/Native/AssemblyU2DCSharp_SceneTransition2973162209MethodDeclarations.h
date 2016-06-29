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

// SceneTransition
struct SceneTransition_t2973162209;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// System.Void SceneTransition::.ctor()
extern "C"  void SceneTransition__ctor_m1553111466 (SceneTransition_t2973162209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransition::Load(System.String)
extern "C"  void SceneTransition_Load_m4064025922 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransition::LoadAddtive(System.String)
extern "C"  void SceneTransition_LoadAddtive_m400617563 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransition::waitLoading(UnityEngine.MonoBehaviour,System.String)
extern "C"  void SceneTransition_waitLoading_m1950078076 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t3012272455 * ___m, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneTransition::UnLoad(System.String)
extern "C"  void SceneTransition_UnLoad_m2883420201 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneTransition::LoadNext(System.String)
extern "C"  Il2CppObject * SceneTransition_LoadNext_m4070019991 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
