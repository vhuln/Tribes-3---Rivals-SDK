#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x5D8 - 0x550)
// WidgetBlueprintGeneratedClass LoginEula.LoginEula_C
class ULoginEula_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StandardButtonLarge_C*            AcceptNew;                                         // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowDown;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowUp;                                           // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*            BackNew;                                           // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckbox_C*                           CheckBox;                                          // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            EulaContainer;                                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EulaText_PC;                                       // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_139;                                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_PC;                                // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       NextSwitcher;                                      // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ScrollCalloutDown;                                 // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ScrollCalloutSwitcher;                             // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ScrollCalloutUp;                                   // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginBackground_Shared_C*         WBP_LoginBackground_Shared;                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct Engine_TimerHandle                    CalloutTimer;                                      // 0x5D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULoginEula_C* GetDefaultObj();

	void EnableAcceptButton(bool Enable);
	void ShowArrows(double Value, double MaxValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void ChangeFontSizeText(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 K2Node_Select_Default, double CallFunc_Conv_IntToDouble_ReturnValue, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void HandleCalloutSwitcher(const class FString& CallFunc_GetPlatformName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_StriStri_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void ScrollUpPressed();
	void ScrollDownPressed();
	void ScrollUpReleased();
	void ScrollDownReleased();
	void Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState);
	void SetActiveScrollCallout();
	void BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool Checked);
	void BndEvt__AcceptNew_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__BackNew_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_LoginEula(int32 EntryPoint, bool Temp_bool_Scrolling_up_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_GetSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool Temp_bool_Scrolling_down_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_GetSize_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double Temp_real_Hold_Time_Variable, const struct CoreUObject_Vector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool K2Node_Event_IsDesignTime, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_GetDesiredSize_ReturnValue_1, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD_1, bool K2Node_DynamicCast_bSuccess_1, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, enum class ESlateVisibility Temp_byte_Variable_3, enum class ERH_INPUT_STATE Temp_byte_Variable_4, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_ComponentBoundEvent_Checked, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button_1, bool CallFunc_GetGamepadButtonForAction_ReturnValue_1, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon_1, float CallFunc_GetScrollOffset_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1);
};

}


