#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58A (0x8D2 - 0x348)
// AnimBlueprintGeneratedClass ABP_Crate.ABP_Crate_C
class UABP_Crate_C : public UAnimInstance
{
public:
	uint8                                        Pad_2A85[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Crate_ABP_Crate_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x358(0x3)(HasGetValueTypeHash)
	uint8                                        Pad_2A8B[0x5];                                     // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x370(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x390(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x3B8(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0x3E0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x428(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x448(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x490(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x4B0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x4F8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_2;                      // 0x518(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                   // 0x5E0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                     // 0x628(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x670(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x6B8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_1;                      // 0x6D8(0xC8)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x7A0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x7E8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x808(0xC8)(None)
	bool                                         bIsClosing;                                        // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOpening;                                        // 0x8D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Crate_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void OnStateChange(enum class ECrateState NewState, bool K2Node_SwitchEnum_CmpSuccess);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Crate(int32 EntryPoint);
};

}


