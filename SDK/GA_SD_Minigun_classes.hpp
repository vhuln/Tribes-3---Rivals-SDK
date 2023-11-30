#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x788 - 0x77D)
// BlueprintGeneratedClass GA_SD_Minigun.GA_SD_Minigun_C
class UGA_SD_Minigun_C : public UGA_Gun_Master_C
{
public:
	uint8                                        Pad_3A25[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_SD_Minigun_C* GetDefaultObj();

	void Check_For_Post_Action_Ability(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<TSubclassOf<class UValGameplayAbility>>& CallFunc_Map_Values_Values, class UClass* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_TryActivateAbilityByClass_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInputPressed_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UGameplayAbility> CallFunc_GetEquippedAbilityClass_AbilityClass, bool CallFunc_GetEquippedAbilityClass_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EValAbilityInputID Temp_byte_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, TSubclassOf<class UValGameplayAbility> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_TryActivateAbilityByClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_TryActivateAbilityByClassAndInput_ReturnValue, bool CallFunc_IsInputPressed_ReturnValue_1);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, const struct GameplayTags_GameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue);
	void BeginPlay();
	void ExecuteUbergraph_GA_SD_Minigun(int32 EntryPoint);
};

}


