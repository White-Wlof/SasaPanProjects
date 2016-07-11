#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnJoinedInstantiate
struct  OnJoinedInstantiate_t4161748898  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Transform OnJoinedInstantiate::SpawnPosition
	Transform_t284553113 * ___SpawnPosition_3;
	// System.Single OnJoinedInstantiate::PositionOffset
	float ___PositionOffset_4;
	// UnityEngine.GameObject[] OnJoinedInstantiate::PrefabsToInstantiate
	GameObjectU5BU5D_t3499186955* ___PrefabsToInstantiate_5;

public:
	inline static int32_t get_offset_of_SpawnPosition_3() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___SpawnPosition_3)); }
	inline Transform_t284553113 * get_SpawnPosition_3() const { return ___SpawnPosition_3; }
	inline Transform_t284553113 ** get_address_of_SpawnPosition_3() { return &___SpawnPosition_3; }
	inline void set_SpawnPosition_3(Transform_t284553113 * value)
	{
		___SpawnPosition_3 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPosition_3, value);
	}

	inline static int32_t get_offset_of_PositionOffset_4() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___PositionOffset_4)); }
	inline float get_PositionOffset_4() const { return ___PositionOffset_4; }
	inline float* get_address_of_PositionOffset_4() { return &___PositionOffset_4; }
	inline void set_PositionOffset_4(float value)
	{
		___PositionOffset_4 = value;
	}

	inline static int32_t get_offset_of_PrefabsToInstantiate_5() { return static_cast<int32_t>(offsetof(OnJoinedInstantiate_t4161748898, ___PrefabsToInstantiate_5)); }
	inline GameObjectU5BU5D_t3499186955* get_PrefabsToInstantiate_5() const { return ___PrefabsToInstantiate_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_PrefabsToInstantiate_5() { return &___PrefabsToInstantiate_5; }
	inline void set_PrefabsToInstantiate_5(GameObjectU5BU5D_t3499186955* value)
	{
		___PrefabsToInstantiate_5 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabsToInstantiate_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
