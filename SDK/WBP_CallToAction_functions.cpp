#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CallToAction.WBP_CallToAction_C
// (None)

class UClass* UWBP_CallToAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CallToAction_C");

	return Clss;
}


// WBP_CallToAction_C WBP_CallToAction.Default__WBP_CallToAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CallToAction_C* UWBP_CallToAction_C::GetDefaultObj()
{
	static class UWBP_CallToAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CallToAction_C*>(UWBP_CallToAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CallToAction_C::StopCTAAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallToAction_C", "StopCTAAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CallToAction_C::PlayCTAAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallToAction_C", "PlayCTAAnim");

	Params::UWBP_CallToAction_C_PlayCTAAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CallToAction.WBP_CallToAction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CallToAction_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallToAction_C", "PreConstruct");

	Params::UWBP_CallToAction_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CallToAction.WBP_CallToAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CallToAction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallToAction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CallToAction_C::ExecuteUbergraph_WBP_CallToAction(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallToAction_C", "ExecuteUbergraph_WBP_CallToAction");

	Params::UWBP_CallToAction_C_ExecuteUbergraph_WBP_CallToAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


