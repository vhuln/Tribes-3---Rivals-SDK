#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F8 (0xCF8 - 0xB00)
// AnimBlueprintGeneratedClass ABP_Drop_Med_Kit.ABP_Drop_Med_Kit_C
class UABP_Drop_Med_Kit_C : public UValAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xB00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0xB08(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0xB10(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0xB18(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0xB38(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0xB60(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0xBA8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0xBC8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0xC10(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0xC30(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_Drop_Med_Kit_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Drop_Med_Kit(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


