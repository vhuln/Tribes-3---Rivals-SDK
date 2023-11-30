#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x590 - 0x550)
// WidgetBlueprintGeneratedClass WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C
class UWBP_JoinMatchBlocker_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnShow;                                            // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BlockerBkg;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonSmall_C*            CancelButton;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            JoiningText;                                       // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingScreen_Message_C*              LoadingScreen_Message;                             // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainWrapper;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*            WBP_ModalPopupContainer;                           // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_JoinMatchBlocker_C* GetDefaultObj();

	bool IsShowingCancelOption(int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool NavigateBack(bool CallFunc_IsShowingCancelOption_ReturnValue);
	class URHQueueDataFactory* GetQueueDataFactory(class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue);
	void LeaveMatchQueue(class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool CallFunc_LeaveQueue_ReturnValue);
	void InitializeWidgetNavigation();
	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void OnInitialized();
	void OnShowAnimFinish();
	void OnShowAnimStart();
	void InitializeWidget();
	void BeginCancelButtonTimer();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_JoinMatchBlocker(int32 EntryPoint, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* K2Node_ComponentBoundEvent_Widget, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue);
};

}


