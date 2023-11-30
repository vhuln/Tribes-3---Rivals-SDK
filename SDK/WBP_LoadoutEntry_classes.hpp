#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x620 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_LoadoutEntry.WBP_LoadoutEntry_C
class UWBP_LoadoutEntry_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Button_Menu_C*                     ButtonMenu;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         Icon;                                              // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeControl;                                       // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  DefaultSize;                                       // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UValItemAsset*                         CachedAsset;                                       // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LoadoutEntry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void UpdateEquipped(bool Equipped);
	void UpdateAsset(class UValItemAsset* ItemAsset, bool CallFunc_IsValid_ReturnValue);
	void UpdateName(class FText Value);
	void UpdateIcon(TSoftObjectPtr<class UTexture2D> SoftIcon, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateSize(const struct CoreUObject_Vector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature();
	void BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_LoadoutEntry(int32 EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UWBP_LoadoutEntry_C* Widget);
	void OnSelected__DelegateSignature(class UWBP_LoadoutEntry_C* Widget);
};

}


