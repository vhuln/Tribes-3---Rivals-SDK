#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetContextDescriptionOverride
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetContextDescriptionOverride_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetContextTitleOverride
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetContextTitleOverride_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetPreviewDetectionOffset
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetPreviewDetectionOffset_Params
{
public:
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetContextPingRarity
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetContextPingRarity_Params
{
public:
	enum class ERarity                           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetPingOffset
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetPingOffset_Params
{
public:
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.GetContextPingType
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_GetContextPingType_Params
{
public:
	enum class EValPingType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.UpdateCountLabel
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_UpdateCountLabel_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E05[0x6];                                     // Fixing Size After Last Property  
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E15[0x7];                                     // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.CustomPickupFunc
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_CustomPickupFunc_Params
{
public:
	class AValCharacter*                         ValCharacter;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EDB[0x3];                                     // Fixing Size After Last Property  
	int32                                        MagazinesToAdd;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERarity                           CallFunc_GetRarity_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EF1[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetStackSize_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.OnPickupComplete
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_OnPickupComplete_Params
{
public:
	class AValCharacter*                         ValCharacter;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.ReceiveTick
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x238 (0x238 - 0x0)
// Function BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C.ExecuteUbergraph_BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1
struct ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C_ExecuteUbergraph_BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B4[0x4];                                     // Fixing Size After Last Property  
	class AValCharacter*                         K2Node_Event_ValCharacter;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ValAmmoData                  CallFunc_GetCurrentAmmo_ReturnValue;               // 0x10(0x24)(NoDestructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21CB[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetActiveEquipSlotTag_ReturnValue;        // 0x38(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_GetEquippedAbility_ReturnValue;           // 0x48(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21F3[0x4];                                     // Fixing Size After Last Property  
	class UValAbilitySystemComponent*            K2Node_DynamicCast_AsVal_Ability_System_Component; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2208[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CallFunc_K2_GetActorLocation_ReturnValue;          // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValGameplayAbility*                   CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_FindAbilitySpecHandleForClass_ReturnValue; // 0x88(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2238[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BatchRPCTryActivateAbility_ReturnValue;   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   CallFunc_FindLookAtRotation_ReturnValue;           // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2261[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CallFunc_GetAxes_X;                                // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_GetAxes_Y;                                // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_GetAxes_Z;                                // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct CoreUObject_Rotator                   CallFunc_ComposeRotators_ReturnValue;              // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct Engine_HitResult                      CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x148(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


