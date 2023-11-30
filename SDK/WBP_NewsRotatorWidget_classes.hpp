#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x670 - 0x568)
// WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C
class UWBP_NewsRotatorWidget_C : public URHNewsRotatorWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnHover;                                      // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ChangeNewsImage;                              // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UStandardButtonNoArt_C*                ActionButton;                                      // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*               LeftNavPrompt;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NewsDescriptionOverlay;                            // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         NewsImage;                                         // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         NewsImageAnimateOut;                               // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*               RightNavPrompt;                                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RotatorButtons;                                    // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeControl;                                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SlideTitle;                                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SlideTitle_AnimOut;                                // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SpacerText;                                        // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SpacerText_AnimOut;                                // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SpacerTextWrapper;                                 // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SpacerTextWrapper_AnimOut;                         // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextField_1;                                       // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextField_AnimOut;                                 // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TextGroupAnimateOut;                               // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TextGroupWrapper;                                  // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewsRotatorButton_C*              WBP_NewsRotatorButton;                             // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       TickTimer;                                         // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPanelIndex;                                 // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnimating;                                       // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2184[0x3];                                     // Fixing Size After Last Property  
	TArray<class URHNewsRotatorData*>            NewsRotatorObjects;                                // 0x630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            NewsVisibilityUpdated;                             // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  InputRouteName;                                    // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_NewsRotatorButton_C*              CurrentRotatorButton;                              // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SizeX;                                             // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       SizeY;                                             // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NewsRotatorWidget_C* GetDefaultObj();

	void OnGetPanelData(TArray<class URHNewsRotatorData*>& Data, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool CallFunc_Greater_IntInt_ReturnValue, class URHNewsRotatorData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UWBP_NewsRotatorButton_C* CallFunc_Create_ReturnValue, class URHNewsRotatorData* CallFunc_Array_Get_Item_1, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateSize(const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	bool NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue);
	void UpdatePrompts(uint8 InputState, bool HasFocus, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetNavigationWidgets(TArray<class URHWidget*>* Widgets, TArray<class URHWidget*>& K2Node_MakeArray_Array);
	void ShowPanel(int32 NewPanelIndex, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 K2Node_Select_Default, class URHNewsRotatorData* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void UpdateRotatorButtons(const TArray<class UWidget*>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWBP_NewsRotatorButton_C* K2Node_DynamicCast_AsWBP_News_Rotator_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void ShowPrevPanel(int32 CallFunc_Subtract_IntInt_ReturnValue);
	void ShowNextPanel(int32 CallFunc_Add_IntInt_ReturnValue);
	void PopulateData(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void InitializeWidget();
	void OnJsonChanged(const class FString& JsonName);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnItemClicked(int32 ButtonIndex);
	void OnActionClicked(class UWidget* Widget);
	void OnActionButtonHovered(class URHWidget* Widget, bool bHovered);
	void OnInputModeChange(uint8 CurrentState);
	void InitializeWidgetNavigation();
	void HandleGamepadHovered(class URHWidget* Widget, bool bHovered);
	void GamepadHover();
	void GamepadUnhover();
	void Event_On_Action_Button_Hovered(class UWidget* Widget);
	void Event_On_Action_Button_Unhovered(class UWidget* Widget);
	void TriggerPanelTransition();
	void BindInputActions();
	void UnbindInputActions();
	void OnCycleAction(bool bNext);
	void ExecuteUbergraph_WBP_NewsRotatorWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& K2Node_Event_JsonName, double CallFunc_Add_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation, int32 K2Node_CustomEvent_ButtonIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* K2Node_CustomEvent_Widget_4, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class URHWidget* K2Node_CustomEvent_Widget_3, bool K2Node_CustomEvent_bHovered_1, class URHNewsRotatorData* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, uint8 K2Node_CustomEvent_CurrentState, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class URHWidget* K2Node_CustomEvent_Widget_2, bool K2Node_CustomEvent_bHovered, bool CallFunc_HasAnyUserFocus_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* K2Node_CustomEvent_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWidget* K2Node_CustomEvent_Widget, bool Temp_bool_Variable, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class URHNewsRotatorData* CallFunc_Array_Get_Item_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_bNext, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void NewsVisibilityUpdated__DelegateSignature(bool Visibility);
};

}


