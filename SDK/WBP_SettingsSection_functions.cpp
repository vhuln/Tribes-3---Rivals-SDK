#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C
// (None)

class UClass* UWBP_SettingsSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsSection_C");

	return Clss;
}


// WBP_SettingsSection_C WBP_SettingsSection.Default__WBP_SettingsSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsSection_C* UWBP_SettingsSection_C::GetDefaultObj()
{
	static class UWBP_SettingsSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsSection_C*>(UWBP_SettingsSection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsGroup*            Settings_Group_Widget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSection_C::Add_Settings_Group_Widget(class URHSettingsGroup* Settings_Group_Widget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "Add Settings Group Widget");

	Params::UWBP_SettingsSection_C_Add_Settings_Group_Widget_Params Parms{};

	Parms.Settings_Group_Widget = Settings_Group_Widget;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "PreConstruct");

	Params::UWBP_SettingsSection_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsSection_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsGroup*            SettingsGroup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSection_C::AddSettingsGroupWidget(class URHSettingsGroup* SettingsGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "AddSettingsGroupWidget");

	Params::UWBP_SettingsSection_C_AddSettingsGroupWidget_Params Parms{};

	Parms.SettingsGroup = SettingsGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SettingsSection_C::OnSectionConfigSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "OnSectionConfigSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHeading_ReturnValue                                  (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsGroup*            K2Node_Event_SettingsGroup                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)

void UWBP_SettingsSection_C::ExecuteUbergraph_WBP_SettingsSection(int32 EntryPoint, class FText CallFunc_GetHeading_ReturnValue, bool K2Node_Event_IsDesignTime, class URHSettingsGroup* K2Node_Event_SettingsGroup, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSection_C", "ExecuteUbergraph_WBP_SettingsSection");

	Params::UWBP_SettingsSection_C_ExecuteUbergraph_WBP_SettingsSection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHeading_ReturnValue = CallFunc_GetHeading_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_SettingsGroup = K2Node_Event_SettingsGroup;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


