#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AssaultRifle.ABP_AssaultRifle_C
// (None)

class UClass* UABP_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AssaultRifle_C");

	return Clss;
}


// ABP_AssaultRifle_C ABP_AssaultRifle.Default__ABP_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AssaultRifle_C* UABP_AssaultRifle_C::GetDefaultObj()
{
	static class UABP_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AssaultRifle_C*>(UABP_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_AssaultRifle_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "AnimGraph");

	Params::UABP_AssaultRifle_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.ABP_AssaultRifle_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AssaultRifle_C::ABP_AssaultRifle_AutoGenFunc(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "ABP_AssaultRifle_AutoGenFunc");

	Params::UABP_AssaultRifle_C_ABP_AssaultRifle_AutoGenFunc_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_A7853B284F906886E64D519B64FD6EB1
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_A7853B284F906886E64D519B64FD6EB1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_A7853B284F906886E64D519B64FD6EB1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_ECA82ACC4C56983E5350A08176766F80
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_ECA82ACC4C56983E5350A08176766F80()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_ECA82ACC4C56983E5350A08176766F80");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_983918614F4268981D716B8C6212196A
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_983918614F4268981D716B8C6212196A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_983918614F4268981D716B8C6212196A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_ApplyAdditive_3D88CBBC4FF4788AB51BDEACF5496B8B
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_ApplyAdditive_3D88CBBC4FF4788AB51BDEACF5496B8B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_ApplyAdditive_3D88CBBC4FF4788AB51BDEACF5496B8B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_944B1D014D86FB7DFBD257BD6F2B4B59
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_944B1D014D86FB7DFBD257BD6F2B4B59()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_944B1D014D86FB7DFBD257BD6F2B4B59");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_3AD5F2D64BAB91446B08DD92390921AE
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_3AD5F2D64BAB91446B08DD92390921AE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_3AD5F2D64BAB91446B08DD92390921AE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_427823894B5A62A3531FA2BD6FF4E346
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_427823894B5A62A3531FA2BD6FF4E346()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_427823894B5A62A3531FA2BD6FF4E346");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_5470E08F4B5D5764376469B54D7DBE12
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_5470E08F4B5D5764376469B54D7DBE12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_5470E08F4B5D5764376469B54D7DBE12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B762F5B24D7B21BA46E6FDB7B61FACC2
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B762F5B24D7B21BA46E6FDB7B61FACC2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B762F5B24D7B21BA46E6FDB7B61FACC2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B3BF2A7D4C45C5D6E81EE8BC52F9DF21
// (BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B3BF2A7D4C45C5D6E81EE8BC52F9DF21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B3BF2A7D4C45C5D6E81EE8BC52F9DF21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AssaultRifle_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "BlueprintUpdateAnimation");

	Params::UABP_AssaultRifle_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_AssaultRifle_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AssaultRifle.ABP_AssaultRifle_C.ExecuteUbergraph_ABP_AssaultRifle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoving_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetViewRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoving_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoving_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoving_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Pitch_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AssaultRifle_C::ExecuteUbergraph_ABP_AssaultRifle(int32 EntryPoint, bool CallFunc_IsMoving_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetViewRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsMoving_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsMoving_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsMoving_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_VariableSet_Pitch_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifle_C", "ExecuteUbergraph_ABP_AssaultRifle");

	Params::UABP_AssaultRifle_C_ExecuteUbergraph_ABP_AssaultRifle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMoving_ReturnValue = CallFunc_IsMoving_ReturnValue;
	Parms.CallFunc_GetViewRotation_ReturnValue = CallFunc_GetViewRotation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsMoving_ReturnValue_1 = CallFunc_IsMoving_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsMoving_ReturnValue_2 = CallFunc_IsMoving_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsMoving_ReturnValue_3 = CallFunc_IsMoving_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_VariableSet_Pitch_ImplicitCast = K2Node_VariableSet_Pitch_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_1 = K2Node_StructMemberSet_Alpha_ImplicitCast_1;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_2 = K2Node_StructMemberSet_Alpha_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


