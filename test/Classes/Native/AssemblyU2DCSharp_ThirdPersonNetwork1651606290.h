#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ThirdPersonCamera
struct ThirdPersonCamera_t2089741761;
// ThirdPersonController
struct ThirdPersonController_t973398072;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonNetwork
struct  ThirdPersonNetwork_t1651606290  : public MonoBehaviour_t4025988718
{
public:
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t2089741761 * ___cameraScript_3;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t973398072 * ___controllerScript_4;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t3525329789  ___correctPlayerPos_5;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t1891715979  ___correctPlayerRot_6;

public:
	inline static int32_t get_offset_of_cameraScript_3() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t1651606290, ___cameraScript_3)); }
	inline ThirdPersonCamera_t2089741761 * get_cameraScript_3() const { return ___cameraScript_3; }
	inline ThirdPersonCamera_t2089741761 ** get_address_of_cameraScript_3() { return &___cameraScript_3; }
	inline void set_cameraScript_3(ThirdPersonCamera_t2089741761 * value)
	{
		___cameraScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraScript_3, value);
	}

	inline static int32_t get_offset_of_controllerScript_4() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t1651606290, ___controllerScript_4)); }
	inline ThirdPersonController_t973398072 * get_controllerScript_4() const { return ___controllerScript_4; }
	inline ThirdPersonController_t973398072 ** get_address_of_controllerScript_4() { return &___controllerScript_4; }
	inline void set_controllerScript_4(ThirdPersonController_t973398072 * value)
	{
		___controllerScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___controllerScript_4, value);
	}

	inline static int32_t get_offset_of_correctPlayerPos_5() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t1651606290, ___correctPlayerPos_5)); }
	inline Vector3_t3525329789  get_correctPlayerPos_5() const { return ___correctPlayerPos_5; }
	inline Vector3_t3525329789 * get_address_of_correctPlayerPos_5() { return &___correctPlayerPos_5; }
	inline void set_correctPlayerPos_5(Vector3_t3525329789  value)
	{
		___correctPlayerPos_5 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_6() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t1651606290, ___correctPlayerRot_6)); }
	inline Quaternion_t1891715979  get_correctPlayerRot_6() const { return ___correctPlayerRot_6; }
	inline Quaternion_t1891715979 * get_address_of_correctPlayerRot_6() { return &___correctPlayerRot_6; }
	inline void set_correctPlayerRot_6(Quaternion_t1891715979  value)
	{
		___correctPlayerRot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
