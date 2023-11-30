#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_BOw_Instant.GA_Gun_BOw_Instant_C
// (None)

class UClass* UGA_Gun_BOw_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_BOw_Instant_C");

	return Clss;
}


// GA_Gun_BOw_Instant_C GA_Gun_BOw_Instant.Default__GA_Gun_BOw_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_BOw_Instant_C* UGA_Gun_BOw_Instant_C::GetDefaultObj()
{
	static class UGA_Gun_BOw_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_BOw_Instant_C*>(UGA_Gun_BOw_Instant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Gun_BOw_Instant.GA_Gun_BOw_Instant_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gun_BOw_Instant_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_BOw_Instant_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_BOw_Instant.GA_Gun_BOw_Instant_C.ExecuteUbergraph_GA_Gun_BOw_Instant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_BOw_Instant_C::ExecuteUbergraph_GA_Gun_BOw_Instant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_BOw_Instant_C", "ExecuteUbergraph_GA_Gun_BOw_Instant");

	Params::UGA_Gun_BOw_Instant_C_ExecuteUbergraph_GA_Gun_BOw_Instant_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


