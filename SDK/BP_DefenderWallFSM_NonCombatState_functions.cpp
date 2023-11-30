#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderWallFSM_NonCombatState.BP_DefenderWallFSM_NonCombatState_C
// (None)

class UClass* UBP_DefenderWallFSM_NonCombatState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderWallFSM_NonCombatState_C");

	return Clss;
}


// BP_DefenderWallFSM_NonCombatState_C BP_DefenderWallFSM_NonCombatState.Default__BP_DefenderWallFSM_NonCombatState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderWallFSM_NonCombatState_C* UBP_DefenderWallFSM_NonCombatState_C::GetDefaultObj()
{
	static class UBP_DefenderWallFSM_NonCombatState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderWallFSM_NonCombatState_C*>(UBP_DefenderWallFSM_NonCombatState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderWallFSM_NonCombatState.BP_DefenderWallFSM_NonCombatState_C.OverwriteBehaviorTreeBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_NonCombatState_C::OverwriteBehaviorTreeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_NonCombatState_C", "OverwriteBehaviorTreeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM_NonCombatState.BP_DefenderWallFSM_NonCombatState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_NonCombatState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_NonCombatState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM_NonCombatState.BP_DefenderWallFSM_NonCombatState_C.ExecuteUbergraph_BP_DefenderWallFSM_NonCombatState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValCharacterMovementComponent*K2Node_DynamicCast_AsVal_Character_Movement_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_NonCombatState_C::ExecuteUbergraph_BP_DefenderWallFSM_NonCombatState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_NonCombatState_C", "ExecuteUbergraph_BP_DefenderWallFSM_NonCombatState");

	Params::UBP_DefenderWallFSM_NonCombatState_C_ExecuteUbergraph_BP_DefenderWallFSM_NonCombatState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character_Movement_Component = K2Node_DynamicCast_AsVal_Character_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


