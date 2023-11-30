#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x388 - 0x388)
// Class GameplayAbilities.AbilitySystemDebugHUD
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static class UClass* StaticClass();
	static class AAbilitySystemDebugHUD* GetDefaultObj();

};

// 0xA48 (0xA70 - 0x28)
// Class GameplayAbilities.GameplayEffect
class UGameplayEffect : public UObject
{
public:
	uint8                                        Pad_C8[0x8];                                       // Fixing Size After Last Property  
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA[0x7];                                       // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectModifierMagnitude DurationMagnitude;                                 // 0x38(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       Period;                                            // 0x218(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bExecutePeriodicEffectOnApplication;               // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;                          // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB[0x6];                                       // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayModifierInfo> Modifiers;                                         // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_GameplayEffectExecutionDefinition> Executions;                                        // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       ChanceToApplyToTarget;                             // 0x268(0x28)(Deprecated, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x290(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_ConditionalGameplayEffect> ConditionalGameplayEffects;                        // 0x2A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OverflowEffects;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bDenyOverflowApplication;                          // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearStackOnOverflow;                             // 0x2C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD[0x6];                                       // Fixing Size After Last Property  
	TArray<TSubclassOf<class UGameplayEffect>>   PrematureExpirationEffectClasses;                  // 0x2C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   RoutineExpirationEffectClasses;                    // 0x2D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRequireModifierSuccessToTriggerCues;              // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressStackingCues;                             // 0x2E9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0[0x6];                                       // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayEffectCue> GameplayCues;                                      // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 UIData;                                            // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_InheritedTagContainer InheritableGameplayEffectTags;                     // 0x308(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_InheritedTagContainer InheritableOwnedTagsContainer;                     // 0x368(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_InheritedTagContainer InheritableBlockedAbilityTagsContainer;            // 0x3C8(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements OngoingTagRequirements;                            // 0x428(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements ApplicationTagRequirements;                        // 0x4B0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements RemovalTagRequirements;                            // 0x538(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_InheritedTagContainer RemoveGameplayEffectsWithTags;                     // 0x5C0(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements GrantedApplicationImmunityTags;                    // 0x620(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectQuery GrantedApplicationImmunityQuery;                   // 0x6A8(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3[0x8];                                       // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectQuery RemoveGameplayEffectQuery;                         // 0x848(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5[0x1];                                       // Fixing Size After Last Property  
	enum class EGameplayEffectStackingType       StackingType;                                      // 0x9E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6[0x2];                                       // Fixing Size After Last Property  
	int32                                        StackLimitCount;                                   // 0x9E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                        // 0x9E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                            // 0x9E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                             // 0x9EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9[0x5];                                       // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayAbilitySpecDef> GrantedAbilities;                                  // 0x9F0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA[0x60];                                      // Fixing Size After Last Property  
	TArray<class UGameplayEffectComponent*>      GEComponents;                                      // 0xA60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffect* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectComponent
class UGameplayEffectComponent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.AbilitiesGameplayEffectComponent
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct GameplayAbilities_GameplayAbilitySpecConfig> GrantAbilityConfigs;                               // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilitiesGameplayEffectComponent* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	bool                                         bOnApplicationCopyDataFromOriginalSpec;            // 0x28(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9[0x7];                                       // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_ConditionalGameplayEffect> OnApplicationGameplayEffects;                      // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteAlways;                                  // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteNormal;                                  // 0x50(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompletePrematurely;                             // 0x60(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAdditionalEffectsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.AssetTagsGameplayEffectComponent
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct GameplayAbilities_InheritedTagContainer InheritableAssetTags;                              // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAssetTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct GameplayAbilities_InheritedTagContainer InheritableBlockedAbilityTagsContainer;            // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBlockAbilityTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GameplayAbilities.ChanceToApplyGameplayEffectComponent
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct GameplayAbilities_ScalableFloat       ChanceToApplyToTarget;                             // 0x28(0x28)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChanceToApplyGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.CustomCanApplyGameplayEffectComponent
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomCanApplyGameplayEffectComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData
class UGameplayEffectUIData : public UGameplayEffectComponent
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectUIData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData_TextOnly
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffectUIData_TextOnly* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.ImmunityGameplayEffectComponent
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct GameplayAbilities_GameplayEffectQuery> ImmunityQueries;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UImmunityGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct GameplayAbilities_GameplayEffectQuery> RemoveGameplayEffectQueries;                       // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URemoveOtherGameplayEffectComponent* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct GameplayAbilities_GameplayTagRequirements ApplicationTagRequirements;                        // 0x28(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements OngoingTagRequirements;                            // 0xB0(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements RemovalTagRequirements;                            // 0x138(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTargetTagRequirementsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.TargetTagsGameplayEffectComponent
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct GameplayAbilities_InheritedTagContainer InheritableGrantedTagsContainer;                   // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTargetTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AbilityAsync
class UAbilityAsync : public UCancellableAsyncAction
{
public:
	uint8                                        Pad_100[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityAsync* GetDefaultObj();

	void EndAction();
};

// 0x58 (0x90 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            Changed;                                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D[0x48];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitAttributeChanged* GetDefaultObj();

	class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, const struct GameplayAbilities_GameplayAttribute& Attribute, bool OnlyTriggerOnce);
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct GameplayAbilities_GameplayAttribute& Attribute, float NewValue, float OldValue);
};

// 0x150 (0x188 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_118[0x140];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEffectApplied* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct GameplayAbilities_GameplayTargetDataFilterHandle& SourceFilter, const struct GameplayAbilities_GameplayTagRequirements& SourceTagRequirements, const struct GameplayAbilities_GameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
	void OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
};

// 0x28 (0x60 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_125[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEvent* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, const struct GameplayTags_GameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
	void EventReceivedDelegate__DelegateSignature(const struct GameplayAbilities_GameplayEventData& Payload);
};

// 0x18 (0x50 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
public:
	uint8                                        Pad_127[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTag* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, const struct GameplayTags_GameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct GameplayTags_GameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0xD0 (0x108 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{
public:
	uint8                                        Pad_142[0xC0];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagQuery* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, const struct GameplayTags_GameplayTagQuery& TagQuery, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
};

// 0x390 (0x3B8 - 0x28)
// Class GameplayAbilities.GameplayAbility
class UGameplayAbility : public UObject
{
public:
	uint8                                        Pad_21E[0x80];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     AbilityTags;                                       // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bReplicateInputDirectly;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoteInstanceEnded;                               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220[0x4];                                      // Fixing Size After Last Property  
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;                                 // 0xCE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityInstancingPolicy  InstancingPolicy;                                  // 0xCF(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bServerRespectsRemoteAbilityCancellation;          // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRetriggerInstancedAbility;                        // 0xD1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222[0x6];                                      // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityActivationInfo CurrentActivationInfo;                             // 0xD8(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayEventData   CurrentEventData;                                  // 0xF8(0xB0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;                                // 0x1A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy;                                 // 0x1A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223[0x6];                                      // Fixing Size After Last Property  
	TSubclassOf<class UGameplayEffect>           CostGameplayEffectClass;                           // 0x1B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct GameplayAbilities_AbilityTriggerData> AbilityTriggers;                                   // 0x1B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           CooldownGameplayEffectClass;                       // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     CancelAbilitiesWithTag;                            // 0x1D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     BlockAbilitiesWithTag;                             // 0x1F0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     ActivationOwnedTags;                               // 0x210(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     ActivationRequiredTags;                            // 0x230(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     ActivationBlockedTags;                             // 0x250(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     SourceRequiredTags;                                // 0x270(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     SourceBlockedTags;                                 // 0x290(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     TargetRequiredTags;                                // 0x2B0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     TargetBlockedTags;                                 // 0x2D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_229[0x20];                                     // Fixing Size After Last Property  
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x310(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_22A[0x10];                                     // Fixing Size After Last Property  
	class UAnimMontage*                          CurrentMontage;                                    // 0x330(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C[0x60];                                     // Fixing Size After Last Property  
	bool                                         bIsActive;                                         // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAbilityEnding;                                  // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCancelable;                                     // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingOtherAbilities;                         // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22E[0x14];                                     // Fixing Size After Last Property  
	bool                                         bMarkPendingKillOnAbilityEnd;                      // 0x3B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearAbilityTimers;                               // 0x3B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearAbilityTasks;                                // 0x3B2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_231[0x5];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayAbility* GetDefaultObj();

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct GameplayTags_GameplayTag& EventTag, const struct GameplayAbilities_GameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName);
	void MontageJumpToSection(class FName SectionName);
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName);
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct GameplayAbilities_GameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct GameplayTags_GameplayTag& GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	bool K2_HasAuthority();
	void K2_ExecuteGameplayCueWithParams(const struct GameplayTags_GameplayTag& GameplayCueTag, struct GameplayAbilities_GameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_GameplayEffectContextHandle& Context);
	void K2_EndAbilityLocally();
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags);
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct GameplayAbilities_GameplayEffectSpecHandle& EffectSpecHandle, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData);
	struct GameplayAbilities_ActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct GameplayAbilities_GameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct GameplayTags_GameplayTag& GameplayCueTag, struct GameplayAbilities_GameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_GameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(struct GameplayAbilities_GameplayEventData& EventData);
	void K2_ActivateAbility();
	bool IsLocallyControlled();
	void InvalidateClientPredictionKey();
	class UObject* GetSourceObject_BP(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct GameplayAbilities_GameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	struct GameplayAbilities_GameplayAbilitySpecHandle GetCurrentAbilitySpecHandle();
	float GetCooldownTimeRemaining();
	struct GameplayAbilities_GameplayEffectContextHandle GetContextFromOwner(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct GameplayAbilities_GameplayAbilityActorInfo GetActorInfo();
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
	int32 GetAbilityLevel_BP(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	int32 GetAbilityLevel();
	void EndTaskByInstanceName(class FName InstanceName);
	void EndAbilityState(class FName OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(class FName InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct GameplayTags_GameplayTagContainer& WithGrantedTags, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct GameplayTags_GameplayTagContainer& WithAssetTags, int32 StacksToRemove);
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
	struct GameplayAbilities_ActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
};

// 0x10 (0x40 - 0x30)
// Class GameplayAbilities.GameplayAbilitySet
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct GameplayAbilities_GameplayAbilityBindInfo> Abilities;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbilitySet* GetDefaultObj();

};

// 0x148 (0x3E0 - 0x298)
// Class GameplayAbilities.GameplayAbilityTargetActor
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                         ShouldProduceTargetDataOnServer;                   // 0x298(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247[0x7];                                      // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo StartLocation;                                     // 0x2A0(0xA0)(BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_249[0x30];                                     // Fixing Size After Last Property  
	class APlayerController*                     PrimaryPC;                                         // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      OwningAbility;                                     // 0x378(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnConfirmation;                            // 0x380(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                SourceActor;                                       // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_WorldReticleParameters ReticleParams;                                     // 0x390(0x18)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTargetDataFilterHandle Filter;                                            // 0x3B0(0x10)(BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x3C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C[0x17];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               GenericDelegateBoundASC;                           // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor* GetDefaultObj();

	void ConfirmTargeting();
	void CancelTargeting();
};

// 0x18 (0x3F8 - 0x3E0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                        MaxRange;                                          // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_CollisionProfileName           TraceProfile;                                      // 0x3E4(0x8)(Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bTraceAffectsAimPitch;                             // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253[0xB];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Trace* GetDefaultObj();

};

// 0x20 (0x418 - 0x3F8)
// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                        CollisionRadius;                                   // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeight;                                   // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_256[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_GroundTrace* GetDefaultObj();

};

// 0x18 (0x430 - 0x418)
// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	TSubclassOf<class UObject>                   PlacedActorClass;                                  // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PlacedActorMaterial;                               // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_ActorPlacement* GetDefaultObj();

};

// 0x10 (0x3F0 - 0x3E0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                        Radius;                                            // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269[0xC];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Radius* GetDefaultObj();

};

// 0x8 (0x400 - 0x3F8)
// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	uint8                                        Pad_26F[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_SingleLineTrace* GetDefaultObj();

};

// 0x30 (0x2C8 - 0x298)
// Class GameplayAbilities.GameplayAbilityWorldReticle
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct GameplayAbilities_WorldReticleParameters Parameters;                                        // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bFaceOwnerFlat;                                    // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetedActor;                              // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetValid;                                    // 0x2B2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetAnActor;                                  // 0x2B3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A4[0x4];                                      // Fixing Size After Last Property  
	class APlayerController*                     PrimaryPC;                                         // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayAbilityTargetActor*           TargetingActor;                                    // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle* GetDefaultObj();

	void SetReticleMaterialParamVector(class FName ParamName, const struct CoreUObject_Vector& Value);
	void SetReticleMaterialParamFloat(class FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// 0x18 (0x2E0 - 0x2C8)
// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                     CollisionComponent;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>               VisualizationComponents;                           // 0x2D0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle_ActorVisualization* GetDefaultObj();

};

// 0x0 (0x3B8 - 0x3B8)
// Class GameplayAbilities.GameplayAbility_CharacterJump
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbility_CharacterJump* GetDefaultObj();

};

// 0x38 (0x3F0 - 0x3B8)
// Class GameplayAbilities.GameplayAbility_Montage
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x3B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x3C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x3C4(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA[0x4];                                      // Fixing Size After Last Property  
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesWhileAnimating;               // 0x3D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>               GameplayEffectsWhileAnimating;                     // 0x3E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbility_Montage* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class GameplayAbilities.AbilityTask
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask* GetDefaultObj();

};

// 0x48 (0xC8 - 0x80)
// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	class FName                                  ForceName;                                         // 0x80(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionFinishVelocityMode     FinishVelocityMode;                                // 0x88(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F0[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    FinishSetVelocity;                                 // 0x90(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FinishClampVelocity;                               // 0xA8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F5[0x4];                                      // Fixing Size After Last Property  
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F8[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotion_Base* GetDefaultObj();

};

// 0x48 (0x110 - 0xC8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WorldDirection;                                    // 0xD8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xF4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xF8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B[0x7];                                      // Fixing Size After Last Property  
	class UCurveFloat*                           StrengthOverTime;                                  // 0x100(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGravity;                                    // 0x108(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33D[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionConstantForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct CoreUObject_Vector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
};

// 0x68 (0x130 - 0xC8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLanded;                                          // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0xE8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Distance;                                          // 0x100(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x104(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0x108(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumLandedTriggerTime;                          // 0x10C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFinishOnLanded;                                   // 0x110(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_394[0x7];                                      // Fixing Size After Last Property  
	class UCurveVector*                          PathOffsetCurve;                                   // 0x118(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x120(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionJumpForce* GetDefaultObj();

	void OnLandedCallback(struct Engine_HitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct CoreUObject_Rotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// 0xA0 (0x168 - 0xC8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StartLocation;                                     // 0xE0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    TargetLocation;                                    // 0xF8(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetActor;                                       // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    TargetLocationOffset;                              // 0x118(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x130(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_455[0x3];                                      // Fixing Size After Last Property  
	float                                        Duration;                                          // 0x134(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x138(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x139(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x13A(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x13B(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_458[0x4];                                      // Fixing Size After Last Property  
	class UCurveVector*                          PathOffsetCurve;                                   // 0x140(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x148(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedHorizontalCurve;                    // 0x150(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedVerticalCurve;                      // 0x158(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_45A[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* GetDefaultObj();

	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct CoreUObject_Vector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor, const struct CoreUObject_Vector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// 0x68 (0x130 - 0xC8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnTimedOut;                                        // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimedOutAndDestinationReached;                   // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    StartLocation;                                     // 0xE8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    TargetLocation;                                    // 0x100(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0x118(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x11C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x11D(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x11E(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A8[0x1];                                      // Fixing Size After Last Property  
	class UCurveVector*                          PathOffsetCurve;                                   // 0x120(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A9[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct CoreUObject_Vector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x70 (0x138 - 0xC8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0xD8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                LocationActor;                                     // 0xF0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xF8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xFC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x100(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPush;                                           // 0x104(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0x105(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoZForce;                                         // 0x106(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_51A[0x1];                                      // Fixing Size After Last Property  
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0x108(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFixedWorldDirection;                           // 0x118(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_528[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   FixedWorldDirection;                               // 0x120(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionRadialForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct CoreUObject_Vector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct CoreUObject_Rotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct CoreUObject_Vector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x68 (0xE8 - 0x80)
// Class GameplayAbilities.AbilityTask_MoveToLocation
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnTargetLocationReached;                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_579[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StartLocation;                                     // 0x98(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    TargetLocation;                                    // 0xB0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationOfMovement;                                // 0xC8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_57C[0xC];                                      // Fixing Size After Last Property  
	class UCurveFloat*                           LerpCurve;                                         // 0xD8(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          LerpCurveVector;                                   // 0xE0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_MoveToLocation* GetDefaultObj();

	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct CoreUObject_Vector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnSync;                                            // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_NetworkSyncPoint* GetDefaultObj();

	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};

// 0x88 (0x108 - 0x80)
// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_64C[0x28];                                     // Fixing Size After Last Property  
	class UAnimMontage*                          MontageToPlay;                                     // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Rate;                                              // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StartSection;                                      // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimRootMotionTranslationScale;                    // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartTimeSeconds;                                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStopWhenAbilityEnds;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowInterruptAfterBlendOut;                      // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_658[0x2];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_PlayMontageAndWait* GetDefaultObj();

	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnGameplayAbilityCancelled();
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_Repeat
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPerformAction;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_68F[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_Repeat* GetDefaultObj();

	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

// 0x48 (0xC8 - 0x80)
// Class GameplayAbilities.AbilityTask_SpawnActor
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E1[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_SpawnActor* GetDefaultObj();

	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class, class AActor** SpawnedActor);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_StartAbilityState
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnStateEnded;                                      // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateInterrupted;                                // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_704[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_StartAbilityState* GetDefaultObj();

	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_VisualizeTargeting
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            TimeElapsed;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_740[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_VisualizeTargeting* GetDefaultObj();

	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0x100 (0x180 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnActivate;                                        // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_795[0xF0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityActivate* GetDefaultObj();

	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTag& WithTag, const struct GameplayTags_GameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// 0x78 (0xF8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCommit;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CC[0x68];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityCommit* GetDefaultObj();

	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTagQuery& Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTag& WithTag, const struct GameplayTags_GameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// 0x78 (0xF8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChange
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_87A[0x60];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChange* GetDefaultObj();

	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAttribute& InAttribute, const struct GameplayTags_GameplayTag& InWithTag, const struct GameplayTags_GameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAttribute& Attribute, const struct GameplayTags_GameplayTag& WithSrcTag, const struct GameplayTags_GameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

// 0xC0 (0x140 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C2[0xA8];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAttribute& AttributeNumerator, const struct GameplayAbilities_GameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x70 (0xF0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F4[0x58];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitCancel
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_919[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitCancel* GetDefaultObj();

	class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirm
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_93A[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirm* GetDefaultObj();

	class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_96B[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirmCancel* GetDefaultObj();

	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitDelay
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_981[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitDelay* GetDefaultObj();

	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// 0x1C8 (0x248 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	uint8                                        Pad_99B[0x1B8];                                    // Fixing Size After Last Property  
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_99C[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied* GetDefaultObj();

	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct GameplayAbilities_GameplayEffectSpec& SpecApplied, const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x268 - 0x248)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F1[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Self* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTargetDataFilterHandle& SourceFilter, const struct GameplayTags_GameplayTagQuery& SourceTagQuery, const struct GameplayTags_GameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTargetDataFilterHandle& SourceFilter, const struct GameplayAbilities_GameplayTagRequirements& SourceTagRequirements, const struct GameplayAbilities_GameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// 0x20 (0x268 - 0x248)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A45[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Target* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTargetDataFilterHandle& SourceFilter, const struct GameplayTags_GameplayTagQuery& SourceTagQuery, const struct GameplayTags_GameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTargetDataFilterHandle& TargetFilter, const struct GameplayAbilities_GameplayTagRequirements& SourceTagRequirements, const struct GameplayAbilities_GameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// 0x138 (0x1B8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            Blocked;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6C[0x118];                                    // Fixing Size After Last Property  
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A6E[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_GameplayTagRequirements& SourceTagRequirements, const struct GameplayAbilities_GameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRemoved;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(struct GameplayAbilities_GameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC4[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectStackChange* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount);
};

// 0x30 (0xB0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEB[0x8];                                      // Fixing Size After Last Property  
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEvent* GetDefaultObj();

	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	uint8                                        Pad_AFB[0x10];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AFC[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTag* GetDefaultObj();

	void GameplayTagCallback(const struct GameplayTags_GameplayTag& Tag, int32 NewCount);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0xE0 (0x160 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{
public:
	uint8                                        Pad_B4D[0xC0];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B50[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagQuery* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const struct GameplayTags_GameplayTagQuery& TagQuery, class AActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
	void UpdateTargetTags(const struct GameplayTags_GameplayTag& Tag, int32 NewCount);
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputPress
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPress;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputPress* GetDefaultObj();

	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputRelease
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRelease;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputRelease* GetDefaultObj();

	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9B[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitMovementModeChange* GetDefaultObj();

	void OnMovementModeChange(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode);
};

// 0x10 (0x90 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitOverlap
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnOverlap;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitOverlap* GetDefaultObj();

	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitTargetData
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            ValidData;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Cancelled;                                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> TargetClass;                                       // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C31[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitTargetData* GetDefaultObj();

	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct GameplayAbilities_GameplayAbilityTargetDataHandle& Data, const struct GameplayTags_GameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(struct GameplayAbilities_GameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(struct GameplayAbilities_GameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitVelocityChange
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnVelocityChage;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                    CachedMovementComponent;                           // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C49[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilityTask_WaitVelocityChange* GetDefaultObj();

	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct CoreUObject_Vector& Direction, float MinimumMagnitude);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemBlueprintLibrary
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemBlueprintLibrary* GetDefaultObj();

	bool TargetDataHasOrigin(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasHitResult(struct GameplayAbilities_GameplayAbilityTargetDataHandle& HitResult, int32 Index);
	bool TargetDataHasEndPoint(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasActor(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct GameplayAbilities_GameplayEffectSpecHandle SetStackCountToMax(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle);
	struct GameplayAbilities_GameplayEffectSpecHandle SetStackCount(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, int32 StackCount);
	struct GameplayAbilities_GameplayEffectSpecHandle SetDuration(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct GameplayTags_GameplayTag& EventTag, const struct GameplayAbilities_GameplayEventData& Payload);
	bool RemoveLooseGameplayTags(class AActor* Actor, struct GameplayTags_GameplayTagContainer& GameplayTags, bool bShouldReplicate);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct GameplayAbilities_GameplayAttribute& AttributeA, const struct GameplayAbilities_GameplayAttribute& AttributeB);
	bool NotEqual_GameplayAbilitySpecHandle(struct GameplayAbilities_GameplayAbilitySpecHandle& A, struct GameplayAbilities_GameplayAbilitySpecHandle& B);
	bool NotEqual_ActiveGameplayEffectHandle(struct GameplayAbilities_ActiveGameplayEffectHandle& A, struct GameplayAbilities_ActiveGameplayEffectHandle& B);
	struct GameplayAbilities_GameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct GameplayAbilities_GameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext, const struct GameplayTags_GameplayTag& MatchedTagName, const struct GameplayTags_GameplayTag& OriginalTag, const struct GameplayTags_GameplayTagContainer& AggregatedSourceTags, const struct GameplayTags_GameplayTagContainer& AggregatedTargetTags, const struct CoreUObject_Vector& Location, const struct CoreUObject_Vector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
	struct GameplayAbilities_GameplayTargetDataFilterHandle MakeFilterHandle(const struct GameplayAbilities_GameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsValid(const struct GameplayAbilities_GameplayAttribute& Attribute);
	bool IsInstigatorLocallyControlledPlayer(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool HasHitResult(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	struct CoreUObject_Transform GetTargetDataOrigin(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct CoreUObject_Transform GetTargetDataEndPointTransform(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct CoreUObject_Vector GetTargetDataEndPoint(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct CoreUObject_Vector GetOrigin(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	float GetModifiedAttributeMagnitude(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayAbilities_GameplayAttribute& Attribute);
	struct CoreUObject_Transform GetInstigatorTransform(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	struct Engine_HitResult GetHitResultFromTargetData(struct GameplayAbilities_GameplayAbilityTargetDataHandle& HitResult, int32 Index);
	struct Engine_HitResult GetHitResult(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	class UGameplayEffectUIData* GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType);
	class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct GameplayAbilities_GameplayCueParameters& Parameters, struct CoreUObject_Vector* Location, struct CoreUObject_Vector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct GameplayAbilities_GameplayCueParameters& Parameters, struct CoreUObject_Vector* Direction);
	class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, struct GameplayAbilities_GameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct GameplayAbilities_GameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct GameplayAbilities_GameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class AActor* Actor, const struct GameplayAbilities_GameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class AActor* Actor, const struct GameplayAbilities_GameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct GameplayAbilities_GameplayEffectContextHandle GetEffectContext(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle);
	class FString GetDebugStringFromGameplayAttribute(struct GameplayAbilities_GameplayAttribute& Attribute);
	int32 GetDataCountFromTargetData(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData);
	TArray<struct GameplayAbilities_GameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> GetAllActorsFromTargetData(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> GetActorsFromTargetData(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index);
	int32 GetActorCount(const struct GameplayAbilities_GameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct GameplayAbilities_GameplayCueParameters& Parameters, int32 Index);
	float GetActiveGameplayEffectTotalDuration(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackLimitCount(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackCount(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	class FString GetActiveGameplayEffectDebugString(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, const struct GameplayAbilities_GameplayCueParameters& Parameters);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle FilterTargetData(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetDataHandle, const struct GameplayAbilities_GameplayTargetDataFilterHandle& ActorFilterClass);
	float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct GameplayAbilities_GameplayAttribute& Attribute, struct GameplayTags_GameplayTagContainer& SourceTags, struct GameplayTags_GameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct GameplayAbilities_GameplayAttribute& Attribute, struct GameplayTags_GameplayTagContainer& SourceTags, struct GameplayTags_GameplayTagContainer& TargetTags, bool* bSuccess);
	bool EqualEqual_GameplayAttributeGameplayAttribute(const struct GameplayAbilities_GameplayAttribute& AttributeA, const struct GameplayAbilities_GameplayAttribute& AttributeB);
	bool EqualEqual_GameplayAbilitySpecHandle(struct GameplayAbilities_GameplayAbilitySpecHandle& A, struct GameplayAbilities_GameplayAbilitySpecHandle& B);
	bool EqualEqual_ActiveGameplayEffectHandle(struct GameplayAbilities_ActiveGameplayEffectHandle& A, struct GameplayAbilities_ActiveGameplayEffectHandle& B);
	void EffectContextSetOrigin(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext, const struct CoreUObject_Vector& Origin);
	bool EffectContextIsValid(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	bool EffectContextIsInstigatorLocallyControlled(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	struct CoreUObject_Vector EffectContextGetOrigin(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	struct Engine_HitResult EffectContextGetHitResult(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext, const struct Engine_HitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayTagRequirements& SourceTagReqs, struct GameplayAbilities_GameplayTagRequirements& TargetTagReqs);
	struct GameplayAbilities_GameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct GameplayAbilities_GameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	void BreakGameplayCueParameters(struct GameplayAbilities_GameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct GameplayAbilities_GameplayEffectContextHandle* EffectContext, struct GameplayTags_GameplayTag* MatchedTagName, struct GameplayTags_GameplayTag* OriginalTag, struct GameplayTags_GameplayTagContainer* AggregatedSourceTags, struct GameplayTags_GameplayTagContainer* AggregatedTargetTags, struct CoreUObject_Vector* Location, struct CoreUObject_Vector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);
	struct GameplayAbilities_GameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayTags_GameplayTag& DataTag, float Magnitude);
	struct GameplayAbilities_GameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetHandle, struct GameplayAbilities_GameplayAbilityTargetDataHandle& HandleToAdd);
	bool AddLooseGameplayTags(class AActor* Actor, struct GameplayTags_GameplayTagContainer& GameplayTags, bool bShouldReplicate);
	struct GameplayAbilities_GameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayAbilities_GameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct GameplayAbilities_GameplayEffectSpecHandle AddLinkedGameplayEffect(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
	struct GameplayAbilities_GameplayEffectSpecHandle AddGrantedTags(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayTags_GameplayTagContainer& NewGameplayTags);
	struct GameplayAbilities_GameplayEffectSpecHandle AddGrantedTag(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayTags_GameplayTag& NewGameplayTag);
	struct GameplayAbilities_GameplayEffectSpecHandle AddAssetTags(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayTags_GameplayTagContainer& NewGameplayTags);
	struct GameplayAbilities_GameplayEffectSpecHandle AddAssetTag(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayTags_GameplayTag& NewGameplayTag);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct GameplayAbilities_GameplayAbilityTargetingLocationInfo& SourceLocation, struct GameplayAbilities_GameplayAbilityTargetingLocationInfo& TargetLocation);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct Engine_HitResult& HitResult);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
	struct GameplayAbilities_GameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};

// 0x1138 (0x1250 - 0x118)
// Class GameplayAbilities.AbilitySystemComponent
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	uint8                                        Pad_1B80[0x10];                                    // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_AttributeDefaults> DefaultStartingData;                               // 0x128(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B82[0x1B0];                                   // Fixing Size After Last Property  
	float                                        OutgoingDuration;                                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B85[0x20];                                    // Fixing Size After Last Property  
	TArray<class FString>                        ClientDebugStrings;                                // 0x318(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class FString>                        ServerDebugStrings;                                // 0x328(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B86[0x60];                                    // Fixing Size After Last Property  
	bool                                         UserAbilityActivationInhibited;                    // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplicationProxyEnabled;                           // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGrantAbility;                             // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGameplayCues;                             // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8D[0x4];                                     // Fixing Size After Last Property  
	TArray<class AGameplayAbilityTargetActor*>   SpawnedTargetActors;                               // 0x3A0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8E[0x28];                                    // Fixing Size After Last Property  
	class AActor*                                OwnerActor;                                        // 0x3D8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                AvatarActor;                                       // 0x3E0(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B8F[0x10];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecContainer ActivatableAbilities;                              // 0x3F8(0x120)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B92[0x30];                                    // Fixing Size After Last Property  
	TArray<class UGameplayAbility*>              AllReplicatedInstancedAbilities;                   // 0x548(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B94[0x230];                                   // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityRepAnimMontage RepAnimMontageInfo;                                // 0x788(0x38)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCachedIsNetSimulated;                             // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingMontageRep;                                // 0x7C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B98[0x6];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityLocalAnimMontage LocalAnimMontageInfo;                              // 0x7C8(0x30)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B99[0xA0];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_ActiveGameplayEffectsContainer ActiveGameplayEffects;                             // 0x898(0x2F8)(Net, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_ActiveGameplayCueContainer ActiveGameplayCues;                                // 0xB90(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_ActiveGameplayCueContainer MinimalReplicationGameplayCues;                    // 0xCB8(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B9D[0x128];                                   // Fixing Size After Last Property  
	TArray<uint8>                                BlockedAbilityBindings;                            // 0xF08(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B9F[0x128];                                   // Fixing Size After Last Property  
	struct GameplayAbilities_MinimalReplicationTagCountMap MinimalReplicationTags;                            // 0x1040(0x60)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAttributeSet*>                 SpawnedAttributes;                                 // 0x10A0(0x10)(ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BA1[0x10];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_MinimalReplicationTagCountMap ReplicatedLooseTags;                               // 0x10C0(0x60)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BA3[0x8];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_ReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;                        // 0x1128(0x118)(Net, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA5[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilitySystemComponent* GetDefaultObj();

	void UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle, TMap<struct GameplayTags_GameplayTag, float>& NewSetByCallerValues);
	void UpdateActiveGameplayEffectSetByCallerMagnitude(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle, const struct GameplayTags_GameplayTag& SetByCallerTag, float NewValue);
	bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(struct GameplayTags_GameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct GameplayAbilities_GameplayEffectQuery& Query, int32 NewLevel);
	void SetActiveGameplayEffectLevel(const struct GameplayAbilities_ActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct GameplayAbilities_PredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle, const struct GameplayAbilities_PredictionKey& AbilityOriginalPredictionKey, const struct GameplayAbilities_PredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle, const struct GameplayAbilities_PredictionKey& AbilityOriginalPredictionKey, struct GameplayAbilities_GameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct GameplayTags_GameplayTag& ApplicationTag, const struct GameplayAbilities_PredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle, const struct GameplayAbilities_PredictionKey& AbilityOriginalPredictionKey, const struct GameplayAbilities_PredictionKey& CurrentPredictionKey, const struct Engine_Vector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle, const struct GameplayAbilities_PredictionKey& AbilityOriginalPredictionKey, const struct GameplayAbilities_PredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToEnd, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo, const struct GameplayAbilities_PredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName);
	void ServerCancelAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToCancel, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct GameplayAbilities_ServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	int32 RemoveActiveEffectsWithTags(const struct GameplayTags_GameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithSourceTags(const struct GameplayTags_GameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithGrantedTags(const struct GameplayTags_GameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithAppliedTags(const struct GameplayTags_GameplayTagContainer& Tags);
	void ReleaseInputID(int32 InputID);
	void PressInputID(int32 InputID);
	void OnSpawnedAttributesEndPlayed(class AActor* InActor, enum class EEndPlayReason EndPlayReason);
	void OnRep_SpawnedAttributes(TArray<class UAttributeSet*>& PreviousSpawnedAttributes);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void OnOwnerActorDestroyed(class AActor* InActor);
	void OnAvatarActorDestroyed(class AActor* InActor);
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct GameplayTags_GameplayTagContainer& GameplayCueTags, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct GameplayTags_GameplayTagContainer& GameplayCueTags, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct GameplayTags_GameplayTagContainer& GameplayCueTags, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct GameplayAbilities_GameplayEffectSpecForRPC& Spec, const struct GameplayAbilities_PredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct GameplayAbilities_GameplayEffectSpecForRPC& Spec, const struct GameplayAbilities_PredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct GameplayTags_GameplayTag& GameplayCueTag, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	struct GameplayAbilities_GameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct GameplayAbilities_GameplayEffectContextHandle& Context);
	struct GameplayAbilities_GameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable);
	struct GameplayAbilities_GameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
	struct GameplayAbilities_GameplayAbilitySpecHandle K2_GiveAbility(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
	bool IsGameplayCueActive(const struct GameplayTags_GameplayTag& GameplayCueTag);
	void InputConfirm();
	void InputCancel();
	bool GetUserAbilityActivationInhibited();
	int32 GetGameplayTagCount(const struct GameplayTags_GameplayTag& GameplayTag);
	float GetGameplayEffectMagnitude(const struct GameplayAbilities_ActiveGameplayEffectHandle& Handle, const struct GameplayAbilities_GameplayAttribute& Attribute);
	int32 GetGameplayEffectCount_IfLoaded(TSoftClassPtr<class UGameplayEffect> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	float GetGameplayAttributeValue(const struct GameplayAbilities_GameplayAttribute& Attribute, bool* bFound);
	class UAttributeSet* GetAttributeSet(TSubclassOf<class UAttributeSet> AttributeSetClass);
	void GetAllAttributes(TArray<struct GameplayAbilities_GameplayAttribute>* OutAttributes);
	void GetAllAbilities(TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>* OutAbilityHandles);
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(const struct GameplayTags_GameplayTagContainer& Tags);
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> GetActiveEffects(struct GameplayAbilities_GameplayEffectQuery& Query);
	void FindAllAbilitiesWithTags(TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>* OutAbilityHandles, const struct GameplayTags_GameplayTagContainer& Tags, bool bExactMatch);
	void FindAllAbilitiesWithInputID(TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>* OutAbilityHandles, int32 InputID);
	void FindAllAbilitiesMatchingQuery(TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>* OutAbilityHandles, const struct GameplayTags_GameplayTagQuery& Query);
	void ClientTryActivateAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityHandle, const struct GameplayAbilities_PredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags);
	void ClientEndAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToEnd, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToCancel, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, const struct GameplayAbilities_PredictionKey& PredictionKey, const struct GameplayAbilities_GameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, const struct GameplayAbilities_PredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct GameplayAbilities_GameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey);
	void ClearAllAbilitiesWithInputID(int32 InputID);
	void ClearAllAbilities();
	void ClearAbility(struct GameplayAbilities_GameplayAbilitySpecHandle& Handle);
	struct GameplayAbilities_ActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct GameplayAbilities_GameplayEffectContextHandle& Context);
	struct GameplayAbilities_ActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct GameplayAbilities_GameplayEffectContextHandle& EffectContext);
	struct GameplayAbilities_ActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
	struct GameplayAbilities_ActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int32 InputID);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension
class UAbilitySystemDebugHUDExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_1BE8[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_Tags* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_1BF5[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_Attributes* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_1BF9[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_BlockedAbilityTags* GetDefaultObj();

};

// 0x280 (0x2A8 - 0x28)
// Class GameplayAbilities.AbilitySystemGlobals
class UAbilitySystemGlobals : public UObject
{
public:
	struct CoreUObject_SoftClassPath             AbilitySystemGlobalsClassName;                     // 0x28(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C01[0x28];                                    // Fixing Size After Last Property  
	bool                                         bUseDebugTargetFromHud;                            // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C06[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              ActivateFailIsDeadTag;                             // 0x74(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailIsDeadName;                            // 0x7C(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ActivateFailCooldownTag;                           // 0x84(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCooldownName;                          // 0x8C(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ActivateFailCostTag;                               // 0x94(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCostName;                              // 0x9C(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ActivateFailTagsBlockedTag;                        // 0xA4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsBlockedName;                       // 0xAC(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ActivateFailTagsMissingTag;                        // 0xB4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsMissingName;                       // 0xBC(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ActivateFailNetworkingTag;                         // 0xC4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailNetworkingName;                        // 0xCC(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimalReplicationTagCountBits;                    // 0xD4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_NetSerializeScriptStructCache TargetDataStructCache;                             // 0xD8(0x10)(NativeAccessSpecifierPublic)
	struct GameplayAbilities_NetSerializeScriptStructCache EffectContextStructCache;                          // 0xE8(0x10)(NativeAccessSpecifierPublic)
	bool                                         bAllowGameplayModEvaluationChannels;               // 0xF8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayModEvaluationChannel     DefaultGameplayModEvaluationChannel;               // 0xF9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C17[0x2];                                     // Fixing Size After Last Property  
	class FName                                  GameplayModEvaluationChannelAliases[0xA];          // 0xFC(0x50)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C1A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_SoftObjectPath            GlobalCurveTableName;                              // 0x150(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           GlobalCurveTable;                                  // 0x170(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            GlobalAttributeMetaDataTableName;                  // 0x178(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            GlobalAttributeMetaDataTable;                      // 0x198(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            GlobalAttributeSetDefaultsTableName;               // 0x1A0(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct CoreUObject_SoftObjectPath>    GlobalAttributeSetDefaultsTableNames;              // 0x1C0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<class UCurveTable*>                   GlobalAttributeDefaultsTables;                     // 0x1D0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            GlobalGameplayCueManagerClass;                     // 0x1E0(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            GlobalGameplayCueManagerName;                      // 0x200(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        GameplayCueNotifyPaths;                            // 0x220(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            GameplayTagResponseTableName;                      // 0x230(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTagReponseTable*              GameplayTagResponseTable;                          // 0x250(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C2A[0x1];                                     // Fixing Size After Last Property  
	bool                                         PredictTargetGameplayEffects;                      // 0x259(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ReplicateActivationOwnedTags;                      // 0x25A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C2B[0x5];                                     // Fixing Size After Last Property  
	class UGameplayCueManager*                   GlobalGameplayCueManager;                          // 0x260(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C2C[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAbilitySystemGlobals* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemInterface
class IAbilitySystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
class IAbilitySystemReplicationProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemReplicationProxyInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayAbilities.AttributeSet
class UAttributeSet : public UObject
{
public:
	uint8                                        Pad_1C41[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAttributeSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GameplayAbilities.AbilitySystemTestAttributeSet
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                        MaxHealth;                                         // 0x30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMana;                                           // 0x3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpellDamage;                                       // 0x44(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicalDamage;                                    // 0x48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritChance;                                        // 0x4C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritMultiplier;                                    // 0x50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReduction;                              // 0x54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeChance;                                       // 0x58(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSteal;                                         // 0x5C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x60(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute1;                                // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute2;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoStackAttribute;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilitySystemTestAttributeSet* GetDefaultObj();

};

// 0x20 (0x368 - 0x348)
// Class GameplayAbilities.AbilitySystemTestPawn
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	uint8                                        Pad_1C58[0x18];                                    // Fixing Size After Last Property  
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AAbilitySystemTestPawn* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.AnimNotify_GameplayCue
class UAnimNotify_GameplayCue : public UAnimNotify
{
public:
	struct GameplayAbilities_GameplayCueTag      GameplayCue;                                       // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_GameplayCue* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AnimNotify_GameplayCueState
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{
public:
	struct GameplayAbilities_GameplayCueTag      GameplayCue;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_GameplayCueState* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class GameplayAbilities.GameplayAbilityBlueprint
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbilityBlueprint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueFunctionLibrary
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueFunctionLibrary* GetDefaultObj();

	void RemoveGameplayCueOnActor(class AActor* Target, const struct GameplayTags_GameplayTag& GameplayCueTag, struct GameplayAbilities_GameplayCueParameters& Parameters);
	struct GameplayAbilities_GameplayCueParameters MakeGameplayCueParametersFromHitResult(struct Engine_HitResult& HitResult);
	void ExecuteGameplayCueOnActor(class AActor* Target, const struct GameplayTags_GameplayTag& GameplayCueTag, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void AddGameplayCueOnActor(class AActor* Target, const struct GameplayTags_GameplayTag& GameplayCueTag, struct GameplayAbilities_GameplayCueParameters& Parameters);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueInterface
class IGameplayCueInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayCueInterface* GetDefaultObj();

	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct GameplayAbilities_GameplayCueParameters& Parameters);
};

// 0x290 (0x2C0 - 0x30)
// Class GameplayAbilities.GameplayCueManager
class UGameplayCueManager : public UDataAsset
{
public:
	uint8                                        Pad_1D15[0x18];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;                   // 0x48(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueObjectLibrary EditorGameplayCueObjectLibrary;                    // 0x98(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D19[0x178];                                   // Fixing Size After Last Property  
	TArray<TSubclassOf<class UObject>>           LoadedGameplayCueNotifyClasses;                    // 0x260(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;                // 0x270(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct GameplayAbilities_GameplayCuePendingExecute> PendingExecuteCues;                                // 0x280(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        GameplayCueSendContextCount;                       // 0x290(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D25[0x4];                                     // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_PreallocationInfo> PreallocationInfoList_Internal;                    // 0x298(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D2B[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayCueManager* GetDefaultObj();

};

// 0x70 (0x308 - 0x298)
// Class GameplayAbilities.GameplayCueNotify_Actor
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                         bAutoDestroyOnRemove;                              // 0x298(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE2[0x3];                                     // Fixing Size After Last Property  
	float                                        AutoDestroyDelay;                                  // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfTimelineIsStillRunning;                      // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfLatentActionIsStillRunning;                  // 0x2A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE8[0x2];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x2A4(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x2AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttachToOwner;                                // 0x2B4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x2B5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerInstigator;                      // 0x2B6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerSourceObject;                    // 0x2B7(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleOnActiveEvents;                      // 0x2B8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleWhileActiveEvents;                   // 0x2B9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEE[0x2];                                     // Fixing Size After Last Property  
	int32                                        NumPreallocatedInstances;                          // 0x2BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEF[0x48];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayCueNotify_Actor* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayCueNotify_Static
class UGameplayCueNotify_Static : public UObject
{
public:
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x28(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA7[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Static* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct GameplayAbilities_GameplayCueParameters& Parameters);
};

// 0x310 (0x350 - 0x40)
// Class GameplayAbilities.GameplayCueNotify_Burst
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition DefaultSpawnCondition;                             // 0x40(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo DefaultPlacementInfo;                              // 0x78(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_BurstEffects BurstEffects;                                      // 0xB8(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Burst* GetDefaultObj();

	void OnBurst(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x368 (0x670 - 0x308)
// Class GameplayAbilities.GameplayCueNotify_BurstLatent
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition DefaultSpawnCondition;                             // 0x308(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo DefaultPlacementInfo;                              // 0x340(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_BurstEffects BurstEffects;                                      // 0x380(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_SpawnResult BurstSpawnResults;                                 // 0x618(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameplayCueNotify_BurstLatent* GetDefaultObj();

	void OnBurst(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x10 (0x50 - 0x40)
// Class GameplayAbilities.GameplayCueNotify_HitImpact
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                            Sound;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_HitImpact* GetDefaultObj();

};

// 0xB98 (0xEA0 - 0x308)
// Class GameplayAbilities.GameplayCueNotify_Looping
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition DefaultSpawnCondition;                             // 0x308(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo DefaultPlacementInfo;                              // 0x340(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_BurstEffects ApplicationEffects;                                // 0x380(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_SpawnResult ApplicationSpawnResults;                           // 0x618(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_LoopingEffects LoopingEffects;                                    // 0x670(0x1F0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_SpawnResult LoopingSpawnResults;                               // 0x860(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_BurstEffects RecurringEffects;                                  // 0x8B8(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_SpawnResult RecurringSpawnResults;                             // 0xB50(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_BurstEffects RemovalEffects;                                    // 0xBA8(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_SpawnResult RemovalSpawnResults;                               // 0xE40(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2015[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGameplayCueNotify_Looping* GetDefaultObj();

	void OnRemoval(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
	void OnRecurring(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
	void OnLoopingStart(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
	void OnApplication(class AActor* Target, struct GameplayAbilities_GameplayCueParameters& Parameters, struct GameplayAbilities_GameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x60 (0x90 - 0x30)
// Class GameplayAbilities.GameplayCueSet
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct GameplayAbilities_GameplayCueNotifyData> GameplayCueData;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2044[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayCueSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator
class UGameplayCueTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator_Test
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator_Test* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayEffectCalculation
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct GameplayAbilities_GameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffectCalculation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectCustomApplicationRequirement* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct GameplayAbilities_GameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayEffectExecutionCalculation
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bRequiresPassedInTags;                             // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E4[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayEffectExecutionCalculation* GetDefaultObj();

	void Execute(struct GameplayAbilities_GameplayEffectCustomExecutionParameters& ExecutionParams, struct GameplayAbilities_GameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayModMagnitudeCalculation
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bAllowNonNetAuthorityDependencyRegistration;       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2201[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayModMagnitudeCalculation* GetDefaultObj();

	float K2_GetCapturedAttributeMagnitude(struct GameplayAbilities_GameplayEffectSpec& EffectSpec, const struct GameplayAbilities_GameplayAttribute& Attribute, struct GameplayTags_GameplayTagContainer& SourceTags, struct GameplayTags_GameplayTagContainer& TargetTags);
	struct GameplayTags_GameplayTagContainer GetTargetSpecTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	struct GameplayTags_GameplayTagContainer GetTargetAggregatedTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	struct GameplayTags_GameplayTagContainer GetTargetActorTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	struct GameplayTags_GameplayTagContainer GetSourceSpecTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	struct GameplayTags_GameplayTagContainer GetSourceAggregatedTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	struct GameplayTags_GameplayTagContainer GetSourceActorTags(struct GameplayAbilities_GameplayEffectSpec& EffectSpec);
	float GetSetByCallerMagnitudeByTag(struct GameplayAbilities_GameplayEffectSpec& EffectSpec, struct GameplayTags_GameplayTag& Tag);
	float GetSetByCallerMagnitudeByName(struct GameplayAbilities_GameplayEffectSpec& EffectSpec, class FName& MagnitudeName);
	float CalculateBaseMagnitude(struct GameplayAbilities_GameplayEffectSpec& Spec);
};

// 0x200 (0x230 - 0x30)
// Class GameplayAbilities.GameplayTagReponseTable
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct GameplayAbilities_GameplayTagResponseTableEntry> Entries;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_223E[0x1F0];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayTagReponseTable* GetDefaultObj();

	void TagResponseEvent(const struct GameplayTags_GameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx);
};

// 0xF8 (0x200 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
public:
	struct GameplayAbilities_MovieSceneGameplayCueChannel Channel;                                           // 0x108(0xF8)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTriggerSection* GetDefaultObj();

};

// 0x90 (0x198 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueSection
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
public:
	struct GameplayAbilities_MovieSceneGameplayCueKey Cue;                                               // 0x108(0x90)(Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.MovieSceneGameplayCueTrack
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTrack* GetDefaultObj();

	void SetSequencerTrackHandler(FDelegateProperty_ InGameplayCueTrackHandler);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.TickableAttributeSetInterface
class ITickableAttributeSetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITickableAttributeSetInterface* GetDefaultObj();

};

}


