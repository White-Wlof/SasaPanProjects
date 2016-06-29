#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserDataManager
struct UserDataManager_t271735736;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SingletonMonoBehaviour`1<UserDataManager>
struct  SingletonMonoBehaviour_1_t3896877885  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct SingletonMonoBehaviour_1_t3896877885_StaticFields
{
public:
	// T SingletonMonoBehaviour`1::instance
	UserDataManager_t271735736 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_t3896877885_StaticFields, ___instance_2)); }
	inline UserDataManager_t271735736 * get_instance_2() const { return ___instance_2; }
	inline UserDataManager_t271735736 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UserDataManager_t271735736 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
