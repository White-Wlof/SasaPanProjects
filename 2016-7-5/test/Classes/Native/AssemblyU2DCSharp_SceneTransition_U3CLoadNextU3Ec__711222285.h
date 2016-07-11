#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3374395064;
struct AsyncOperation_t3374395064_marshaled_pinvoke;
// LoadingManager
struct LoadingManager_t3564041969;
// SoundManager
struct SoundManager_t2444342206;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneTransition/<LoadNext>c__Iterator16
struct  U3CLoadNextU3Ec__Iterator16_t711222285  : public Il2CppObject
{
public:
	// System.Single SceneTransition/<LoadNext>c__Iterator16::<timer>__0
	float ___U3CtimerU3E__0_0;
	// System.String SceneTransition/<LoadNext>c__Iterator16::sceneName
	String_t* ___sceneName_1;
	// UnityEngine.AsyncOperation SceneTransition/<LoadNext>c__Iterator16::<async>__1
	AsyncOperation_t3374395064 * ___U3CasyncU3E__1_2;
	// LoadingManager SceneTransition/<LoadNext>c__Iterator16::<loadingAnim>__2
	LoadingManager_t3564041969 * ___U3CloadingAnimU3E__2_3;
	// SoundManager SceneTransition/<LoadNext>c__Iterator16::<sound>__3
	SoundManager_t2444342206 * ___U3CsoundU3E__3_4;
	// System.Int32 SceneTransition/<LoadNext>c__Iterator16::$PC
	int32_t ___U24PC_5;
	// System.Object SceneTransition/<LoadNext>c__Iterator16::$current
	Il2CppObject * ___U24current_6;
	// System.String SceneTransition/<LoadNext>c__Iterator16::<$>sceneName
	String_t* ___U3CU24U3EsceneName_7;

public:
	inline static int32_t get_offset_of_U3CtimerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U3CtimerU3E__0_0)); }
	inline float get_U3CtimerU3E__0_0() const { return ___U3CtimerU3E__0_0; }
	inline float* get_address_of_U3CtimerU3E__0_0() { return &___U3CtimerU3E__0_0; }
	inline void set_U3CtimerU3E__0_0(float value)
	{
		___U3CtimerU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_sceneName_1() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___sceneName_1)); }
	inline String_t* get_sceneName_1() const { return ___sceneName_1; }
	inline String_t** get_address_of_sceneName_1() { return &___sceneName_1; }
	inline void set_sceneName_1(String_t* value)
	{
		___sceneName_1 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_1, value);
	}

	inline static int32_t get_offset_of_U3CasyncU3E__1_2() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U3CasyncU3E__1_2)); }
	inline AsyncOperation_t3374395064 * get_U3CasyncU3E__1_2() const { return ___U3CasyncU3E__1_2; }
	inline AsyncOperation_t3374395064 ** get_address_of_U3CasyncU3E__1_2() { return &___U3CasyncU3E__1_2; }
	inline void set_U3CasyncU3E__1_2(AsyncOperation_t3374395064 * value)
	{
		___U3CasyncU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CloadingAnimU3E__2_3() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U3CloadingAnimU3E__2_3)); }
	inline LoadingManager_t3564041969 * get_U3CloadingAnimU3E__2_3() const { return ___U3CloadingAnimU3E__2_3; }
	inline LoadingManager_t3564041969 ** get_address_of_U3CloadingAnimU3E__2_3() { return &___U3CloadingAnimU3E__2_3; }
	inline void set_U3CloadingAnimU3E__2_3(LoadingManager_t3564041969 * value)
	{
		___U3CloadingAnimU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CloadingAnimU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CsoundU3E__3_4() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U3CsoundU3E__3_4)); }
	inline SoundManager_t2444342206 * get_U3CsoundU3E__3_4() const { return ___U3CsoundU3E__3_4; }
	inline SoundManager_t2444342206 ** get_address_of_U3CsoundU3E__3_4() { return &___U3CsoundU3E__3_4; }
	inline void set_U3CsoundU3E__3_4(SoundManager_t2444342206 * value)
	{
		___U3CsoundU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsoundU3E__3_4, value);
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsceneName_7() { return static_cast<int32_t>(offsetof(U3CLoadNextU3Ec__Iterator16_t711222285, ___U3CU24U3EsceneName_7)); }
	inline String_t* get_U3CU24U3EsceneName_7() const { return ___U3CU24U3EsceneName_7; }
	inline String_t** get_address_of_U3CU24U3EsceneName_7() { return &___U3CU24U3EsceneName_7; }
	inline void set_U3CU24U3EsceneName_7(String_t* value)
	{
		___U3CU24U3EsceneName_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsceneName_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
