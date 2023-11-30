#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x32 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.InitializePassivePerks
struct ABP_CharPlayer_Decoy_C_InitializePassivePerks_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46F[0x7];                                      // Fixing Size After Last Property  
	class UBP_MarksmanClassComponent_C*          K2Node_DynamicCast_AsBP_Marksman_Class_Component;  // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasModsForTag_ReturnValue;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x113 (0x113 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.OnDecoyDamaged
struct ABP_CharPlayer_Decoy_C_OnDecoyDamaged_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                LocalInstigator;                                   // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.EventHoldKey
struct ABP_CharPlayer_Decoy_C_EventHoldKey_Params
{
public:
	double                                       Duration;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValAbilityInputID                Key;                                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.OnTargetActorUpdated
struct ABP_CharPlayer_Decoy_C_OnTargetActorUpdated_Params
{
public:
	class UObject*                               PreviousTarget;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               NewTarget;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.ClientOnTargetUpdated
struct ABP_CharPlayer_Decoy_C_ClientOnTargetUpdated_Params
{
public:
	class AActor*                                OldTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                NewTarget;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.ExecuteUbergraph_BP_CharPlayer_Decoy
struct ABP_CharPlayer_Decoy_C_ExecuteUbergraph_BP_CharPlayer_Decoy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E[0x2];                                      // Fixing Size After Last Property  
	double                                       K2Node_Event_Duration;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValAbilityInputID                K2Node_Event_Key;                                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_510[0x7];                                      // Fixing Size After Last Property  
	class UObject*                               K2Node_Event_PreviousTarget;                       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_NewTarget_1;                          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_OldTarget;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_NewTarget;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_GetSocketLocation_ReturnValue;            // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        CallFunc_GetJetpackMesh_ReturnValue;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


