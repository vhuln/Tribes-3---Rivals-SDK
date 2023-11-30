#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x450 - 0x3D0)
// BlueprintGeneratedClass BP_Deployed_Actor.BP_Deployed_Actor_C
class ABP_Deployed_Actor_C : public AValAttributeActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ArmingTime;                                        // 0x3E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       AoERadius;                                         // 0x3F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UValDeployableAudioVisual*             AudioVisual;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                GameplayEffect;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              GETag;                                             // 0x408(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       EffectMagnitude;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              AOEGameplayCueTag;                                 // 0x418(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UClass*>                        AdditionalEffects;                                 // 0x420(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         AOERadiusReady;                                    // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ArmingTimeReady;                                   // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AudioVisualReady;                                  // 0x432(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValOwnedSpawnType                SpawnType;                                         // 0x433(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              InRangeGameplayCueTag;                             // 0x434(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D10[0x4];                                     // Fixing Size After Last Property  
	double                                       Lifetime;                                          // 0x440(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDisabled;                                         // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D13[0x3];                                     // Fixing Size After Last Property  
	int32                                        RevealedCount;                                     // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deployed_Actor_C* GetDefaultObj();

	class UAbilitySystemComponent* GetASC();
	void OnReEnabled();
	void OnDisabled();
	void OnRep_Lifetime();
	bool CheckReady(bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnRep_AudioVisual(bool CallFunc_CheckReady_ReturnValue);
	void OnRep_ArmingTime(bool CallFunc_CheckReady_ReturnValue);
	void OnRep_AOERadius(bool CallFunc_CheckReady_ReturnValue);
	void OnCombatReady();
	void InitActor(double ArmingTime, double AoERadius, class UValDeployableAudioVisual* AudioVisual, const struct GameplayTags_GameplayTag& AOEGameplayCueTag, class UClass* GameplayEffect, double EffectMagnitude, const struct GameplayTags_GameplayTag& GETag, TArray<class UClass*>& AdditionalEffects, enum class EValOwnedSpawnType InSpawnType, const struct GameplayTags_GameplayTag& InRangeGameplayCueTag, double InLifetime);
	void UpdateMesh(class USkeletalMesh* InMesh, class UClass* ABPClass, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnTagRemoved_92721B6A4A826BF65C345AB19E014CE9(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_92721B6A4A826BF65C345AB19E014CE9(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_4440520E4B3CC7620A7C3BB953F9D01C(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_4440520E4B3CC7620A7C3BB953F9D01C(const struct GameplayTags_GameplayTag& Tag);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Deployed_Actor(int32 EntryPoint, float CallFunc_ApplyDamage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_3, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


