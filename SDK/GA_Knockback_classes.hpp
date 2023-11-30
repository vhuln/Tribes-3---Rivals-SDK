#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x640 - 0x600)
// BlueprintGeneratedClass GA_Knockback.GA_Knockback_C
class UGA_Knockback_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ValChar_Master_C*                  OwningCharacter;                                   // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValGameplayAbility*                   SwappedFromAbility;                                // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValGameplayAbility*                   SwappedToAbility;                                  // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       HolsterSpeed;                                      // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DrawSpeed;                                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle FallingEffectHandle;                               // 0x630(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       UpwardVelocity;                                    // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Knockback_C* GetDefaultObj();

	void ValApplyCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	bool ValCheckCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void K2_ActivateAbilityFromEvent(struct GameplayAbilities_GameplayEventData& EventData);
	void ExecuteUbergraph_GA_Knockback(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_real_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_GameplayEventData& K2Node_Event_EventData, class UValAbilityKnockbackData* K2Node_DynamicCast_AsVal_Ability_Knockback_Data, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetFloatValue_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue, float Temp_real_Variable_1, bool Temp_bool_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, float K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1);
};

}


