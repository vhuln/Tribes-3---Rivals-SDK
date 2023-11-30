#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x3E0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_AcquisitionItem.WBP_AcquisitionItem_C
class UWBP_AcquisitionItem_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimSlamIn;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Sheen;                                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_70;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SizeControl;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_Item_C*                  UI_Equipment_Item;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedItem;                                        // 0x2F8(0xC8)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnAnimComplete;                                    // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Width;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Height;                                            // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_AcquisitionItem_C* GetDefaultObj();

	void UpdateDisplaySize(double Width, double Height, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	class UWidget* Get_HitTarget_ToolTipWidget(class UUI_Tooltip_Equipment_C* CallFunc_Create_ReturnValue);
	void UpdateData(const struct Valhalla_InventoryItem& InventoryItem, bool* Valid, bool CallFunc_UpdateItem_Valid, bool CallFunc_UpdateItem_Updated);
	void Construct();
	void PlayAnimationWithDelay(double Delay);
	void OnSlamInAnimFinished();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_AcquisitionItem(int32 EntryPoint, double K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_UpdateData_Valid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, float CallFunc_Delay_Duration_ImplicitCast);
	void OnAnimComplete__DelegateSignature(class UUserWidget* Widget);
};

}


