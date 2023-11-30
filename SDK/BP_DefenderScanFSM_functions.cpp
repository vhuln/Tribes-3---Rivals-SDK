#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderScanFSM.BP_DefenderScanFSM_C
// (None)

class UClass* UBP_DefenderScanFSM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderScanFSM_C");

	return Clss;
}


// BP_DefenderScanFSM_C BP_DefenderScanFSM.Default__BP_DefenderScanFSM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderScanFSM_C* UBP_DefenderScanFSM_C::GetDefaultObj()
{
	static class UBP_DefenderScanFSM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderScanFSM_C*>(UBP_DefenderScanFSM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.StartAlertCooldownTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::StartAlertCooldownTimer(class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "StartAlertCooldownTimer");

	Params::UBP_DefenderScanFSM_C_StartAlertCooldownTimer_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.ClearAlert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::ClearAlert(bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "ClearAlert");

	Params::UBP_DefenderScanFSM_C_ClearAlert_Params Parms{};

	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.GetCurrentThreat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Threat                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::GetCurrentThreat(class AActor** Threat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "GetCurrentThreat");

	Params::UBP_DefenderScanFSM_C_GetCurrentThreat_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetThreatComponent_ReturnValue = CallFunc_GetThreatComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Threat != nullptr)
		*Threat = Parms.Threat;

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.On Threat Damage Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNewIsPerceived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_Threat                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_Threat_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::On_Threat_Damage_Changed(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "On Threat Damage Changed");

	Params::UBP_DefenderScanFSM_C_On_Threat_Damage_Changed_Params Parms{};

	Parms.Threat = Threat;
	Parms.bNewIsPerceived = bNewIsPerceived;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_Threat = CallFunc_GetCurrentThreat_Threat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_Threat_1 = CallFunc_GetCurrentThreat_Threat_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.On Threat Seen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNewIsPerceived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_Threat                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_Threat_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::On_Threat_Seen(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "On Threat Seen");

	Params::UBP_DefenderScanFSM_C_On_Threat_Seen_Params Parms{};

	Parms.Threat = Threat;
	Parms.bNewIsPerceived = bNewIsPerceived;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_Threat = CallFunc_GetCurrentThreat_Threat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_Threat_1 = CallFunc_GetCurrentThreat_Threat_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.On Threat Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PreviousTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::On_Threat_Changed(class UObject* PreviousTarget, class UObject* NewTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "On Threat Changed");

	Params::UBP_DefenderScanFSM_C_On_Threat_Changed_Params Parms{};

	Parms.PreviousTarget = PreviousTarget;
	Parms.NewTarget = NewTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.RemoveAlertState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::RemoveAlertState(bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "RemoveAlertState");

	Params::UBP_DefenderScanFSM_C_RemoveAlertState_Params Parms{};

	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.GenerateActiveTransitionTags
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_C::GenerateActiveTransitionTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "GenerateActiveTransitionTags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.InitializeBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_C::InitializeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "InitializeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.StartMachineBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_C::StartMachineBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "StartMachineBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.StopMachineBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_C::StopMachineBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "StopMachineBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM.BP_DefenderScanFSM_C.ExecuteUbergraph_BP_DefenderScanFSM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThreatSeen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_C::ExecuteUbergraph_BP_DefenderScanFSM(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetCurrentThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsThreatSeen_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_C", "ExecuteUbergraph_BP_DefenderScanFSM");

	Params::UBP_DefenderScanFSM_C_ExecuteUbergraph_BP_DefenderScanFSM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetThreatComponent_ReturnValue = CallFunc_GetThreatComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetThreatComponent_ReturnValue_1 = CallFunc_GetThreatComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsThreatSeen_ReturnValue = CallFunc_IsThreatSeen_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


