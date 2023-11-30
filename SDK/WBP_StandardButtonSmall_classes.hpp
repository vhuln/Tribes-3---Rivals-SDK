#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC2 (0x612 - 0x550)
// WidgetBlueprintGeneratedClass WBP_StandardButtonSmall.WBP_StandardButtonSmall_C
class UWBP_StandardButtonSmall_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowButton;                                        // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyPrompt;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          KeyPromptContainer;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeWrapper;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              WBP_StandardButton_02;                             // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DefaultButtonText;                                 // 0x5B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       DefaultWidth;                                      // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowPromptOnFocus;                                 // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_27AF[0x7];                                     // Fixing Size After Last Property  
	double                                       DefaultHeight;                                     // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               ClickSmallBtnSFX;                                  // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverSmallBtnSFX;                                  // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct InputCore_Key                         PromptKey;                                         // 0x5F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConfirm;                                         // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsCancel;                                          // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_StandardButtonSmall_C* GetDefaultObj();

	void SetKeyPrompt(const struct InputCore_Key& Prompt, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon);
	void GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue);
	void SetHeight(double NewHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void SetDefaultDisplay(bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo);
	void SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void SetButtonText(class FText ButtonText);
	bool NavigateConfirm();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void Do_Hover();
	void Do_Unhover();
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void OnInitialized();
	void BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_StandardButtonSmall(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_ComponentBoundEvent_Widget_2, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget);
	void OnUnhovered__DelegateSignature(class UWidget* Widget);
	void OnHovered__DelegateSignature(class UWidget* Widget);
	void OnClicked__DelegateSignature(class UWidget* Widget);
};

}


