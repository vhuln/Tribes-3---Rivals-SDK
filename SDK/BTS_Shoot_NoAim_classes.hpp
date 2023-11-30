#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x138 - 0x98)
// BlueprintGeneratedClass BTS_Shoot_NoAim.BTS_Shoot_NoAim_C
class UBTS_Shoot_NoAim_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayTags_GameplayTag              GunKey;                                            // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct AIModule_BlackboardKeySelector        TargetKey;                                         // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        AimKey;                                            // 0xD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        NextFireTimeKey;                                   // 0xF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                       MaxFacingAngleFromTargetInDeg;                     // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReloadOnDeactivate;                                // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DED[0x7];                                     // Fixing Size After Last Property  
	class ABP_CharPlayer_Test_C*                 CachedTestPawn;                                    // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_Shoot_NoAim_C* GetDefaultObj();

	void IsShooterFacingTarget(class APawn* Shooter, class AActor* Target, bool* OutIsFacing, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetFacingDirection_Direction, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_DegCos_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void GetTotalFireTime(class AValCharacter* InTestPawn, class UGA_Gun_Master_C* Gun, double* OutFireTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldFireSimultaneously_ReturnValue, int32 CallFunc_GetMuzzleSocketCount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_FMax_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void CheckLineOfFire(class APawn* Shooter, bool* HasEffectiveAim, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue);
	void CanShoot(bool* Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHoldingInput_Value, bool CallFunc_Not_PreBool_ReturnValue);
	void TryToShoot(double TotalFireTime, bool CallFunc_CheckLineOfFire_HasEffectiveAim, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsShooterFacingTarget_OutIsFacing, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance, class UGameplayAbility* CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTotalFireTime_OutFireTime, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, double CallFunc_Add_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast);
	void TryToReload(bool Force, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTS_Shoot_NoAim(int32 EntryPoint, bool CallFunc_CanShoot_Value, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class ABP_CharPlayer_Test_C* K2Node_DynamicCast_AsBP_Char_Player_Test, bool K2Node_DynamicCast_bSuccess, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn);
};

}


