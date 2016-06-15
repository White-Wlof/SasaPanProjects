#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManualPhotonViewAllocator
struct  ManualPhotonViewAllocator_t2386814980  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject ManualPhotonViewAllocator::Prefab
	GameObject_t4012695102 * ___Prefab_3;

public:
	inline static int32_t get_offset_of_Prefab_3() { return static_cast<int32_t>(offsetof(ManualPhotonViewAllocator_t2386814980, ___Prefab_3)); }
	inline GameObject_t4012695102 * get_Prefab_3() const { return ___Prefab_3; }
	inline GameObject_t4012695102 ** get_address_of_Prefab_3() { return &___Prefab_3; }
	inline void set_Prefab_3(GameObject_t4012695102 * value)
	{
		___Prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
