#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// (None)

class UClass* UWBP_SettingsGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsGroup_C");

	return Clss;
}


// WBP_SettingsGroup_C WBP_SettingsGroup.Default__WBP_SettingsGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsGroup_C* UWBP_SettingsGroup_C::GetDefaultObj()
{
	static class UWBP_SettingsGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsGroup_C*>(UWBP_SettingsGroup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsContainer*        Settings_Container                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::Add_Sub_Settings_Widget(class URHSettingsContainer* Settings_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "Add Sub Settings Widget");

	Params::UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params Parms{};

	Parms.Settings_Container = Settings_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsContainer*        Settings_Container                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::Add_Main_Settings_Widget(class URHSettingsContainer* Settings_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "Add Main Settings Widget");

	Params::UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params Parms{};

	Parms.Settings_Container = Settings_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsContainer*        Settings_Container                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                Vertical_Box                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Settings_Widget_Container                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddSettingsWidget(class URHSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box, class UClass* Settings_Widget_Container, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "AddSettingsWidget");

	Params::UWBP_SettingsGroup_C_AddSettingsWidget_Params Parms{};

	Parms.Settings_Container = Settings_Container;
	Parms.Vertical_Box = Vertical_Box;
	Parms.Settings_Widget_Container = Settings_Widget_Container;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsGroup_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsContainer*        SettingsContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddSubSettingsContainerWidget(class URHSettingsContainer* SettingsContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "AddSubSettingsContainerWidget");

	Params::UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params Parms{};

	Parms.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsContainer*        SettingsContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddMainSettingsContainerWidget(class URHSettingsContainer* SettingsContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "AddMainSettingsContainerWidget");

	Params::UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params Parms{};

	Parms.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        K2Node_Event_SettingsContainer                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        K2Node_Event_SettingsContainer_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsGroup_C::ExecuteUbergraph_WBP_SettingsGroup(int32 EntryPoint, class URHSettingsContainer* K2Node_Event_SettingsContainer, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class URHSettingsContainer* K2Node_Event_SettingsContainer_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsGroup_C", "ExecuteUbergraph_WBP_SettingsGroup");

	Params::UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SettingsContainer = K2Node_Event_SettingsContainer;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_SettingsContainer_1 = K2Node_Event_SettingsContainer_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


