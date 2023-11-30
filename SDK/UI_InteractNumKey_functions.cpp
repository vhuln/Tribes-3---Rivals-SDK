#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InteractNumKey.UI_InteractNumKey_C
// (None)

class UClass* UUI_InteractNumKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InteractNumKey_C");

	return Clss;
}


// UI_InteractNumKey_C UI_InteractNumKey.Default__UI_InteractNumKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InteractNumKey_C* UUI_InteractNumKey_C::GetDefaultObj()
{
	static class UUI_InteractNumKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InteractNumKey_C*>(UUI_InteractNumKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InteractNumKey.UI_InteractNumKey_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_InteractNumKey_C::GetText(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InteractNumKey_C", "GetText");

	Params::UUI_InteractNumKey_C_GetText_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_InteractNumKey.UI_InteractNumKey_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_InteractNumKey_C::OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InteractNumKey_C", "OnMouseEnter");

	Params::UUI_InteractNumKey_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InteractNumKey.UI_InteractNumKey_C.BndEvt__UI_InteractNumKey_Button_68_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_InteractNumKey_C::BndEvt__UI_InteractNumKey_Button_68_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InteractNumKey_C", "BndEvt__UI_InteractNumKey_Button_68_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InteractNumKey.UI_InteractNumKey_C.ExecuteUbergraph_UI_InteractNumKey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent                                          (ConstParm)

void UUI_InteractNumKey_C::ExecuteUbergraph_UI_InteractNumKey(int32 EntryPoint, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InteractNumKey_C", "ExecuteUbergraph_UI_InteractNumKey");

	Params::UUI_InteractNumKey_C_ExecuteUbergraph_UI_InteractNumKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InteractNumKey.UI_InteractNumKey_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputDigit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InteractNumKey_C::OnPressed__DelegateSignature(int32 InputDigit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InteractNumKey_C", "OnPressed__DelegateSignature");

	Params::UUI_InteractNumKey_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.InputDigit = InputDigit;

	UObject::ProcessEvent(Func, &Parms);

}

}


