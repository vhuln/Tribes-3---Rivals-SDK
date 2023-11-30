#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B2 (0x6FA - 0x348)
// AnimBlueprintGeneratedClass ABP_BotCrate.ABP_BotCrate_C
class UABP_BotCrate_C : public UAnimInstance
{
public:
	uint8                                        Pad_24C6[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0x388(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0x3B0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x3D8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x400(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0x428(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x470(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x490(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x4D8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x4F8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x540(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x560(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x5A8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x5C8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x610(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x630(0xC8)(None)
	bool                                         bIsOpening;                                        // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsClosing;                                        // 0x6F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_BotCrate_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void OnStateChanged(enum class ECrateState NewCrate, bool K2Node_SwitchEnum_CmpSuccess);
	void ExecuteUbergraph_ABP_BotCrate(int32 EntryPoint);
};

}


