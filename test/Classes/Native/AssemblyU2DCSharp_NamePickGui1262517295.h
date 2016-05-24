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
// ChatGui
struct ChatGui_t2403745443;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NamePickGui
struct  NamePickGui_t1262517295  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 NamePickGui::GuiSize
	Vector2_t3525329788  ___GuiSize_3;
	// System.String NamePickGui::InputLine
	String_t* ___InputLine_4;
	// UnityEngine.Rect NamePickGui::guiCenteredRect
	Rect_t1525428817  ___guiCenteredRect_5;
	// ChatGui NamePickGui::chatComponent
	ChatGui_t2403745443 * ___chatComponent_6;
	// System.String NamePickGui::helpText
	String_t* ___helpText_7;

public:
	inline static int32_t get_offset_of_GuiSize_3() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___GuiSize_3)); }
	inline Vector2_t3525329788  get_GuiSize_3() const { return ___GuiSize_3; }
	inline Vector2_t3525329788 * get_address_of_GuiSize_3() { return &___GuiSize_3; }
	inline void set_GuiSize_3(Vector2_t3525329788  value)
	{
		___GuiSize_3 = value;
	}

	inline static int32_t get_offset_of_InputLine_4() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___InputLine_4)); }
	inline String_t* get_InputLine_4() const { return ___InputLine_4; }
	inline String_t** get_address_of_InputLine_4() { return &___InputLine_4; }
	inline void set_InputLine_4(String_t* value)
	{
		___InputLine_4 = value;
		Il2CppCodeGenWriteBarrier(&___InputLine_4, value);
	}

	inline static int32_t get_offset_of_guiCenteredRect_5() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___guiCenteredRect_5)); }
	inline Rect_t1525428817  get_guiCenteredRect_5() const { return ___guiCenteredRect_5; }
	inline Rect_t1525428817 * get_address_of_guiCenteredRect_5() { return &___guiCenteredRect_5; }
	inline void set_guiCenteredRect_5(Rect_t1525428817  value)
	{
		___guiCenteredRect_5 = value;
	}

	inline static int32_t get_offset_of_chatComponent_6() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___chatComponent_6)); }
	inline ChatGui_t2403745443 * get_chatComponent_6() const { return ___chatComponent_6; }
	inline ChatGui_t2403745443 ** get_address_of_chatComponent_6() { return &___chatComponent_6; }
	inline void set_chatComponent_6(ChatGui_t2403745443 * value)
	{
		___chatComponent_6 = value;
		Il2CppCodeGenWriteBarrier(&___chatComponent_6, value);
	}

	inline static int32_t get_offset_of_helpText_7() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___helpText_7)); }
	inline String_t* get_helpText_7() const { return ___helpText_7; }
	inline String_t** get_address_of_helpText_7() { return &___helpText_7; }
	inline void set_helpText_7(String_t* value)
	{
		___helpText_7 = value;
		Il2CppCodeGenWriteBarrier(&___helpText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
