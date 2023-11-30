#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x358 - 0x310)
// BlueprintGeneratedClass GC_Spinfusor_Exotic_Charging.GC_Spinfusor_Exotic_Charging_C
class AGC_Spinfusor_Exotic_Charging_C : public AValGameplayCueNotify_Actor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PE;                                                // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValAbilitySystemComponent*            OwningASC;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         OwningChar;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedSlotTag;                                     // 0x340(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Seconds;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1702[0x4];                                     // Fixing Size After Last Property  
	double                                       Duration;                                          // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Spinfusor_Exotic_Charging_C* GetDefaultObj();

	void UpdateParameter(bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void BindToShoot(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue);
	void On_Third_Person(bool Value, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void BindToOnThirdPerson(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void On_Tag_Added(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue);
	void On_Tag_Removed(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindToSwap(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetGunMesh3P_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GC_Spinfusor_Exotic_Charging(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_Delta_Seconds_ImplicitCast);
};

}


