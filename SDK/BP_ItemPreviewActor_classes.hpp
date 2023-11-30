#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3B0 - 0x298)
// BlueprintGeneratedClass BP_ItemPreviewActor.BP_ItemPreviewActor_C
class ABP_ItemPreviewActor_C : public AValItemPreviewActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       CachedScale;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValEquipmentAsset*                    CachedAsset;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CachedMaterial;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedEquipSlot;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CachedAnimation;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValDeviceAudioVisual*                 CachedAudioVisual;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedInventoryItem;                               // 0x2E0(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct GameplayTags_GameplayTag              CachedAppearanceTag;                               // 0x3A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ItemPreviewActor_C* GetDefaultObj();

	void CacheAppearanceAudioVisual(class UValDeviceAudioVisual* CallFunc_GetAppearanceAudioVisual_AudioVisual);
	void CacheAppearanceAsset(class UValEquipmentAsset* CallFunc_GetAppearanceAsset_Asset);
	void CacheAppearanceTag(const struct GameplayTags_GameplayTag& CallFunc_GetAppearanceTag_Tag);
	void CacheInventoryItem(const struct Valhalla_InventoryItem& InventoryItem, bool* Changed, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_NotEqual_GuidGuid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CacheAssetScale(bool* Changed, double CallFunc_GetAssetScale_Value, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void CacheAssetAnim(bool* Changed, class UAnimSequence* CallFunc_GetAssetAnim_Value, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void CacheMaterial(bool* Changed, class UMaterialInterface* CallFunc_GetMaterial_Material, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void CacheData(class UMaterialInterface* CallFunc_GetMaterial_Material, class UValDeviceAudioVisual* CallFunc_GetAppearanceAudioVisual_AudioVisual, class UValEquipmentAsset* CallFunc_GetAppearanceAsset_Asset, const struct GameplayTags_GameplayTag& CallFunc_GetAppearanceTag_Tag);
	void UpdateDetailData(struct GameplayTags_GameplayTag& EquipSlot, struct Valhalla_InventoryItem& Item);
	void GetAppearanceAudioVisual(class UValDeviceAudioVisual** AudioVisual, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Device, bool K2Node_ClassDynamicCast_bSuccess);
	void GetAppearanceAsset(class UValEquipmentAsset** Asset, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AValGameState* CallFunc_GetGameState_ReturnValue, class AValGameState_Lobby* K2Node_DynamicCast_AsVal_Game_State_Lobby, bool K2Node_DynamicCast_bSuccess, TArray<struct Valhalla_WeaponCosmeticConfig>& CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_WeaponCosmeticConfig& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess_1);
	void GetAppearanceTag(struct GameplayTags_GameplayTag* Tag, bool CallFunc_IsGameplayTagValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void GetAssetAnim(class UValEquipmentAsset* Asset, class UAnimSequence** Value, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess);
	void GetAssetScale(class UValEquipmentAsset* Asset, double* Value, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void GetMaterial(class UMaterialInterface** Material, bool CallFunc_Array_IsValidIndex_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset_1, bool CallFunc_GetItemAssetById_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateData(struct Valhalla_InventoryItem& Item, class AValVendorManager* LocalVendorManager, class UValDeviceAudioVisual* LocalAudioVisual, class UMaterialInterface* LocalMaterial, bool CallFunc_CacheInventoryItem_Changed);
	void UpdateAssetScale();
	void UpdateAssetAnim(class UAnimSequence* CallFunc_GetAssetAnim_Value, bool CallFunc_IsValid_ReturnValue);
	void UpdateMaterial(class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetMaterialOverrideParams1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterialOverride1P_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateRotation(const struct CoreUObject_Rotator& Rotation, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void UpdateDisplay();
	void UpdateMesh(class UAnimSequence* CallFunc_GetAssetAnim_Value, double CallFunc_GetAssetScale_Value, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetABP3P_ReturnValue, class USkeletalMesh* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void UpdateItem(class USkeletalMesh* Mesh, class UAnimSequence* Anim, double Scale, class UValAbilityAudioVisual* AudioVisual, class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemPreviewActor(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


