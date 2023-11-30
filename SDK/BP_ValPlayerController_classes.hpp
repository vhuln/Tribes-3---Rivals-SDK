#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x15C8 - 0x1578)
// BlueprintGeneratedClass BP_ValPlayerController.BP_ValPlayerController_C
class ABP_ValPlayerController_C : public ATopPlayerController
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x1578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValAimAssistComponent*                ValAimAssist;                                      // 0x1580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      PlayerControllerCamera;                            // 0x1588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        UsePackTask;                                       // 0x1590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    DebugUpdatePlayerStatDisplayHandle;                // 0x1598(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        InteractHoldTime;                                  // 0x15A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B7[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    InteractHoldTimerHandle;                           // 0x15A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SwapHoldTime;                                      // 0x15B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41BC[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    SwapHoldTimerHandle;                               // 0x15B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              PreMeleeEquipSlot;                                 // 0x15C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ValPlayerController_C* GetDefaultObj();

	void On_Input_Method_Changed(enum class ECommonInputType bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DebugUpdatePlayerStatDisplay(class AValPlayerState* ValPlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, enum class EGameStatType CallFunc_Array_Get_Item, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_GetStat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	void NotifyKill(enum class EAwardType Type, class AValPlayerState* VictimState, bool bTeamWipe);
	void PlayKillSFX(class AValPlayerState* NewParam, bool bTeamWipe, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsABotPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMemberCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnKill();
	void OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F(const struct GameplayTags_GameplayTag& Tag);
	void InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5(const struct InputCore_Key& Key);
	void InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4(const struct InputCore_Key& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_3(const struct InputCore_Key& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_2(const struct InputCore_Key& Key);
	void InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1(const struct InputCore_Key& Key);
	void InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0(const struct InputCore_Key& Key);
	void ReceiveBeginPlay();
	void OnSpectateStart();
	void OnSpectateEnd();
	void ServerTryKeycode(TArray<int32>& KeycodeToTry, class AActor* ActorWithKeycode);
	void ServerOnChannellingToggled(bool IsChanneling, class AActor* ActorWithChannel, class ABP_WidgetInteraction_C* WidgetInteractionActor);
	void ServerActivateLift(class AActor* ActorWithChannel);
	void ServerSummonLift(class AActor* ActorWithChannel, int32 LiftLevel);
	void ServerTriggeredBotAlarm(class AActor* ActorWithChannel);
	void DebugShowPlayerStats();
	void DebugHidePlayerStats();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void OnTryInteract();
	void OnTryReload();
	void OnSwapToMelee();
	void OnCycleWeapons();
	void ExecuteUbergraph_BP_ValPlayerController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<int32>& K2Node_CustomEvent_KeycodeToTry, class AActor* K2Node_CustomEvent_ActorWithKeycode, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, bool K2Node_CustomEvent_IsChanneling, class AActor* K2Node_CustomEvent_ActorWithChannel_3, class ABP_WidgetInteraction_C* K2Node_CustomEvent_WidgetInteractionActor, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesImplementInterface_ReturnValue_1, class AActor* K2Node_CustomEvent_ActorWithChannel_2, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesImplementInterface_ReturnValue_2, class AActor* K2Node_CustomEvent_ActorWithChannel_1, int32 K2Node_CustomEvent_LiftLevel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_DoesImplementInterface_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAbilitySwappable* K2Node_DynamicCast_AsVal_Ability_Swappable, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool Temp_bool_Variable_1, class AActor* K2Node_CustomEvent_ActorWithChannel, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_DoesImplementInterface_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* K2Node_Event_PC, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_1, const struct InputCore_Key& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_3, TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>& CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles, bool CallFunc_IsValid_ReturnValue_4, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_Array_Get_Item, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key_1, bool CallFunc_IsValid_ReturnValue_6, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, const struct InputCore_Key& K2Node_InputActionEvent_Key_2, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key_3, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue_1, const struct InputCore_Key& Temp_struct_Variable_2, const struct InputCore_Key& K2Node_InputActionEvent_Key_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_3, const struct InputCore_Key& K2Node_InputActionEvent_Key_5, bool CallFunc_IsValid_ReturnValue_7, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_4, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue_1, bool CallFunc_NotEqual_GameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, const struct GameplayTags_GameplayTag& K2Node_Select_Default, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct GameplayTags_GameplayTag& K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct GameplayTags_GameplayTag& Temp_struct_Variable_3);
};

}


