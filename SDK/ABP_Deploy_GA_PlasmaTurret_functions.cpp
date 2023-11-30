#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C
// (None)

class UClass* UABP_Deploy_GA_PlasmaTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Deploy_GA_PlasmaTurret_C");

	return Clss;
}


// ABP_Deploy_GA_PlasmaTurret_C ABP_Deploy_GA_PlasmaTurret.Default__ABP_Deploy_GA_PlasmaTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Deploy_GA_PlasmaTurret_C* UABP_Deploy_GA_PlasmaTurret_C::GetDefaultObj()
{
	static class UABP_Deploy_GA_PlasmaTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Deploy_GA_PlasmaTurret_C*>(UABP_Deploy_GA_PlasmaTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Deploy_GA_PlasmaTurret_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "AnimGraph");

	Params::UABP_Deploy_GA_PlasmaTurret_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.SetHeadRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAITargetedActor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Rotator         CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Rotator         CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_Deploy_GA_PlasmaTurret_C::SetHeadRotation(const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, class AActor* CallFunc_GetAITargetedActor_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_NormalizedDeltaRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "SetHeadRotation");

	Params::UABP_Deploy_GA_PlasmaTurret_C_SetHeadRotation_Params Parms{};

	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetAITargetedActor_ReturnValue = CallFunc_GetAITargetedActor_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_ModifyBone_BC6956C143EC0F9DF6F661AFBF96A882
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_ModifyBone_BC6956C143EC0F9DF6F661AFBF96A882()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_ModifyBone_BC6956C143EC0F9DF6F661AFBF96A882");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_DA5632F04547F7C9DB59F58032107033
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_DA5632F04547F7C9DB59F58032107033()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_DA5632F04547F7C9DB59F58032107033");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_91EE9E244A250DD32806B2BC5DA33686
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_91EE9E244A250DD32806B2BC5DA33686()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_91EE9E244A250DD32806B2BC5DA33686");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_1D7D36C042C22358DA46B7AB5D43C053
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_1D7D36C042C22358DA46B7AB5D43C053()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_1D7D36C042C22358DA46B7AB5D43C053");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_98E1F57A4D6B194A1B849EBFC4B3DAC5
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_98E1F57A4D6B194A1B849EBFC4B3DAC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_98E1F57A4D6B194A1B849EBFC4B3DAC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_6411BB2644643063EDECAF833BF51EDF
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_6411BB2644643063EDECAF833BF51EDF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_6411BB2644643063EDECAF833BF51EDF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_065D15CF455084C4C058A8850381BB02
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_065D15CF455084C4C058A8850381BB02()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_065D15CF455084C4C058A8850381BB02");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_C2773CAB4B01BFF85D1FAF9695566DFB
// (BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_C2773CAB4B01BFF85D1FAF9695566DFB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_C2773CAB4B01BFF85D1FAF9695566DFB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Deploy_GA_PlasmaTurret_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "BlueprintUpdateAnimation");

	Params::UABP_Deploy_GA_PlasmaTurret_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Deploy_GA_PlasmaTurret_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.OnDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UABP_Deploy_GA_PlasmaTurret_C::OnDamaged(const struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "OnDamaged");

	Params::UABP_Deploy_GA_PlasmaTurret_C_OnDamaged_Params Parms{};

	Parms.DamageData = DamageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C.ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Turret_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Turret_Master                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTarget_HasTarget                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_DamageData         K2Node_CustomEvent_DamageData                                    (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Deploy_GA_PlasmaTurret_C::ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_ValChar_Turret_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Turret_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_HasTarget_HasTarget, bool CallFunc_BooleanAND_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, double CallFunc_FMax_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_8, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Deploy_GA_PlasmaTurret_C", "ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret");

	Params::UABP_Deploy_GA_PlasmaTurret_C_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_5 = CallFunc_Greater_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Turret_Master = K2Node_DynamicCast_AsBP_Val_Char_Turret_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_6 = CallFunc_Greater_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_HasTarget_HasTarget = CallFunc_HasTarget_HasTarget;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DamageData = K2Node_CustomEvent_DamageData;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_7 = CallFunc_Greater_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


