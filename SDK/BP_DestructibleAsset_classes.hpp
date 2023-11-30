#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x430 - 0x3D0)
// BlueprintGeneratedClass BP_DestructibleAsset.BP_DestructibleAsset_C
class ABP_DestructibleAsset_C : public AValAttributeActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       MeleeDamageModifier;                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AOEDamageModifier;                                 // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BulletDamageModifier;                              // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           MeshAfterDestruction;                              // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        Explode_FX_Template;                               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BPToReplaceOnExplode;                              // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>          NewVar;                                            // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USceneComponent*>               Children_0;                                        // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_DestructibleAsset_C* GetDefaultObj();

	void OnDiedWithReplacementMesh();
	void ReceiveBeginPlay();
	void EventDied();
	void EventTornOff();
	void DiedWithReplacement();
	void ExecuteUbergraph_BP_DestructibleAsset(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Transform& CallFunc_GetRelativeTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetComponentBounds_Origin, const struct CoreUObject_Vector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetComponentBounds_Origin_1, const struct CoreUObject_Vector& CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct Engine_HitResult& CallFunc_K2_AddWorldOffset_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


