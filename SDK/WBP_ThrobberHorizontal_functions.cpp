#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C
// (None)

class UClass* UWBP_ThrobberHorizontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ThrobberHorizontal_C");

	return Clss;
}


// WBP_ThrobberHorizontal_C WBP_ThrobberHorizontal.Default__WBP_ThrobberHorizontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ThrobberHorizontal_C* UWBP_ThrobberHorizontal_C::GetDefaultObj()
{
	static class UWBP_ThrobberHorizontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ThrobberHorizontal_C*>(UWBP_ThrobberHorizontal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.SetThrobberColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateColor        NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ThrobberHorizontal_C::SetThrobberColor(const struct SlateCore_SlateColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ThrobberHorizontal_C", "SetThrobberColor");

	Params::UWBP_ThrobberHorizontal_C_SetThrobberColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ThrobberHorizontal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ThrobberHorizontal_C", "PreConstruct");

	Params::UWBP_ThrobberHorizontal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ThrobberHorizontal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ThrobberHorizontal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.RestartAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ThrobberHorizontal_C::RestartAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ThrobberHorizontal_C", "RestartAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ThrobberHorizontal_C::ExecuteUbergraph_WBP_ThrobberHorizontal(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ThrobberHorizontal_C", "ExecuteUbergraph_WBP_ThrobberHorizontal");

	Params::UWBP_ThrobberHorizontal_C_ExecuteUbergraph_WBP_ThrobberHorizontal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


