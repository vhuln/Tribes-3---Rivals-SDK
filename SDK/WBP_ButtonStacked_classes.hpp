#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x608 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C
class UWBP_ButtonStacked_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnClickAnim;                                       // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnim_Red;                                     // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ButtonContent;                                     // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Click;                                             // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EndCap;                                            // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected;                                          // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBtnStackedClicked;                               // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBtnStackedHovered;                               // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBtnStackedUnhovered;                             // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsDisable;                                        // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsActive;                                         // 0x5D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9D[0x6];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnBtnStackedReleased;                              // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsRedButton;                                       // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C9E[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               ClickBtnStackedSFX;                                // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverBtnStackedSFX;                                // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ButtonStacked_C* GetDefaultObj();

	void SetVisuallyDisabled(bool ShouldDisable, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color, double CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_SelectFloat_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_GetColorByName_HasFound_1, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color_1, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_2, bool Temp_bool_Variable, const struct CoreUObject_LinearColor& K2Node_Select_Default, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
	void SetInitialDisplay(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_2, const struct CoreUObject_LinearColor& K2Node_Select_Default, bool CallFunc_GetColorByName_HasFound_1, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color_1, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_3, const struct CoreUObject_LinearColor& K2Node_Select_Default_1);
	void OnHoveredLogic(bool IsGamepad, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool NavigateConfirm();
	void Construct();
	void OnGamepadConfirmed();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void DisableButton(bool bShouldDisable);
	void CallButtonHover();
	void CallButtonUnhover();
	void SetIsActiveState(bool bIsActive);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ButtonStacked(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_CustomEvent_bShouldDisable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_bIsActive, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
	void OnBtnStackedReleased__DelegateSignature();
	void OnBtnStackedUnhovered__DelegateSignature();
	void OnBtnStackedHovered__DelegateSignature(bool IsGamepad);
	void OnBtnStackedClicked__DelegateSignature();
};

}


