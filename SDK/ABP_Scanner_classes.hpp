#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x19B0 - 0x16D0)
// AnimBlueprintGeneratedClass ABP_Scanner.ABP_Scanner_C
class UABP_Scanner_C : public UValCharacterAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x16D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Scanner_ABP_Scanner_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x16D8(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_2EC[0x6];                                      // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x16E0(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x16E8(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x16F0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot;                                // 0x1710(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                     // 0x1758(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x17A0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x17E8(0x128)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1910(0x20)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1930(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x1950(0x48)(None)
	struct CoreUObject_Rotator                   ArmRotation;                                       // 0x1998(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UABP_Scanner_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Scanner(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_CharPlayer_Scanner_C* K2Node_DynamicCast_AsBP_Char_Player_Scanner, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


