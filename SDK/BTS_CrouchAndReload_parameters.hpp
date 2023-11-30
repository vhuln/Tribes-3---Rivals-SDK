#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// Function BTS_CrouchAndReload.BTS_CrouchAndReload_C.TryReload
struct UBTS_CrouchAndReload_C_TryReload_Params
{
public:
	class APawn*                                 InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         Shooter;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3549[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetActiveEquipSlotTag_ReturnValue;        // 0x1C(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ValAmmoData                  CallFunc_GetAmmoForSlot_ReturnValue;               // 0x24(0x24)(NoDestructor)
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_GetActiveEquippedAbility_ReturnValue;     // 0x48(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3564[0x3];                                     // Fixing Size After Last Property  
	class UValGameplayAbility*                   CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3577[0x3];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_FindAbilitySpecHandleForClass_ReturnValue; // 0x5C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BatchRPCTryActivateAbility_ReturnValue;   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358A[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BTS_CrouchAndReload.BTS_CrouchAndReload_C.ReceiveActivationAI
struct UBTS_CrouchAndReload_C_ReceiveActivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BTS_CrouchAndReload.BTS_CrouchAndReload_C.ReceiveDeactivationAI
struct UBTS_CrouchAndReload_C_ReceiveDeactivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BTS_CrouchAndReload.BTS_CrouchAndReload_C.ReceiveTickAI
struct UBTS_CrouchAndReload_C_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BTS_CrouchAndReload.BTS_CrouchAndReload_C.ExecuteUbergraph_BTS_CrouchAndReload
struct UBTS_CrouchAndReload_C_ExecuteUbergraph_BTS_CrouchAndReload_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B2[0x4];                                     // Fixing Size After Last Property  
	class AAIController*                         K2Node_Event_OwnerController;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DF[0x4];                                     // Fixing Size After Last Property  
	class AAIController*                         K2Node_Event_OwnerController_2;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_2;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         K2Node_Event_OwnerController_1;                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_1;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A39[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character_1;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


