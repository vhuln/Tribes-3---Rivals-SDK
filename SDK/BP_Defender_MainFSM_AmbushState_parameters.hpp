#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.OnBotDamaged
struct UBP_Defender_MainFSM_AmbushState_C_OnBotDamaged_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct GameplayTags_GameplayTagContainer     ActiveTransitionTags;                              // 0x100(0x20)(Edit, BlueprintVisible)
};

// 0x29 (0x29 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.UnbindThreatFunctions
struct UBP_Defender_MainFSM_AmbushState_C_UnbindThreatFunctions_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.BindThreatFunctions
struct UBP_Defender_MainFSM_AmbushState_C_BindThreatFunctions_Params
{
public:
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasFlag_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasFlag_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE[0x2];                                      // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E3[0x4];                                      // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue_1;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9[0x7];                                      // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectSpecHandle CallFunc_MakeOutgoingSpec_ReturnValue;             // 0x40(0x10)(None)
	struct GameplayAbilities_GameplayEffectSpecHandle CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x50(0x10)(None)
	struct GameplayAbilities_ActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.SetThreat
struct UBP_Defender_MainFSM_AmbushState_C_SetThreat_Params
{
public:
	struct Valhalla_Threat                       Threat;                                            // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValThreatComponent*                   CallFunc_GetThreatComponent_ReturnValue;           // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.ChangeStateThreatFound
struct UBP_Defender_MainFSM_AmbushState_C_ChangeStateThreatFound_Params
{
public:
	struct GameplayTags_GameplayTagContainer     CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0(0x20)(None)
};

// 0x64 (0x64 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.OnThreatSeenChanged
struct UBP_Defender_MainFSM_AmbushState_C_OnThreatSeenChanged_Params
{
public:
	class UObject*                               Threat;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bNewIsPerceived;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C9[0x7];                                      // Fixing Size After Last Property  
	double                                       LocalWaitTime;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D1[0x5];                                      // Fixing Size After Last Property  
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    CallFunc_K2_SetTimer_ReturnValue;                  // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetCurrentThreat_OutThreat;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DC[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                CallFunc_GetCurrentThreat_OutThreat_1;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E8[0x5];                                      // Fixing Size After Last Property  
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.GetCurrentThreat
struct UBP_Defender_MainFSM_AmbushState_C_GetCurrentThreat_Params
{
public:
	class AActor*                                OutThreat;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValThreatComponent*                   CallFunc_GetThreatComponent_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_637[0x6];                                      // Fixing Size After Last Property  
	class AActor*                                CallFunc_GetCurrentThreat_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.OnThreatDamagedChanged
struct UBP_Defender_MainFSM_AmbushState_C_OnThreatDamagedChanged_Params
{
public:
	class UObject*                               Threat;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bNewIsPerceived;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_673[0x7];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     ActiveTransitionTags;                              // 0x10(0x20)(Edit, BlueprintVisible)
	class AActor*                                CallFunc_GetCurrentThreat_OutThreat;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_682[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                CallFunc_GetCurrentThreat_OutThreat_1;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C.ExecuteUbergraph_BP_Defender_MainFSM_AmbushState
struct UBP_Defender_MainFSM_AmbushState_C_ExecuteUbergraph_BP_Defender_MainFSM_AmbushState_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D4[0x4];                                      // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E3[0x5];                                      // Fixing Size After Last Property  
	class UValThreatComponent*                   CallFunc_GetThreatComponent_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


