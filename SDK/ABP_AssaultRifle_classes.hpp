#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3438 (0x44F0 - 0x10B8)
// AnimBlueprintGeneratedClass ABP_AssaultRifle.ABP_AssaultRifle_C
class UABP_AssaultRifle_C : public UValGunAnimInstance
{
public:
	uint8                                        Pad_AF5[0x8];                                      // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x10C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_AssaultRifle_ABP_AssaultRifle_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x10C8(0x39)(HasGetValueTypeHash)
	uint8                                        Pad_AF6[0x7];                                      // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x1108(0x8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x1110(0x8)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1118(0x20)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11;                    // 0x1138(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_11;                             // 0x1200(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9;                  // 0x1248(0x70)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x12B8(0x20)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone_1;                        // 0x12D8(0x128)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10;                    // 0x1400(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8;                  // 0x14C8(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9;                     // 0x1538(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7;                  // 0x1600(0x70)(None)
	struct AnimGraphRuntime_AnimNode_TwoBoneIK   AnimGraphNode_TwoBoneIK_1;                         // 0x1670(0x280)(None)
	struct AnimGraphRuntime_AnimNode_TwoBoneIK   AnimGraphNode_TwoBoneIK;                           // 0x18F0(0x280)(None)
	struct AnimGraphRuntime_AnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                       // 0x1B70(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_10;                             // 0x1C38(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_9;                              // 0x1C80(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8;                     // 0x1CC8(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6;                  // 0x1D90(0x70)(None)
	struct AnimGraphRuntime_AnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                    // 0x1E00(0xF0)(None)
	struct Engine_AnimNode_SaveCachedPose        AnimGraphNode_SaveCachedPose;                      // 0x1EF0(0x80)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_6;                    // 0x1F70(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_8;                       // 0x1FB8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_4;                      // 0x1FD8(0xC8)(None)
	struct Engine_AnimNode_UseCachedPose         AnimGraphNode_UseCachedPose;                       // 0x20A0(0x28)(None)
	struct AnimGraphRuntime_AnimNode_CopyBone    AnimGraphNode_CopyBone_1;                          // 0x20C8(0xF0)(None)
	struct AnimGraphRuntime_AnimNode_CopyBoneDelta AnimGraphNode_CopyBoneDelta;                       // 0x21B8(0xF8)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x22B0(0x20)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x22D0(0x20)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil ValAnimGraphNode_Recoil_4;                         // 0x22F0(0x260)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil ValAnimGraphNode_Recoil_3;                         // 0x2550(0x260)(None)
	struct AnimGraphRuntime_AnimNode_CopyBone    AnimGraphNode_CopyBone;                            // 0x27B0(0xF0)(None)
	struct AnimGraphRuntime_AnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                         // 0x28A0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_8;                              // 0x2968(0x48)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_7;                  // 0x29B0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_6;                  // 0x29D8(0x28)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;                  // 0x2A00(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_7;                       // 0x2A70(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_6;                       // 0x2A90(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_3;                      // 0x2AB0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7;                     // 0x2B78(0xC8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x2C40(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_5;                    // 0x2C60(0x48)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_5;                  // 0x2CA8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_4;                  // 0x2CD0(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0x2CF8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_5;                       // 0x2D40(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x2D60(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_2;                      // 0x2D80(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6;                     // 0x2E48(0xC8)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil ValAnimGraphNode_Recoil_2;                         // 0x2F10(0x260)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x3170(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x31B8(0x128)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil ValAnimGraphNode_Recoil_1;                         // 0x32E0(0x260)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil ValAnimGraphNode_Recoil;                           // 0x3540(0x260)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;                  // 0x37A0(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5;                     // 0x3810(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                  // 0x38D8(0x70)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                  // 0x3948(0x70)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;                     // 0x39B8(0xC8)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3A80(0x20)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3AA0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_7;                              // 0x3AC0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;                     // 0x3B08(0xC8)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x3BD0(0x48)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0x3C18(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0x3C40(0x28)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                  // 0x3C68(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x3CD8(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x3CF8(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_1;                      // 0x3D18(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                     // 0x3DE0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                    // 0x3EA8(0x70)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_6;                              // 0x3F18(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_5;                              // 0x3F60(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_4;                              // 0x3FA8(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_3;                              // 0x3FF0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_2;                              // 0x4038(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                     // 0x4080(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x40C8(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                     // 0x4110(0xC8)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x41D8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x4200(0x28)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x4228(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x4270(0x20)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x4290(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x42B0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_1;                              // 0x4378(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                       // 0x43C0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot;                                // 0x4488(0x48)(None)
	double                                       Alpha;                                             // 0x44D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ADSImpulseCounterEx;                               // 0x44D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C07[0x4];                                      // Fixing Size After Last Property  
	class URecoilProfileAsset*                   ADSStartRecoilEx;                                  // 0x44E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Pitch;                                             // 0x44E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_AssaultRifle_C* GetDefaultObj();

	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	void ABP_AssaultRifle_AutoGenFunc(bool Value);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_A7853B284F906886E64D519B64FD6EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_ECA82ACC4C56983E5350A08176766F80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_983918614F4268981D716B8C6212196A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_ApplyAdditive_3D88CBBC4FF4788AB51BDEACF5496B8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_944B1D014D86FB7DFBD257BD6F2B4B59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_ValAnimGraphNode_Recoil_3AD5F2D64BAB91446B08DD92390921AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_427823894B5A62A3531FA2BD6FF4E346();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_5470E08F4B5D5764376469B54D7DBE12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B762F5B24D7B21BA46E6FDB7B61FACC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AssaultRifle_AnimGraphNode_TransitionResult_B3BF2A7D4C45C5D6E81EE8BC52F9DF21();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_AssaultRifle(int32 EntryPoint, bool CallFunc_IsMoving_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetViewRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsMoving_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsMoving_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsMoving_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_VariableSet_Pitch_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2);
};

}


