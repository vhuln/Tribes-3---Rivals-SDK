#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D8 (0x10F8 - 0xB20)
// AnimBlueprintGeneratedClass ABP_JetPack_A.ABP_JetPack_A_C
class UABP_JetPack_A_C : public UValJetpackAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xB20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_JetPack_A_ABP_JetPack_A_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0xB28(0xD)(HasGetValueTypeHash)
	uint8                                        Pad_18C9[0x3];                                     // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0xB38(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0xB40(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0xB48(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                    // 0xB68(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                       // 0xBD8(0xC8)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0xCA0(0x48)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0xCE8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0xD10(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0xD38(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0xD80(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0xDA0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0xDE8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0xE08(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot;                                // 0xED0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                     // 0xF18(0x48)(None)
	struct Engine_AnimNode_SaveCachedPose        AnimGraphNode_SaveCachedPose;                      // 0xF60(0x80)(None)
	struct Engine_AnimNode_UseCachedPose         AnimGraphNode_UseCachedPose_1;                     // 0xFE0(0x28)(None)
	struct Engine_AnimNode_UseCachedPose         AnimGraphNode_UseCachedPose;                       // 0x1008(0x28)(None)
	struct AnimGraphRuntime_AnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                         // 0x1030(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_JetPack_A_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_JetPack_A(int32 EntryPoint);
};

}


