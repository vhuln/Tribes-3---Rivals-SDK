#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DropdownEntry.DropdownEntry_C
// (None)

class UClass* UDropdownEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DropdownEntry_C");

	return Clss;
}


// DropdownEntry_C DropdownEntry.Default__DropdownEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDropdownEntry_C* UDropdownEntry_C::GetDefaultObj()
{
	static class UDropdownEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropdownEntry_C*>(UDropdownEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DropdownEntry.DropdownEntry_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDropdownEntry_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "NavigateConfirm");

	Params::UDropdownEntry_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DropdownEntry.DropdownEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDropdownEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UDropdownEntry_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UDropdownEntry_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdownEntry_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropdownEntry.DropdownEntry_C.ChangeSelectionState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdownEntry_C::ChangeSelectionState(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "ChangeSelectionState");

	Params::UDropdownEntry_C_ChangeSelectionState_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdownEntry_C::ExecuteUbergraph_DropdownEntry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_Selected, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "ExecuteUbergraph_DropdownEntry");

	Params::UDropdownEntry_C_ExecuteUbergraph_DropdownEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdownEntry_C::OnOptionHovered__DelegateSignature(class UWidget* Widget, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "OnOptionHovered__DelegateSignature");

	Params::UDropdownEntry_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdownEntry_C::OnOptionSelected__DelegateSignature(int32 Index, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropdownEntry_C", "OnOptionSelected__DelegateSignature");

	Params::UDropdownEntry_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


