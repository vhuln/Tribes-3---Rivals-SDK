#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1050 (0x2720 - 0x16D0)
// AnimBlueprintGeneratedClass ABP_3p_Minigun.ABP_3p_Minigun_C
class UABP_3p_Minigun_C : public UValCharacterAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x16D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_3p_Minigun_ABP_3p_Minigun_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x16D8(0x2C)(HasGetValueTypeHash)
	uint8                                        Pad_2423[0x4];                                     // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x1708(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x1710(0x8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;                  // 0x1718(0x70)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;                  // 0x1788(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                     // 0x17F8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                     // 0x18C0(0xC8)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_15;                 // 0x1988(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_14;                 // 0x19B0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_13;                 // 0x19D8(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x1A00(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_9;                       // 0x1A48(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_8;                       // 0x1A68(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_7;                       // 0x1A88(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_1;                      // 0x1AA8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                       // 0x1B70(0xC8)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_12;                 // 0x1C38(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_11;                 // 0x1C60(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_10;                 // 0x1C88(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_9;                  // 0x1CB0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_8;                  // 0x1CD8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_7;                  // 0x1D00(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_6;                  // 0x1D28(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_5;                  // 0x1D50(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_4;                  // 0x1D78(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0x1DA0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0x1DC8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x1DF0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x1E18(0x28)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                  // 0x1E40(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_6;                       // 0x1EB0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                  // 0x1ED0(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_5;                       // 0x1F40(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                  // 0x1F60(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x1FD0(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x1FF0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x2038(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x2058(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x20A0(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x20C0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x2108(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                    // 0x2128(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x2198(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x21B8(0xC8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root_1;                              // 0x2280(0x20)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x22A0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x22C0(0x128)(None)
	uint8                                        Pad_244F[0x8];                                     // Fixing Size After Last Property  
	struct AnimGraphRuntime_AnimNode_TwoBoneIK   AnimGraphNode_TwoBoneIK;                           // 0x23F0(0x280)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2670(0x20)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2690(0x20)(None)
	bool                                         BlendSki;                                          // 0x26B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Idle_to_Run;                                       // 0x26B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Land_to_Run;                                       // 0x26B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Run_to_Idle;                                       // 0x26B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2480[0x4];                                     // Fixing Size After Last Property  
	double                                       Aim_Yaw;                                           // 0x26B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionLanded;                                  // 0x26C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2485[0x7];                                     // Fixing Size After Last Property  
	class UBlendSpace*                           Idle_Run_BlendSpace;                               // 0x26C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Ski_BlendSpace;                                    // 0x26D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Intro_Anim;                                   // 0x26D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Up_Anim;                                      // 0x26E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Jump_Down_Anim;                                    // 0x26E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           JetPack_BlendSpace;                                // 0x26F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Landed_Anim;                                       // 0x26F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Pitch_Aim_BlendSpace;                              // 0x2700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Pitch_ADS_BlendSpace;                              // 0x2708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     ADS_Idle_Anim;                                     // 0x2710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendSpace*                           Yaw_Aim_BlendSpace;                                // 0x2718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_3p_Minigun_C* GetDefaultObj();

	void WeaponLayer(struct Engine_PoseLink* WeaponLayer);
	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_3p_Minigun(int32 EntryPoint);
};

}


