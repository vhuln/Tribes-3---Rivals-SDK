#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_DissectorLatch_Bot.GC_DissectorLatch_Bot_C
// (Actor)

class UClass* AGC_DissectorLatch_Bot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_DissectorLatch_Bot_C");

	return Clss;
}


// GC_DissectorLatch_Bot_C GC_DissectorLatch_Bot.Default__GC_DissectorLatch_Bot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_DissectorLatch_Bot_C* AGC_DissectorLatch_Bot_C::GetDefaultObj()
{
	static class AGC_DissectorLatch_Bot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_DissectorLatch_Bot_C*>(AGC_DissectorLatch_Bot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_DissectorLatch_Bot.GC_DissectorLatch_Bot_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_Defender_Dissector_C*K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_DissectorLatch_Bot_C::WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_CharPlayer_Defender_Dissector_C* K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DissectorLatch_Bot_C", "WhileActive");

	Params::AGC_DissectorLatch_Bot_C_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector = K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_DissectorLatch_Bot.GC_DissectorLatch_Bot_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_Defender_Dissector_C*K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_DissectorLatch_Bot_C::OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_CharPlayer_Defender_Dissector_C* K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DissectorLatch_Bot_C", "OnRemove");

	Params::AGC_DissectorLatch_Bot_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector = K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


