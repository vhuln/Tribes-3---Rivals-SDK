#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30C (0xE0C - 0xB00)
// AnimBlueprintGeneratedClass ABP_Healing_Canister_1P.ABP_Healing_Canister_1P_C
class UABP_Healing_Canister_1P_C : public UValAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xB00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0xB08(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0xB10(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0xB18(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0xB38(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0xB60(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0xB88(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0xBD0(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0xBF0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0xC38(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0xC58(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0xCA0(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0xCC0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot;                                // 0xD88(0x48)(None)
	bool                                         bStartOutro;                                       // 0xDD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2083[0x7];                                     // Fixing Size After Last Property  
	double                                       AccumulatedTime;                                   // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LoopTime;                                          // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     IntroSequence;                                     // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     LoopSequence;                                      // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     OutroSequence;                                     // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       IntroDuration;                                     // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutroDuration;                                     // 0xE08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Healing_Canister_1P_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void SetTotalDuration(double Duration, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_4CF72B9346642A8663116783067DA8A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Healing_Canister_1P_AnimGraphNode_TransitionResult_B75176554CA790E23863B6B4B57EDC82();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Healing_Canister_1P(int32 EntryPoint, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetPlayLength_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_IntroDuration_ImplicitCast);
};

}


