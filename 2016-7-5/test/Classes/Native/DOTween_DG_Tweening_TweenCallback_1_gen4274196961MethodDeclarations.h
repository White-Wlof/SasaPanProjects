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

// DG.Tweening.TweenCallback`1<System.Single>
struct TweenCallback_1_t4274196961;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void DG.Tweening.TweenCallback`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m3893537363_gshared (TweenCallback_1_t4274196961 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define TweenCallback_1__ctor_m3893537363(__this, ___object, ___method, method) ((  void (*) (TweenCallback_1_t4274196961 *, Il2CppObject *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m3893537363_gshared)(__this, ___object, ___method, method)
// System.Void DG.Tweening.TweenCallback`1<System.Single>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m2871851665_gshared (TweenCallback_1_t4274196961 * __this, float ___value, const MethodInfo* method);
#define TweenCallback_1_Invoke_m2871851665(__this, ___value, method) ((  void (*) (TweenCallback_1_t4274196961 *, float, const MethodInfo*))TweenCallback_1_Invoke_m2871851665_gshared)(__this, ___value, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_1_BeginInvoke_m3059728734_gshared (TweenCallback_1_t4274196961 * __this, float ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m3059728734(__this, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (TweenCallback_1_t4274196961 *, float, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_BeginInvoke_m3059728734_gshared)(__this, ___value, ___callback, ___object, method)
// System.Void DG.Tweening.TweenCallback`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m1361460707_gshared (TweenCallback_1_t4274196961 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m1361460707(__this, ___result, method) ((  void (*) (TweenCallback_1_t4274196961 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_EndInvoke_m1361460707_gshared)(__this, ___result, method)
