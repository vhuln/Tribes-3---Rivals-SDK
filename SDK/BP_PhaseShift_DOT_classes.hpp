#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x318 - 0x298)
// BlueprintGeneratedClass BP_PhaseShift_DOT.BP_PhaseShift_DOT_C
class ABP_PhaseShift_DOT_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     VFX;                                               // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSet<class AActor*>                          ActorSet;                                          // 0x2B8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct GameplayAbilities_GameplayEffectSpecHandle GE_handle;                                         // 0x308(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_PhaseShift_DOT_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__BP_PhaseShift_DOT_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void Apply_DOT(class AActor* Target);
	void ExecuteUbergraph_BP_PhaseShift_DOT(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_Target, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsEnemyWith_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


