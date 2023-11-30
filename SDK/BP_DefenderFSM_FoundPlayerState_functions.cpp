#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_FoundPlayerState.BP_DefenderFSM_FoundPlayerState_C
// (None)

class UClass* UBP_DefenderFSM_FoundPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_FoundPlayerState_C");

	return Clss;
}


// BP_DefenderFSM_FoundPlayerState_C BP_DefenderFSM_FoundPlayerState.Default__BP_DefenderFSM_FoundPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_FoundPlayerState_C* UBP_DefenderFSM_FoundPlayerState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_FoundPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_FoundPlayerState_C*>(UBP_DefenderFSM_FoundPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderFSM_FoundPlayerState.BP_DefenderFSM_FoundPlayerState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_FoundPlayerState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_FoundPlayerState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_FoundPlayerState.BP_DefenderFSM_FoundPlayerState_C.ExecuteUbergraph_BP_DefenderFSM_FoundPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValBotData*                 CallFunc_GetBotConfigData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_AI_C>   K2Node_DynamicCast_AsBI_AI                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatSystem_ThreatSystem                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValBotData*                 CallFunc_GetBotConfigData_ReturnValue_1                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateBotReactionTimeForTarget_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderFSM_FoundPlayerState_C::ExecuteUbergraph_BP_DefenderFSM_FoundPlayerState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess, class UValThreatComponent* CallFunc_GetThreatSystem_ThreatSystem, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, class UValBotData* CallFunc_GetBotConfigData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_CalculateBotReactionTimeForTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_FoundPlayerState_C", "ExecuteUbergraph_BP_DefenderFSM_FoundPlayerState");

	Params::UBP_DefenderFSM_FoundPlayerState_C_ExecuteUbergraph_BP_DefenderFSM_FoundPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetBotConfigData_ReturnValue = CallFunc_GetBotConfigData_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBI_AI = K2Node_DynamicCast_AsBI_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetThreatSystem_ThreatSystem = CallFunc_GetThreatSystem_ThreatSystem;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_GetBotConfigData_ReturnValue_1 = CallFunc_GetBotConfigData_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentThreat_ReturnValue = CallFunc_GetCurrentThreat_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CalculateBotReactionTimeForTarget_ReturnValue = CallFunc_CalculateBotReactionTimeForTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


