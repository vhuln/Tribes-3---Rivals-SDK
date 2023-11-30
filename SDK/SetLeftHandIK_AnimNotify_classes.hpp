#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass SetLeftHandIK_AnimNotify.SetLeftHandIK_AnimNotify_C
class USetLeftHandIK_AnimNotify_C : public UAnimNotify
{
public:
	double                                       New_Strength;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Blend_Time;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USetLeftHandIK_AnimNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetLeftHandIKStrength_BlendTime_ImplicitCast, float CallFunc_SetLeftHandIKStrength_NewStrength_ImplicitCast);
};

}


