#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5A0 - 0x558)
// WidgetBlueprintGeneratedClass LoggedInInventoryCheck.LoggedInInventoryCheck_C
class ULoggedInInventoryCheck_C : public URHLoginInventoryCheck
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StandardButtonMedium_C*           DisconnectButton;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadPromptBasic_C*                 DisconnectPrompt;                                  // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          LoadingBar;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PromptSwitcher;                                    // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginBackground_Shared_C*         WBP_LoginBackground_Shared;                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Throbber_C*                       WBP_ThrobberShield;                                // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       CurrentProgress;                                   // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentSeconds;                                    // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULoggedInInventoryCheck_C* GetDefaultObj();

	void OnInputStateChanged(enum class ERH_INPUT_STATE InputState, bool K2Node_SwitchEnum_CmpSuccess);
	struct UMG_EventReply OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, bool CallFunc_AddViewRoute_ReturnValue, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void OpenGate();
	void CloseGate();
	void OnShown();
	void InitializeWidget();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void InitializeWidgetNavigation();
	void OnCancelLogin();
	void ExecuteUbergraph_LoggedInInventoryCheck(int32 EntryPoint, bool CallFunc_AddViewRoute_ReturnValue, double Temp_real_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget, const struct RallyHereStart_ButtonPromptData& K2Node_MakeStruct_ButtonPromptData, bool CallFunc_AddViewRoute_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


