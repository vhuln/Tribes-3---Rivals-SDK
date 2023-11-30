#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5A0 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ErrorDisplay.WBP_ErrorDisplay_C
class UWBP_ErrorDisplay_C : public UValErrorDisplay
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ErrorText;                                         // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                UI_Button_Menu_Gold;                               // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ErrorTitle;                                        // 0x570(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LocalizedErrorDetails;                             // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ErrorDisplay_C* GetDefaultObj();

	void OnShown();
	void BndEvt__WBP_ErrorDisplay_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_ErrorDisplay(int32 EntryPoint, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveViewRoute_ReturnValue, class FText CallFunc_GetDisconnectErrorCode_OutErrorCode, bool CallFunc_GetDisconnectErrorCode_ReturnValue, class FText CallFunc_GetKickErrorCode_OutErrorCode, bool CallFunc_GetKickErrorCode_ReturnValue, bool CallFunc_RemoveViewRoute_ReturnValue_1);
};

}


