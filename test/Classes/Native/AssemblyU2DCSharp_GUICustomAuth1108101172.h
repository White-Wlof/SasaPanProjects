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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "AssemblyU2DCSharp_GUICustomAuth_GuiState3030463542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUICustomAuth
struct  GUICustomAuth_t1108101172  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Rect GUICustomAuth::GuiRect
	Rect_t1525428817  ___GuiRect_3;
	// System.String GUICustomAuth::authName
	String_t* ___authName_4;
	// System.String GUICustomAuth::authToken
	String_t* ___authToken_5;
	// System.String GUICustomAuth::authDebugMessage
	String_t* ___authDebugMessage_6;
	// GUICustomAuth/GuiState GUICustomAuth::guiState
	int32_t ___guiState_7;
	// UnityEngine.GameObject GUICustomAuth::RootOf3dButtons
	GameObject_t4012695102 * ___RootOf3dButtons_8;

public:
	inline static int32_t get_offset_of_GuiRect_3() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___GuiRect_3)); }
	inline Rect_t1525428817  get_GuiRect_3() const { return ___GuiRect_3; }
	inline Rect_t1525428817 * get_address_of_GuiRect_3() { return &___GuiRect_3; }
	inline void set_GuiRect_3(Rect_t1525428817  value)
	{
		___GuiRect_3 = value;
	}

	inline static int32_t get_offset_of_authName_4() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___authName_4)); }
	inline String_t* get_authName_4() const { return ___authName_4; }
	inline String_t** get_address_of_authName_4() { return &___authName_4; }
	inline void set_authName_4(String_t* value)
	{
		___authName_4 = value;
		Il2CppCodeGenWriteBarrier(&___authName_4, value);
	}

	inline static int32_t get_offset_of_authToken_5() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___authToken_5)); }
	inline String_t* get_authToken_5() const { return ___authToken_5; }
	inline String_t** get_address_of_authToken_5() { return &___authToken_5; }
	inline void set_authToken_5(String_t* value)
	{
		___authToken_5 = value;
		Il2CppCodeGenWriteBarrier(&___authToken_5, value);
	}

	inline static int32_t get_offset_of_authDebugMessage_6() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___authDebugMessage_6)); }
	inline String_t* get_authDebugMessage_6() const { return ___authDebugMessage_6; }
	inline String_t** get_address_of_authDebugMessage_6() { return &___authDebugMessage_6; }
	inline void set_authDebugMessage_6(String_t* value)
	{
		___authDebugMessage_6 = value;
		Il2CppCodeGenWriteBarrier(&___authDebugMessage_6, value);
	}

	inline static int32_t get_offset_of_guiState_7() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___guiState_7)); }
	inline int32_t get_guiState_7() const { return ___guiState_7; }
	inline int32_t* get_address_of_guiState_7() { return &___guiState_7; }
	inline void set_guiState_7(int32_t value)
	{
		___guiState_7 = value;
	}

	inline static int32_t get_offset_of_RootOf3dButtons_8() { return static_cast<int32_t>(offsetof(GUICustomAuth_t1108101172, ___RootOf3dButtons_8)); }
	inline GameObject_t4012695102 * get_RootOf3dButtons_8() const { return ___RootOf3dButtons_8; }
	inline GameObject_t4012695102 ** get_address_of_RootOf3dButtons_8() { return &___RootOf3dButtons_8; }
	inline void set_RootOf3dButtons_8(GameObject_t4012695102 * value)
	{
		___RootOf3dButtons_8 = value;
		Il2CppCodeGenWriteBarrier(&___RootOf3dButtons_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
