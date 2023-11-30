#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x320 - 0x2F0)
// WidgetBlueprintGeneratedClass UI_City_Match_Summary_Stat_Item.UI_City_Match_Summary_Stat_Item_C
class UUI_City_Match_Summary_Stat_Item_C : public UUIWidget
{
public:
	class UImage*                                Border;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CreditsIcon;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CreditsText;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StatImage;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TypeText;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_City_Match_Summary_Stat_Item_C* GetDefaultObj();

	void Update_Data(class FText StatType, int32 StatValue, int32 Credits, enum class EGameStatType GameStatType, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_6, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


