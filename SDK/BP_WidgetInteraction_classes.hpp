#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x330 - 0x298)
// BlueprintGeneratedClass BP_WidgetInteraction.BP_WidgetInteraction_C
class ABP_WidgetInteraction_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValTempAkComponent*                   ValTempAk;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SceneRoot;                                         // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_InteractWidget_C*                  CachedWidget;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ParentInteractionActor;                            // 0x2C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsOpened;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActivatesLift;                                     // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E9A[0x2];                                      // Fixing Size After Last Property  
	int32                                        SummonLiftLevel;                                   // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       TickDistSquared;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TickWidget;                                        // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActivatable;                                     // 0x2D9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA0[0x6];                                      // Fixing Size After Last Property  
	class AValPlayerController*                  CachedPlayerController;                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAuthoritativelyInteracting;                      // 0x2E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA3[0x7];                                      // Fixing Size After Last Property  
	class FText                                  WidgetText;                                        // 0x2F0(0x18)(Edit, BlueprintVisible)
	enum class EInteractWidgetType               InteractWidgetTypeOverride;                        // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB3[0x7];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnHackableOptionSelected;                          // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPlayerUnhoveredWidgetComponent;                  // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_WidgetInteraction_C* GetDefaultObj();

	void PlayWidgetSuccess(class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void OnPlayerUnhoveredWidget(class AValCharacter* UnhoveredCharacter);
	void UpdateHackableTerminalButtonUseCount(int32 ButtonIndex, int32 NewUseCount, bool CallFunc_IsValid_ReturnValue);
	void InitializeHackableTerminal(TArray<struct HackableButtonOption_HackableButtonOption>& HackableButtonOptions, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnHackableOptionSelectedFromWidget(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex);
	void OnBotAlarm(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void SetWidgetText(class FText InText, class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void OnRep_IsActivatable(bool CallFunc_IsDedicatedServer_ReturnValue);
	void EndChanneling();
	void StartChanneling();
	void OnWidgetHovered();
	void OnRep_IsAuthoritativelyInteracting(bool CallFunc_IsValid_ReturnValue);
	void On_Widget_Unhovered();
	void OnParentInteractionActorUpdated(bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, enum class EInteractWidgetType CallFunc_GetInteractWidgetType_Type, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnRep_ParentInteractionActor(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess);
	void Enable_Disable_Interaction_SFX(bool Is_Channeling);
	void OnLiftSummoned(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnLiftActivated(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnChannelingUpdatedFromAuthority(bool IsAuthoritativelyChanneling, bool CallFunc_IsDedicatedServer_ReturnValue);
	void GetTotalChannelTime(double* Total_Channel_Time, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTotalChannelTime_ChannelTime, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void OnChannelPctUpdated(double NewChannelPct, bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnChannelingToggled(bool IsChanneling, class UUI_InteractWidget_C* InteractWidget, class AValPlayerController* PlayerController, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Set_Is_Opened(bool NewIsOpened, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void CacheParentInteractionActor(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnKeycodeEntered(TArray<int32>& EnteredKeycode, class UUI_InteractWidget_C* InteractWidget, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void BindWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WidgetInteraction(int32 EntryPoint, enum class ETickMode Temp_byte_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class ETickMode Temp_byte_Variable_1, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_HackableTerminal_C* K2Node_DynamicCast_AsBP_Hackable_Terminal, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, enum class ETickMode K2Node_Select_Default, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void OnPlayerUnhoveredWidgetComponent__DelegateSignature(class AValCharacter* UnhoveredCharacter);
	void OnHackableOptionSelected__DelegateSignature(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex);
};

}


