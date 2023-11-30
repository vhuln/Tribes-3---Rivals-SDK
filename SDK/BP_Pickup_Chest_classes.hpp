#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x419 - 0x3D8)
// BlueprintGeneratedClass BP_Pickup_Chest.BP_Pickup_Chest_C
class ABP_Pickup_Chest_C : public AValPickup_Chest
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BoxHover;                                          // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_PickUp_Display;                                 // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxCollision;                                      // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Box;                                               // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         PickupSound;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckLoS;                                          // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pickup_Chest_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	struct CoreUObject_Vector GetPingOffset();
	enum class ERarity GetContextPingRarity();
	enum class EValPingType GetContextPingType();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct CoreUObject_Vector& HitLocation, const struct CoreUObject_Vector& HitNormal, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit);
	void BndEvt__BP_Pickup_Chest_BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void ReceiveBeginPlay();
	void BndEvt__BP_Pickup_Chest_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_Pickup_Chest_InteractCollisionComp_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void OnHoverStart(class AValCharacter* Initiator);
	void OnHoverEnd(class AValCharacter* Initiator);
	void HideFloatingIcon(bool bIsHidden);
	void ExecuteUbergraph_BP_Pickup_Chest(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct CoreUObject_Vector& K2Node_Event_HitLocation, const struct CoreUObject_Vector& K2Node_Event_HitNormal, const struct CoreUObject_Vector& K2Node_Event_NormalImpulse, const struct Engine_HitResult& K2Node_Event_Hit, class USphereComponent* CallFunc_GetCollisionComp_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult_1, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryToPickUp_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_GetUseAutoPickup_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanInteract_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AValCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Event_DeltaSeconds, class AValCharacter* K2Node_Event_Initiator_1, class AValCharacter* K2Node_Event_Initiator, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bIsHidden, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


