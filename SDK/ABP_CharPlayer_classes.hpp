#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C47 (0x3317 - 0x16D0)
// AnimBlueprintGeneratedClass ABP_CharPlayer.ABP_CharPlayer_C
class UABP_CharPlayer_C : public UValCharacterAnimInstance
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x16D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_CharPlayer_ABP_CharPlayer_C_AnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x16D8(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_325D[0x7];                                     // Fixing Size After Last Property  
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_PropertyAccess;             // 0x1710(0x8)(None)
	struct Engine_AnimSubsystemInstance_NodeRelevancy AnimBlueprintExtension_NodeRelevancy;              // 0x1718(0xA8)(None)
	struct Engine_AnimSubsystemInstance          AnimBlueprintExtension_Base;                       // 0x17C0(0x8)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root_1;                              // 0x17C8(0x20)(None)
	struct Engine_AnimNode_Root                  AnimGraphNode_Root;                                // 0x17E8(0x20)(None)
	struct AnimGraphRuntime_AnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                    // 0x1808(0xF0)(None)
	struct AnimGraphRuntime_AnimNode_LegIK       AnimGraphNode_LegIK_1;                             // 0x18F8(0xF8)(None)
	struct AnimGraphRuntime_AnimNode_CopyBone    AnimGraphNode_CopyBone_1;                          // 0x19F0(0xF0)(None)
	struct AnimGraphRuntime_AnimNode_CopyBone    AnimGraphNode_CopyBone;                            // 0x1AE0(0xF0)(None)
	struct ValhallaAnimGraphRuntime_ValAnimNode_SpringInterp ValAnimGraphNode_SpringInterp;                     // 0x1BD0(0x1B8)(None)
	struct AnimGraphRuntime_AnimNode_LegIK       AnimGraphNode_LegIK;                               // 0x1D88(0xF8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_5;                              // 0x1E80(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_4;                              // 0x1EC8(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                   // 0x1F10(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_9;                    // 0x1F58(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_9;                       // 0x1FA0(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_2;                      // 0x1FC0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_3;                              // 0x2088(0x48)(None)
	struct AnimGraphRuntime_AnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                       // 0x20D0(0xC8)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_8;                    // 0x2198(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                     // 0x21E0(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_7;                    // 0x2228(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_6;                    // 0x2270(0x48)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                   // 0x22B8(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_5;                    // 0x2300(0x48)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_4;                    // 0x2348(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_8;                       // 0x2390(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine_1;                      // 0x23B0(0xC8)(None)
	struct AnimGraphRuntime_AnimNode_ModifyBone  AnimGraphNode_ModifyBone;                          // 0x2478(0x128)(None)
	struct Engine_AnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x25A0(0x20)(None)
	struct AnimGraphRuntime_AnimNode_RotateRootBone AnimGraphNode_RotateRootBone;                      // 0x25C0(0xB0)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_14;                 // 0x2670(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_13;                 // 0x2698(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_12;                 // 0x26C0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_11;                 // 0x26E8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_10;                 // 0x2710(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_9;                  // 0x2738(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_8;                  // 0x2760(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_7;                  // 0x2788(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_6;                  // 0x27B0(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_5;                  // 0x27D8(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_4;                  // 0x2800(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_3;                  // 0x2828(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_2;                  // 0x2850(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult_1;                  // 0x2878(0x28)(None)
	struct Engine_AnimNode_TransitionResult      AnimGraphNode_TransitionResult;                    // 0x28A0(0x28)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                  // 0x28C8(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_7;                       // 0x2938(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                  // 0x2958(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_6;                       // 0x29C8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_3;                    // 0x29E8(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_5;                       // 0x2A30(0x20)(None)
	struct AnimGraphRuntime_AnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                   // 0x2A50(0x40)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_4;                       // 0x2A90(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_2;                    // 0x2AB0(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_3;                       // 0x2AF8(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer_1;                    // 0x2B18(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_2;                       // 0x2B60(0x20)(None)
	struct Engine_AnimNode_SequencePlayer        AnimGraphNode_SequencePlayer;                      // 0x2B80(0x48)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult_1;                       // 0x2BC8(0x20)(None)
	struct AnimGraphRuntime_AnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                    // 0x2BE8(0x70)(None)
	struct Engine_AnimNode_StateResult           AnimGraphNode_StateResult;                         // 0x2C58(0x20)(None)
	struct Engine_AnimNode_StateMachine          AnimGraphNode_StateMachine;                        // 0x2C78(0xC8)(None)
	struct Engine_AnimNode_Inertialization       AnimGraphNode_Inertialization;                     // 0x2D40(0x110)(None)
	struct Engine_AnimNode_LinkedAnimGraph       AnimGraphNode_LinkedAnimGraph_2;                   // 0x2E50(0xB8)(None)
	struct Engine_AnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2F08(0x20)(None)
	struct Engine_AnimNode_LinkedAnimGraph       AnimGraphNode_LinkedAnimGraph_1;                   // 0x2F28(0xB8)(None)
	struct AnimGraphRuntime_AnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                     // 0x2FE0(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_2;                              // 0x3028(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot_1;                              // 0x3070(0x48)(None)
	struct AnimGraphRuntime_AnimNode_Slot        AnimGraphNode_Slot;                                // 0x30B8(0x48)(None)
	struct Engine_AnimNode_LinkedAnimGraph       AnimGraphNode_LinkedAnimGraph;                     // 0x3100(0xB8)(None)
	bool                                         K2Node_PropertyAccess_20;                          // 0x31B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D9[0x3];                                     // Fixing Size After Last Property  
	float                                        __CustomProperty_LeftHandIKStrength_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_TransitionLanded_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x7];                                     // Fixing Size After Last Property  
	double                                       __CustomProperty_Aim_Yaw_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Run_to_Idle_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Land_to_Run_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Idle_to_Run_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_BlendSki_8EC0A23C46CBEDD9331F0ABBE8E3C2F7; // 0x31D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_LeftHandIKStrength_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_TransitionLanded_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F2[0x7];                                     // Fixing Size After Last Property  
	double                                       __CustomProperty_Aim_Yaw_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Run_to_Idle_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Land_to_Run_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Idle_to_Run_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_BlendSki_9B2886EA4BE490D2077B7DB13668EBE5; // 0x31EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_LeftHandIKStrength_E6B09B474072B61A34B871B4C96DB936; // 0x31EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_TransitionLanded_E6B09B474072B61A34B871B4C96DB936; // 0x31F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FC[0x7];                                     // Fixing Size After Last Property  
	double                                       __CustomProperty_Aim_Yaw_E6B09B474072B61A34B871B4C96DB936; // 0x31F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Run_to_Idle_E6B09B474072B61A34B871B4C96DB936; // 0x3200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Land_to_Run_E6B09B474072B61A34B871B4C96DB936; // 0x3201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Idle_to_Run_E6B09B474072B61A34B871B4C96DB936; // 0x3202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_BlendSki_E6B09B474072B61A34B871B4C96DB936; // 0x3203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3300[0x4];                                     // Fixing Size After Last Property  
	class UValCharacterMovementComponent*        CharMovementComp;                                  // 0x3208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SprintingNotCrouching;                             // 0x3210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCrouching;                                      // 0x3211(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInteracting;                                    // 0x3212(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBrowsing;                                       // 0x3213(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHoldingGrenade;                                 // 0x3214(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCharging;                                       // 0x3215(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3302[0x2];                                     // Fixing Size After Last Property  
	float                                        Aim_Yaw;                                           // 0x3218(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsUsingPack;                                      // 0x321C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStartOutro;                                       // 0x321D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3310[0x2];                                     // Fixing Size After Last Property  
	double                                       LoopTime;                                          // 0x3220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IntroDuration;                                     // 0x3228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutroDuration;                                     // 0x3230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     IntroSequence;                                     // 0x3238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     LoopSequence;                                      // 0x3240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     OutroSequence;                                     // 0x3248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bThrown;                                           // 0x3250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDeployable;                                       // 0x3251(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331E[0x6];                                     // Fixing Size After Last Property  
	double                                       RootYawOffset;                                     // 0x3258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimEnum_RootYawOffsetMode       Root_Yaw_Offset_Mode;                              // 0x3260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Root_Yaw_Offset;                            // 0x3261(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3326[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Root_Yaw_Offset_Angle_Clamp;                       // 0x3268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  Root_Yaw_Offset_Angle_Clamp_Crouched;              // 0x3278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FloatSpringState               Root_Yaw_Offset_Spring_State;                      // 0x3288(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_332D[0x4];                                     // Fixing Size After Last Property  
	double                                       Turn_Yaw_Curve_Value;                              // 0x3298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Turn_In_Place_Anim_Time;                           // 0x32A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Turn_in_Place_Left;                                // 0x32A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Crouch_Turn_in_Place_Left;                         // 0x32B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Turn_in_Place_Right;                               // 0x32B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Crouched_Turn_in_Place_Right;                      // 0x32C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Turn_in_Place_Rotation_Direction;                  // 0x32C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Turn_in_Place_Recovery_Direction;                  // 0x32D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Slide_Offset_Speed;                                // 0x32D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Slide_Backwards;                                   // 0x32E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Checked_Slide_Backwards;                           // 0x32E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x6];                                     // Fixing Size After Last Property  
	double                                       Skid_Speed_Threshold;                              // 0x32E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   Right_Pauldron_Rotation;                           // 0x32F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Ski_or_Wants_to;                                   // 0x3308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Wants_Turn_in_Place;                               // 0x3309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Turn_In_Place_Recovery;                            // 0x330A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Healing_Canister_Loop;                             // 0x330B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Healing_Canister_Outro;                            // 0x330C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Idle_to_Run;                                       // 0x330D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Land_to_Run;                                       // 0x330E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Run_to_Idle;                                       // 0x330F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Boosting_to_Falling;                               // 0x3310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlendSki;                                          // 0x3311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAlive_;                                          // 0x3312(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid_;                                          // 0x3313(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LandToIdleMove;                                    // 0x3314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkiingToIdleMove;                                  // 0x3315(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionLanded;                                  // 0x3316(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_CharPlayer_C* GetDefaultObj();

	void WeaponLayer(struct Engine_PoseLink* WeaponLayer);
	void AnimGraph(struct Engine_PoseLink* AnimGraph);
	bool CheckIfAlive();
	void Update_AnimGraph_Data(enum class EWeaponType Temp_byte_Variable, const struct CoreUObject_Rotator& Temp_struct_Variable, const struct CoreUObject_Rotator& Temp_struct_Variable_1, const struct CoreUObject_Rotator& Temp_struct_Variable_2, const struct CoreUObject_Rotator& Temp_struct_Variable_3, const struct CoreUObject_Rotator& Temp_struct_Variable_4, const struct CoreUObject_Rotator& Temp_struct_Variable_5, const struct CoreUObject_Rotator& Temp_struct_Variable_6, const struct CoreUObject_Rotator& Temp_struct_Variable_7, const struct CoreUObject_Rotator& Temp_struct_Variable_8, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_9, const struct CoreUObject_Rotator& K2Node_Select_Default, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void Update_Root_Offset(double DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_FloatSpringInterp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_FloatSpringInterp_Current_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_FloatSpringInterp_DeltaTime_ImplicitCast, double CallFunc_SetRootYawOffset_InRootYawOffset_ImplicitCast);
	void Set_Up_Turn_in_Place_Recovery_State(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node);
	void Update_Turn_in_Place_Recovery_Anim(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node, class UAnimSequence* CallFunc_Select_Turn_In_Place_Animation_Result, const struct AnimGraphRuntime_SequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct AnimGraphRuntime_SequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void Set_Up_Turn_in_Place_Rotation_State(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node, double CallFunc_SignOfFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void Select_Turn_In_Place_Animation(double Direction, class UAnimSequence** Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimSequence* K2Node_Select_Default_2);
	void Update_Turn_In_Place_Anim(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, float CallFunc_GetDeltaTime_ReturnValue, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UAnimSequence* CallFunc_Select_Turn_In_Place_Animation_Result, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, float CallFunc_SetExplicitTime_Time_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Setup_Turn_In_Place_Anim(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct AnimGraphRuntime_SequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue);
	void Process_Turn_Yaw_Curve(double Previous_Turn_Yaw_Curve_Value, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void Update_Idle_State(struct Engine_AnimUpdateContext& Context, struct Engine_AnimNodeReference& Node, const struct AnimGraphRuntime_AnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetRootYawOffset(double InRootYawOffset, bool Temp_bool_Variable, const struct CoreUObject_Vector2D& Temp_struct_Variable, bool Temp_bool_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct CoreUObject_Vector2D& K2Node_Select_Default, const struct CoreUObject_Vector2D& K2Node_Select_Default_1, float CallFunc_NormalizeAxis_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_ClampAngle_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float K2Node_VariableSet_Aim_Yaw_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast);
	void UpdatePackDuration(double Duration, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime, bool CallFunc_CheckIfAlive_ReturnValue, double CallFunc_Update_Root_Offset_DeltaSeconds_ImplicitCast);
	void OnTagRemoved_0DA171684C8447639495DAB302BCF96D(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_0DA171684C8447639495DAB302BCF96D(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_DDDB5E3E493BEE1CF8D004AB8F39C0CF(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_DDDB5E3E493BEE1CF8D004AB8F39C0CF(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_9B528F124CA8EDE0A1CA239554D72132(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_9B528F124CA8EDE0A1CA239554D72132(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_749A0F7E4A1DEDF8E4099C82C993B424(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_749A0F7E4A1DEDF8E4099C82C993B424(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_DEE416644FAA2C7674EAB4BE10CC911C(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_DEE416644FAA2C7674EAB4BE10CC911C(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_2100CA604D10789D8C69F8ABAC29260D(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_2100CA604D10789D8C69F8ABAC29260D(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_DABD1805422EA47B2A45CD8D978EC29A(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_DABD1805422EA47B2A45CD8D978EC29A(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_3B9C60D94B3237FC58FEDEA67547C101(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_3B9C60D94B3237FC58FEDEA67547C101(const struct GameplayTags_GameplayTag& Tag);
	void BlueprintBeginPlay();
	void OnCharacterNotFalling();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_CharPlayer(int32 EntryPoint, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_14, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable_2, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_10, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct GameplayTags_GameplayTag& Temp_struct_Variable_3, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_12, bool CallFunc_IsValid_ReturnValue_6, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct GameplayTags_GameplayTag& Temp_struct_Variable_4, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct GameplayTags_GameplayTag& Temp_struct_Variable_5, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, const struct GameplayTags_GameplayTag& Temp_struct_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_GetPlayLength_ReturnValue_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable_7, bool CallFunc_IsValid_ReturnValue_7, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_5, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_10, double K2Node_VariableSet_IntroDuration_ImplicitCast, double K2Node_VariableSet_OutroDuration_ImplicitCast);
};

}


