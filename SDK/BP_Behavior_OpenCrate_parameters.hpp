#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.LootAllTheLoot
struct UBP_Behavior_OpenCrate_C_LootAllTheLoot_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.K2_OnTriggeredCharacter
struct UBP_Behavior_OpenCrate_C_K2_OnTriggeredCharacter_Params
{
public:
	class ACharacter*                            Avatar;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayBehaviorConfig*               Config;                                            // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SmartObjectOwner;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.K2_OnFinishedCharacter
struct UBP_Behavior_OpenCrate_C_K2_OnFinishedCharacter_Params
{
public:
	class ACharacter*                            Avatar;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasInterrupted;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.OnCrateStateChanged
struct UBP_Behavior_OpenCrate_C_OnCrateStateChanged_Params
{
public:
	enum class ECrateState                       NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.ExecuteUbergraph_BP_Behavior_OpenCrate
struct UBP_Behavior_OpenCrate_C_ExecuteUbergraph_BP_Behavior_OpenCrate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2996[0x4];                                     // Fixing Size After Last Property  
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;        // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayTask_WaitDelay*               CallFunc_TaskWaitDelay_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2998[0x7];                                     // Fixing Size After Last Property  
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput_1;      // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayTask_WaitDelay*               CallFunc_TaskWaitDelay_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_Event_Avatar_1;                             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayBehaviorConfig*               K2Node_Event_Config;                               // 0x58(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_SmartObjectOwner;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValBaseCrate*                         K2Node_DynamicCast_AsVal_Base_Crate;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_299E[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A2[0x6];                                     // Fixing Size After Last Property  
	TScriptInterface<class IValInteractable>     CallFunc_CanInteract_self_CastInput;               // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInteract_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A3[0x7];                                     // Fixing Size After Last Property  
	class ACharacter*                            K2Node_Event_Avatar;                               // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasInterrupted;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A6[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xAC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECrateState                       K2Node_CustomEvent_NewState;                       // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AA[0x2];                                     // Fixing Size After Last Property  
	TScriptInterface<class IValInteractable>     CallFunc_Interact_self_CastInput;                  // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AE[0x7];                                     // Fixing Size After Last Property  
	TScriptInterface<class IValInteractable>     CallFunc_StartChanneledInteract_self_CastInput;    // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IValInteractable>     CallFunc_EndChanneledInteract_self_CastInput;      // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x108(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IValInteractable>     CallFunc_EndInteraction_self_CastInput;            // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


