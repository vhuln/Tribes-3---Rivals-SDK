#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass OnDeathAnimComplete.OnDeathAnimComplete_C
class UOnDeathAnimComplete_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UOnDeathAnimComplete_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeathActor_C* K2Node_DynamicCast_AsBP_Death_Actor, bool K2Node_DynamicCast_bSuccess, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_1);
};

}


