#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function GA_Flashlight.GA_Flashlight_C.K2_OnEndAbility
struct UGA_Flashlight_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasRetriggered;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function GA_Flashlight.GA_Flashlight_C.ValInputPressed
struct UGA_Flashlight_C_ValInputPressed_Params
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle Handle;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F6D[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityActorInfo ActorInfo;                                         // 0x8(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct GameplayAbilities_GameplayAbilityActivationInfo ActivationInfo;                                    // 0x50(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function GA_Flashlight.GA_Flashlight_C.ExecuteUbergraph_GA_Flashlight
struct UGA_Flashlight_C_ExecuteUbergraph_GA_Flashlight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasRetriggered;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A1[0x2];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_ActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayAbilitySpecHandle K2Node_Event_Handle;                               // 0x10(0x4)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D2[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityActorInfo K2Node_Event_ActorInfo;                            // 0x18(0x48)(ConstParm, ContainsInstancedReference)
	struct GameplayAbilities_GameplayAbilityActivationInfo K2Node_Event_ActivationInfo;                       // 0x60(0x20)(ConstParm, NoDestructor)
};

}
}


