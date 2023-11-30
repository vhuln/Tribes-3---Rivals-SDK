#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5C0 - 0x570)
// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
class UWBP_SettingsContainer_C : public URHSettingsContainer
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RowFocus;                                          // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_159;                                         // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SettingDisplayName;                                // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SettingWidgetBox;                                  // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               HoverSettingsContainerSFX;                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class URHWidget*                             PreviewWidget;                                     // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAddToPreview;                                    // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_SettingsContainer_C* GetDefaultObj();

	void GetPreviewWidget(class URHWidget** PreviewWidget);
	void Add_Setting_Widget_To_Box(class URHSettingsWidget* Setting_Widget, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void OnContainerConfigSet();
	void AddSettingsWidget(class URHSettingsWidget* SettingsWidget);
	void OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent);
	void PlayHoverAnim();
	void PlayUnhoverAnim();
	void AddPreviewWidget(class URHSettingsPreview* PreviewWidget);
	void ExecuteUbergraph_WBP_SettingsContainer(int32 EntryPoint, class FText CallFunc_GetSettingName_ReturnValue, class URHSettingsWidget* K2Node_Event_SettingsWidget, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class URHSettingsPreview* K2Node_Event_PreviewWidget);
	void OnAddToPreview__DelegateSignature(class URHWidget* PreviewWidget);
};

}


