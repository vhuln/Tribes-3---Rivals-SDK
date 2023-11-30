#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x570 - 0x550)
// WidgetBlueprintGeneratedClass WBP_news_article.WBP_news_article_C
class UWBP_news_article_C : public URHWidget
{
public:
	class UImage*                                BackgroundBox;                                     // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Desc;                                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Header;                                            // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MasterSize;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_news_article_C* GetDefaultObj();

	void SetSize(double Width, double Height, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void SetBackgroundOpacity(int32 Opacity, int32 CallFunc_Clamp_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	void SetDescription(class FText InText, int32 InFontSize, double CallFunc_Conv_IntToDouble_ReturnValue, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void SetHeader(class FText InText, int32 InFontSize, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility K2Node_Select_Default, float K2Node_MakeStruct_Size_ImplicitCast);
};

}


