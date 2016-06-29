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

// ResultView
struct  ResultView_t1421671554  : public MonoBehaviour_t3012272455
{
public:
	// UserDataManager ResultView::data
	UserDataManager_t271735736 * ___data_2;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(ResultView_t1421671554, ___data_2)); }
	inline UserDataManager_t271735736 * get_data_2() const { return ___data_2; }
	inline UserDataManager_t271735736 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(UserDataManager_t271735736 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
