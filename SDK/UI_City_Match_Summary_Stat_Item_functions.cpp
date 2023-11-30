#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_City_Match_Summary_Stat_Item.UI_City_Match_Summary_Stat_Item_C
// (None)

class UClass* UUI_City_Match_Summary_Stat_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_City_Match_Summary_Stat_Item_C");

	return Clss;
}


// UI_City_Match_Summary_Stat_Item_C UI_City_Match_Summary_Stat_Item.Default__UI_City_Match_Summary_Stat_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_City_Match_Summary_Stat_Item_C* UUI_City_Match_Summary_Stat_Item_C::GetDefaultObj()
{
	static class UUI_City_Match_Summary_Stat_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_City_Match_Summary_Stat_Item_C*>(UUI_City_Match_Summary_Stat_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_City_Match_Summary_Stat_Item.UI_City_Match_Summary_Stat_Item_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatType                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Credits                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameStatType           GameStatType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush                                     (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_4                                   (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_5                                   (None)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush_6                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UUI_City_Match_Summary_Stat_Item_C::Update_Data(class FText StatType, int32 StatValue, int32 Credits, enum class EGameStatType GameStatType, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush_6, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_Match_Summary_Stat_Item_C", "Update Data");

	Params::UUI_City_Match_Summary_Stat_Item_C_Update_Data_Params Parms{};

	Parms.StatType = StatType;
	Parms.StatValue = StatValue;
	Parms.Credits = Credits;
	Parms.GameStatType = GameStatType;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_SlateBrush_4 = K2Node_MakeStruct_SlateBrush_4;
	Parms.K2Node_MakeStruct_SlateBrush_5 = K2Node_MakeStruct_SlateBrush_5;
	Parms.K2Node_MakeStruct_SlateBrush_6 = K2Node_MakeStruct_SlateBrush_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


