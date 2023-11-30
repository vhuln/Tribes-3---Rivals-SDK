#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function BP_TopazCharacter.BP_TopazCharacter_C.RouteHistoryCheat
struct ABP_TopazCharacter_C_RouteHistoryCheat_Params
{
public:
	class FString                                Command;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_TopazCharacter.BP_TopazCharacter_C.OnPickup
struct ABP_TopazCharacter_C_OnPickup_Params
{
public:
	class AValPickup*                            Pickup;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BP_TopazCharacter.BP_TopazCharacter_C.ExecuteUbergraph_BP_TopazCharacter
struct ABP_TopazCharacter_C_ExecuteUbergraph_BP_TopazCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_389[0x3];                                      // Fixing Size After Last Property  
	float                                        CallFunc_GetThirdPersonCameraAlpha_ReturnValue;    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyViewed_ReturnValue;              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39A[0x2];                                      // Fixing Size After Last Property  
	class FString                                K2Node_Event_Command;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEnemyWith_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA[0x6];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Temp_struct_Variable;                              // 0x30(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_K2_GetActorRotation_ReturnValue;          // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class URouteHistoryComponent_C*              CallFunc_AddComponent_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_Multiply_VectorVector_ReturnValue;        // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValPickup*                            K2Node_Event_Pickup;                               // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyViewed_ReturnValue_1;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8[0x7];                                      // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ValPlayerController_Topaz_C*       K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz; // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0[0x7];                                      // Fixing Size After Last Property  
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


