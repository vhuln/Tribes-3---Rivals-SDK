#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x670 - 0x600)
// BlueprintGeneratedClass GA_PassiveReload.GA_PassiveReload_C
class UGA_PassiveReload_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ValChar_Master_C*                  OwningCharacter;                                   // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    CachedTimerHandle;                                 // 0x610(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct GameplayTags_GameplayTag, double> CachedReloadTimes;                                 // 0x618(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct GameplayTags_GameplayTag              CachedEquipSlot;                                   // 0x668(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PassiveReload_C* GetDefaultObj();

	void ReloadUnequippedWeapons(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, float CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast, float CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast);
	void ReloadWeaponSlot(const struct GameplayTags_GameplayTag& Equip_Slot, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, float CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast, float CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast);
	void ReloadWeaponSlot3(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags);
	void ReloadWeaponSlot2(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags);
	void ReloadWeaponSlot1(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags);
	void SetupTimerForWeapon(const struct GameplayTags_GameplayTag& Equip_Slot, double Time, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast_2);
	void Get_Passive_Reload_Time_Of_Swapped_Off_Weapon(double* TimeUntilPassiveReload, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnWeaponSwapped(const struct GameplayTags_GameplayTag& EquipSlot, double LocalTime, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_TimeUntilPassiveReload, double CallFunc_Map_Add_Value_ImplicitCast);
	void OnTagRemoved_104FF3B64B5E8B395A79D99CE877B86B(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_104FF3B64B5E8B395A79D99CE877B86B(const struct GameplayTags_GameplayTag& Tag);
	void OnFinish_A91DFD08433A69F1CFA293A5AD2B234F();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PassiveReload(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


