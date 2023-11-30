#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x5B9 - 0x550)
// WidgetBlueprintGeneratedClass WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C
class UWBP_SafeVoiceUserAgreement_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBlocker_C*                            Blocker;                                           // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckbox_C*                           CheckBox;                                          // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            EulaContainer;                                     // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EulaText_PC;                                       // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_PC;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       NextSwitcher;                                      // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_0;                                 // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     UI_Button_Menu;                                    // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                UI_Button_Menu_Gold;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*            WBP_ModalPopupContainer;                           // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayerSelectedConsentStatus;                     // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         CachedEnableSafeVoice;                             // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SafeVoiceUserAgreement_C* GetDefaultObj();

	void OnRejectSafeVoiceConsent(class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void OnAcceptSafeVoiceConsent(class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature(bool Checked);
	void OnShown();
	void BndEvt__WBP_SafeVoiceUserAgreement_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_SafeVoiceUserAgreement(int32 EntryPoint, bool CallFunc_RemoveViewRoute_ReturnValue, bool K2Node_ComponentBoundEvent_Checked);
	void OnPlayerSelectedConsentStatus__DelegateSignature(bool ConsentEnabled);
};

}


