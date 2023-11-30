#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x5C8 - 0x560)
// WidgetBlueprintGeneratedClass WBP_QueueTimer_v2.WBP_QueueTimer_v2_C
class UWBP_QueueTimer_v2_C : public URHQueueTimerWidgetBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               CancelBg;                                          // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CancelContainer;                                   // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CancelQueueButton;                                 // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     CancelQueueGamepad;                                // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBkg;                                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatusLabel;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            ColorPalette;                                      // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URHQueueDataFactory*                   QueueDataFactory;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_QueueTimer_v2_C* GetDefaultObj();

	void UpdateCancelButton(enum class EQueueTimerState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class EQueueTimerState CallFunc_GetCurrentTimerState_ReturnValue, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetNeutralLabel(class FText InText);
	void GetColorFromPalette(class FName RowName, struct CoreUObject_LinearColor* LinearColor, const class FString& CallFunc_BuildString_Name_ReturnValue, const struct RallyHereStart_ColorPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UpdatePenaltyTime(bool Temp_bool_Variable, int32 CallFunc_GetQueueTime_PartHours_ReturnValue, int32 CallFunc_GetQueueTime_PartMins_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetQueueTime_PartHours_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromPalette_LinearColor, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_GetQueueTime_PartMins_ReturnValue_1, int32 CallFunc_GetQueueTime_PartSecs_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default);
	void UpdateStatusLabel(enum class EQueueTimerState CallFunc_GetCurrentTimerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetGamepadCallout(const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue);
	void UpdateQueueTime(bool CallFunc_IsInCustomMatch_ReturnValue, int32 CallFunc_GetQueueTime_PartSecs_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetQueueTime_PartMins_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CancelQueue();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnUpdateQueueTime(float TimeSecs);
	void OnUpdateQueueTimerState(enum class EQueueTimerState State);
	void OnControlQueuePermissionUpdate(bool CanControl);
	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnHudBindingReady();
	void ExecuteUbergraph_WBP_QueueTimer_v2(int32 EntryPoint, bool CallFunc_UIX_AttemptCancelQueue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_TimeSecs, enum class EQueueTimerState K2Node_Event_State, bool K2Node_Event_CanControl, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


