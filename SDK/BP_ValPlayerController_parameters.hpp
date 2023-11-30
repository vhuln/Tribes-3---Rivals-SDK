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
// Function BP_ValPlayerController.BP_ValPlayerController_C.On Input Method Changed
struct ABP_ValPlayerController_C_On_Input_Method_Changed_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.DebugUpdatePlayerStatDisplay
struct ABP_ValPlayerController_C_DebugUpdatePlayerStatDisplay_Params
{
public:
	class AValPlayerState*                       ValPlayerState;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8D[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValPlayerState*                       K2Node_DynamicCast_AsVal_Player_State;             // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameStatType                     CallFunc_Array_Get_Item;                           // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FD0[0x6];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF9[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD8(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0xF8(0x50)(HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_2;            // 0x148(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3042[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_1;                          // 0x1A0(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305C[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x1B8(0x18)(None)
};

// 0x11 (0x11 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.NotifyKill
struct ABP_ValPlayerController_C_NotifyKill_Params
{
public:
	enum class EAwardType                        Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BB[0x7];                                     // Fixing Size After Last Property  
	class AValPlayerState*                       VictimState;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bTeamWipe;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.PlayKillSFX
struct ABP_ValPlayerController_C_PlayKillSFX_Params
{
public:
	class AValPlayerState*                       NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bTeamWipe;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3408[0x7];                                     // Fixing Size After Last Property  
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsABotPlayerState_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3452[0x5];                                     // Fixing Size After Last Property  
	class ATeamState*                            CallFunc_GetTeamStateFromObject_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3495[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetMemberCount_ReturnValue;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F
struct ABP_ValPlayerController_C_OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F
struct ABP_ValPlayerController_C_OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5
struct ABP_ValPlayerController_C_InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4
struct ABP_ValPlayerController_C_InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_Interact_K2Node_InputActionEvent_3
struct ABP_ValPlayerController_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_Reload_K2Node_InputActionEvent_2
struct ABP_ValPlayerController_C_InpActEvt_Reload_K2Node_InputActionEvent_2_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1
struct ABP_ValPlayerController_C_InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0
struct ABP_ValPlayerController_C_InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerTryKeycode
struct ABP_ValPlayerController_C_ServerTryKeycode_Params
{
public:
	TArray<int32>                                KeycodeToTry;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                ActorWithKeycode;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerOnChannellingToggled
struct ABP_ValPlayerController_C_ServerOnChannellingToggled_Params
{
public:
	bool                                         IsChanneling;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B53[0x7];                                     // Fixing Size After Last Property  
	class AActor*                                ActorWithChannel;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_WidgetInteraction_C*               WidgetInteractionActor;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerActivateLift
struct ABP_ValPlayerController_C_ServerActivateLift_Params
{
public:
	class AActor*                                ActorWithChannel;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerSummonLift
struct ABP_ValPlayerController_C_ServerSummonLift_Params
{
public:
	class AActor*                                ActorWithChannel;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        LiftLevel;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerTriggeredBotAlarm
struct ABP_ValPlayerController_C_ServerTriggeredBotAlarm_Params
{
public:
	class AActor*                                ActorWithChannel;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.K2_OnBecomeViewTarget
struct ABP_ValPlayerController_C_K2_OnBecomeViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x380 (0x380 - 0x0)
// Function BP_ValPlayerController.BP_ValPlayerController_C.ExecuteUbergraph_BP_ValPlayerController
struct ABP_ValPlayerController_C_ExecuteUbergraph_BP_ValPlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4054[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                K2Node_CustomEvent_KeycodeToTry;                   // 0x28(0x10)(ReferenceParm)
	class AActor*                                K2Node_CustomEvent_ActorWithKeycode;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface;    // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4060[0x2];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_Tag_1;                          // 0x54(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsChanneling;                   // 0x5C(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_406A[0x3];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_CustomEvent_ActorWithChannel_3;             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_WidgetInteraction_C*               K2Node_CustomEvent_WidgetInteractionActor;         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_CustomEvent_Tag;                            // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_1;  // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407D[0x7];                                     // Fixing Size After Last Property  
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_2;  // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue_1;     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4080[0x6];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_CustomEvent_ActorWithChannel_2;             // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_3;  // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue_2;     // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4092[0x6];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_CustomEvent_ActorWithChannel_1;             // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LiftLevel;                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4094[0x4];                                     // Fixing Size After Last Property  
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_4;  // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue_3;     // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4099[0x6];                                     // Fixing Size After Last Property  
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409B[0x4];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetValCharacter_ReturnValue;              // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A6[0x3];                                     // Fixing Size After Last Property  
	class UGameplayAbility*                      CallFunc_GetActiveSwappedAbility_ReturnValue;      // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValAbilitySwappable*                  K2Node_DynamicCast_AsVal_Ability_Swappable;        // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B9[0x1];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Temp_struct_Variable;                              // 0x144(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BB[0x3];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_CustomEvent_ActorWithChannel;               // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_5;  // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue_4;     // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C5[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x16C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C9[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x180(0x8)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_Event_PC;                                   // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CallFunc_GetValCharacter_ReturnValue_1;            // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         Temp_struct_Variable_1;                            // 0x198(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CF[0x7];                                     // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayAbilitySpecHandle> CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles; // 0x1B8(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40DD[0x3];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_Array_Get_Item;                           // 0x1CC(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BatchRPCTryActivateAbility_ReturnValue;   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40DF[0x7];                                     // Fixing Size After Last Property  
	class UValGameplayAbility*                   CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue; // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E9[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key;                       // 0x1E8(0x18)(HasGetValueTypeHash)
	class AValCharacter*                         CallFunc_GetValCharacter_ReturnValue_2;            // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F4[0x3];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_GetActiveEquippedAbility_ReturnValue;     // 0x20C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key_1;                     // 0x210(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FB[0x7];                                     // Fixing Size After Last Property  
	class UValGameplayAbility*                   CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1; // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key_2;                     // 0x238(0x18)(HasGetValueTypeHash)
	struct GameplayAbilities_GameplayAbilitySpecHandle CallFunc_FindAbilitySpecHandleForClass_ReturnValue; // 0x250(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4105[0x4];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         K2Node_InputActionEvent_Key_3;                     // 0x258(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BatchRPCTryActivateAbility_ReturnValue_1; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410C[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         Temp_struct_Variable_2;                            // 0x278(0x18)(HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key_4;                     // 0x290(0x18)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2B8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4115[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2C4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4119[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x2D8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411C[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetValCharacter_ReturnValue_3;            // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key_5;                     // 0x2F0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4121[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetActiveEquipSlotTag_ReturnValue;        // 0x30C(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x314(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTag_ReturnValue;         // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4140[0x3];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetValCharacter_ReturnValue_4;            // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_MakeLiteralGameplayTag_ReturnValue_1;     // 0x328(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4147[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetActiveEquipSlotTag_ReturnValue_1;      // 0x334(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTag_ReturnValue_1;       // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x33D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414B[0x2];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_Select_Default;                             // 0x340(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_MakeLiteralGameplayTag_ReturnValue_2;     // 0x348(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4159[0x1];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_Select_Default_1;                           // 0x358(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4161[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x368(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              Temp_struct_Variable_3;                            // 0x378(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


