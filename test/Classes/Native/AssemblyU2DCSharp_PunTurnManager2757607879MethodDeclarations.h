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

// PunTurnManager
struct PunTurnManager_t2757607879;
// System.Object
struct Il2CppObject;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Void PunTurnManager::.ctor()
extern "C"  void PunTurnManager__ctor_m2646088372 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PunTurnManager::get_Turn()
extern "C"  int32_t PunTurnManager_get_Turn_m2080694116 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::set_Turn(System.Int32)
extern "C"  void PunTurnManager_set_Turn_m3825743515 (PunTurnManager_t2757607879 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::get_ElapsedTimeInTurn()
extern "C"  float PunTurnManager_get_ElapsedTimeInTurn_m1907236200 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsCompletedByAll()
extern "C"  bool PunTurnManager_get_IsCompletedByAll_m324115734 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsFinishedByMe()
extern "C"  bool PunTurnManager_get_IsFinishedByMe_m439410616 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsOver()
extern "C"  bool PunTurnManager_get_IsOver_m3778550251 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::Start()
extern "C"  void PunTurnManager_Start_m1593226164 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::BeginTurn()
extern "C"  void PunTurnManager_BeginTurn_m2308212376 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::SendMove(System.Object,System.Boolean)
extern "C"  void PunTurnManager_SendMove_m2147511730 (PunTurnManager_t2757607879 * __this, Il2CppObject * ___move, bool ___finished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::GetRemainingSeconds()
extern "C"  float PunTurnManager_GetRemainingSeconds_m1766768677 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::GetPlayerFinishedTurn(PhotonPlayer)
extern "C"  bool PunTurnManager_GetPlayerFinishedTurn_m448639783 (PunTurnManager_t2757607879 * __this, PhotonPlayer_t1400510109 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnTurnTimeEnds()
extern "C"  void PunTurnManager_OnTurnTimeEnds_m4204681105 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnPlayerFinishedTurn()
extern "C"  void PunTurnManager_OnPlayerFinishedTurn_m292993055 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnTurnComplete()
extern "C"  void PunTurnManager_OnTurnComplete_m3276945509 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnTurnStarts()
extern "C"  void PunTurnManager_OnTurnStarts_m176654397 (PunTurnManager_t2757607879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnEvent(System.Byte,System.Object,System.Int32)
extern "C"  void PunTurnManager_OnEvent_m491970955 (PunTurnManager_t2757607879 * __this, uint8_t ___eventCode, Il2CppObject * ___content, int32_t ___senderId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunTurnManager_OnPhotonCustomRoomPropertiesChanged_m3080571200 (PunTurnManager_t2757607879 * __this, Hashtable_t223732124 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
