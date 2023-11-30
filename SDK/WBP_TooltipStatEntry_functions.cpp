#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TooltipStatEntry.WBP_TooltipStatEntry_C
// (None)

class UClass* UWBP_TooltipStatEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TooltipStatEntry_C");

	return Clss;
}


// WBP_TooltipStatEntry_C WBP_TooltipStatEntry.Default__WBP_TooltipStatEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TooltipStatEntry_C* UWBP_TooltipStatEntry_C::GetDefaultObj()
{
	static class UWBP_TooltipStatEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TooltipStatEntry_C*>(UWBP_TooltipStatEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TooltipStatEntry.WBP_TooltipStatEntry_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerAttributeType    Type                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_PlayerAttributeConfigDataCallFunc_GetAttributeConfigData_AttributeConfigData              (None)
// bool                               CallFunc_GetAttributeConfigData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPlayerAttributeType>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EPlayerAttributeType    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Tooltip_Equipment_PlayerAttribute_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerAttributeConfig*      CallFunc_GetPlayerAttributeConfig_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TooltipStatEntry_C::Update_Data(enum class EPlayerAttributeType Type, float Value, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAnyChildren_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, const struct Valhalla_PlayerAttributeConfigData& CallFunc_GetAttributeConfigData_AttributeConfigData, bool CallFunc_GetAttributeConfigData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPlayerAttributeType>& CallFunc_Map_Keys_Keys, enum class EPlayerAttributeType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCurveFloat* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUI_Tooltip_Equipment_PlayerAttribute_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UPlayerAttributeConfig* CallFunc_GetPlayerAttributeConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TooltipStatEntry_C", "Update Data");

	Params::UWBP_TooltipStatEntry_C_Update_Data_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAttributeConfigData_AttributeConfigData = CallFunc_GetAttributeConfigData_AttributeConfigData;
	Parms.CallFunc_GetAttributeConfigData_ReturnValue = CallFunc_GetAttributeConfigData_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetPlayerAttributeConfig_ReturnValue = CallFunc_GetPlayerAttributeConfig_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TooltipStatEntry.WBP_TooltipStatEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TooltipStatEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TooltipStatEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TooltipStatEntry.WBP_TooltipStatEntry_C.ExecuteUbergraph_WBP_TooltipStatEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TooltipStatEntry_C::ExecuteUbergraph_WBP_TooltipStatEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TooltipStatEntry_C", "ExecuteUbergraph_WBP_TooltipStatEntry");

	Params::UWBP_TooltipStatEntry_C_ExecuteUbergraph_WBP_TooltipStatEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


