#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9D (0x5ED - 0x550)
// WidgetBlueprintGeneratedClass WBP_TopNavButton.WBP_TopNavButton_C
class UWBP_TopNavButton_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          NewIndicator;                                      // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CallToAction_C*                   WBP_CallToAction;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_navtab_C*                         WBP_main_nav_tab;                                  // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Message;                                           // 0x570(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  TargetViewState;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          RelatedViewStates;                                 // 0x5C0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnNonRouteClicked;                                 // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsFirstTab;                                       // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3BD3[0x3];                                     // Fixing Size After Last Property  
	class FName                                  BattlePassCTAName;                                 // 0x5E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsesHolidayColoring;                               // 0x5EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TopNavButton_C* GetDefaultObj();

	void SetNewIndicator(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void IsDisabled(bool* Disabled, bool CallFunc_IsDisabled_ReturnValue);
	void IsActive(bool* Active, bool CallFunc_IsSelected_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetMessage(class FText Message);
	void Construct();
	void DisableButton(bool IsDisabled);
	void SetActive(bool IsActive);
	void GamepadConfirm();
	void InitializeWidget();
	void NavTabSelected(class URHNavTabWidget* SelectedNavTab);
	void ExecuteUbergraph_WBP_TopNavButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Message, bool CallFunc_AddViewRoute_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_CustomEvent_IsDisabled, bool K2Node_CustomEvent_IsActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHNavTabWidget* K2Node_CustomEvent_SelectedNavTab);
	void OnNonRouteClicked__DelegateSignature(class URHWidget* ButtonClicked);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature(class FName TargetViewState);
};

}


