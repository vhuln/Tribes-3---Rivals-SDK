#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C
// (Actor, Pawn)

class UClass* ABP_NoClipSpectatorPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NoClipSpectatorPawn_C");

	return Clss;
}


// BP_NoClipSpectatorPawn_C BP_NoClipSpectatorPawn.Default__BP_NoClipSpectatorPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NoClipSpectatorPawn_C* ABP_NoClipSpectatorPawn_C::GetDefaultObj()
{
	static class ABP_NoClipSpectatorPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NoClipSpectatorPawn_C*>(ABP_NoClipSpectatorPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.InpActEvt_FastFly_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NoClipSpectatorPawn_C::InpActEvt_FastFly_K2Node_InputActionEvent_1(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NoClipSpectatorPawn_C", "InpActEvt_FastFly_K2Node_InputActionEvent_1");

	Params::ABP_NoClipSpectatorPawn_C_InpActEvt_FastFly_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.InpActEvt_FastFly_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NoClipSpectatorPawn_C::InpActEvt_FastFly_K2Node_InputActionEvent_0(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NoClipSpectatorPawn_C", "InpActEvt_FastFly_K2Node_InputActionEvent_0");

	Params::ABP_NoClipSpectatorPawn_C_InpActEvt_FastFly_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NoClipSpectatorPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NoClipSpectatorPawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.ExecuteUbergraph_BP_NoClipSpectatorPawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpectatorPawnMovement*      K2Node_DynamicCast_AsSpectator_Pawn_Movement                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpectatorPawnMovement*      K2Node_DynamicCast_AsSpectator_Pawn_Movement_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_2                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpectatorPawnMovement*      K2Node_DynamicCast_AsSpectator_Pawn_Movement_2                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               Temp_struct_Variable                                             (HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// float                              K2Node_VariableSet_MaxSpeed_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_MaxSpeed_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultAccel_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Acceleration_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Acceleration_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NoClipSpectatorPawn_C::ExecuteUbergraph_BP_NoClipSpectatorPawn(int32 EntryPoint, const struct InputCore_Key& K2Node_InputActionEvent_Key_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement_1, bool K2Node_DynamicCast_bSuccess_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_2, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMaxSpeed_ReturnValue, const struct InputCore_Key& Temp_struct_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct InputCore_Key& K2Node_InputActionEvent_Key, float K2Node_VariableSet_MaxSpeed_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast_1, double K2Node_VariableSet_DefaultAccel_ImplicitCast, double K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast, float K2Node_VariableSet_Acceleration_ImplicitCast, float K2Node_VariableSet_Acceleration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NoClipSpectatorPawn_C", "ExecuteUbergraph_BP_NoClipSpectatorPawn");

	Params::ABP_NoClipSpectatorPawn_C_ExecuteUbergraph_BP_NoClipSpectatorPawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpectator_Pawn_Movement = K2Node_DynamicCast_AsSpectator_Pawn_Movement;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMovementComponent_ReturnValue_1 = CallFunc_GetMovementComponent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSpectator_Pawn_Movement_1 = K2Node_DynamicCast_AsSpectator_Pawn_Movement_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue_2 = CallFunc_GetMovementComponent_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSpectator_Pawn_Movement_2 = K2Node_DynamicCast_AsSpectator_Pawn_Movement_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMaxSpeed_ReturnValue = CallFunc_GetMaxSpeed_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_VariableSet_MaxSpeed_ImplicitCast = K2Node_VariableSet_MaxSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_MaxSpeed_ImplicitCast_1 = K2Node_VariableSet_MaxSpeed_ImplicitCast_1;
	Parms.K2Node_VariableSet_DefaultAccel_ImplicitCast = K2Node_VariableSet_DefaultAccel_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast = K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_Acceleration_ImplicitCast = K2Node_VariableSet_Acceleration_ImplicitCast;
	Parms.K2Node_VariableSet_Acceleration_ImplicitCast_1 = K2Node_VariableSet_Acceleration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


