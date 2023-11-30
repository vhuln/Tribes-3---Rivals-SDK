#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_Checkbox.UI_Shared_Checkbox_C
// (None)

class UClass* UUI_Shared_Checkbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_Checkbox_C");

	return Clss;
}


// UI_Shared_Checkbox_C UI_Shared_Checkbox.Default__UI_Shared_Checkbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_Checkbox_C* UUI_Shared_Checkbox_C::GetDefaultObj()
{
	static class UUI_Shared_Checkbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_Checkbox_C*>(UUI_Shared_Checkbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.IsChecked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Checked                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::IsChecked(bool* Checked, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "IsChecked");

	Params::UUI_Shared_Checkbox_C_IsChecked_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Checked != nullptr)
		*Checked = Parms.Checked;

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.ChangeChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bChecked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::ChangeChecked(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "ChangeChecked");

	Params::UUI_Shared_Checkbox_C_ChangeChecked_Params Parms{};

	Parms.bChecked = bChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "PreConstruct");

	Params::UUI_Shared_Checkbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_Checkbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.BndEvt__UI_Shared_Checkbox_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::BndEvt__UI_Shared_Checkbox_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "BndEvt__UI_Shared_Checkbox_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_Shared_Checkbox_C_BndEvt__UI_Shared_Checkbox_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_Checkbox_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.ExecuteUbergraph_UI_Shared_Checkbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Size_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::ExecuteUbergraph_UI_Shared_Checkbox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsChecked, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_SetFieldsInStruct_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "ExecuteUbergraph_UI_Shared_Checkbox");

	Params::UUI_Shared_Checkbox_C_ExecuteUbergraph_UI_Shared_Checkbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_SetFieldsInStruct_Size_ImplicitCast = K2Node_SetFieldsInStruct_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Checkbox.UI_Shared_Checkbox_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Checkbox_C::OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Checkbox_C", "OnCheckStateChanged__DelegateSignature");

	Params::UUI_Shared_Checkbox_C_OnCheckStateChanged__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}

}


