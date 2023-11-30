#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x788 - 0x6B0)
// WidgetBlueprintGeneratedClass PopupManager.PopupManager_C
class UPopupManager_C : public URHPopupManager
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x6B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnShow;                                            // 0x6B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x6C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonContainer;                                   // 0x6C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentBox;                                        // 0x6D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ContentVertBox;                                    // 0x6D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        DescRichText;                                      // 0x6E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HeaderText;                                        // 0x6E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x6F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_196;                                         // 0x6F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_0;                                 // 0x700(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shadow;                                            // 0x708(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              StandardButton_02;                                 // 0x710(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              StandardButton_02_C_1;                             // 0x718(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SubheaderText;                                     // 0x720(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TextEntry;                                         // 0x728(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Warning;                                           // 0x730(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_panel_bevel_C*                    WBP_panel_bevel_C_2;                               // 0x738(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentPopupId;                                    // 0x740(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C14[0x4];                                     // Fixing Size After Last Property  
	TArray<class UWBP_StandardButton_02_C*>      Buttons;                                           // 0x748(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	enum class ERH_INPUT_STATE                   CurrentInputState;                                 // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BackHeldOnShown;                                   // 0x759(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C17[0x6];                                     // Fixing Size After Last Property  
	TArray<class FName>                          ActionMapKeysToAllow;                              // 0x760(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct InputCore_Key>                 KeysToAllowDownUp;                                 // 0x770(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                               CancelClickPopupManSFX;                            // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPopupManager_C* GetDefaultObj();

	struct UMG_EventReply OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyUp_ReturnValue);
	struct UMG_EventReply OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, bool CallFunc_IsVisible_ReturnValue, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyDown_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue);
	void SetupSubHeaderText(class FText NewSubHeaderText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetupButtons(TArray<struct RallyHereStart_RHPopupButtonConfig>& ButtonInfo, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct UMG_SlateChildSize& K2Node_MakeStruct_SlateChildSize, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct RallyHereStart_RHPopupButtonConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_StandardButton_02_C* CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_StandardButton_02_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void SetupTextEntry(bool HasTextEntry, class FText DefaultEntryText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupWarningText(class FText NewWarningText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupDescription(class FText NewDescText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupHeader(class FText NewHeaderText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	bool NavigateBack();
	void Construct();
	void ShowPopup(const struct RallyHereStart_RHPopupConfig& PopupData);
	void HidePopup();
	void ButtonPressed(class UWidget* Index);
	void InitializeWidgetNavigation();
	void InitializeWidget();
	void HandleCancelButtonClicked(class UWidget* InIndex);
	void OnShown();
	void OnHide();
	void OnBackButton();
	void ExecuteUbergraph_PopupManager(int32 EntryPoint, class UWidget* K2Node_CustomEvent_Index, class UWBP_StandardButton_02_C* K2Node_DynamicCast_AsWBP_Standard_Button_02, bool K2Node_DynamicCast_bSuccess, const struct RallyHereStart_RHPopupConfig& K2Node_Event_popupData, class UWidget* K2Node_CustomEvent_InIndex, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForActionMapping_Button, bool CallFunc_GetButtonForActionMapping_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_IsLobbyHUD_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName CallFunc_PopOverrideRoute_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, class UWidget* CallFunc_SetFocusToThis_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


