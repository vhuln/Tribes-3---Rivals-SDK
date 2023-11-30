#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x340 - 0x308)
// BlueprintGeneratedClass BP_ObjectiveTerminal.BP_ObjectiveTerminal_C
class ABP_ObjectiveTerminal_C : public AValObjectiveTerminal
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                   RectLight;                                         // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Panel;                                             // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Reactor_Small_Base27;                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             DefaultActiveMaterial;                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             DefaultInactiveMaterial;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ObjectiveTerminal_C* GetDefaultObj();

	void BndEvt__BP_Loot_Crate_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_Pickup_Master_InteractCollisionComp_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnInteractablePlayersUpdated();
	void ReceiveBeginPlay();
	void OnLocalPlayerSecurityLevelUpdated(enum class ESecurityLevel SecurityLevel);
	void ExecuteUbergraph_BP_ObjectiveTerminal(int32 EntryPoint, enum class ESecurityLevel K2Node_CustomEvent_SecurityLevel, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_Variable, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInteract_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetPlayerId_ReturnValue, enum class ESecurityLevel CallFunc_GetSecurityLevelAccess_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, TArray<int32>& CallFunc_GetInteractablePlayers_OutPlayers, bool CallFunc_Array_Contains_ReturnValue, enum class ESecurityLevel CallFunc_GetSecurityLevel_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State_1, bool K2Node_DynamicCast_bSuccess_3);
};

}


