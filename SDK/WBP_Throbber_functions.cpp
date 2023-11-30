#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Throbber.WBP_Throbber_C
// (None)

class UClass* UWBP_Throbber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Throbber_C");

	return Clss;
}


// WBP_Throbber_C WBP_Throbber.Default__WBP_Throbber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Throbber_C* UWBP_Throbber_C::GetDefaultObj()
{
	static class UWBP_Throbber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Throbber_C*>(UWBP_Throbber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Throbber.WBP_Throbber_C.ResetThrobberAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Throbber_C::ResetThrobberAnim(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Throbber_C", "ResetThrobberAnim");

	Params::UWBP_Throbber_C_ResetThrobberAnim_Params Parms{};

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Throbber.WBP_Throbber_C.PlayThrobberAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Throbber_C::PlayThrobberAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Throbber_C", "PlayThrobberAnim");

	Params::UWBP_Throbber_C_PlayThrobberAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Throbber.WBP_Throbber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Throbber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Throbber_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Throbber.WBP_Throbber_C.ExecuteUbergraph_WBP_Throbber
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Throbber_C::ExecuteUbergraph_WBP_Throbber(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Throbber_C", "ExecuteUbergraph_WBP_Throbber");

	Params::UWBP_Throbber_C_ExecuteUbergraph_WBP_Throbber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


