#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// Function BTS_BasicReload.BTS_BasicReload_C.ReceiveTickAI
struct UBTS_BasicReload_C_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BTS_BasicReload.BTS_BasicReload_C.ExecuteUbergraph_BTS_BasicReload
struct UBTS_BasicReload_C_ExecuteUbergraph_BTS_BasicReload_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D88[0x4];                                     // Fixing Size After Last Property  
	class AAIController*                         K2Node_Event_OwnerController;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D90[0x3];                                     // Fixing Size After Last Property  
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D94[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetActiveEquipSlotTag_ReturnValue;        // 0x2C(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_GetActiveEquippedAbility_ReturnValue;     // 0x34(0x4)(NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ValAmmoData                  CallFunc_GetAmmoForSlot_ReturnValue;               // 0x38(0x24)(NoDestructor)
	uint8                                        Pad_1DAC[0x4];                                     // Fixing Size After Last Property  
	class UValGameplayAbility*                   CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB0[0x3];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_FindAbilitySpecHandleForClass_ReturnValue; // 0x6C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BatchRPCTryActivateAbility_ReturnValue;   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB4[0x6];                                     // Fixing Size After Last Property  
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DBA[0x6];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


