#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TriangleThrobber.WBP_TriangleThrobber_C
// (None)

class UClass* UWBP_TriangleThrobber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TriangleThrobber_C");

	return Clss;
}


// WBP_TriangleThrobber_C WBP_TriangleThrobber.Default__WBP_TriangleThrobber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TriangleThrobber_C* UWBP_TriangleThrobber_C::GetDefaultObj()
{
	static class UWBP_TriangleThrobber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TriangleThrobber_C*>(UWBP_TriangleThrobber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.SetThrobberColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateColor        NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TriangleThrobber_C::SetThrobberColor(const struct SlateCore_SlateColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TriangleThrobber_C", "SetThrobberColor");

	Params::UWBP_TriangleThrobber_C_SetThrobberColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TriangleThrobber_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TriangleThrobber_C", "PreConstruct");

	Params::UWBP_TriangleThrobber_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TriangleThrobber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TriangleThrobber_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.RestartAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TriangleThrobber_C::RestartAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TriangleThrobber_C", "RestartAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.ExecuteUbergraph_WBP_TriangleThrobber
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TriangleThrobber_C::ExecuteUbergraph_WBP_TriangleThrobber(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TriangleThrobber_C", "ExecuteUbergraph_WBP_TriangleThrobber");

	Params::UWBP_TriangleThrobber_C_ExecuteUbergraph_WBP_TriangleThrobber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


