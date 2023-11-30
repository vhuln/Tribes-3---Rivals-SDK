#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameState_Frontier.BP_GameState_Frontier_C
// (Actor)

class UClass* ABP_GameState_Frontier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameState_Frontier_C");

	return Clss;
}


// BP_GameState_Frontier_C BP_GameState_Frontier.Default__BP_GameState_Frontier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameState_Frontier_C* ABP_GameState_Frontier_C::GetDefaultObj()
{
	static class ABP_GameState_Frontier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameState_Frontier_C*>(ABP_GameState_Frontier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameState_Frontier.BP_GameState_Frontier_C.UpdateInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Frontier_C::UpdateInProgress(bool Value, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameState_Frontier_C", "UpdateInProgress");

	Params::ABP_GameState_Frontier_C_UpdateInProgress_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameState_Frontier.BP_GameState_Frontier_C.UpdateBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Frontier_C::UpdateBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameState_Frontier_C", "UpdateBindings");

	Params::ABP_GameState_Frontier_C_UpdateBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameState_Frontier.BP_GameState_Frontier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Frontier_C::ReceiveBeginPlay(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameState_Frontier_C", "ReceiveBeginPlay");

	Params::ABP_GameState_Frontier_C_ReceiveBeginPlay_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameState_Frontier.BP_GameState_Frontier_C.OnMatchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalInProgress                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Frontier_C::OnMatchState(bool LocalInProgress, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameState_Frontier_C", "OnMatchState");

	Params::ABP_GameState_Frontier_C_OnMatchState_Params Parms{};

	Parms.LocalInProgress = LocalInProgress;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


