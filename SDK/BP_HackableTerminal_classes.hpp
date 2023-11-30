#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0x344 - 0x298)
// BlueprintGeneratedClass BP_HackableTerminal.BP_HackableTerminal_C
class ABP_HackableTerminal_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  InteractableWidget;                                // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EInteractWidgetType               InteractType;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3319[0x7];                                     // Fixing Size After Last Property  
	TArray<class ABP_WidgetInteraction_C*>       InteractionChildren;                               // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AController*>                   ChannelingControllers;                             // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AController*                           ChannelingController;                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultChannelTime;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ChannelRemainingTime;                              // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedChannelStarted;                              // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChanneling;                                      // 0x2F1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3324[0x6];                                     // Fixing Size After Last Property  
	double                                       ChannelPct;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class FText                                  InteractText;                                      // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         InMainMenu;                                        // 0x318(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332B[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CurrentUser;                                       // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<struct HackableButtonOption_HackableButtonOption> PanelOptions;                                      // 0x328(0x10)(Edit, BlueprintVisible)
	class UValAbilitySystemComponent*            CachedAbilitySystemComponent;                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        InfoDisplayTime;                                   // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HackableTerminal_C* GetDefaultObj();

	void GetWidgetBlockInteractReason(class AValCharacter* Initiator, enum class EInteractionFailureType* Reason, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void GetInteractWidgetType(enum class EInteractWidgetType* Type);
	void GetKeycode(TArray<int32>* Keycode);
	void GetTotalChannelTime(double* ChannelTime);
	void OnInfoFade();
	void CloseTerminal();
	void OnPlayerUnhoveredHackablePanelWidget(class AValCharacter* UnhoveredCharacter, bool CallFunc_IsValid_ReturnValue, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnCharacterApprovedHackableButtonPressed(int32 ButtonIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct HackableButtonOption_HackableButtonOption& CallFunc_Array_Get_Item, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct HackableButtonOption_HackableButtonOption& K2Node_MakeStruct_HackableButtonOption);
	void CanUseButton(int32 ButtonIndex, bool* CanUse, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct HackableButtonOption_HackableButtonOption& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnHackableTerminalOptionSelected(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex, const struct HackableButtonOption_HackableButtonOption& LocalButtonInfo, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanUseButton_CanUse, bool CallFunc_IsValid_ReturnValue);
	void ClearCurrentUser();
	void SetCurrentUserFromController(class AController* Controller, bool* ValueSet, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacterFromController_ValCharacter, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnRep_CurrentUser(bool LocalShouldPanelBeActivatable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValCharacter* CallFunc_GetCharacterFromController_ValCharacter, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void CanInteract(bool* CanInteract, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_InMainMenu(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void SetWidgetInteractable(bool Interactable, class ABP_WidgetInteraction_C* K2Node_DynamicCast_AsBP_Widget_Interaction, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnChannelFinished();
	void GetCharacterFromController(class AController* Controller, class AValCharacter** ValCharacter, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess_1, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_1);
	void OnRep_ChannelPct(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	double GetChannelPercent(double CallFunc_GetTotalChannelTime_ChannelTime, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void OnRep_IsChanneling(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateChannelingCharacter(class AController* Player_Controller, class AValCharacter* LocalValChar, class AValCharacter* CallFunc_GetCharacterFromController_ValCharacter, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void OnKeycodeEntered(TArray<int32>& EnteredKeycode, class AActor* InteractingActor);
	void OnLiftActivated();
	void OnLiftSummoned(int32 LiftLevel);
	void OnInstantActivation(class AController* Controller);
	void OnChannellingToggled(bool IsChanneling, class AController* Controller, class ABP_WidgetInteraction_C* WidgetInteractionActor);
	void AddChildInteractionActor(class ABP_WidgetInteraction_C* ChildToAdd);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartWallScreenInterationSFX(class AController* Controller);
	void StopWallScreenInterationSFX(class AController* Controller);
	void ExecuteUbergraph_BP_HackableTerminal(int32 EntryPoint, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* K2Node_Event_ChildToAdd, bool K2Node_Event_IsChanneling, class AController* K2Node_Event_Controller, class ABP_WidgetInteraction_C* K2Node_Event_WidgetInteractionActor, class AController* K2Node_Event_Controller_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetCurrentUserFromController_ValueSet, int32 K2Node_Event_LiftLevel, TArray<int32>& K2Node_Event_EnteredKeycode, class AActor* K2Node_Event_InteractingActor, double CallFunc_GetChannelPercent_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_GetTotalChannelTime_ChannelTime, class AActor* CallFunc_Array_Get_Item, class ABP_WidgetInteraction_C* K2Node_DynamicCast_AsBP_Widget_Interaction, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTotalChannelTime_ChannelTime_1, class AController* K2Node_CustomEvent_Controller_1, class AController* K2Node_CustomEvent_Controller, class AValCharacter* CallFunc_GetCharacterFromController_ValCharacter, class AValCharacter* CallFunc_GetCharacterFromController_ValCharacter_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_SetCurrentUserFromController_ValueSet_1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


