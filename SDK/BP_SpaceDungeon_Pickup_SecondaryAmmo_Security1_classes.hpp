#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x610 - 0x5E0)
// BlueprintGeneratedClass BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1.BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C
class ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C : public ABP_AbilityPickup_Master_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  CountText;                                         // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_0;                                      // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         Cached_Char;                                       // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              SlotToAddAmmoTo;                                   // 0x600(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         R_DisplayMagazineCount;                            // 0x608(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237E[0x3];                                     // Fixing Size After Last Property  
	int32                                        R_MagazineCount;                                   // 0x60C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SpaceDungeon_Pickup_SecondaryAmmo_Security1_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	enum class ERarity GetContextPingRarity();
	struct CoreUObject_Vector GetPingOffset();
	enum class EValPingType GetContextPingType();
	void OnRep_R_DisplayMagazineCount();
	void OnRep_R_MagazineCount();
	void UpdateCountLabel(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool CustomPickupFunc(class AValCharacter* ValCharacter, int32 MagazinesToAdd, enum class ERarity CallFunc_GetRarity_ReturnValue, int32 CallFunc_GetStackSize_ReturnValue);
	void ReceiveBeginPlay();
	void OnPickupComplete(class AValCharacter* ValCharacter);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SpaceDungeon_Pickup_SecondaryAmmo_Security1(int32 EntryPoint, class AValCharacter* K2Node_Event_ValCharacter, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_GetAxes_X, const struct CoreUObject_Vector& CallFunc_GetAxes_Y, const struct CoreUObject_Vector& CallFunc_GetAxes_Z, const struct CoreUObject_Rotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


