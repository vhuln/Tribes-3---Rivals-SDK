#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2E38 - 0x2E20)
// BlueprintGeneratedClass BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C
class ABP_CharPlayer_Decoy_C : public ABP_CharPlayer_Decoy_Master_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2E20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bDeceptiveTacticsPerk;                             // 0x2E28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_538[0x7];                                      // Fixing Size After Last Property  
	class UBP_MarksmanClassComponent_C*          CachedMarksmanClassComp;                           // 0x2E30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Decoy_C* GetDefaultObj();

	void InitializePassivePerks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UBP_MarksmanClassComponent_C* K2Node_DynamicCast_AsBP_Marksman_Class_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasModsForTag_ReturnValue);
	void OnDecoyDamaged(const struct Valhalla_DamageData& DamageData, class AActor* LocalInstigator, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RemoveComponents();
	void ReceiveBeginPlay();
	void EventHoldKey(double Duration, enum class EValAbilityInputID Key);
	void OnTargetActorUpdated(class UObject* PreviousTarget, class UObject* NewTarget);
	void ClientOnTargetUpdated(class AActor* OldTarget, class AActor* NewTarget);
	void ExecuteUbergraph_BP_CharPlayer_Decoy(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_Event_Duration, enum class EValAbilityInputID K2Node_Event_Key, class UObject* K2Node_Event_PreviousTarget, class UObject* K2Node_Event_NewTarget_1, class AActor* K2Node_Event_OldTarget, class AActor* K2Node_Event_NewTarget, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USkeletalMeshComponentBudgeted* CallFunc_GetJetpackMesh_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}


