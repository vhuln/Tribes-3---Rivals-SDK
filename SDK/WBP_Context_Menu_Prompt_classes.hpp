#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x680 - 0x560)
// WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C
class UWBP_Context_Menu_Prompt_C : public URHContextBarPrompt
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CycleActionText;                                   // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CycleContextAction;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonArrow_C*                    CycleNext;                                         // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     CycleNextCallout;                                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonArrow_C*                    CyclePrevious;                                     // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     CyclePreviousCallout;                              // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     GamepadCallout;                                    // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          GamepadContainer;                                  // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GamepadContextText;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     HoldButtonA;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     HoldButtonB;                                       // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HoldContextAction;                                 // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     HoldGamepadCallout;                                // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HoldGamepadContainer;                              // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HoldGamepadContextText;                            // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HoldKBMButtonText;                                 // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HoldKBMButtonWrapper;                              // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HoldKBMContextText;                                // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HoldKBMWithKeyWrapper;                             // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HoldKeyText;                                       // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               HoldKeyWrapper;                                    // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     KBMButtonA;                                        // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     KBMButtonB;                                        // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KBMButtonText;                                     // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               KBMButtonWrapper;                                  // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KBMContextText;                                    // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               KBMWithKeyWrapper;                                 // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeyText;                                           // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               KeyWrapper;                                        // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          StandardContextAction;                             // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContextActionData*                    Data;                                              // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         KBMWithKey;                                        // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CurrentInputState;                                 // 0x661(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D1A[0x6];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnPromptClicked;                                   // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               IsBackBtnOverrideSFX;                              // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Context_Menu_Prompt_C* GetDefaultObj();

	void GetKeyForAction(bool Is_Gamepad_Key, struct InputCore_Key* Action_Key, class ARHHUDCommon* LocalHud, const struct RallyHereStart_ContextAction& CallFunc_GetActionContext_Context, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class UValInputManager* K2Node_DynamicCast_AsVal_Input_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForInputAction_Button, bool CallFunc_GetButtonForInputAction_ReturnValue, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common);
	void GetActionContext(struct RallyHereStart_ContextAction* Context, bool CallFunc_IsValid_ReturnValue);
	void GetActionName(class FName* Action, bool CallFunc_IsValid_ReturnValue);
	void GetActionText(class FText* Text, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PreConstruct(bool IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo);
	void OnInputStateChanged(enum class ERH_INPUT_STATE InputState, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateInputStateStandard(bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateInputStateCycle(bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateInputStateHold(bool K2Node_SwitchEnum_CmpSuccess);
	void PopulateStandardButton(const struct InputCore_Key& KeyboardKey, const struct InputCore_Key& GamepadKey, const struct InputCore_Key& CallFunc_GetKeyForAction_Action_Key, const struct InputCore_Key& CallFunc_GetKeyForAction_Action_Key_1, class FText CallFunc_GetActionText_Text, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, class FText CallFunc_Key_GetShortDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void PopulateCycleButton(class FName CallFunc_GetActionName_Action, class FName CallFunc_GetActionName_Action_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button_1, bool CallFunc_GetGamepadButtonForAction_ReturnValue_1, class FText CallFunc_GetActionText_Text);
	void PopulateHoldButton(const struct InputCore_Key& KeyboardKey, const struct InputCore_Key& GamepadKey, class FText CallFunc_GetActionText_Text, class FName CallFunc_GetActionName_Action, class FText CallFunc_TextToUpper_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForActionMapping_Button, bool CallFunc_GetButtonForActionMapping_ReturnValue, class FName CallFunc_GetActionName_Action_1, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, class FText CallFunc_Key_GetShortDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void Populate(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature();
	void BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature();
	void OnContextActionUpdated(class UContextActionData* InData);
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature();
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_10_OnButtonUnhovered__DelegateSignature();
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_12_OnButtonHovered__DelegateSignature();
	void BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_13_OnButtonUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_Context_Menu_Prompt(int32 EntryPoint, class UContextActionData* K2Node_Event_InData);
	void OnPromptClicked__DelegateSignature();
};

}


