#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpaceLibrary
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpaceLibrary* GetDefaultObj();

	void SnapToPosition(struct AnimGraphRuntime_BlendSpaceReference& BlendSpace, const struct CoreUObject_Vector& NewPosition);
	struct CoreUObject_Vector GetPosition(struct AnimGraphRuntime_BlendSpaceReference& BlendSpace);
	struct CoreUObject_Vector GetFilteredPosition(struct AnimGraphRuntime_BlendSpaceReference& BlendSpace);
	void ConvertToBlendSpacePure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_BlendSpaceReference* BlendSpace, bool* Result);
	struct AnimGraphRuntime_BlendSpaceReference ConvertToBlendSpace(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	void SetState(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateMachineReference& Node, class FName TargetState, float Duration, enum class ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
	bool IsStateBlendingOut(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateResultReference& Node);
	bool IsStateBlendingIn(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateResultReference& Node);
	class FName GetState(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateMachineReference& Node);
	float GetRelevantAnimTimeRemainingFraction(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateResultReference& Node);
	float GetRelevantAnimTimeRemaining(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_AnimationStateResultReference& Node);
	void ConvertToAnimationStateResultPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_AnimationStateResultReference* AnimationState, bool* Result);
	void ConvertToAnimationStateResult(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_AnimationStateResultReference* AnimationState, enum class EAnimNodeReferenceConversionResult* Result);
	void ConvertToAnimationStateMachinePure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_AnimationStateMachineReference* AnimationState, bool* Result);
	void ConvertToAnimationStateMachine(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_AnimationStateMachineReference* AnimationState, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimExecutionContextLibrary
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimExecutionContextLibrary* GetDefaultObj();

	float GetDeltaTime(struct Engine_AnimUpdateContext& Context);
	float GetCurrentWeight(struct Engine_AnimUpdateContext& Context);
	struct Engine_AnimNodeReference GetAnimNodeReference(class UAnimInstance* Instance, int32 Index);
	class UAnimInstance* GetAnimInstance(struct Engine_AnimExecutionContext& Context);
	struct Engine_AnimUpdateContext ConvertToUpdateContext(struct Engine_AnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);
	struct Engine_AnimPoseContext ConvertToPoseContext(struct Engine_AnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);
	struct Engine_AnimInitializationContext ConvertToInitializationContext(struct Engine_AnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);
	struct Engine_AnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct Engine_AnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult* Result);
};

// 0x8 (0x40 - 0x38)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_60[0x8];                                       // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAnimSequencerInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendListBaseLibrary
class UBlendListBaseLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendListBaseLibrary* GetDefaultObj();

	void ResetNode(struct AnimGraphRuntime_BlendListBaseReference& BlendListBase);
	struct AnimGraphRuntime_BlendListBaseReference ConvertToBlendListBase(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpacePlayerLibrary
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpacePlayerLibrary* GetDefaultObj();

	void SnapToPosition(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, const struct CoreUObject_Vector& NewPosition);
	bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	struct AnimGraphRuntime_BlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
	struct AnimGraphRuntime_BlendSpacePlayerReference SetPlayRate(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
	struct AnimGraphRuntime_BlendSpacePlayerReference SetLoop(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
	struct AnimGraphRuntime_BlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime);
	struct AnimGraphRuntime_BlendSpacePlayerReference SetBlendSpace(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);
	float GetStartPosition(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	struct CoreUObject_Vector GetPosition(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	float GetPlayRate(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	bool GetLoop(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	class UBlendSpace* GetBlendSpace(struct AnimGraphRuntime_BlendSpacePlayerReference& BlendSpacePlayer);
	void ConvertToBlendSpacePlayerPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_BlendSpacePlayerReference* BlendSpacePlayer, bool* Result);
	struct AnimGraphRuntime_BlendSpacePlayerReference ConvertToBlendSpacePlayer(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	void K2_TwoBoneIK(struct CoreUObject_Vector& RootPos, struct CoreUObject_Vector& JointPos, struct CoreUObject_Vector& EndPos, struct CoreUObject_Vector& JointTarget, struct CoreUObject_Vector& Effector, struct CoreUObject_Vector* OutJointPos, struct CoreUObject_Vector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	void K2_StartProfilingTimer();
	struct CoreUObject_Vector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	struct CoreUObject_Transform K2_LookAt(struct CoreUObject_Transform& CurrentTransform, struct CoreUObject_Vector& TargetPosition, const struct CoreUObject_Vector& LookAtVector, bool bUseUpVector, const struct CoreUObject_Vector& UpVector, float ClampConeInDegree);
	float K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
	float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	struct CoreUObject_Vector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo);
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct CoreUObject_Vector& OffsetInBoneSpace, struct AnimGraphRuntime_PositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct Engine_RuntimeFloatCurve& CustomCurve);
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct CoreUObject_Vector& Position, struct AnimGraphRuntime_PositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
	float CalculateDirection(struct CoreUObject_Vector& Velocity, struct CoreUObject_Rotator& BaseRotation);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	struct AnimGraphRuntime_LayeredBoneBlendReference SetBlendMask(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_LayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName);
	int32 GetNumPoses(struct AnimGraphRuntime_LayeredBoneBlendReference& LayeredBoneBlend);
	struct AnimGraphRuntime_LayeredBoneBlendReference ConvertToLayeredBoneBlend(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
	void ConvertToLayeredBlendPerBonePure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_LayeredBoneBlendReference* LayeredBoneBlend, bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	bool HasLinkedAnimInstance(struct AnimGraphRuntime_LinkedAnimGraphReference& Node);
	class UAnimInstance* GetLinkedAnimInstance(struct AnimGraphRuntime_LinkedAnimGraphReference& Node);
	void ConvertToLinkedAnimGraphPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_LinkedAnimGraphReference* LinkedAnimGraph, bool* Result);
	struct AnimGraphRuntime_LinkedAnimGraphReference ConvertToLinkedAnimGraph(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1[0x30];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	void OnNotifyEndReceived(class FName NotifyName, struct Engine_BranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName NotifyName, struct Engine_BranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	struct AnimGraphRuntime_SequenceEvaluatorReference SetSequenceWithInertialBlending(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);
	struct AnimGraphRuntime_SequenceEvaluatorReference SetSequence(struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);
	struct AnimGraphRuntime_SequenceEvaluatorReference SetExplicitTime(struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator, float Time);
	class UAnimSequenceBase* GetSequence(struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator);
	float GetAccumulatedTime(struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator);
	void ConvertToSequenceEvaluatorPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_SequenceEvaluatorReference* SequenceEvaluator, bool* Result);
	struct AnimGraphRuntime_SequenceEvaluatorReference ConvertToSequenceEvaluator(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
	struct AnimGraphRuntime_SequenceEvaluatorReference AdvanceTime(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_SequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	struct AnimGraphRuntime_SequencePlayerReference SetStartPosition(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, float StartPosition);
	struct AnimGraphRuntime_SequencePlayerReference SetSequenceWithInertialBlending(struct Engine_AnimUpdateContext& UpdateContext, struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);
	struct AnimGraphRuntime_SequencePlayerReference SetSequence(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);
	struct AnimGraphRuntime_SequencePlayerReference SetPlayRate(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, float PlayRate);
	struct AnimGraphRuntime_SequencePlayerReference SetAccumulatedTime(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, float Time);
	float GetStartPosition(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer);
	class UAnimSequenceBase* GetSequencePure(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer);
	struct AnimGraphRuntime_SequencePlayerReference GetSequence(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase);
	float GetPlayRate(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer);
	bool GetLoopAnimation(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer);
	float GetAccumulatedTime(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer);
	void ConvertToSequencePlayerPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_SequencePlayerReference* SequencePlayer, bool* Result);
	struct AnimGraphRuntime_SequencePlayerReference ConvertToSequencePlayer(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
	float ComputePlayRateFromDuration(struct AnimGraphRuntime_SequencePlayerReference& SequencePlayer, float Duration);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencerAnimationSupport
class ISequencerAnimationSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISequencerAnimationSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SkeletalControlLibrary
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USkeletalControlLibrary* GetDefaultObj();

	struct AnimGraphRuntime_SkeletalControlReference SetAlpha(struct AnimGraphRuntime_SkeletalControlReference& SkeletalControl, float Alpha);
	float GetAlpha(struct AnimGraphRuntime_SkeletalControlReference& SkeletalControl);
	void ConvertToSkeletalControlPure(struct Engine_AnimNodeReference& Node, struct AnimGraphRuntime_SkeletalControlReference* SkeletalControl, bool* Result);
	struct AnimGraphRuntime_SkeletalControlReference ConvertToSkeletalControl(struct Engine_AnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

}


