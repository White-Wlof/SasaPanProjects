#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDebug
struct  RpsDebug_t855982462  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.UI.Button RpsDebug::ConnectionDebugButton
	Button_t990034267 * ___ConnectionDebugButton_3;
	// System.Boolean RpsDebug::ShowConnectionDebug
	bool ___ShowConnectionDebug_4;

public:
	inline static int32_t get_offset_of_ConnectionDebugButton_3() { return static_cast<int32_t>(offsetof(RpsDebug_t855982462, ___ConnectionDebugButton_3)); }
	inline Button_t990034267 * get_ConnectionDebugButton_3() const { return ___ConnectionDebugButton_3; }
	inline Button_t990034267 ** get_address_of_ConnectionDebugButton_3() { return &___ConnectionDebugButton_3; }
	inline void set_ConnectionDebugButton_3(Button_t990034267 * value)
	{
		___ConnectionDebugButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionDebugButton_3, value);
	}

	inline static int32_t get_offset_of_ShowConnectionDebug_4() { return static_cast<int32_t>(offsetof(RpsDebug_t855982462, ___ShowConnectionDebug_4)); }
	inline bool get_ShowConnectionDebug_4() const { return ___ShowConnectionDebug_4; }
	inline bool* get_address_of_ShowConnectionDebug_4() { return &___ShowConnectionDebug_4; }
	inline void set_ShowConnectionDebug_4(bool value)
	{
		___ShowConnectionDebug_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
