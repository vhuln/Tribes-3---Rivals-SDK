#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A1 (0x5E9 - 0x348)
// AnimBlueprintGeneratedClass ABP_Proximity_Mine.ABP_Proximity_Mine_C
class UABP_Proximity_Mine_C : public UAnimInstance
{
public:
	uint8                                        Pad_6EA[0x8];                                      // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Proximity_Mine_ABP_Proximity_Mine_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x370(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x390(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x3B8(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x3E0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x428(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x448(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x490(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x4B0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x4F8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x518(0xC8)(None)
	double                                       DeployTime;                                        // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Hit_Surface;                                   // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Proximity_Mine_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Proximity_Mine(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Proximity_Mine_C* K2Node_DynamicCast_AsBP_Proximity_Mine, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


