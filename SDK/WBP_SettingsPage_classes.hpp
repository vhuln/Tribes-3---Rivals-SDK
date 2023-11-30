#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5A0 - 0x570)
// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
class UWBP_SettingsPage_C : public URHSettingsPage
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            PageScrollBox;                                     // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SettingsGroupBox;                                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       StartTranslationXAnim;                             // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartOpacityAnim;                                  // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimPlayTime;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingsPage_C* GetDefaultObj();

	class UScrollBox* GetScrollBox(class UScrollBox* CallFunc_GetScrollBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Add_Settings_Section_Widget(class URHSettingsSection* Selection_Widget, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void InitializeTickAnimations();
	void HandleShowPageAnimFinished();
	void HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void HandleHidePageAnimFinished();
	void HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void PlayShowPageAnim();
	void PlayHidePageAnim();
	void SetInitPageState();
	void Construct();
	void AddSettingsSectionWidget(class URHSettingsSection* SettingsSection);
	void ExecuteUbergraph_WBP_SettingsPage(int32 EntryPoint, float K2Node_CustomEvent_ElapsedTime_1, float K2Node_CustomEvent_ElapsedAlpha_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_ElapsedAlpha, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_Ease_ReturnValue, class URHSettingsSection* K2Node_Event_SettingsSection, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_AddTickAnimation_Duration_ImplicitCast, float CallFunc_AddTickAnimation_Duration_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2);
};

}


