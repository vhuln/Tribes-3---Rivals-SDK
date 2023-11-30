#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x360 - 0x310)
// BlueprintGeneratedClass GC_SniperRifle_Exotic_ReloadCharge.GC_SniperRifle_Exotic_ReloadCharge_C
class AGC_SniperRifle_Exotic_ReloadCharge_C : public AValGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         OwningChar;                                        // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValAbilitySystemComponent*            OwningASC;                                         // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedSlotTag;                                     // 0x328(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PE_1P;                                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        Listen;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        SwappableAbilityListen;                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PE_3P;                                             // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ThreePMesh;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_SniperRifle_Exotic_ReloadCharge_C* GetDefaultObj();

	void On_Swappable_Ability_Tag_Removed(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void On_View_Target_Changed(class AActor* NewViewTarget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void BindSpectator(class AValPlayerController* Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void On_Tag_Removed(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void On_Tag_Added(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindToSwap(bool CallFunc_IsValid_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetGunMesh3P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref);
};

}


