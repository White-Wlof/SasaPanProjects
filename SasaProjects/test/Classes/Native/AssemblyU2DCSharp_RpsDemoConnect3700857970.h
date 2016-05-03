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
// UnityEngine.UI.InputField
struct InputField_t2345609593;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDemoConnect
struct  RpsDemoConnect_t3700857970  : public PunBehaviour_t1644375368
{
public:
	// UnityEngine.UI.InputField RpsDemoConnect::InputField
	InputField_t2345609593 * ___InputField_4;
	// System.String RpsDemoConnect::UserId
	String_t* ___UserId_5;
	// System.String RpsDemoConnect::previousRoom
	String_t* ___previousRoom_6;

public:
	inline static int32_t get_offset_of_InputField_4() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___InputField_4)); }
	inline InputField_t2345609593 * get_InputField_4() const { return ___InputField_4; }
	inline InputField_t2345609593 ** get_address_of_InputField_4() { return &___InputField_4; }
	inline void set_InputField_4(InputField_t2345609593 * value)
	{
		___InputField_4 = value;
		Il2CppCodeGenWriteBarrier(&___InputField_4, value);
	}

	inline static int32_t get_offset_of_UserId_5() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___UserId_5)); }
	inline String_t* get_UserId_5() const { return ___UserId_5; }
	inline String_t** get_address_of_UserId_5() { return &___UserId_5; }
	inline void set_UserId_5(String_t* value)
	{
		___UserId_5 = value;
		Il2CppCodeGenWriteBarrier(&___UserId_5, value);
	}

	inline static int32_t get_offset_of_previousRoom_6() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3700857970, ___previousRoom_6)); }
	inline String_t* get_previousRoom_6() const { return ___previousRoom_6; }
	inline String_t** get_address_of_previousRoom_6() { return &___previousRoom_6; }
	inline void set_previousRoom_6(String_t* value)
	{
		___previousRoom_6 = value;
		Il2CppCodeGenWriteBarrier(&___previousRoom_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
