#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x5CC - 0x568)
// WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C
class URedeemCodeScreen_C : public URHRedeemCodeScreenBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RedeemCodeField_C*                CodeEntry;                                         // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CodeRedemption;                                    // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ErrorLabel;                                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PendingOverlay;                                    // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectPrompt;                                      // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*           SubmitButton;                                      // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header1_C*                        WBP_Header1;                                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*            WBP_ModalPopupContainer;                           // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            ColorPalette;                                      // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    SpamPreventTimer;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        FocusGroup_NoInteraction;                          // 0x5C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FocusGroup_Input;                                  // 0x5C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterLimit;                                    // 0x5C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URedeemCodeScreen_C* GetDefaultObj();

	void UpdateSubmitButtonState(class FText CallFunc_GetText_NewParam, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsPendingServerReply_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void SetErrorMessage(class FText ErrorMessage);
	void OnSpamPreventTimeout();
	void GetPaletteColor(class FName Color_Name, struct SlateCore_SlateColor* Color, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct RallyHereStart_ColorPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1);
	void ShowPending();
	void EndPending();
	bool NavigateBack(bool CallFunc_IsPendingServerReply_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Remove_Top_View_Route_ViewChanged);
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowCodeRedeemFinished();
	void ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha);
	void InitHideAnimation();
	void HideCodeRedeemFinished();
	void HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha);
	void StartHideAnim();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void Construct();
	void InitializeWidgetButtonListeners();
	void SubmitCode();
	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void OnShown();
	void OnHide();
	void OnCloseButtonClicked();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool Success, class FText& Error);
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void OnCodeTextChanged(class FText& Text);
	void OnCodeTextCommit(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_RedeemCodeScreen(int32 EntryPoint, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, float K2Node_CustomEvent_ElapsedTime_1, float K2Node_CustomEvent_ElapsedAlpha_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_ElapsedAlpha, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, bool CallFunc_NavigateBack_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_Success, class FText K2Node_Event_Error, bool CallFunc_RemoveViewRoute_ReturnValue, bool CallFunc_IsPendingServerReply_ReturnValue, const struct SlateCore_SlateColor& CallFunc_GetPaletteColor_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FText K2Node_CustomEvent_Text_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ARHPlayerController* K2Node_DynamicCast_AsRHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_NewParam, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_IsPlatformType_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
};

}


