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
// System.String[]
struct StringU5BU5D_t2956870243;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickInstantiate
struct  OnClickInstantiate_t1119129697  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject OnClickInstantiate::Prefab
	GameObject_t4012695102 * ___Prefab_3;
	// System.Int32 OnClickInstantiate::InstantiateType
	int32_t ___InstantiateType_4;
	// System.String[] OnClickInstantiate::InstantiateTypeNames
	StringU5BU5D_t2956870243* ___InstantiateTypeNames_5;
	// System.Boolean OnClickInstantiate::showGui
	bool ___showGui_6;

public:
	inline static int32_t get_offset_of_Prefab_3() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___Prefab_3)); }
	inline GameObject_t4012695102 * get_Prefab_3() const { return ___Prefab_3; }
	inline GameObject_t4012695102 ** get_address_of_Prefab_3() { return &___Prefab_3; }
	inline void set_Prefab_3(GameObject_t4012695102 * value)
	{
		___Prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_3, value);
	}

	inline static int32_t get_offset_of_InstantiateType_4() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___InstantiateType_4)); }
	inline int32_t get_InstantiateType_4() const { return ___InstantiateType_4; }
	inline int32_t* get_address_of_InstantiateType_4() { return &___InstantiateType_4; }
	inline void set_InstantiateType_4(int32_t value)
	{
		___InstantiateType_4 = value;
	}

	inline static int32_t get_offset_of_InstantiateTypeNames_5() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___InstantiateTypeNames_5)); }
	inline StringU5BU5D_t2956870243* get_InstantiateTypeNames_5() const { return ___InstantiateTypeNames_5; }
	inline StringU5BU5D_t2956870243** get_address_of_InstantiateTypeNames_5() { return &___InstantiateTypeNames_5; }
	inline void set_InstantiateTypeNames_5(StringU5BU5D_t2956870243* value)
	{
		___InstantiateTypeNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___InstantiateTypeNames_5, value);
	}

	inline static int32_t get_offset_of_showGui_6() { return static_cast<int32_t>(offsetof(OnClickInstantiate_t1119129697, ___showGui_6)); }
	inline bool get_showGui_6() const { return ___showGui_6; }
	inline bool* get_address_of_showGui_6() { return &___showGui_6; }
	inline void set_showGui_6(bool value)
	{
		___showGui_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
