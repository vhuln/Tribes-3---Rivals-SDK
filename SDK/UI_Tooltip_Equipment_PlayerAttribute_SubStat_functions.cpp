#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C
// (None)

class UClass* UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C");

	return Clss;
}


// UI_Tooltip_Equipment_PlayerAttribute_SubStat_C UI_Tooltip_Equipment_PlayerAttribute_SubStat.Default__UI_Tooltip_Equipment_PlayerAttribute_SubStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C* UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::GetDefaultObj()
{
	static class UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C*>(UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.CacheClassDefaultValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LocalDefaultValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPlayerAttributeType, float>CallFunc_GetClassAttributeValues_ReturnValue                     (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FormattedClassDefault_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::CacheClassDefaultValue(float LocalDefaultValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TMap<enum class EPlayerAttributeType, float> CallFunc_GetClassAttributeValues_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_VariableSet_FormattedClassDefault_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "CacheClassDefaultValue");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_CacheClassDefaultValue_Params Parms{};

	Parms.LocalDefaultValue = LocalDefaultValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetClassAttributeValues_ReturnValue = CallFunc_GetClassAttributeValues_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.K2Node_VariableSet_FormattedClassDefault_ImplicitCast = K2Node_VariableSet_FormattedClassDefault_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.CacheAttributeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CachedValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FormattedValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::CacheAttributeValue(double Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, float K2Node_VariableSet_CachedValue_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_VariableSet_FormattedValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "CacheAttributeValue");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_CacheAttributeValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.K2Node_VariableSet_CachedValue_ImplicitCast = K2Node_VariableSet_CachedValue_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.K2Node_VariableSet_FormattedValue_ImplicitCast = K2Node_VariableSet_FormattedValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.CacheAttributeType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerAttributeType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerAttributeConfig*      CallFunc_GetPlayerAttributeConfig_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_PlayerAttributeConfigDataCallFunc_GetAttributeConfigData_AttributeConfigData              (None)
// bool                               CallFunc_GetAttributeConfigData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::CacheAttributeType(enum class EPlayerAttributeType Type, class UPlayerAttributeConfig* CallFunc_GetPlayerAttributeConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Valhalla_PlayerAttributeConfigData& CallFunc_GetAttributeConfigData_AttributeConfigData, bool CallFunc_GetAttributeConfigData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "CacheAttributeType");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_CacheAttributeType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetPlayerAttributeConfig_ReturnValue = CallFunc_GetPlayerAttributeConfig_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttributeConfigData_AttributeConfigData = CallFunc_GetAttributeConfigData_AttributeConfigData;
	Parms.CallFunc_GetAttributeConfigData_ReturnValue = CallFunc_GetAttributeConfigData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.CacheAttributeData
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerAttributeType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalChanged                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::CacheAttributeData(enum class EPlayerAttributeType Type, double Value, bool* Changed, bool LocalChanged, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "CacheAttributeData");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_CacheAttributeData_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.LocalChanged = LocalChanged;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.GetFormattedText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// bool                               LocalFlatValue                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsPercent_Float_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::GetFormattedText(class FText* Text, bool LocalFlatValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText CallFunc_AsPercent_Float_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "GetFormattedText");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_GetFormattedText_Params Parms{};

	Parms.LocalFlatValue = LocalFlatValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_AsPercent_Float_ReturnValue = CallFunc_AsPercent_Float_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "PreConstruct");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerAttributeType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalFormattedValue                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_PlayerAttributeConfigDataLocalConfigData                                                  (Edit, BlueprintVisible)
// bool                               CallFunc_CacheAttributeData_Changed                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CacheAttributeData_Value_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::UpdateData(enum class EPlayerAttributeType Type, float Value, float LocalFormattedValue, const struct Valhalla_PlayerAttributeConfigData& LocalConfigData, bool CallFunc_CacheAttributeData_Changed, double CallFunc_CacheAttributeData_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "UpdateData");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_UpdateData_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.LocalFormattedValue = LocalFormattedValue;
	Parms.LocalConfigData = LocalConfigData;
	Parms.CallFunc_CacheAttributeData_Changed = CallFunc_CacheAttributeData_Changed;
	Parms.CallFunc_CacheAttributeData_Value_ImplicitCast = CallFunc_CacheAttributeData_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C.UpdateText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LocalFormattedValue                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedText_Text                                   (None)

void UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C::UpdateText(double LocalFormattedValue, class FText CallFunc_GetFormattedText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_PlayerAttribute_SubStat_C", "UpdateText");

	Params::UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C_UpdateText_Params Parms{};

	Parms.LocalFormattedValue = LocalFormattedValue;
	Parms.CallFunc_GetFormattedText_Text = CallFunc_GetFormattedText_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


