#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x648 - 0x600)
// BlueprintGeneratedClass GA_PassiveHitReaction.GA_PassiveHitReaction_C
class UGA_PassiveHitReaction_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<double>                               TriggerThresholds;                                 // 0x608(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	double                                       CachedHealthPercent;                               // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTriggerIndex;                               // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA4[0x4];                                      // Fixing Size After Last Property  
	double                                       LastTriggerTime;                                   // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinCooldownDownTime;                               // 0x630(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayTags_GameplayTag>      EquipSlotsToCancel;                                // 0x638(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_PassiveHitReaction_C* GetDefaultObj();

	void GetTotalHealthAndShieldPercent(class AValCharacter* ValChar, double* Percent, int32 CallFunc_GetShieldsMax_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, int32 CallFunc_GetShields_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void OnDamaged(const struct Valhalla_DamageData& DamageData, float HealthPercent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_GetTotalHealthAndShieldPercent_Percent, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_CachedHealthPercent_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, float K2Node_VariableSet_HealthPercent_ImplicitCast);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PassiveHitReaction(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthPercent_ReturnValue, double K2Node_VariableSet_CachedHealthPercent_ImplicitCast);
};

}


