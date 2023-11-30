#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4B8 - 0x450)
// BlueprintGeneratedClass BP_JumpPad.BP_JumpPad_C
class ABP_JumpPad_C : public ABP_Deployed_Actor_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_JumpPad;                                        // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValCharacterOverlayComponent*         ValCharacterOverlay;                               // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     JumpBuff;                                          // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Pad;                                               // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         As_Val_Character;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCharacterLaunched;                               // 0x488(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UValGrenadeAudioVisual*                Landing_AV;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       JumpX;                                             // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       JumpY;                                             // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UNiagaraComponent*                     CachedNS;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_JumpPad_C* GetDefaultObj();

	void OnReEnabled();
	void OnDisabled();
	void TeamCheck(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void OnJumpPadOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult, class AValCharacter* OverlappedActor, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_ApplyJumpPadForce_VelocityZ_ImplicitCast, float CallFunc_ApplyJumpPadForce_ForwardVelocity_ImplicitCast);
	void InitializeBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void EventDied();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_JumpPad(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class AActor* CallFunc_GetOwner_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue);
	void OnCharacterLaunched__DelegateSignature(class AValCharacter* NewParam);
};

}


