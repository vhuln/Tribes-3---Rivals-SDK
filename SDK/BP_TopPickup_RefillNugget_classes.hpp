#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x630 - 0x568)
// BlueprintGeneratedClass BP_TopPickup_RefillNugget.BP_TopPickup_RefillNugget_C
class ABP_TopPickup_RefillNugget_C : public ATopPickup_RefillNugget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Perk_Interact_Collision_Comp;                      // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_artifacts;                                   // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ItemMesh;                                          // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ETopRefillType, double>      SparkleMap;                                        // 0x590(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ETopRefillType, double>      ExplosionColorMap;                                 // 0x5E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_TopPickup_RefillNugget_C* GetDefaultObj();

	void UpdateRefillType(double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UMaterialInstance* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveOnDestroy();
	void OnPickupComplete(class AValCharacter* ValCharacter);
	void ReceiveOnNuggetSetHidden(bool bWasHidden);
	void BndEvt__BP_TopPickup_RefillNugget_Perk_Interact_Collision_Comp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void ExecuteUbergraph_BP_TopPickup_RefillNugget(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AValCharacter* K2Node_Event_ValCharacter, bool CallFunc_IsLocallyViewed_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class ABP_ValPlayerController_Topaz_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasHidden, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast);
};

}


