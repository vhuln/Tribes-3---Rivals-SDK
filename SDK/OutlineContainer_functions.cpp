#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OutlineContainer.OutlineContainer_C
// (None)

class UClass* UOutlineContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OutlineContainer_C");

	return Clss;
}


// OutlineContainer_C OutlineContainer.Default__OutlineContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOutlineContainer_C* UOutlineContainer_C::GetDefaultObj()
{
	static class UOutlineContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutlineContainer_C*>(UOutlineContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OutlineContainer.OutlineContainer_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UOutlineContainer_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "NavigateConfirm");

	Params::UOutlineContainer_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OutlineContainer.OutlineContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutlineContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "PreConstruct");

	Params::UOutlineContainer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutlineContainer.OutlineContainer_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UOutlineContainer_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UOutlineContainer_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutlineContainer_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutlineContainer_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutlineContainer.OutlineContainer_C.ExecuteUbergraph_OutlineContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush                                     (None)

void UOutlineContainer_C::ExecuteUbergraph_OutlineContainer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "ExecuteUbergraph_OutlineContainer");

	Params::UOutlineContainer_C_ExecuteUbergraph_OutlineContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutlineContainer.OutlineContainer_C.Gamepad Confirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutlineContainer_C::Gamepad_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutlineContainer_C", "Gamepad Confirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


