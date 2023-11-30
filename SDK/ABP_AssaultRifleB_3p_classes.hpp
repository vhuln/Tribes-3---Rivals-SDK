#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x10F8 - 0x10B8)
// AnimBlueprintGeneratedClass ABP_AssaultRifleB_3p.ABP_AssaultRifleB_3p_C
class UABP_AssaultRifleB_3p_C : public UValGunAnimInstance
{
public:
	uint8                                        Pad_2FBB[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x10C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x10C8(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x10D0(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x10D8(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_AssaultRifleB_3p_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_AssaultRifleB_3p(int32 EntryPoint);
};

}


