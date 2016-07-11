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
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2443397041;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2228911785;
// ChatGui
struct ChatGui_t2403745443;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatGui
struct  ChatGui_t2403745443  : public MonoBehaviour_t4025988718
{
public:
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId_3;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t2956870243* ___ChannelsToJoinOnConnect_4;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_5;
	// System.Boolean ChatGui::DemoPublishOnSubscribe
	bool ___DemoPublishOnSubscribe_6;
	// ExitGames.Client.Photon.Chat.ChatChannel ChatGui::selectedChannel
	ChatChannel_t2443397041 * ___selectedChannel_7;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_8;
	// System.Int32 ChatGui::selectedChannelIndex
	int32_t ___selectedChannelIndex_9;
	// System.Boolean ChatGui::doingPrivateChat
	bool ___doingPrivateChat_10;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t2228911785 * ___chatClient_11;
	// UnityEngine.Rect ChatGui::GuiRect
	Rect_t1525428817  ___GuiRect_12;
	// System.Boolean ChatGui::IsVisible
	bool ___IsVisible_13;
	// System.Boolean ChatGui::AlignBottom
	bool ___AlignBottom_14;
	// System.Boolean ChatGui::FullScreen
	bool ___FullScreen_15;
	// System.String ChatGui::inputLine
	String_t* ___inputLine_16;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput_17;
	// UnityEngine.Vector2 ChatGui::scrollPos
	Vector2_t3525329788  ___scrollPos_18;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_ChatAppId_3() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChatAppId_3)); }
	inline String_t* get_ChatAppId_3() const { return ___ChatAppId_3; }
	inline String_t** get_address_of_ChatAppId_3() { return &___ChatAppId_3; }
	inline void set_ChatAppId_3(String_t* value)
	{
		___ChatAppId_3 = value;
		Il2CppCodeGenWriteBarrier(&___ChatAppId_3, value);
	}

	inline static int32_t get_offset_of_ChannelsToJoinOnConnect_4() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelsToJoinOnConnect_4)); }
	inline StringU5BU5D_t2956870243* get_ChannelsToJoinOnConnect_4() const { return ___ChannelsToJoinOnConnect_4; }
	inline StringU5BU5D_t2956870243** get_address_of_ChannelsToJoinOnConnect_4() { return &___ChannelsToJoinOnConnect_4; }
	inline void set_ChannelsToJoinOnConnect_4(StringU5BU5D_t2956870243* value)
	{
		___ChannelsToJoinOnConnect_4 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelsToJoinOnConnect_4, value);
	}

	inline static int32_t get_offset_of_HistoryLengthToFetch_5() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___HistoryLengthToFetch_5)); }
	inline int32_t get_HistoryLengthToFetch_5() const { return ___HistoryLengthToFetch_5; }
	inline int32_t* get_address_of_HistoryLengthToFetch_5() { return &___HistoryLengthToFetch_5; }
	inline void set_HistoryLengthToFetch_5(int32_t value)
	{
		___HistoryLengthToFetch_5 = value;
	}

	inline static int32_t get_offset_of_DemoPublishOnSubscribe_6() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___DemoPublishOnSubscribe_6)); }
	inline bool get_DemoPublishOnSubscribe_6() const { return ___DemoPublishOnSubscribe_6; }
	inline bool* get_address_of_DemoPublishOnSubscribe_6() { return &___DemoPublishOnSubscribe_6; }
	inline void set_DemoPublishOnSubscribe_6(bool value)
	{
		___DemoPublishOnSubscribe_6 = value;
	}

	inline static int32_t get_offset_of_selectedChannel_7() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannel_7)); }
	inline ChatChannel_t2443397041 * get_selectedChannel_7() const { return ___selectedChannel_7; }
	inline ChatChannel_t2443397041 ** get_address_of_selectedChannel_7() { return &___selectedChannel_7; }
	inline void set_selectedChannel_7(ChatChannel_t2443397041 * value)
	{
		___selectedChannel_7 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannel_7, value);
	}

	inline static int32_t get_offset_of_selectedChannelName_8() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelName_8)); }
	inline String_t* get_selectedChannelName_8() const { return ___selectedChannelName_8; }
	inline String_t** get_address_of_selectedChannelName_8() { return &___selectedChannelName_8; }
	inline void set_selectedChannelName_8(String_t* value)
	{
		___selectedChannelName_8 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannelName_8, value);
	}

	inline static int32_t get_offset_of_selectedChannelIndex_9() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelIndex_9)); }
	inline int32_t get_selectedChannelIndex_9() const { return ___selectedChannelIndex_9; }
	inline int32_t* get_address_of_selectedChannelIndex_9() { return &___selectedChannelIndex_9; }
	inline void set_selectedChannelIndex_9(int32_t value)
	{
		___selectedChannelIndex_9 = value;
	}

	inline static int32_t get_offset_of_doingPrivateChat_10() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___doingPrivateChat_10)); }
	inline bool get_doingPrivateChat_10() const { return ___doingPrivateChat_10; }
	inline bool* get_address_of_doingPrivateChat_10() { return &___doingPrivateChat_10; }
	inline void set_doingPrivateChat_10(bool value)
	{
		___doingPrivateChat_10 = value;
	}

	inline static int32_t get_offset_of_chatClient_11() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___chatClient_11)); }
	inline ChatClient_t2228911785 * get_chatClient_11() const { return ___chatClient_11; }
	inline ChatClient_t2228911785 ** get_address_of_chatClient_11() { return &___chatClient_11; }
	inline void set_chatClient_11(ChatClient_t2228911785 * value)
	{
		___chatClient_11 = value;
		Il2CppCodeGenWriteBarrier(&___chatClient_11, value);
	}

	inline static int32_t get_offset_of_GuiRect_12() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___GuiRect_12)); }
	inline Rect_t1525428817  get_GuiRect_12() const { return ___GuiRect_12; }
	inline Rect_t1525428817 * get_address_of_GuiRect_12() { return &___GuiRect_12; }
	inline void set_GuiRect_12(Rect_t1525428817  value)
	{
		___GuiRect_12 = value;
	}

	inline static int32_t get_offset_of_IsVisible_13() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___IsVisible_13)); }
	inline bool get_IsVisible_13() const { return ___IsVisible_13; }
	inline bool* get_address_of_IsVisible_13() { return &___IsVisible_13; }
	inline void set_IsVisible_13(bool value)
	{
		___IsVisible_13 = value;
	}

	inline static int32_t get_offset_of_AlignBottom_14() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___AlignBottom_14)); }
	inline bool get_AlignBottom_14() const { return ___AlignBottom_14; }
	inline bool* get_address_of_AlignBottom_14() { return &___AlignBottom_14; }
	inline void set_AlignBottom_14(bool value)
	{
		___AlignBottom_14 = value;
	}

	inline static int32_t get_offset_of_FullScreen_15() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___FullScreen_15)); }
	inline bool get_FullScreen_15() const { return ___FullScreen_15; }
	inline bool* get_address_of_FullScreen_15() { return &___FullScreen_15; }
	inline void set_FullScreen_15(bool value)
	{
		___FullScreen_15 = value;
	}

	inline static int32_t get_offset_of_inputLine_16() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___inputLine_16)); }
	inline String_t* get_inputLine_16() const { return ___inputLine_16; }
	inline String_t** get_address_of_inputLine_16() { return &___inputLine_16; }
	inline void set_inputLine_16(String_t* value)
	{
		___inputLine_16 = value;
		Il2CppCodeGenWriteBarrier(&___inputLine_16, value);
	}

	inline static int32_t get_offset_of_userIdInput_17() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___userIdInput_17)); }
	inline String_t* get_userIdInput_17() const { return ___userIdInput_17; }
	inline String_t** get_address_of_userIdInput_17() { return &___userIdInput_17; }
	inline void set_userIdInput_17(String_t* value)
	{
		___userIdInput_17 = value;
		Il2CppCodeGenWriteBarrier(&___userIdInput_17, value);
	}

	inline static int32_t get_offset_of_scrollPos_18() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___scrollPos_18)); }
	inline Vector2_t3525329788  get_scrollPos_18() const { return ___scrollPos_18; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_18() { return &___scrollPos_18; }
	inline void set_scrollPos_18(Vector2_t3525329788  value)
	{
		___scrollPos_18 = value;
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___U3CUserNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_22() const { return ___U3CUserNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_22() { return &___U3CUserNameU3Ek__BackingField_22; }
	inline void set_U3CUserNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_22, value);
	}
};

struct ChatGui_t2403745443_StaticFields
{
public:
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText_19;
	// System.String ChatGui::HelpText
	String_t* ___HelpText_20;
	// ChatGui ChatGui::instance
	ChatGui_t2403745443 * ___instance_21;

public:
	inline static int32_t get_offset_of_WelcomeText_19() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___WelcomeText_19)); }
	inline String_t* get_WelcomeText_19() const { return ___WelcomeText_19; }
	inline String_t** get_address_of_WelcomeText_19() { return &___WelcomeText_19; }
	inline void set_WelcomeText_19(String_t* value)
	{
		___WelcomeText_19 = value;
		Il2CppCodeGenWriteBarrier(&___WelcomeText_19, value);
	}

	inline static int32_t get_offset_of_HelpText_20() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___HelpText_20)); }
	inline String_t* get_HelpText_20() const { return ___HelpText_20; }
	inline String_t** get_address_of_HelpText_20() { return &___HelpText_20; }
	inline void set_HelpText_20(String_t* value)
	{
		___HelpText_20 = value;
		Il2CppCodeGenWriteBarrier(&___HelpText_20, value);
	}

	inline static int32_t get_offset_of_instance_21() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___instance_21)); }
	inline ChatGui_t2403745443 * get_instance_21() const { return ___instance_21; }
	inline ChatGui_t2403745443 ** get_address_of_instance_21() { return &___instance_21; }
	inline void set_instance_21(ChatGui_t2403745443 * value)
	{
		___instance_21 = value;
		Il2CppCodeGenWriteBarrier(&___instance_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
