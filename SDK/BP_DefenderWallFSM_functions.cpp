#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderWallFSM.BP_DefenderWallFSM_C
// (None)

class UClass* UBP_DefenderWallFSM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderWallFSM_C");

	return Clss;
}


// BP_DefenderWallFSM_C BP_DefenderWallFSM.Default__BP_DefenderWallFSM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderWallFSM_C* UBP_DefenderWallFSM_C::GetDefaultObj()
{
	static class UBP_DefenderWallFSM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderWallFSM_C*>(UBP_DefenderWallFSM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.GetCurrentThreat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      OutThreat                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::GetCurrentThreat(class AActor** OutThreat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "GetCurrentThreat");

	Params::UBP_DefenderWallFSM_C_GetCurrentThreat_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetThreatComponent_ReturnValue = CallFunc_GetThreatComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutThreat != nullptr)
		*OutThreat = Parms.OutThreat;

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.OnThreatDamageChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNewIsPerceived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_OutThreat                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_OutThreat_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::OnThreatDamageChanged(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_RemoveGameplayTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "OnThreatDamageChanged");

	Params::UBP_DefenderWallFSM_C_OnThreatDamageChanged_Params Parms{};

	Parms.Threat = Threat;
	Parms.bNewIsPerceived = bNewIsPerceived;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_OutThreat = CallFunc_GetCurrentThreat_OutThreat;
	Parms.CallFunc_GetCurrentThreat_OutThreat_1 = CallFunc_GetCurrentThreat_OutThreat_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.OnThreatHeardChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNewIsPerceived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::OnThreatHeardChanged(class UObject* Threat, bool bNewIsPerceived)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "OnThreatHeardChanged");

	Params::UBP_DefenderWallFSM_C_OnThreatHeardChanged_Params Parms{};

	Parms.Threat = Threat;
	Parms.bNewIsPerceived = bNewIsPerceived;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.OnThreatSeenChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNewIsPerceived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_OutThreat                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_OutThreat_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::OnThreatSeenChanged(class UObject* Threat, bool bNewIsPerceived, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "OnThreatSeenChanged");

	Params::UBP_DefenderWallFSM_C_OnThreatSeenChanged_Params Parms{};

	Parms.Threat = Threat;
	Parms.bNewIsPerceived = bNewIsPerceived;
	Parms.CallFunc_GetCurrentThreat_OutThreat = CallFunc_GetCurrentThreat_OutThreat;
	Parms.CallFunc_GetCurrentThreat_OutThreat_1 = CallFunc_GetCurrentThreat_OutThreat_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue_1 = CallFunc_RemoveGameplayTag_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.OnThreatChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PreviousTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::OnThreatChanged(class UObject* PreviousTarget, class UObject* NewTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "OnThreatChanged");

	Params::UBP_DefenderWallFSM_C_OnThreatChanged_Params Parms{};

	Parms.PreviousTarget = PreviousTarget;
	Parms.NewTarget = NewTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.GenerateActiveTransitionTags
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_C::GenerateActiveTransitionTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "GenerateActiveTransitionTags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.InitializeBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_C::InitializeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "InitializeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.StartMachineBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_C::StartMachineBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "StartMachineBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.StopMachineBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_C::StopMachineBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "StopMachineBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM.BP_DefenderWallFSM_C.ExecuteUbergraph_BP_DefenderWallFSM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValBotData*                 CallFunc_GetBotConfigData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFlag_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThreatHeard_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThreatSeen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_C::ExecuteUbergraph_BP_DefenderWallFSM(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasFlag_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetCurrentThreat_ReturnValue, bool CallFunc_IsThreatHeard_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsThreatSeen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_C", "ExecuteUbergraph_BP_DefenderWallFSM");

	Params::UBP_DefenderWallFSM_C_ExecuteUbergraph_BP_DefenderWallFSM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetThreatComponent_ReturnValue = CallFunc_GetThreatComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetBotConfigData_ReturnValue = CallFunc_GetBotConfigData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasFlag_ReturnValue = CallFunc_HasFlag_ReturnValue;
	Parms.CallFunc_GetThreatComponent_ReturnValue_1 = CallFunc_GetThreatComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;
	Parms.CallFunc_IsThreatHeard_ReturnValue = CallFunc_IsThreatHeard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsThreatSeen_ReturnValue = CallFunc_IsThreatSeen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


