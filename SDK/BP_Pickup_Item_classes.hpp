#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x510 - 0x420)
// BlueprintGeneratedClass BP_Pickup_Item.BP_Pickup_Item_C
class ABP_Pickup_Item_C : public AValPickup_Item
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Sparkle;                                           // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ItemMeshHover;                                     // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ItemMesh;                                          // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_PickUp_Display;                                 // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Glow;                                              // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    Looping_Rotation_Levitate_746D354D461C8340F3D803B3ADA28842; // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    Looping_Rotation_ROT_746D354D461C8340F3D803B3ADA28842; // 0x478(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Looping_Rotation__Direction_746D354D461C8340F3D803B3ADA28842; // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13EC[0x7];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    Looping_Rotation;                                  // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ERarity, struct CoreUObject_Color> RarityColors;                                      // 0x4A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CheckLoS;                                          // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13FB[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   ROT_Rand;                                          // 0x4F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Pickup_Item_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	struct CoreUObject_Vector GetPingOffset();
	enum class ERarity GetContextPingRarity(enum class ERarity CallFunc_GetLootRarity_ReturnValue);
	enum class EValPingType GetContextPingType();
	void EnablePickupCollision(class USphereComponent* CallFunc_GetCollisionComp_ReturnValue);
	void Get_Least_Rare_Item_in_Inventory(TArray<struct Valhalla_PendingItem>& Inventory, struct Valhalla_PendingItem* Item, const struct Valhalla_PendingItem& LeastRareItem, int32 Temp_int_Array_Index_Variable, const struct Valhalla_PendingItem& CallFunc_Array_Get_Item, const struct Valhalla_PendingItem& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CompareRarity_B_Rarer_Than_A);
	void Can_Swap_for_Item(const struct Valhalla_PendingItem& ToPickup, TArray<struct Valhalla_PendingItem>& Inventory, bool* CanPickup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct Valhalla_PendingItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CompareRarity_B_Rarer_Than_A, int32 CallFunc_Add_IntInt_ReturnValue);
	void CompareRarity(enum class ERarity A, enum class ERarity B, bool* B_Rarer_Than_A, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	bool CharacterPickupCheck(class AValCharacter* ValCharacter, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct Valhalla_PendingItem>& CallFunc_GetPendingLegendaryInventory_Inventory, int32 CallFunc_Array_Length_ReturnValue, TArray<struct Valhalla_PendingItem>& CallFunc_GetPendingInventory_Inventory, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Can_Swap_for_Item_CanPickup, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	bool CustomPickupFunc(class AValCharacter* ValCharacter, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, TArray<struct Valhalla_PendingItem>& CallFunc_GetPendingInventory_Inventory, const struct Valhalla_PendingItem& CallFunc_Get_Least_Rare_Item_in_Inventory_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AValPickup_Item* CallFunc_SpawnPickupItem_ReturnValue, bool CallFunc_Can_Swap_for_Item_CanPickup, const struct Valhalla_LegendaryArtifactData& K2Node_MakeStruct_LegendaryArtifactData, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateRarity(enum class ERarity Rarity, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, enum class ERarity Temp_byte_Variable, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, enum class ERarity Temp_byte_Variable_1, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, class UMaterialInterface* Temp_object_Variable_12, class UMaterialInterface* Temp_object_Variable_13, class UMaterialInterface* Temp_object_Variable_14, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* Temp_object_Variable_15, float K2Node_Select_Default_1, enum class ERarity Temp_byte_Variable_2, class UMaterialInterface* K2Node_Select_Default_2, const struct CoreUObject_Color& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateType(const struct GameplayTags_GameplayTag& Type, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class FText K2Node_Select_Default);
	void OnLootUpdated();
	void Looping_Rotation__FinishedFunc();
	void Looping_Rotation__UpdateFunc();
	void BndEvt__BP_Pickup_Item_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_Pickup_Item_InteractCollisionComp_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct CoreUObject_Vector& HitLocation, const struct CoreUObject_Vector& HitNormal, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BP_Pickup_Master_CollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void OnHoverEnd(class AValCharacter* Initiator);
	void OnHoverStart(class AValCharacter* Initiator);
	void ReceiveBeginPlay();
	void HideFloatingIcon(bool bIsHidden);
	void ExecuteUbergraph_BP_Pickup_Item(int32 EntryPoint, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanInteract_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct CoreUObject_Vector& K2Node_Event_HitLocation, const struct CoreUObject_Vector& K2Node_Event_HitNormal, const struct CoreUObject_Vector& K2Node_Event_NormalImpulse, const struct Engine_HitResult& K2Node_Event_Hit, class USphereComponent* CallFunc_GetCollisionComp_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AValCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_2, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TryToPickUp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AValCharacter* K2Node_Event_Initiator_1, class AValCharacter* K2Node_Event_Initiator, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, const struct CoreUObject_Rotator& CallFunc_Multiply_RotatorFloat_ReturnValue, bool K2Node_Event_bIsHidden, const struct Engine_HitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


