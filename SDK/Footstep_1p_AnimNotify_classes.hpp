#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass Footstep_1p_AnimNotify.Footstep_1p_AnimNotify_C
class UFootstep_1p_AnimNotify_C : public UAnimNotify
{
public:
	class UAkSwitchValue*                        SpeedSwitch;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D82[0x7];                                     // Fixing Size After Last Property  
	class USceneComponent*                       Attach_to_Component;                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFootstep_1p_AnimNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class AActor* Owner, double MovementType);
};

}


