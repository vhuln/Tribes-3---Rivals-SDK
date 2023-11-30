#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass BTS_CrouchAndReload.BTS_CrouchAndReload_C
class UBTS_CrouchAndReload_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTS_CrouchAndReload_C* GetDefaultObj();

	void TryReload(class APawn* InPawn, class AValCharacter* Shooter, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_CrouchAndReload(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


