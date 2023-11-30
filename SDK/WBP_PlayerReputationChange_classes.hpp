#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5A0 - 0x550)
// WidgetBlueprintGeneratedClass WBP_PlayerReputationChange.WBP_PlayerReputationChange_C
class UWBP_PlayerReputationChange_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimOnShown;                                       // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_90;                                          // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                UI_Button_Menu_Gold;                               // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerReputationTracker_C*        WBP_PlayerReputationTracker;                       // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AnimationComplete;                                 // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct Engine_TimerHandle                    ButtonDelayTimer;                                  // 0x588(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBackButtonPressed;                               // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PlayerReputationChange_C* GetDefaultObj();

	void BeginProgressAnimation();
	void BeginOnShown();
	void ShowButton(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void AnimationCompleted();
	void BndEvt__WBP_ReputationChange_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerReputationChange(int32 EntryPoint);
	void OnBackButtonPressed__DelegateSignature();
	void AnimationComplete__DelegateSignature();
};

}


