#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5A0 - 0x580)
// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
class UWBP_SettingsGroup_C : public URHSettingsGroup
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          MainSettingBox;                                    // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SubSettingsBox;                                    // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SubSettingsContainer;                              // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingsGroup_C* GetDefaultObj();

	void Add_Sub_Settings_Widget(class URHSettingsContainer* Settings_Container);
	void Add_Main_Settings_Widget(class URHSettingsContainer* Settings_Container);
	void AddSettingsWidget(class URHSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box, class UClass* Settings_Widget_Container, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void InitializeWidget();
	void AddSubSettingsContainerWidget(class URHSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class URHSettingsContainer* SettingsContainer);
	void ExecuteUbergraph_WBP_SettingsGroup(int32 EntryPoint, class URHSettingsContainer* K2Node_Event_SettingsContainer, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class URHSettingsContainer* K2Node_Event_SettingsContainer_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


