#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;

#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_gen2894216822.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingManager
struct  LoadingManager_t3564041969  : public SingletonMonoBehaviour_1_t2894216822
{
public:
	// UnityEngine.Animator LoadingManager::loadingAnim
	Animator_t792326996 * ___loadingAnim_3;
	// UnityEngine.UI.Image[] LoadingManager::loadingImages
	ImageU5BU5D_t2279835437* ___loadingImages_4;

public:
	inline static int32_t get_offset_of_loadingAnim_3() { return static_cast<int32_t>(offsetof(LoadingManager_t3564041969, ___loadingAnim_3)); }
	inline Animator_t792326996 * get_loadingAnim_3() const { return ___loadingAnim_3; }
	inline Animator_t792326996 ** get_address_of_loadingAnim_3() { return &___loadingAnim_3; }
	inline void set_loadingAnim_3(Animator_t792326996 * value)
	{
		___loadingAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingAnim_3, value);
	}

	inline static int32_t get_offset_of_loadingImages_4() { return static_cast<int32_t>(offsetof(LoadingManager_t3564041969, ___loadingImages_4)); }
	inline ImageU5BU5D_t2279835437* get_loadingImages_4() const { return ___loadingImages_4; }
	inline ImageU5BU5D_t2279835437** get_address_of_loadingImages_4() { return &___loadingImages_4; }
	inline void set_loadingImages_4(ImageU5BU5D_t2279835437* value)
	{
		___loadingImages_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingImages_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
