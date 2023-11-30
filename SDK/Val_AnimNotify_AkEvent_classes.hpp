#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x68 - 0x38)
// BlueprintGeneratedClass Val_AnimNotify_AkEvent.Val_AnimNotify_AkEvent_C
class UVal_AnimNotify_AkEvent_C : public UAnimNotify
{
public:
	class FString                                Attach_Name;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Event;                                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2370[0x7];                                     // Fixing Size After Last Property  
	class FString                                EventName;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVal_AnimNotify_AkEvent_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class AActor* Owner, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemyWith_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue);
};

}


