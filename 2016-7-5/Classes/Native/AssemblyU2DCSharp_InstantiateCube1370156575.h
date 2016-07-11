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

// InstantiateCube
struct  InstantiateCube_t1370156575  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject InstantiateCube::Prefab
	GameObject_t4012695102 * ___Prefab_3;
	// System.Int32 InstantiateCube::InstantiateType
	int32_t ___InstantiateType_4;
	// System.Boolean InstantiateCube::showGui
	bool ___showGui_5;

public:
	inline static int32_t get_offset_of_Prefab_3() { return static_cast<int32_t>(offsetof(InstantiateCube_t1370156575, ___Prefab_3)); }
	inline GameObject_t4012695102 * get_Prefab_3() const { return ___Prefab_3; }
	inline GameObject_t4012695102 ** get_address_of_Prefab_3() { return &___Prefab_3; }
	inline void set_Prefab_3(GameObject_t4012695102 * value)
	{
		___Prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_3, value);
	}

	inline static int32_t get_offset_of_InstantiateType_4() { return static_cast<int32_t>(offsetof(InstantiateCube_t1370156575, ___InstantiateType_4)); }
	inline int32_t get_InstantiateType_4() const { return ___InstantiateType_4; }
	inline int32_t* get_address_of_InstantiateType_4() { return &___InstantiateType_4; }
	inline void set_InstantiateType_4(int32_t value)
	{
		___InstantiateType_4 = value;
	}

	inline static int32_t get_offset_of_showGui_5() { return static_cast<int32_t>(offsetof(InstantiateCube_t1370156575, ___showGui_5)); }
	inline bool get_showGui_5() const { return ___showGui_5; }
	inline bool* get_address_of_showGui_5() { return &___showGui_5; }
	inline void set_showGui_5(bool value)
	{
		___showGui_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
