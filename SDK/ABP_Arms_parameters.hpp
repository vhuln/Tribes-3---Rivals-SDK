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
// Function ABP_Arms.ABP_Arms_C.AnimGraph
struct UABP_Arms_C_AnimGraph_Params
{
public:
	struct Engine_PoseLink                       AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ABP_Arms.ABP_Arms_C.OnTagAdded_613F8E114CBABA547C61E29C5D5E66A2
struct UABP_Arms_C_OnTagAdded_613F8E114CBABA547C61E29C5D5E66A2_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ABP_Arms.ABP_Arms_C.OnTagRemoved_613F8E114CBABA547C61E29C5D5E66A2
struct UABP_Arms_C_OnTagRemoved_613F8E114CBABA547C61E29C5D5E66A2_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA4 (0xA4 - 0x0)
// Function ABP_Arms.ABP_Arms_C.ExecuteUbergraph_ABP_Arms
struct UABP_Arms_C_ExecuteUbergraph_ABP_Arms_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ED7[0x4];                                     // Fixing Size After Last Property  
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EDA[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Temp_struct_Variable;                              // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_Tag_1;                          // 0x24(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EDE[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE3[0x4];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_Tag;                            // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character_1;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F09[0x7];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0C[0x6];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


