#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C
// (None)

class UClass* UWBP_Social_Accordian_Header_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Accordian_Header_C");

	return Clss;
}


// WBP_Social_Accordian_Header_C WBP_Social_Accordian_Header.Default__WBP_Social_Accordian_Header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Accordian_Header_C* UWBP_Social_Accordian_Header_C::GetDefaultObj()
{
	static class UWBP_Social_Accordian_Header_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Accordian_Header_C*>(UWBP_Social_Accordian_Header_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHDataSocialCategory*       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Accordian_Header_C::OnHeaderUpdated(class URHDataSocialCategory* Category, class FText Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnHeaderUpdated");

	Params::UWBP_Social_Accordian_Header_C_OnHeaderUpdated_Params Parms{};

	Parms.Category = Category;
	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHDataSocialCategory*       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class URHDataSocialPlayer*> Players                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnPlayersUpdated(class URHDataSocialCategory* Category, TArray<class URHDataSocialPlayer*>& Players, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnPlayersUpdated");

	Params::UWBP_Social_Accordian_Header_C_OnPlayersUpdated_Params Parms{};

	Parms.Category = Category;
	Parms.Players = Players;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHDataSocialCategory*       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Processing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHDataSocialPlayer*> CallFunc_GetPlayerList_ReturnValue                               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::UpdateMessage(class URHDataSocialCategory* Category, bool Processing, class FText Message, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, TArray<class URHDataSocialPlayer*>& CallFunc_GetPlayerList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "UpdateMessage");

	Params::UWBP_Social_Accordian_Header_C_UpdateMessage_Params Parms{};

	Parms.Category = Category;
	Parms.Processing = Processing;
	Parms.Message = Message;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerList_ReturnValue = CallFunc_GetPlayerList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Expanded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::GetIsExpanded(bool* Expanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "GetIsExpanded");

	Params::UWBP_Social_Accordian_Header_C_GetIsExpanded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Expanded != nullptr)
		*Expanded = Parms.Expanded;

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHDataSocialCategory*       NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::GetData(class URHDataSocialCategory** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "GetData");

	Params::UWBP_Social_Accordian_Header_C_GetData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expanded                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::SetExpanded(bool Expanded, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "SetExpanded");

	Params::UWBP_Social_Accordian_Header_C_SetExpanded_Params Parms{};

	Parms.Expanded = Expanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARHHUDCommon*                HUD                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CurrentNode                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                K2Node_DynamicCast_AsRHHUDCommon                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::GetOuterHud(class ARHHUDCommon** HUD, class UObject* CurrentNode, class ARHHUDCommon* K2Node_DynamicCast_AsRHHUDCommon, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "GetOuterHud");

	Params::UWBP_Social_Accordian_Header_C_GetOuterHud_Params Parms{};

	Parms.CurrentNode = CurrentNode;
	Parms.K2Node_DynamicCast_AsRHHUDCommon = K2Node_DynamicCast_AsRHHUDCommon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HUD != nullptr)
		*HUD = Parms.HUD;

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       K2Node_DynamicCast_AsRHData_Social_Category                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHeaderText_ReturnValue                               (None)
// bool                               CallFunc_IsProcessing_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMessageText_ReturnValue                              (None)
// TArray<class URHDataSocialPlayer*> CallFunc_GetPlayerList_ReturnValue                               (ReferenceParm)

void UWBP_Social_Accordian_Header_C::SetListItemObject(class UObject* Object, class URHDataSocialCategory* K2Node_DynamicCast_AsRHData_Social_Category, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetHeaderText_ReturnValue, bool CallFunc_IsProcessing_ReturnValue, class FText CallFunc_GetMessageText_ReturnValue, TArray<class URHDataSocialPlayer*>& CallFunc_GetPlayerList_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "SetListItemObject");

	Params::UWBP_Social_Accordian_Header_C_SetListItemObject_Params Parms{};

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsRHData_Social_Category = K2Node_DynamicCast_AsRHData_Social_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeaderText_ReturnValue = CallFunc_GetHeaderText_ReturnValue;
	Parms.CallFunc_IsProcessing_ReturnValue = CallFunc_IsProcessing_ReturnValue;
	Parms.CallFunc_GetMessageText_ReturnValue = CallFunc_GetMessageText_ReturnValue;
	Parms.CallFunc_GetPlayerList_ReturnValue = CallFunc_GetPlayerList_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "PreConstruct");

	Params::UWBP_Social_Accordian_Header_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "BP_OnItemSelectionChanged");

	Params::UWBP_Social_Accordian_Header_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "BP_OnItemExpansionChanged");

	Params::UWBP_Social_Accordian_Header_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnListItemObjectSet");

	Params::UWBP_Social_Accordian_Header_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::HandleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "HandleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::UnbindCategoryEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "UnbindCategoryEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::BindCategoryEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "BindCategoryEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnInputStateChange(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnInputStateChange");

	Params::UWBP_Social_Accordian_Header_C_OnInputStateChange_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Accordian_Header_C::ForceUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "ForceUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetOuterHud_Hud                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::ExecuteUbergraph_WBP_Social_Accordian_Header(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_2, class ARHHUDCommon* CallFunc_GetOuterHud_Hud, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, enum class ERH_INPUT_STATE Temp_byte_Variable_6, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "ExecuteUbergraph_WBP_Social_Accordian_Header");

	Params::UWBP_Social_Accordian_Header_C_ExecuteUbergraph_WBP_Social_Accordian_Header_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetOuterHud_Hud = CallFunc_GetOuterHud_Hud;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnClicked__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Accordian_Header_C", "OnClicked__DelegateSignature");

	Params::UWBP_Social_Accordian_Header_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


