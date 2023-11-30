#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StandardButtonNoArt.StandardButtonNoArt_C
// (None)

class UClass* UStandardButtonNoArt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandardButtonNoArt_C");

	return Clss;
}


// StandardButtonNoArt_C StandardButtonNoArt.Default__StandardButtonNoArt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStandardButtonNoArt_C* UStandardButtonNoArt_C::GetDefaultObj()
{
	static class UStandardButtonNoArt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandardButtonNoArt_C*>(UStandardButtonNoArt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StandardButtonNoArt.StandardButtonNoArt_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UStandardButtonNoArt_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "NavigateConfirm");

	Params::UStandardButtonNoArt_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStandardButtonNoArt_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.ExecuteUbergraph_StandardButtonNoArt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStandardButtonNoArt_C::ExecuteUbergraph_StandardButtonNoArt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "ExecuteUbergraph_StandardButtonNoArt");

	Params::UStandardButtonNoArt_C_ExecuteUbergraph_StandardButtonNoArt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStandardButtonNoArt_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "OnUnhovered__DelegateSignature");

	Params::UStandardButtonNoArt_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStandardButtonNoArt_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "OnHovered__DelegateSignature");

	Params::UStandardButtonNoArt_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StandardButtonNoArt.StandardButtonNoArt_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStandardButtonNoArt_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandardButtonNoArt_C", "OnClicked__DelegateSignature");

	Params::UStandardButtonNoArt_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


