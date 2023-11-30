#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x579 - 0x550)
// WidgetBlueprintGeneratedClass Blocker.Blocker_C
class UBlocker_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Closer;                                            // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_0;                                 // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHWidget*                             Target;                                            // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ClickToClose;                                      // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBlocker_C* GetDefaultObj();

	void BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Bind(class URHWidget* Widget, bool ClickToClose);
	void InitializeWidget();
	void HandleBlockerChange(bool Show, class UUserWidget* InWidget);
	void ExecuteUbergraph_Blocker(int32 EntryPoint, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Show, class UUserWidget* K2Node_CustomEvent_InWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, class URHCanvasPanel* K2Node_DynamicCast_AsRHCanvas_Panel, bool K2Node_DynamicCast_bSuccess_2, class URHWidget* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_ClickToClose, bool CallFunc_NavigateBack_ReturnValue);
};

}


