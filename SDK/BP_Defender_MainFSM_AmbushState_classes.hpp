#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x118 - 0xF8)
// BlueprintGeneratedClass BP_Defender_MainFSM_AmbushState.BP_Defender_MainFSM_AmbushState_C
class UBP_Defender_MainFSM_AmbushState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValThreatComponent*                   CachedThreatComp;                                  // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValBotData*                           CachedBotConfig;                                   // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CachedAmbushThreat;                                // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Defender_MainFSM_AmbushState_C* GetDefaultObj();

	void OnBotDamaged(const struct Valhalla_DamageData& DamageData, const struct GameplayTags_GameplayTagContainer& ActiveTransitionTags);
	void UnbindThreatFunctions(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindThreatFunctions(class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasFlag_ReturnValue, bool CallFunc_HasFlag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	void SetThreat(const struct Valhalla_Threat& Threat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ChangeStateThreatFound(const struct GameplayTags_GameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	void OnThreatSeenChanged(class UObject* Threat, bool bNewIsPerceived, double LocalWaitTime, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_RandomFloatInRange_Max_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void GetCurrentThreat(class AActor** OutThreat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue);
	void OnThreatDamagedChanged(class UObject* Threat, bool bNewIsPerceived, const struct GameplayTags_GameplayTagContainer& ActiveTransitionTags, class AActor* CallFunc_GetCurrentThreat_OutThreat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_Defender_MainFSM_AmbushState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


