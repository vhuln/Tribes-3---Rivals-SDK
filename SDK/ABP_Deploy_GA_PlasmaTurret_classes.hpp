#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x980 (0x1480 - 0xB00)
// AnimBlueprintGeneratedClass ABP_Deploy_GA_PlasmaTurret.ABP_Deploy_GA_PlasmaTurret_C
class UABP_Deploy_GA_PlasmaTurret_C : public UValAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xB00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0xB08(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0xB10(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0xB18(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_16;                 // 0xB38(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_15;                 // 0xB60(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_14;                 // 0xB88(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_13;                 // 0xBB0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_12;                 // 0xBD8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_11;                 // 0xC00(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_10;                 // 0xC28(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_9;                  // 0xC50(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_8;                  // 0xC78(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_7;                  // 0xCA0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_6;                  // 0xCC8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_5;                  // 0xCF0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_4;                  // 0xD18(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0xD40(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0xD68(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0xD90(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0xDB8(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_6;                    // 0xDE0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_6;                       // 0xE28(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_5;                    // 0xE48(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_5;                       // 0xE90(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0xEB0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0xEF8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0xF18(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0xF60(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0xF80(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0xFC8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0xFE8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x1030(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x1050(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x1098(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x10B8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone_1;                        // 0x1180(0x128)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x12A8(0x20)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x12C8(0x20)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x12E8(0x128)(None)
	bool                                         Armed;                                             // 0x1410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasTarget;                                         // 0x1411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E1[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HitDirection;                                      // 0x1418(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitDuration;                                       // 0x1430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitDotProduct;                                     // 0x1438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   HeadRotation;                                      // 0x1440(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Q;                                                 // 0x1460(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Deploy_GA_PlasmaTurret_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void SetHeadRotation(const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, class AActor* CallFunc_GetAITargetedActor_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_NormalizedDeltaRotator_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_ModifyBone_BC6956C143EC0F9DF6F661AFBF96A882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_DA5632F04547F7C9DB59F58032107033();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_91EE9E244A250DD32806B2BC5DA33686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_1D7D36C042C22358DA46B7AB5D43C053();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_98E1F57A4D6B194A1B849EBFC4B3DAC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_6411BB2644643063EDECAF833BF51EDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_065D15CF455084C4C058A8850381BB02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret_AnimGraphNode_TransitionResult_C2773CAB4B01BFF85D1FAF9695566DFB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnDamaged(const struct Valhalla_DamageData& DamageData);
	void ExecuteUbergraph_ABP_Deploy_GA_PlasmaTurret(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_ValChar_Turret_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Turret_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_HasTarget_HasTarget, bool CallFunc_BooleanAND_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, double CallFunc_FMax_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_8, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


