#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C
// (None)

class UClass* UABP_Healing_Canister_1P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Healing_Canister_1P_C");

	return Clss;
}


// ABP_Healing_Canister_1P_C ABP_Healing_Canister_1P.Default__ABP_Healing_Canister_1P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Healing_Canister_1P_C* UABP_Healing_Canister_1P_C::GetDefaultObj()
{
	static class UABP_Healing_Canister_1P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Healing_Canister_1P_C*>(UABP_Healing_Canister_1P_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Healing_Canister_1P_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "AnimGraph");

	Params::UABP_Healing_Canister_1P_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.SetTotalDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Healing_Canister_1P_C::SetTotalDuration(double Duration, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "SetTotalDuration");

	Params::UABP_Healing_Canister_1P_C_SetTotalDuration_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_4CF72B9346642A8663116783067DA8A1
// (BlueprintEvent)
// Parameters:

void UABP_Healing_Canister_1P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_4CF72B9346642A8663116783067DA8A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_4CF72B9346642A8663116783067DA8A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_B75176554CA790E23863B6B4B57EDC82
// (BlueprintEvent)
// Parameters:

void UABP_Healing_Canister_1P_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_B75176554CA790E23863B6B4B57EDC82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_B75176554CA790E23863B6B4B57EDC82");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Healing_Canister_1P_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "BlueprintUpdateAnimation");

	Params::UABP_Healing_Canister_1P_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Healing_Canister_1P_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C.ExecuteUbergraph_ABP_Healing_Canister_1P
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_IntroDuration_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Healing_Canister_1P_C::ExecuteUbergraph_ABP_Healing_Canister_1P(int32 EntryPoint, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetPlayLength_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_IntroDuration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Healing_Canister_1P_C", "ExecuteUbergraph_ABP_Healing_Canister_1P");

	Params::UABP_Healing_Canister_1P_C_ExecuteUbergraph_ABP_Healing_Canister_1P_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue_1 = CallFunc_GetPlayLength_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_IntroDuration_ImplicitCast = K2Node_VariableSet_IntroDuration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


