#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x5E0 - 0x570)
// BlueprintGeneratedClass BP_AbilityPickup_Master.BP_AbilityPickup_Master_C
class ABP_AbilityPickup_Master_C : public AValAbilityPickup
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_PickUp_Display;                                 // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  HoverMesh;                                         // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Sparkle;                                           // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ItemMesh;                                          // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Glow;                                              // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERarity                           Rarity;                                            // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ED[0x7];                                      // Fixing Size After Last Property  
	class FText                                  Ability_Description;                               // 0x5A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Ability_Display_Name;                              // 0x5C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSubclassOf<class UValGameplayAbility>       Ability;                                           // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AbilityPickup_Master_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride(const struct GameplayTags_GameplayTag& CallFunc_GetEquipSlot_ReturnValue, class FText CallFunc_GetSlotName_Text, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ERarity GetContextPingRarity();
	enum class EValPingType GetContextPingType();
	struct CoreUObject_Vector GetPingOffset();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	void GetSlotName(const struct GameplayTags_GameplayTag& Slot, class FText* Text, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void UserConstructionScript();
	void OnLoaded_42F2B6734B73080E9F3992A7D6FA4BA8(class UObject* Loaded);
	void OnLoaded_2AE2D33640A65F9EE037E59490E6604C(class UObject* Loaded);
	void OnLoaded_1537AC9A4DE34E372045C0916B6C62AE(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnRarityUpdated(enum class ERarity Rarity);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct CoreUObject_Vector& HitLocation, const struct CoreUObject_Vector& HitNormal, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit);
	void BndEvt__BP_Pickup_Master_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_Pickup_Master_InteractCollisionComp_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnHoverStart(class AValCharacter* Initiator);
	void OnHoverEnd(class AValCharacter* Initiator);
	void HideFloatingIcon(bool bIsHidden);
	void OnAbilityUpdated(TSubclassOf<class UValGameplayAbility> Ability);
	void OnAbilityPickupMeshUpdated();
	void ExecuteUbergraph_BP_AbilityPickup_Master(int32 EntryPoint, class UMaterialInstance* Temp_object_Variable, class UMaterialInstance* Temp_object_Variable_1, class UMaterialInstance* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable_3, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable_4, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_5, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_2, TArray<struct Engine_StaticMaterial>& CallFunc_GetStaticMaterials_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstance* Temp_object_Variable_6, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct Engine_StaticMaterial& CallFunc_Array_Get_Item, enum class ERarity K2Node_Event_Rarity, class UMaterialInstance* Temp_object_Variable_7, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct CoreUObject_Vector& K2Node_Event_HitLocation, const struct CoreUObject_Vector& K2Node_Event_HitNormal, const struct CoreUObject_Vector& K2Node_Event_NormalImpulse, const struct Engine_HitResult& K2Node_Event_Hit, class USphereComponent* CallFunc_GetCollisionComp_ReturnValue, class UMaterialInstance* Temp_object_Variable_8, bool CallFunc_IsSimulatingPhysics_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_GetUseAutoPickup_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_GetUseAutoPickup_ReturnValue_1, bool CallFunc_CanInteract_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UMaterialInstance* Temp_object_Variable_9, class UMaterialInstance* Temp_object_Variable_10, enum class ERarity Temp_byte_Variable, float Temp_real_Variable, class UMaterialInstance* K2Node_Select_Default, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AValCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float Temp_real_Variable_4, class AValCharacter* K2Node_Event_Initiator_1, class AValCharacter* K2Node_Event_Initiator, bool K2Node_Event_bIsHidden, bool CallFunc_Not_PreBool_ReturnValue, float Temp_real_Variable_5, TSubclassOf<class UValGameplayAbility> K2Node_Event_Ability, class UClass* K2Node_ClassDynamicCast_AsVal_Device, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, float Temp_real_Variable_6, float Temp_real_Variable_7, bool CallFunc_HasAuthority_ReturnValue, enum class ERarity Temp_byte_Variable_1, float K2Node_Select_Default_1, TSoftObjectPtr<class UStaticMesh> CallFunc_GetAbilityPickupMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


