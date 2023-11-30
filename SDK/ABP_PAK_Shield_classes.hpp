#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xB80 - 0xB00)
// AnimBlueprintGeneratedClass ABP_PAK_Shield.ABP_PAK_Shield_C
class UABP_PAK_Shield_C : public UValAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xB00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0xB08(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0xB10(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0xB18(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0xB38(0x48)(None)

	static class UClass* StaticClass();
	static class UABP_PAK_Shield_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_PAK_Shield(int32 EntryPoint);
};

}


