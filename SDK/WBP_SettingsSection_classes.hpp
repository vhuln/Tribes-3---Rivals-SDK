#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x590 - 0x570)
// WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C
class UWBP_SettingsSection_C : public URHSettingsSection
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_175;                                         // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SectionSettings;                                   // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SettingSectionDisplayName;                         // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingsSection_C* GetDefaultObj();

	void Add_Settings_Group_Widget(class URHSettingsGroup* Settings_Group_Widget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidget();
	void AddSettingsGroupWidget(class URHSettingsGroup* SettingsGroup);
	void OnSectionConfigSet();
	void ExecuteUbergraph_WBP_SettingsSection(int32 EntryPoint, class FText CallFunc_GetHeading_ReturnValue, bool K2Node_Event_IsDesignTime, class URHSettingsGroup* K2Node_Event_SettingsGroup, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo);
};

}


