#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1430 (0x2B00 - 0x16D0)
// AnimBlueprintGeneratedClass ABP_3p_Pistol.ABP_3p_Pistol_C
class UABP_3p_Pistol_C : public UValCharacterAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x16D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_3p_Pistol_ABP_3p_Pistol_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x16D8(0x30)(HasGetValueTypeHash)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x1708(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x1710(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root_1;                              // 0x1718(0x20)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x1738(0x20)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_15;                 // 0x1758(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_14;                 // 0x1780(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_13;                 // 0x17A8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_12;                 // 0x17D0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_11;                 // 0x17F8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_10;                 // 0x1820(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_9;                  // 0x1848(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_8;                  // 0x1870(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_7;                  // 0x1898(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_6;                  // 0x18C0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_5;                  // 0x18E8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_4;                  // 0x1910(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0x1938(0x28)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6;                  // 0x1960(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_9;                       // 0x19D0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;                  // 0x19F0(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_8;                       // 0x1A60(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;                  // 0x1A80(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_7;                       // 0x1AF0(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0x1B10(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_6;                       // 0x1B58(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x1B78(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_5;                       // 0x1BC0(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x1BE0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x1C28(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                  // 0x1C48(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x1CB8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_1;                      // 0x1CD8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;                     // 0x1DA0(0xC8)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0x1E68(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x1E90(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x1EB8(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x1EE0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x1F28(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x1F48(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x1F68(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x1F88(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;                     // 0x2050(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                  // 0x2118(0x70)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                  // 0x2188(0x70)(None)
	struct AnimGraphRuntime_AnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                         // 0x21F8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                     // 0x22C0(0xC8)(None)
	struct Engine_AnimNode_SaveCachedPose        AnimGraphNode_SaveCachedPose;                      // 0x2388(0x80)(None)
	struct Engine_AnimNode_UseCachedPose         AnimGraphNode_UseCachedPose_1;                     // 0x2408(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x2430(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                     // 0x2478(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                    // 0x2540(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                       // 0x25B0(0xC8)(None)
	struct Engine_AnimNode_UseCachedPose         AnimGraphNode_UseCachedPose;                       // 0x2678(0x28)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x26A0(0x128)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x27C8(0x20)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x27E8(0x20)(None)
	uint8                                        Pad_2B3[0x8];                                      // Fixing Size After Last Property  
	struct AnimGraphRuntime_AnimNode_TwoBoneIK   AnimGraphNode_TwoBoneIK;                           // 0x2810(0x280)(None)
	bool                                         BlendSki;                                          // 0x2A90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Idle_to_Run;                                       // 0x2A91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Land_to_Run;                                       // 0x2A92(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Run_to_Idle;                                       // 0x2A93(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA[0x4];                                      // Fixing Size After Last Property  
	double                                       Aim_Yaw;                                           // 0x2A98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionLanded;                                  // 0x2AA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC[0x7];                                      // Fixing Size After Last Property  
	class UBlendSpace*                           Idle_Run_BlendSpace;                               // 0x2AA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Ski_BlendSpace;                                    // 0x2AB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Intro_Anim;                                   // 0x2AB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Up_Anim;                                      // 0x2AC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Down_Anim;                                    // 0x2AC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           JetPack_BlendSpace;                                // 0x2AD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Landed_Anim;                                       // 0x2AD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Pitch_Aim_BlendSpace;                              // 0x2AE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Pitch_ADS_BlendSpace;                              // 0x2AE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     ADS_Idle_Anim;                                     // 0x2AF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Yaw_Aim_BlendSpace;                                // 0x2AF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_3p_Pistol_C* GetDefaultObj();

	void WeaponLayer(struct Engine_PoseLink* WeaponLayer);
	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_3p_Pistol(int32 EntryPoint);
};

}


