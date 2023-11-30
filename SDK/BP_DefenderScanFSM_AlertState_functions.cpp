#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderScanFSM_AlertState.BP_DefenderScanFSM_AlertState_C
// (None)

class UClass* UBP_DefenderScanFSM_AlertState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderScanFSM_AlertState_C");

	return Clss;
}


// BP_DefenderScanFSM_AlertState_C BP_DefenderScanFSM_AlertState.Default__BP_DefenderScanFSM_AlertState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderScanFSM_AlertState_C* UBP_DefenderScanFSM_AlertState_C::GetDefaultObj()
{
	static class UBP_DefenderScanFSM_AlertState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderScanFSM_AlertState_C*>(UBP_DefenderScanFSM_AlertState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderScanFSM_AlertState.BP_DefenderScanFSM_AlertState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_AlertState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_AlertState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM_AlertState.BP_DefenderScanFSM_AlertState_C.EndStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_AlertState_C::EndStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_AlertState_C", "EndStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM_AlertState.BP_DefenderScanFSM_AlertState_C.ExecuteUbergraph_BP_DefenderScanFSM_AlertState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_AlertState_C::ExecuteUbergraph_BP_DefenderScanFSM_AlertState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_AlertState_C", "ExecuteUbergraph_BP_DefenderScanFSM_AlertState");

	Params::UBP_DefenderScanFSM_AlertState_C_ExecuteUbergraph_BP_DefenderScanFSM_AlertState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetThreatComponent_ReturnValue = CallFunc_GetThreatComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetThreatComponent_ReturnValue_1 = CallFunc_GetThreatComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


