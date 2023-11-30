#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x1E9 - 0x98)
// BlueprintGeneratedClass BTS_Aim.BTS_Aim_C
class UBTS_Aim_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        TargetActor;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	struct AIModule_BlackboardKeySelector        AimKey;                                            // 0xC8(0x28)(Edit, BlueprintVisible)
	struct AIModule_BlackboardKeySelector        PredictedLocation;                                 // 0xF0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	class AValAIController*                      ValController;                                     // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         ValPawn;                                           // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UsePredictedLocation;                              // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPredicting;                                      // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395F[0x6];                                     // Fixing Size After Last Property  
	double                                       AimSpread;                                         // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ProjectileSpeed;                                   // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct AIModule_BlackboardKeySelector        WarningShots;                                      // 0x140(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShootStraight;                                     // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3972[0x7];                                     // Fixing Size After Last Property  
	struct AIModule_BlackboardKeySelector        HasPerfectAimKey;                                  // 0x170(0x28)(Edit, BlueprintVisible)
	struct AIModule_BlackboardKeySelector        IsTargetOnGround;                                  // 0x198(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        ShootLocation;                                     // 0x1C0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         ShouldShootNearGround;                             // 0x1E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_Aim_C* GetDefaultObj();

	void SetEffectiveAim(const struct CoreUObject_Vector& PredictedAim, bool* Success_, struct CoreUObject_Vector* EffectiveAim, bool HasAim, class FName CallFunc_MakeLiteralName_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_GetMuzzleLocation_muzzleLocation, const struct CoreUObject_Vector& CallFunc_HasEffectiveAim_EffectiveAimLocation, bool CallFunc_HasEffectiveAim_ReturnValue);
	void CalculateNearMissAim(class APawn* ControlledPawn, const struct CoreUObject_Vector& StartLocation, struct CoreUObject_Vector* AimVector, const struct CoreUObject_Vector& MissLocation, class AValCharacter* TargetCharacter, const struct CoreUObject_Vector& LocalNearMissVector, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorHeadLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorHeadLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Vector_Up_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_RotateAngleAxis_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
	void Aim(const struct CoreUObject_Vector& LocalMuzzleLocation, const struct CoreUObject_Vector& LocalAimDirection, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetEffectiveAim_Success_, const struct CoreUObject_Vector& CallFunc_SetEffectiveAim_EffectiveAim, float CallFunc_CalculateBotAccuracyForTarget_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess_1, const struct CoreUObject_Vector& CallFunc_GetMuzzleLocation_muzzleLocation, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetLocationFromBlackboardValue_ReturnValue, const struct CoreUObject_Vector& CallFunc_CalculateNearMissAim_AimVector, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct CoreUObject_Vector& CallFunc_SelectVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetDirectionUnitVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_SelectVector_ReturnValue_1, bool CallFunc_SetEffectiveAim_Success__1, const struct CoreUObject_Vector& CallFunc_SetEffectiveAim_EffectiveAim_1, const struct CoreUObject_Vector& CallFunc_GetDirectionUnitVector_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void PredictAim(const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_PredictTargetLocation_ReturnValue, float CallFunc_PredictTargetLocation_PredictionTime_ImplicitCast);
	void SetupAimVariables(class UGA_Gun_Master_Instant_C* LocalGunInstance, bool CallFunc_ShouldUsePredictiveAimingForActiveAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance, class UGameplayAbility* CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class UGameplayAbility* CallFunc_GetSubAbilityFromClass_ReturnValue, class UGA_Gun_Master_Instant_C* K2Node_DynamicCast_AsGA_Gun_Master_Instant, bool K2Node_DynamicCast_bSuccess_1, class ABP_Projectile_Master_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetMaxSpeed_ReturnValue, double K2Node_VariableSet_ProjectileSpeed_ImplicitCast);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_BTS_Aim(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_OwnerActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess_1);
};

}


