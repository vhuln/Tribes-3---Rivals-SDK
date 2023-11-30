#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x540 - 0x520)
// BlueprintGeneratedClass BP_MergedPreviewActor_Loadout.BP_MergedPreviewActor_Loadout_C
class ABP_MergedPreviewActor_Loadout_C : public ABP_MergedPreviewActor_C
{
public:
	class USkeletalMeshComponent*                JetpackSkeletalMesh;                               // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                GunSkeletalMesh;                                   // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CachedAnimation;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DefaultIdlePose;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MergedPreviewActor_Loadout_C* GetDefaultObj();

	void UpdateJetpack_Prestige(class UValJetpackMeshData* JetpackMeshData, class UMaterialInterface* BaseMaterial, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceConstant* K2Node_DynamicCast_AsMaterial_Instance_Constant, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_LinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetJetpackMaterialID1_OutMaterialInterface, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void SetWeaponData(TSubclassOf<class UValGameplayAbility> AbilityClass, class UMaterialInterface* Material, class UClass* K2Node_ClassDynamicCast_AsVal_Device, bool K2Node_ClassDynamicCast_bSuccess);
	void SetJetpackData(class UValJetpackMeshData* Mesh, class UMaterialInterface* Material);
	void ReceiveBeginPlay(bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void GetJetpackMaterialID1(class UValJetpackMeshData* JetpackMeshData, class UMaterialInterface* BaseMaterial, class UMaterialInterface** OutMaterialInterface, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, TArray<struct Engine_SkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct Engine_SkeletalMaterial& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateWeaponAnimation(class UAnimMontage* Animation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateWeaponMaterial(class UMaterialInterface* Material, class UValDeviceAudioVisual* AudioVisual, class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterialOverride1P_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_GetMaterialOverrideParams1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void UpdateWeaponData(class UValDeviceAudioVisual* AudioVisual, class UMaterialInterface* Material, class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetABP3P_ReturnValue, class USkeletalMesh* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateJetpack(class UValJetpackMeshData* JetpackMeshData, class UMaterialInterface* BaseMaterial, class UMaterialInterface* CallFunc_GetJetpackMaterialID1_OutMaterialInterface, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceConstant* K2Node_DynamicCast_AsMaterial_Instance_Constant, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_LinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void On_Preview_Actor_Updated(class AActor* Actor, class UValDeviceAudioVisual* RandomGun, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UAnimationAsset* K2Node_Select_Default);
};

}


