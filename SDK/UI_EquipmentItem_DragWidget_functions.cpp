#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_EquipmentItem_DragWidget.UI_EquipmentItem_DragWidget_C
// (None)

class UClass* UUI_EquipmentItem_DragWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_EquipmentItem_DragWidget_C");

	return Clss;
}


// UI_EquipmentItem_DragWidget_C UI_EquipmentItem_DragWidget.Default__UI_EquipmentItem_DragWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_EquipmentItem_DragWidget_C* UUI_EquipmentItem_DragWidget_C::GetDefaultObj()
{
	static class UUI_EquipmentItem_DragWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_EquipmentItem_DragWidget_C*>(UUI_EquipmentItem_DragWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_EquipmentItem_DragWidget.UI_EquipmentItem_DragWidget_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InHeightOverride                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InWidthOverride                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EquipmentItem_DragWidget_C::SetSize(float InHeightOverride, float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EquipmentItem_DragWidget_C", "SetSize");

	Params::UUI_EquipmentItem_DragWidget_C_SetSize_Params Parms{};

	Parms.InHeightOverride = InHeightOverride;
	Parms.InWidthOverride = InWidthOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EquipmentItem_DragWidget.UI_EquipmentItem_DragWidget_C.UpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 Rarity                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EquipmentItem_DragWidget_C::UpdateRarity(enum class ERarity Rarity, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EquipmentItem_DragWidget_C", "UpdateRarity");

	Params::UUI_EquipmentItem_DragWidget_C_UpdateRarity_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetColorFromRarity_ReturnValue = CallFunc_GetColorFromRarity_ReturnValue;
	Parms.CallFunc_GetColorFromRarity_ReturnValue_1 = CallFunc_GetColorFromRarity_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EquipmentItem_DragWidget.UI_EquipmentItem_DragWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_EquipmentItem_DragWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EquipmentItem_DragWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EquipmentItem_DragWidget.UI_EquipmentItem_DragWidget_C.ExecuteUbergraph_UI_EquipmentItem_DragWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_Select_Default_1                                          (None)
// float                              CallFunc_SetSize_InHeightOverride_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSize_InWidthOverride_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EquipmentItem_DragWidget_C::ExecuteUbergraph_UI_EquipmentItem_DragWidget(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_GetEmptyText_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanOR_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1, class FText K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct SlateCore_SlateColor& K2Node_Select_Default_1, float CallFunc_SetSize_InHeightOverride_ImplicitCast, float CallFunc_SetSize_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EquipmentItem_DragWidget_C", "ExecuteUbergraph_UI_EquipmentItem_DragWidget");

	Params::UUI_EquipmentItem_DragWidget_C_ExecuteUbergraph_UI_EquipmentItem_DragWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetSize_InHeightOverride_ImplicitCast = CallFunc_SetSize_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetSize_InWidthOverride_ImplicitCast = CallFunc_SetSize_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


