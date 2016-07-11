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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cannon.RivalCannonBallController
struct  RivalCannonBallController_t241768369  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Cannon.RivalCannonBallController::detonatorSmall
	GameObject_t4012695102 * ___detonatorSmall_2;
	// UnityEngine.GameObject Cannon.RivalCannonBallController::detonatorBig
	GameObject_t4012695102 * ___detonatorBig_3;

public:
	inline static int32_t get_offset_of_detonatorSmall_2() { return static_cast<int32_t>(offsetof(RivalCannonBallController_t241768369, ___detonatorSmall_2)); }
	inline GameObject_t4012695102 * get_detonatorSmall_2() const { return ___detonatorSmall_2; }
	inline GameObject_t4012695102 ** get_address_of_detonatorSmall_2() { return &___detonatorSmall_2; }
	inline void set_detonatorSmall_2(GameObject_t4012695102 * value)
	{
		___detonatorSmall_2 = value;
		Il2CppCodeGenWriteBarrier(&___detonatorSmall_2, value);
	}

	inline static int32_t get_offset_of_detonatorBig_3() { return static_cast<int32_t>(offsetof(RivalCannonBallController_t241768369, ___detonatorBig_3)); }
	inline GameObject_t4012695102 * get_detonatorBig_3() const { return ___detonatorBig_3; }
	inline GameObject_t4012695102 ** get_address_of_detonatorBig_3() { return &___detonatorBig_3; }
	inline void set_detonatorBig_3(GameObject_t4012695102 * value)
	{
		___detonatorBig_3 = value;
		Il2CppCodeGenWriteBarrier(&___detonatorBig_3, value);
	}
};

struct RivalCannonBallController_t241768369_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Cannon.RivalCannonBallController::<>f__switch$map9
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map9_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_4() { return static_cast<int32_t>(offsetof(RivalCannonBallController_t241768369_StaticFields, ___U3CU3Ef__switchU24map9_4)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map9_4() const { return ___U3CU3Ef__switchU24map9_4; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map9_4() { return &___U3CU3Ef__switchU24map9_4; }
	inline void set_U3CU3Ef__switchU24map9_4(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map9_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
