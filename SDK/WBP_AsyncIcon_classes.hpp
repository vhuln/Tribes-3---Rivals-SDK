#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3C0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
class UWBP_AsyncIcon_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHAsyncImage*                         Icon;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             LoadingThrobber;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnIconUpdated;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_2683[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  DefaultBrush;                                      // 0x2F0(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_AsyncIcon_C* GetDefaultObj();

	void Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize);
	void SetBrushFromSoftPath(const struct CoreUObject_SoftObjectPath& Soft_Path, bool MatchSize);
	void Set_Brush_from_Texture_on_Item(class UPlatformInventoryItem* Item, bool MatchSize, TSoftObjectPtr<class UTexture2D> Texture);
	void Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic);
	void SetMaterialToUse(class UMaterialInterface* Material, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ApplyDefaultBrush();
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture, bool MatchSize, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnStartLoad(class URHAsyncImage* Image);
	void OnFinishLoad(class URHAsyncImage* Image);
	void ExecuteUbergraph_WBP_AsyncIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHAsyncImage* K2Node_CustomEvent_Image, class URHAsyncImage* K2Node_CustomEvent_Image_1, bool CallFunc_IsCurrentlyAsyncLoading_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnIconUpdated__DelegateSignature(class UTexture2D* Texture);
};

}


