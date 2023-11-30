#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5B0 - 0x580)
// WidgetBlueprintGeneratedClass WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C
class UWBP_QuickPlay_ButtonWrapper_C : public URHQuickPlay
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_HomeQuickPlay_QueueSelect_C*      WBP_HomeQuickPlay_QueueSelect;                     // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HomeQuickPlay_SingleButton_C*     WBP_HomeQuickPlay_SingleButton;                    // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnQueueInfoSet;                                    // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_QuickPlay_ButtonWrapper_C* GetDefaultObj();

	void HandleOnQueueInfoSet(class URH_MatchmakingQueueInfo* QueueInfo);
	void RefreshFillTeamSetting();
	void UpdateQueueEligibilityInfo();
	void GetNavigationWidgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& CallFunc_GetNavigationWidgets_Return_Value);
	void InitializeWidget();
	void ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnQueueInfoSet__DelegateSignature(class URH_MatchmakingQueueInfo* QueueInfo);
};

}


