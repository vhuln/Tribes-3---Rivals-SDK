#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5A0 - 0x550)
// WidgetBlueprintGeneratedClass WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C
class UWBP_QueueSelection_RegionSelectButton_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_228;                                         // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PromptImage;                                       // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PromptImageWrapper;                                // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SelectedRegion;                                    // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     UI_Button_Menu;                                    // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RegionSelectRequested;                             // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ActiveAsButton;                                    // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CachedInputState;                                  // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2093[0x6];                                     // Fixing Size After Last Property  
	class UObject*                               ClickInputChangeRegionSelBtnSFX;                   // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_QueueSelection_RegionSelectButton_C* GetDefaultObj();

	void ForceClick();
	void HandleInputStateChange(enum class ERH_INPUT_STATE NewInputState, enum class ERH_INPUT_STATE Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default);
	void SetupPromptImageHandling(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeWidget();
	void Update_Region();
	void OnHide();
	void LoginState(enum class ERHLoginState LoginState);
	void EnableAsButton();
	void DisableAsButton();
	void UpdateCrossplay();
	void BndEvt__WBP_QueueSelection_RegionSelectButton_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void UninitializeWidget();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton(int32 EntryPoint, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERHLoginState K2Node_CustomEvent_LoginState, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetPreferredRegionId_OutRegionId, bool CallFunc_GetPreferredRegionId_ReturnValue, TMap<class FString, class FText> CallFunc_GetRegionList_OutRegionIdToNameMap, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime);
	void RegionSelectRequested__DelegateSignature();
};

}


