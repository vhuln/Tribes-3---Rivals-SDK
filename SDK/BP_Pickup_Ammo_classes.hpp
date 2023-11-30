#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x440 - 0x409)
// BlueprintGeneratedClass BP_Pickup_Ammo.BP_Pickup_Ammo_C
class ABP_Pickup_Ammo_C : public ABP_Pickup_Master_C
{
public:
	uint8                                        Pad_31CD[0x7];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  CountText;                                         // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_0;                                      // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         Cached_Char;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              SlotToAddAmmoTo;                                   // 0x430(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         R_DisplayMagazineCount;                            // 0x438(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31EF[0x3];                                     // Fixing Size After Last Property  
	int32                                        R_MagazineCount;                                   // 0x43C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pickup_Ammo_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	enum class ERarity GetContextPingRarity();
	struct CoreUObject_Vector GetPingOffset();
	enum class EValPingType GetContextPingType();
	void OnRep_R_DisplayMagazineCount();
	void OnRep_R_MagazineCount();
	void UpdateCountLabel(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool CustomPickupFunc(class AValCharacter* ValCharacter, int32 MagazinesToAdd, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UValAttributeSet* CallFunc_GetAttributes_ReturnValue, bool Temp_bool_Variable, const struct GameplayTags_GameplayTag& K2Node_Select_Default, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_AddReserveAmmo_Amount_ImplicitCast);
	bool CharacterPickupCheck(class AValCharacter* ValCharacter, bool Temp_bool_Variable, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_Select_Default, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	void ReceiveBeginPlay();
	void OnPickupComplete(class AValCharacter* ValCharacter);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Pickup_Ammo(int32 EntryPoint, class AValCharacter* K2Node_Event_ValCharacter, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_GetAxes_X, const struct CoreUObject_Vector& CallFunc_GetAxes_Y, const struct CoreUObject_Vector& CallFunc_GetAxes_Z, const struct CoreUObject_Rotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


