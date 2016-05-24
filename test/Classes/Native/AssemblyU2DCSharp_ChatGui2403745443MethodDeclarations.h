#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ChatGui
struct ChatGui_t2403745443;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha1678887231.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ChatGui::.ctor()
extern "C"  void ChatGui__ctor_m1170978856 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
extern "C"  void ChatGui__cctor_m1458509957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
extern "C"  String_t* ChatGui_get_UserName_m4137430936 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
extern "C"  void ChatGui_set_UserName_m3050547923 (ChatGui_t2403745443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatGui ChatGui::get_Instance()
extern "C"  ChatGui_t2403745443 * ChatGui_get_Instance_m341257258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Awake()
extern "C"  void ChatGui_Awake_m1408584075 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
extern "C"  void ChatGui_Start_m118116648 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
extern "C"  void ChatGui_OnApplicationQuit_m1266231718 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDestroy()
extern "C"  void ChatGui_OnDestroy_m456472865 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
extern "C"  void ChatGui_Update_m3667468261 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGUI()
extern "C"  void ChatGui_OnGUI_m666377506 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::GuiSendsMsg()
extern "C"  void ChatGui_GuiSendsMsg_m3512772919 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
extern "C"  void ChatGui_PostHelpToCurrentChannel_m1853693410 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
extern "C"  void ChatGui_OnConnected_m4292014832 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatGui_DebugReturn_m2165201274 (ChatGui_t2403745443 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
extern "C"  void ChatGui_OnDisconnected_m233577878 (ChatGui_t2403745443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatGui_OnChatStateChange_m2495926835 (ChatGui_t2403745443 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
extern "C"  void ChatGui_OnSubscribed_m3637841968 (ChatGui_t2403745443 * __this, StringU5BU5D_t2956870243* ___channels, BooleanU5BU5D_t3804927312* ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
extern "C"  void ChatGui_OnUnsubscribed_m3267464914 (ChatGui_t2403745443 * __this, StringU5BU5D_t2956870243* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
extern "C"  void ChatGui_OnGetMessages_m1418079615 (ChatGui_t2403745443 * __this, String_t* ___channelName, StringU5BU5D_t2956870243* ___senders, ObjectU5BU5D_t11523773* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
extern "C"  void ChatGui_OnPrivateMessage_m990768589 (ChatGui_t2403745443 * __this, String_t* ___sender, Il2CppObject * ___message, String_t* ___channelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
extern "C"  void ChatGui_OnStatusUpdate_m1328107296 (ChatGui_t2403745443 * __this, String_t* ___user, int32_t ___status, bool ___gotMessage, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
