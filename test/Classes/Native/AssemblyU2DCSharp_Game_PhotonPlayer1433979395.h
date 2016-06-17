#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.PhotonPlayer
struct  PhotonPlayer_t1433979395  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Vector3 Game.PhotonPlayer::correctPlayerPos
	Vector3_t3525329789  ___correctPlayerPos_3;
	// UnityEngine.Quaternion Game.PhotonPlayer::correctPlayerRot
	Quaternion_t1891715979  ___correctPlayerRot_4;
	// System.Int32 Game.PhotonPlayer::viewID
	int32_t ___viewID_5;

public:
	inline static int32_t get_offset_of_correctPlayerPos_3() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1433979395, ___correctPlayerPos_3)); }
	inline Vector3_t3525329789  get_correctPlayerPos_3() const { return ___correctPlayerPos_3; }
	inline Vector3_t3525329789 * get_address_of_correctPlayerPos_3() { return &___correctPlayerPos_3; }
	inline void set_correctPlayerPos_3(Vector3_t3525329789  value)
	{
		___correctPlayerPos_3 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_4() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1433979395, ___correctPlayerRot_4)); }
	inline Quaternion_t1891715979  get_correctPlayerRot_4() const { return ___correctPlayerRot_4; }
	inline Quaternion_t1891715979 * get_address_of_correctPlayerRot_4() { return &___correctPlayerRot_4; }
	inline void set_correctPlayerRot_4(Quaternion_t1891715979  value)
	{
		___correctPlayerRot_4 = value;
	}

	inline static int32_t get_offset_of_viewID_5() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1433979395, ___viewID_5)); }
	inline int32_t get_viewID_5() const { return ___viewID_5; }
	inline int32_t* get_address_of_viewID_5() { return &___viewID_5; }
	inline void set_viewID_5(int32_t value)
	{
		___viewID_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
