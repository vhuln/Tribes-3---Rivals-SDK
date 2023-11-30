#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x3B0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_AdditiveImage.WBP_AdditiveImage_C
class UWBP_AdditiveImage_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Texture;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct SlateCore_SlateBrush                  DefaultBrush;                                      // 0x2D0(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UMaterialInterface*                    BrushMaterial;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  ParameterName;                                     // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_AdditiveImage_C* GetDefaultObj();

	void SetAdditiveMaterial(const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_SetDesiredSizeOverride_DesiredSize_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_AdditiveImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


