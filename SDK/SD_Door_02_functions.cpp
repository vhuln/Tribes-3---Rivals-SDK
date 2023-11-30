#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SD_Door_02.SD_Door_02_C
// (Actor)

class UClass* ASD_Door_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SD_Door_02_C");

	return Clss;
}


// SD_Door_02_C SD_Door_02.Default__SD_Door_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASD_Door_02_C* ASD_Door_02_C::GetDefaultObj()
{
	static class ASD_Door_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASD_Door_02_C*>(ASD_Door_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SD_Door_02.SD_Door_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASD_Door_02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SD_Door_02_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SD_Door_02.SD_Door_02_C.ExecuteUbergraph_SD_Door_02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASD_Door_02_C::ExecuteUbergraph_SD_Door_02(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SD_Door_02_C", "ExecuteUbergraph_SD_Door_02");

	Params::ASD_Door_02_C_ExecuteUbergraph_SD_Door_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


