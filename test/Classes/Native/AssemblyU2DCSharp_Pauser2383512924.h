#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pauser>
struct List_1_t3180471893;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t1645072431;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t1292182111;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t203541189;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Predicate`1<UnityEngine.Behaviour>
struct Predicate_1_t3691467940;
// System.Predicate`1<UnityEngine.Rigidbody>
struct Predicate_1_t2542971444;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t4203206982;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pauser
struct  Pauser_t2383512924  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Behaviour[] Pauser::pauseBehavs
	BehaviourU5BU5D_t1645072431* ___pauseBehavs_3;
	// UnityEngine.Rigidbody[] Pauser::rgBodies
	RigidbodyU5BU5D_t1292182111* ___rgBodies_4;
	// UnityEngine.Vector3[] Pauser::rgBodyVels
	Vector3U5BU5D_t3227571696* ___rgBodyVels_5;
	// UnityEngine.Vector3[] Pauser::rgBodyAVels
	Vector3U5BU5D_t3227571696* ___rgBodyAVels_6;
	// UnityEngine.Rigidbody2D[] Pauser::rg2dBodies
	Rigidbody2DU5BU5D_t203541189* ___rg2dBodies_7;
	// UnityEngine.Vector2[] Pauser::rg2dBodyVels
	Vector2U5BU5D_t2741383957* ___rg2dBodyVels_8;
	// System.Single[] Pauser::rg2dBodyAVels
	SingleU5BU5D_t1219431280* ___rg2dBodyAVels_9;

public:
	inline static int32_t get_offset_of_pauseBehavs_3() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___pauseBehavs_3)); }
	inline BehaviourU5BU5D_t1645072431* get_pauseBehavs_3() const { return ___pauseBehavs_3; }
	inline BehaviourU5BU5D_t1645072431** get_address_of_pauseBehavs_3() { return &___pauseBehavs_3; }
	inline void set_pauseBehavs_3(BehaviourU5BU5D_t1645072431* value)
	{
		___pauseBehavs_3 = value;
		Il2CppCodeGenWriteBarrier(&___pauseBehavs_3, value);
	}

	inline static int32_t get_offset_of_rgBodies_4() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rgBodies_4)); }
	inline RigidbodyU5BU5D_t1292182111* get_rgBodies_4() const { return ___rgBodies_4; }
	inline RigidbodyU5BU5D_t1292182111** get_address_of_rgBodies_4() { return &___rgBodies_4; }
	inline void set_rgBodies_4(RigidbodyU5BU5D_t1292182111* value)
	{
		___rgBodies_4 = value;
		Il2CppCodeGenWriteBarrier(&___rgBodies_4, value);
	}

	inline static int32_t get_offset_of_rgBodyVels_5() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rgBodyVels_5)); }
	inline Vector3U5BU5D_t3227571696* get_rgBodyVels_5() const { return ___rgBodyVels_5; }
	inline Vector3U5BU5D_t3227571696** get_address_of_rgBodyVels_5() { return &___rgBodyVels_5; }
	inline void set_rgBodyVels_5(Vector3U5BU5D_t3227571696* value)
	{
		___rgBodyVels_5 = value;
		Il2CppCodeGenWriteBarrier(&___rgBodyVels_5, value);
	}

	inline static int32_t get_offset_of_rgBodyAVels_6() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rgBodyAVels_6)); }
	inline Vector3U5BU5D_t3227571696* get_rgBodyAVels_6() const { return ___rgBodyAVels_6; }
	inline Vector3U5BU5D_t3227571696** get_address_of_rgBodyAVels_6() { return &___rgBodyAVels_6; }
	inline void set_rgBodyAVels_6(Vector3U5BU5D_t3227571696* value)
	{
		___rgBodyAVels_6 = value;
		Il2CppCodeGenWriteBarrier(&___rgBodyAVels_6, value);
	}

	inline static int32_t get_offset_of_rg2dBodies_7() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rg2dBodies_7)); }
	inline Rigidbody2DU5BU5D_t203541189* get_rg2dBodies_7() const { return ___rg2dBodies_7; }
	inline Rigidbody2DU5BU5D_t203541189** get_address_of_rg2dBodies_7() { return &___rg2dBodies_7; }
	inline void set_rg2dBodies_7(Rigidbody2DU5BU5D_t203541189* value)
	{
		___rg2dBodies_7 = value;
		Il2CppCodeGenWriteBarrier(&___rg2dBodies_7, value);
	}

	inline static int32_t get_offset_of_rg2dBodyVels_8() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rg2dBodyVels_8)); }
	inline Vector2U5BU5D_t2741383957* get_rg2dBodyVels_8() const { return ___rg2dBodyVels_8; }
	inline Vector2U5BU5D_t2741383957** get_address_of_rg2dBodyVels_8() { return &___rg2dBodyVels_8; }
	inline void set_rg2dBodyVels_8(Vector2U5BU5D_t2741383957* value)
	{
		___rg2dBodyVels_8 = value;
		Il2CppCodeGenWriteBarrier(&___rg2dBodyVels_8, value);
	}

	inline static int32_t get_offset_of_rg2dBodyAVels_9() { return static_cast<int32_t>(offsetof(Pauser_t2383512924, ___rg2dBodyAVels_9)); }
	inline SingleU5BU5D_t1219431280* get_rg2dBodyAVels_9() const { return ___rg2dBodyAVels_9; }
	inline SingleU5BU5D_t1219431280** get_address_of_rg2dBodyAVels_9() { return &___rg2dBodyAVels_9; }
	inline void set_rg2dBodyAVels_9(SingleU5BU5D_t1219431280* value)
	{
		___rg2dBodyAVels_9 = value;
		Il2CppCodeGenWriteBarrier(&___rg2dBodyAVels_9, value);
	}
};

struct Pauser_t2383512924_StaticFields
{
public:
	// System.Collections.Generic.List`1<Pauser> Pauser::targets
	List_1_t3180471893 * ___targets_2;
	// System.Predicate`1<UnityEngine.Behaviour> Pauser::<>f__am$cache8
	Predicate_1_t3691467940 * ___U3CU3Ef__amU24cache8_10;
	// System.Predicate`1<UnityEngine.Rigidbody> Pauser::<>f__am$cache9
	Predicate_1_t2542971444 * ___U3CU3Ef__amU24cache9_11;
	// System.Predicate`1<UnityEngine.Rigidbody2D> Pauser::<>f__am$cacheA
	Predicate_1_t4203206982 * ___U3CU3Ef__amU24cacheA_12;

public:
	inline static int32_t get_offset_of_targets_2() { return static_cast<int32_t>(offsetof(Pauser_t2383512924_StaticFields, ___targets_2)); }
	inline List_1_t3180471893 * get_targets_2() const { return ___targets_2; }
	inline List_1_t3180471893 ** get_address_of_targets_2() { return &___targets_2; }
	inline void set_targets_2(List_1_t3180471893 * value)
	{
		___targets_2 = value;
		Il2CppCodeGenWriteBarrier(&___targets_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(Pauser_t2383512924_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Predicate_1_t3691467940 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Predicate_1_t3691467940 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Predicate_1_t3691467940 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_11() { return static_cast<int32_t>(offsetof(Pauser_t2383512924_StaticFields, ___U3CU3Ef__amU24cache9_11)); }
	inline Predicate_1_t2542971444 * get_U3CU3Ef__amU24cache9_11() const { return ___U3CU3Ef__amU24cache9_11; }
	inline Predicate_1_t2542971444 ** get_address_of_U3CU3Ef__amU24cache9_11() { return &___U3CU3Ef__amU24cache9_11; }
	inline void set_U3CU3Ef__amU24cache9_11(Predicate_1_t2542971444 * value)
	{
		___U3CU3Ef__amU24cache9_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(Pauser_t2383512924_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline Predicate_1_t4203206982 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline Predicate_1_t4203206982 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(Predicate_1_t4203206982 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
