#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C
// (None)

class UClass* UBP_Defender_MainFSM_ClimbingState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Defender_MainFSM_ClimbingState_C");

	return Clss;
}


// BP_Defender_MainFSM_ClimbingState_C BP_Defender_MainFSM_ClimbingState.Default__BP_Defender_MainFSM_ClimbingState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Defender_MainFSM_ClimbingState_C* UBP_Defender_MainFSM_ClimbingState_C::GetDefaultObj()
{
	static class UBP_Defender_MainFSM_ClimbingState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Defender_MainFSM_ClimbingState_C*>(UBP_Defender_MainFSM_ClimbingState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C.On Vaulting State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Defender_MainFSM_ClimbingState_C::On_Vaulting_State_Changed(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Defender_MainFSM_ClimbingState_C", "On Vaulting State Changed");

	Params::UBP_Defender_MainFSM_ClimbingState_C_On_Vaulting_State_Changed_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Defender_MainFSM_ClimbingState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Defender_MainFSM_ClimbingState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C.ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Defender_MainFSM_ClimbingState_C::ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Defender_MainFSM_ClimbingState_C", "ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState");

	Params::UBP_Defender_MainFSM_ClimbingState_C_ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


