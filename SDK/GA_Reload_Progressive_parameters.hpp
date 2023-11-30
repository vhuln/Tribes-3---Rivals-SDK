#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x21 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.BindToAbilitiesActive
struct UGA_Reload_Progressive_C_BindToAbilitiesActive_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.AddBullet
struct UGA_Reload_Progressive_C_AddBullet_Params
{
public:
	bool                                         LocalMasteryActivated;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateMastery_Activate;              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB0[0x5];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetMesh3P_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD3[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.EventReceived_390090B640ED8DEEF0E727A52330A668
struct UGA_Reload_Progressive_C_EventReceived_390090B640ED8DEEF0E727A52330A668_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnCancelled_390090B640ED8DEEF0E727A52330A668
struct UGA_Reload_Progressive_C_OnCancelled_390090B640ED8DEEF0E727A52330A668_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnInterrupted_390090B640ED8DEEF0E727A52330A668
struct UGA_Reload_Progressive_C_OnInterrupted_390090B640ED8DEEF0E727A52330A668_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnBlendOut_390090B640ED8DEEF0E727A52330A668
struct UGA_Reload_Progressive_C_OnBlendOut_390090B640ED8DEEF0E727A52330A668_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnCompleted_390090B640ED8DEEF0E727A52330A668
struct UGA_Reload_Progressive_C_OnCompleted_390090B640ED8DEEF0E727A52330A668_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.EventReceived_981CF2C14EBEB67D691489BC10F62E46
struct UGA_Reload_Progressive_C_EventReceived_981CF2C14EBEB67D691489BC10F62E46_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnCancelled_981CF2C14EBEB67D691489BC10F62E46
struct UGA_Reload_Progressive_C_OnCancelled_981CF2C14EBEB67D691489BC10F62E46_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnInterrupted_981CF2C14EBEB67D691489BC10F62E46
struct UGA_Reload_Progressive_C_OnInterrupted_981CF2C14EBEB67D691489BC10F62E46_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnBlendOut_981CF2C14EBEB67D691489BC10F62E46
struct UGA_Reload_Progressive_C_OnBlendOut_981CF2C14EBEB67D691489BC10F62E46_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnCompleted_981CF2C14EBEB67D691489BC10F62E46
struct UGA_Reload_Progressive_C_OnCompleted_981CF2C14EBEB67D691489BC10F62E46_Params
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2 (0x2 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.K2_OnEndAbility
struct UGA_Reload_Progressive_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasRetriggered;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.OnTagAdded
struct UGA_Reload_Progressive_C_OnTagAdded_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xB2C (0xB2C - 0x0)
// Function GA_Reload_Progressive.GA_Reload_Progressive_C.ExecuteUbergraph_GA_Reload_Progressive
struct UGA_Reload_Progressive_C_ExecuteUbergraph_GA_Reload_Progressive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_5;                     // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4167[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_5;                    // 0x10(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   Temp_struct_Variable;                              // 0xD0(0xB0)(None)
	struct GameplayTags_GameplayTag              Temp_struct_Variable_1;                            // 0x180(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_416D[0x2];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_4;                     // 0x18C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4173[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_4;                    // 0x198(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x248(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_3;                     // 0x258(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_3;                    // 0x260(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x310(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_2;                     // 0x320(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_2;                    // 0x328(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_1;                     // 0x3E8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_1;                    // 0x3F0(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag;                       // 0x4B0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData;                      // 0x4B8(0xB0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x568(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   Temp_struct_Variable_2;                            // 0x578(0xB0)(None)
	struct GameplayTags_GameplayTag              Temp_struct_Variable_3;                            // 0x628(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4191[0x7];                                     // Fixing Size After Last Property  
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValAnimInstance*                      K2Node_DynamicCast_AsVal_Anim_Instance;            // 0x640(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4194[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_ValAmmoData                  CallFunc_GetCurrentAmmo_ReturnValue;               // 0x64C(0x24)(NoDestructor)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4197[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_6;                     // 0x678(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_6;                    // 0x680(0xB0)(None)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasRetriggered;                      // 0x732(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1; // 0x733(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloatAttribute_ReturnValue_1;          // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2; // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41A0[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue_2;          // 0x73C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3; // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41A3[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue_3;          // 0x744(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CacheData_IsValid;                        // 0x759(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41AF[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x75C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ValAmmoData                  CallFunc_GetCurrentAmmo_ReturnValue_1;             // 0x76C(0x24)(NoDestructor)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_4; // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B2[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue_4;          // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_5; // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B5[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetFloatAttribute_ReturnValue_5;          // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x7A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_2;                      // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x7AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41BD[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x7B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41C1[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Min_ReturnValue;                          // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x7BE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41C9[0x1];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_7;                     // 0x7C0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_7;                    // 0x7C8(0xB0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D1[0x7];                                     // Fixing Size After Last Property  
	class USkeletalMeshComponent*                CallFunc_GetGunMesh1P_ReturnValue;                 // 0x880(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x888(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDeviceAudioVisual*                 CallFunc_GetAudioVisual_ReturnValue;               // 0x898(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x8A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x8A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x8A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E0[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_8;                     // 0x8A8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_8;                    // 0x8B0(0xB0)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x968(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetMesh3P_ReturnValue;                    // 0x978(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41ED[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_EventTag_9;                     // 0x984(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41EE[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEventData   K2Node_CustomEvent_EventData_9;                    // 0x990(0xB0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xA40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F2[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xA44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_Tag;                            // 0xA54(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F3[0x4];                                     // Fixing Size After Last Property  
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0xA60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValAnimInstance*                      K2Node_DynamicCast_AsVal_Anim_Instance_1;          // 0xA68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0xA71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41FF[0x6];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CallFunc_K2_SetTimer_ReturnValue;                  // 0xA78(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4201[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValAT_PlayMontageForMeshAndWait*      CallFunc_PlayMontageForMeshAndWait_ReturnValue;    // 0xA90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_420B[0x7];                                     // Fixing Size After Last Property  
	class UValAT_PlayMontageForMeshAndWait*      CallFunc_PlayMontageForMeshAndWait_ReturnValue_1;  // 0xAA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_ReturnValue_1;                 // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4211[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;     // 0xAC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xAD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0xAF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_2;                   // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0xB10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4224[0x4];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SafeDivide_A_ImplicitCast;                // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayMontageForMeshAndWait_Rate_ImplicitCast; // 0xB20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayMontageForMeshAndWait_Rate_ImplicitCast_1; // 0xB24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0xB28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


